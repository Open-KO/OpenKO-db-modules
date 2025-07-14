module;

#include <cstdint>
#include <string>

export module Procedures:RentalItemDestory;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class RentalItemDestory
	export class RentalItemDestory : public StoredProcedure
	{
	public:
		RentalItemDestory(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL RENTAL_ITEM_DESTORY(?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& AccountID, const std::string& CharID, const int32_t& nItemNumber, const int32_t& nRentalIndex, const int16_t& nDurability, int16_t& nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, nItemNumber);
			_stmt.bind(3, nRentalIndex);
			_stmt.bind(4, nDurability);
			_stmt.bind(5, nRet, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
