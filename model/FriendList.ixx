module;

#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:FriendList;

namespace model
{
	class FriendListBinder;
	
	/// \brief [FRIEND_LIST] User friend list
	/// \class FriendList
	/// \xrefitem gamedb "Game Database" "Game Database" FRIEND_LIST
	export class FriendList 
	{
	/// \publicsection
	public:
		using BinderType = FriendListBinder;

		/// \brief Column [strUserID]: User Identifier
		///
		/// \property UserId
		std::string UserId;

		/// \brief Column [strFriend1]: Friend 1
		///
		/// \property Friend1
		std::optional<std::string> Friend1;

		/// \brief Column [strFriend2]: Friend 2
		///
		/// \property Friend2
		std::optional<std::string> Friend2;

		/// \brief Column [strFriend3]: Friend 3
		///
		/// \property Friend3
		std::optional<std::string> Friend3;

		/// \brief Column [strFriend4]: Friend 4
		///
		/// \property Friend4
		std::optional<std::string> Friend4;

		/// \brief Column [strFriend5]: Friend 5
		///
		/// \property Friend5
		std::optional<std::string> Friend5;

		/// \brief Column [strFriend6]: Friend 6
		///
		/// \property Friend6
		std::optional<std::string> Friend6;

		/// \brief Column [strFriend7]: Friend 7
		///
		/// \property Friend7
		std::optional<std::string> Friend7;

		/// \brief Column [strFriend8]: Friend 8
		///
		/// \property Friend8
		std::optional<std::string> Friend8;

		/// \brief Column [strFriend9]: Friend 9
		///
		/// \property Friend9
		std::optional<std::string> Friend9;

		/// \brief Column [strFriend10]: Friend 10
		///
		/// \property Friend10
		std::optional<std::string> Friend10;

		/// \brief Column [strFriend11]: Friend 11
		///
		/// \property Friend11
		std::optional<std::string> Friend11;

		/// \brief Column [strFriend12]: Friend 12
		///
		/// \property Friend12
		std::optional<std::string> Friend12;

		/// \brief Column [strFriend13]: Friend 13
		///
		/// \property Friend13
		std::optional<std::string> Friend13;

		/// \brief Column [strFriend14]: Friend 14
		///
		/// \property Friend14
		std::optional<std::string> Friend14;

		/// \brief Column [strFriend15]: Friend 15
		///
		/// \property Friend15
		std::optional<std::string> Friend15;

		/// \brief Column [strFriend16]: Friend 16
		///
		/// \property Friend16
		std::optional<std::string> Friend16;

		/// \brief Column [strFriend17]: Friend 17
		///
		/// \property Friend17
		std::optional<std::string> Friend17;

		/// \brief Column [strFriend18]: Friend 18
		///
		/// \property Friend18
		std::optional<std::string> Friend18;

		/// \brief Column [strFriend19]: Friend 19
		///
		/// \property Friend19
		std::optional<std::string> Friend19;

		/// \brief Column [strFriend20]: Friend 20
		///
		/// \property Friend20
		std::optional<std::string> Friend20;

		/// \brief Column [strFriend21]: Friend 21
		///
		/// \property Friend21
		std::optional<std::string> Friend21;

		/// \brief Column [strFriend22]: Friend 22
		///
		/// \property Friend22
		std::optional<std::string> Friend22;

		/// \brief Column [strFriend23]: Friend 23
		///
		/// \property Friend23
		std::optional<std::string> Friend23;

		/// \brief Column [strFriend24]: Friend 24
		///
		/// \property Friend24
		std::optional<std::string> Friend24;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "FRIEND_LIST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strUserID", "strFriend1", "strFriend2", "strFriend3", "strFriend4", "strFriend5", "strFriend6", "strFriend7", "strFriend8", "strFriend9", "strFriend10", "strFriend11", "strFriend12", "strFriend13", "strFriend14", "strFriend15", "strFriend16", "strFriend17", "strFriend18", "strFriend19", "strFriend20", "strFriend21", "strFriend22", "strFriend23", "strFriend24"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
