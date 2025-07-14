module;

#include <cstdint>

export module Procedure:RentalItemDurabilityUpdate;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class RentalItemDurabilityUpdate
	export class RentalItemDurabilityUpdate : public StoredProcedure
	{
	public:
		RentalItemDurabilityUpdate(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL RENTAL_ITEM_DURABILITY_UPDATE(?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const int32_t& nRentalIndex, const int32_t& nDurability)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRentalIndex);
			_stmt.bind(1, nDurability);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
