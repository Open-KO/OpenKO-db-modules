module;

#include <memory>
#include <string>

export module Procedures:InsertProgramCheckUser;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class InsertProgramCheckUser
	export class InsertProgramCheckUser : public StoredProcedure
	{
	public:
		InsertProgramCheckUser(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL INSERT_PROGRAM_CHECK_USER(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strAccountID, const char* strCharID, const char* HackToolName)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
			_stmt.bind(1, strCharID);
			_stmt.bind(2, HackToolName);
	
			return StoredProcedure::execute();
		}
	};
}
