module;

#include <cstdint>
#include <string>

export module Procedure:DeleteFriendList;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class DeleteFriendList
	export class DeleteFriendList : public StoredProcedure
	{
	public:
		DeleteFriendList(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL DELETE_FRIEND_LIST(?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& strUserID, const std::string& strFriend, int16_t& nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strUserID);
			_stmt.bind(1, strFriend);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
