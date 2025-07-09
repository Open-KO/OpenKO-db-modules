module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module Model:CurrentUser;

namespace binder
{
	export class CurrentUser;
}

namespace model
{
	/// \brief [CURRENTUSER] Keeps track of users currently connected to the server
	/// \class CurrentUser
	/// \xrefitem gamedb "Game Database" "Game Database" CURRENTUSER
	export class CurrentUser 
	{
	/// \publicsection
	public:
		using BinderType = binder::CurrentUser;

		/// \brief Column [nServerNo]: Server Index
		///
		/// \property ServerNumber
		int32_t ServerNumber = 0;

		/// \brief Column [strServerIP]: Server IP Address
		///
		/// \property ServerIP
		std::string ServerIP;

		/// \brief Column [strAccountID]: User Account Identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: User Character Name
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [strClientIP]: User IP Address
		///
		/// \property ClientIP
		std::string ClientIP;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "CURRENTUSER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nServerNo", "strServerIP", "strAccountID", "strCharID", "strClientIP"
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
