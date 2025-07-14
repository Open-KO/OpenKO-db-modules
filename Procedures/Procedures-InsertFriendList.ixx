module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:InsertFriendList;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class InsertFriendList
	export class InsertFriendList : public StoredProcedure
	{
	public:
		InsertFriendList(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL INSERT_FRIEND_LIST(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strUserID, const char* strFriend, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strUserID);
			_stmt.bind(1, strFriend);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};
}
