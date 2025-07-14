module;

#include <cstdint>
#include <string>

export module Procedure:RentalItemLend;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class RentalItemLend
	export class RentalItemLend : public StoredProcedure
	{
	public:
		RentalItemLend(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL RENTAL_ITEM_LEND(?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& AccountID, const std::string& CharID, const int32_t& nRentalIndex, const int32_t& nItemNumber, int16_t& nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, nRentalIndex);
			_stmt.bind(3, nItemNumber);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
