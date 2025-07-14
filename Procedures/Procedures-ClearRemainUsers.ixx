module;

#include <memory>
#include <string>

export module Procedures:ClearRemainUsers;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class ClearRemainUsers
	export class ClearRemainUsers : public StoredProcedure
	{
	public:
		ClearRemainUsers(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL CLEAR_REMAIN_USERS(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strServerIP)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strServerIP);
	
			return StoredProcedure::execute();
		}
	};
}
