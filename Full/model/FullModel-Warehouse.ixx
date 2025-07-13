module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:Warehouse;

import ModelUtil;

namespace full_binder
{
	export class Warehouse;
}

namespace full_model
{
	/// \brief [WAREHOUSE] The warehouse system is referred to as the Inn in-game.  It is account-level storage for a user
	/// \class Warehouse
	/// \xrefitem gamedb "Game Database" "Game Database" WAREHOUSE The warehouse system is referred to as the Inn in-game.  It is account-level storage for a user
	export class Warehouse 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Warehouse;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [nMoney]: Money stored in the warehouse
		///
		/// \property Money
		int32_t Money = {};

		/// \brief Column [dwTime]: DwTime TODO
		///
		/// \property DwTime
		int32_t DwTime = {};

		/// \brief Column [WarehouseData]: Data on items stored in the warehouse
		///
		/// \property ItemData
		std::optional<std::string> ItemData;

		/// \brief Column [strSerial]: Serial TODO
		///
		/// \property Serial
		std::optional<std::string> Serial;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "WAREHOUSE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "nMoney", "dwTime", "WarehouseData", "strSerial"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				"WarehouseData", "strSerial"
			};
			return blobColumns;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
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
