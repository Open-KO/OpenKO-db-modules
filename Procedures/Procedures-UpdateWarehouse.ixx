module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:UpdateWarehouse;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class UpdateWarehouse
	export class UpdateWarehouse : public StoredProcedure
	{
	public:
		UpdateWarehouse(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL UPDATE_WAREHOUSE(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* accountid, const int32_t* Money, const int32_t* dwTime, const char* strItem, const char* strSerial)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, accountid);
			_stmt.bind(1, Money);
			_stmt.bind(2, dwTime);
			_stmt.bind(3, strItem);
			_stmt.bind(4, strSerial);
	
			return StoredProcedure::execute();
		}
	};
}
