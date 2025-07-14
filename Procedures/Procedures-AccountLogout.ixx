module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:AccountLogout;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class AccountLogout
	export class AccountLogout : public StoredProcedure
	{
	public:
		AccountLogout(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL ACCOUNT_LOGOUT(?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const int32_t* LogoutCode, int16_t* nRet, int16_t* nRet2)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, LogoutCode);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(3, nRet2, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};
}
