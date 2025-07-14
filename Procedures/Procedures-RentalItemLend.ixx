module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:RentalItemLend;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class RentalItemLend
	export class RentalItemLend : public StoredProcedure
	{
	public:
		RentalItemLend(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL RENTAL_ITEM_LEND(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const char* CharID, const int32_t* nRentalIndex, const int32_t* nItemNumber, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, nRentalIndex);
			_stmt.bind(3, nItemNumber);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};
}
