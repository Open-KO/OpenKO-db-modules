module;

#include <memory>

export module Procedures:ResetLoyaltyMonthly;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class ResetLoyaltyMonthly
	export class ResetLoyaltyMonthly : public StoredProcedure
	{
	public:
		ResetLoyaltyMonthly(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL RESET_LOYALTY_MONTHLY()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};
}
