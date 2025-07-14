module;

#include <cstdint>
#include <string>

export module Procedure:AccountLogin;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class AccountLogin
	export class AccountLogin : public StoredProcedure
	{
	public:
		AccountLogin(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL ACCOUNT_LOGIN(?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& AccountID, const std::string& Password, int16_t& nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, Password);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
