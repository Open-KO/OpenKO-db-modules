module;

#include <cstdint>
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
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& AccountID, const int16_t& Days)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, &_returnValue, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, Days);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
