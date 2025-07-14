module;

#include <cstdint>
#include <string>

export module Procedures:NationSelect;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class NationSelect
	export class NationSelect : public StoredProcedure
	{
	public:
		NationSelect(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL NATION_SELECT(?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(int16_t& nRet, const std::string& AccountID, const uint8_t& Nation)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, Nation);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
