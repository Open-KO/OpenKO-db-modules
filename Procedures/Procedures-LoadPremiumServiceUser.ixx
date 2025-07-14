module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:LoadPremiumServiceUser;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class LoadPremiumServiceUser
	export class LoadPremiumServiceUser : public StoredProcedure
	{
	public:
		LoadPremiumServiceUser(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL LOAD_PREMIUM_SERVICE_USER(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, int32_t* type, int32_t* days)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, type, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(2, days, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};
}
