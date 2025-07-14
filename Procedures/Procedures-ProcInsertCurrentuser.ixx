module;

#include <cstdint>
#include <string>

export module Procedure:ProcInsertCurrentuser;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class ProcInsertCurrentuser
	export class ProcInsertCurrentuser : public StoredProcedure
	{
	public:
		ProcInsertCurrentuser(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL PROC_INSERT_CURRENTUSER(?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& AccountID, const std::string& CharID, const int16_t& nServerNo, const std::string& strServerIP, const std::string& ClientIP, int16_t& nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, nServerNo);
			_stmt.bind(3, strServerIP);
			_stmt.bind(4, ClientIP);
			_stmt.bind(5, nRet, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
