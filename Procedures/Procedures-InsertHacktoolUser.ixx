module;

#include <memory>
#include <string>

export module Procedures:InsertHacktoolUser;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class InsertHacktoolUser
	export class InsertHacktoolUser : public StoredProcedure
	{
	public:
		InsertHacktoolUser(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL INSERT_HACKTOOL_USER(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const char* CharID, const char* HackToolName)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, HackToolName);
	
			return StoredProcedure::execute();
		}
	};
}
