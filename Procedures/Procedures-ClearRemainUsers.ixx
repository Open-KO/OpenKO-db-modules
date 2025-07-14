module;

#include <string>

export module Procedure:ClearRemainUsers;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class ClearRemainUsers
	export class ClearRemainUsers : public StoredProcedure
	{
	public:
		ClearRemainUsers(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL CLEAR_REMAIN_USERS(?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& strServerIP)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strServerIP);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
