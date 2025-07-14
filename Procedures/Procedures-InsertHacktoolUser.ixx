module;

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
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& AccountID, const std::string& CharID, const std::string& HackToolName)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, HackToolName);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
