module;

#include <cstdint>
#include <memory>
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
			_stmt.prepare("{CALL NATION_SELECT(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, const char* AccountID, const uint8_t* Nation)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, Nation);
	
			return StoredProcedure::execute();
		}
	};
}
