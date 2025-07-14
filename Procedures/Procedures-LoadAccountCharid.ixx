module;

#include <memory>
#include <string>

export module Procedures:LoadAccountCharid;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class LoadAccountCharid
	export class LoadAccountCharid : public StoredProcedure
	{
	public:
		LoadAccountCharid(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL LOAD_ACCOUNT_CHARID(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int* returnValue, const char* Accountid)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, returnValue, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, Accountid);
	
			return StoredProcedure::execute();
		}
	};
}
