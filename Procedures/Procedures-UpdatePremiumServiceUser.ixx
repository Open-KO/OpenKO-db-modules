module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:UpdatePremiumServiceUser;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class UpdatePremiumServiceUser
	export class UpdatePremiumServiceUser : public StoredProcedure
	{
	public:
		UpdatePremiumServiceUser(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_PREMIUM_SERVICE_USER(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int* returnValue, const char* AccountID, const int16_t* Days)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, returnValue, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, Days);
	
			return StoredProcedure::execute();
		}
	};
}
