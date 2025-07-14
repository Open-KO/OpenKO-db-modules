module;

#include <memory>
#include <string>

export module Procedures:LoadWebItemmall;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class LoadWebItemmall
	export class LoadWebItemmall : public StoredProcedure
	{
	public:
		LoadWebItemmall(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL LOAD_WEB_ITEMMALL(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strCharID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
	
			return StoredProcedure::execute();
		}
	};
}
