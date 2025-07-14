module;

#include <cstdint>
#include <string>

export module Procedure:LoadPremiumServiceUser;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class LoadPremiumServiceUser
	export class LoadPremiumServiceUser : public StoredProcedure
	{
	public:
		LoadPremiumServiceUser(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL LOAD_PREMIUM_SERVICE_USER(?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& AccountID, int32_t& type, int32_t& days)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, type, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(2, days, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
