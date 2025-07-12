module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module AIServerModel:MakeItem;

import ModelUtil;

namespace aiserver_binder
{
	export class MakeItem;
}

namespace aiserver_model
{
	/// \brief [MAKE_ITEM] Make item
	/// \class MakeItem
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_ITEM Make item
	export class MakeItem 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MakeItem;

		/// \brief Column [sIndex]: Index
		///
		/// \property Index
		int16_t Index = 0;

		/// \brief Column [iItemCode]: Item Code
		///
		/// \property ItemCode
		int32_t ItemCode = 0;

		/// \brief Column [byItemLevel]: Item level
		///
		/// \property ItemLevel
		uint8_t ItemLevel = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAKE_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIndex", "iItemCode", "byItemLevel"
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
				"sIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return Index;
		}

	};
}
