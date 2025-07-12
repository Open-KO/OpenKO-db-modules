module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:AccountChar;

import ModelUtil;

namespace full_binder
{
	export class AccountChar;
}

namespace full_model
{
	/// \brief [ACCOUNT_CHAR] Represents the relationship between accounts and characters
	/// \class AccountChar
	/// \xrefitem gamedb "Game Database" "Game Database" ACCOUNT_CHAR Represents the relationship between accounts and characters
	export class AccountChar 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::AccountChar;

		/// \brief Column [strAccountID]: Account Identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [bNation]: Nation Identifier
		///
		/// \property Nation
		uint8_t Nation = 0;

		/// \brief Column [bCharNum]: Number of created characters
		///
		/// \property CharNum
		uint8_t CharNum = 0;

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
		static const modelUtil::DbType DbType() const
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"strAccountID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::string& MapKey() const
		{
			return AccountId;
		}

	};
}
