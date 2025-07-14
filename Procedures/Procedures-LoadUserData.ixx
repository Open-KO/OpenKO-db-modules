module;

#include <cstdint>
#include <string>

export module Procedures:LoadUserData;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class LoadUserData
	export class LoadUserData : public StoredProcedure
	{
	public:
		LoadUserData(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL LOAD_USER_DATA(?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& AccountID, const std::string& id, int16_t& nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, id);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
