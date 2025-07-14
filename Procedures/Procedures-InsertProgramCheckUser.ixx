module;

#include <string>

export module Procedure:InsertProgramCheckUser;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class InsertProgramCheckUser
	export class InsertProgramCheckUser : public StoredProcedure
	{
	public:
		InsertProgramCheckUser(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL INSERT_PROGRAM_CHECK_USER(?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& strAccountID, const std::string& strCharID, const std::string& HackToolName)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
			_stmt.bind(1, strCharID);
			_stmt.bind(2, HackToolName);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
