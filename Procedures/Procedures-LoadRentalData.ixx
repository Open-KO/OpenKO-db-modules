module;

#include <memory>
#include <string>

export module Procedures:LoadRentalData;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class LoadRentalData
	export class LoadRentalData : public StoredProcedure
	{
	public:
		LoadRentalData(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL LOAD_RENTAL_DATA(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strAccountID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
	
			return StoredProcedure::execute();
		}
	};
}
