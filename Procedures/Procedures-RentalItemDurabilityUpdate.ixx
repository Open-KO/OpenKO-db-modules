module;

#include <cstdint>
#include <memory>

export module Procedures:RentalItemDurabilityUpdate;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class RentalItemDurabilityUpdate
	export class RentalItemDurabilityUpdate : public StoredProcedure
	{
	public:
		RentalItemDurabilityUpdate(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL RENTAL_ITEM_DURABILITY_UPDATE(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int32_t* nRentalIndex, const int32_t* nDurability)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRentalIndex);
			_stmt.bind(1, nDurability);
	
			return StoredProcedure::execute();
		}
	};
}
