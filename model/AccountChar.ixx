module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:AccountChar;

namespace model
{
	export class AccountCharBinder;
	
	/// \brief [ACCOUNT_CHAR] Represents the relationship between accounts and characters
	/// \class AccountChar
	/// \xrefitem gamedb "Game Database" "Game Database" ACCOUNT_CHAR
	export class AccountChar 
	{
	/// \publicsection
	public:
		using BinderType = AccountCharBinder;

		/// \brief Column [strAccountID]: Account Identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [bNation]: Nation Identifier
		///
		/// \property Nation
		int16_t Nation = 0;

		/// \brief Column [bCharNum]: Number of created characters
		///
		/// \property CharNum
		int16_t CharNum = 0;

		/// \brief Column [strCharID1]: Character 1 Name
		///
		/// \property CharId1
		std::optional<std::string> CharId1;

		/// \brief Column [strCharID2]: Character 2 Name
		///
		/// \property CharId2
		std::optional<std::string> CharId2;

		/// \brief Column [strCharID3]: Character 3 Name
		///
		/// \property CharId3
		std::optional<std::string> CharId3;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ACCOUNT_CHAR";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "bNation", "bCharNum", "strCharID1", "strCharID2", "strCharID3"
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
