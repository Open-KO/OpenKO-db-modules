module;


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
			_stmt.prepare("{? = CALL RESET_LOYALTY_MONTHLY()}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute()
		{
			_stmt.reset_parameters();

	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
