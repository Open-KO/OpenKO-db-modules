module;

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
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& strAccountID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
