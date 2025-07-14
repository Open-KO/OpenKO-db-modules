module;

#include <string>

export module Procedure:LoadWebItemmall;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class LoadWebItemmall
	export class LoadWebItemmall : public StoredProcedure
	{
	public:
		LoadWebItemmall(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL LOAD_WEB_ITEMMALL(?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& strCharID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
