module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:MonsterItem;

import ModelUtil;

namespace full_binder
{
	export class MonsterItem;
}

namespace full_model
{
	/// \brief [K_MONSTER_ITEM] Monster loot table
	/// \class MonsterItem
	/// \xrefitem gamedb "Game Database" "Game Database" K_MONSTER_ITEM Monster loot table
	export class MonsterItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MonsterItem;

		/// \brief Column [sIndex]: Monster identifier (K_MONSTER.sSid)
		///
		/// \property MonsterId
		int16_t MonsterId = 0;

		/// \brief Column [iItem01]: Item identifier 1
		///
		/// \property ItemId1
		int32_t ItemId1 = 0;

		/// \brief Column [sPersent01]: Chance for item 1 to drop
		///
		/// \property DropChance1
		int16_t DropChance1 = 0;

		/// \brief Column [iItem02]: Item identifier 2
		///
		/// \property ItemId2
		int32_t ItemId2 = 0;

		/// \brief Column [sPersent02]: Chance for item 2 to drop
		///
		/// \property DropChance2
		int16_t DropChance2 = 0;

		/// \brief Column [iItem03]: Item identifier 3
		///
		/// \property ItemId3
		int32_t ItemId3 = 0;

		/// \brief Column [sPersent03]: Chance for item 3 to drop
		///
		/// \property DropChance3
		int16_t DropChance3 = 0;

		/// \brief Column [iItem04]: Item identifier 4
		///
		/// \property ItemId4
		int32_t ItemId4 = 0;

		/// \brief Column [sPersent04]: Chance for item 4 to drop
		///
		/// \property DropChance4
		int16_t DropChance4 = 0;

		/// \brief Column [iItem05]: Item identifier 5
		///
		/// \property ItemId5
		int32_t ItemId5 = 0;

		/// \brief Column [sPersent05]: Chance for item 5 to drop
		///
		/// \property DropChance5
		int16_t DropChance5 = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "K_MONSTER_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIndex", "iItem01", "sPersent01", "iItem02", "sPersent02", "iItem03", "sPersent03", "iItem04", "sPersent04", "iItem05", "sPersent05"
			};
			return columnNames;
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
				"sIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return MonsterId;
		}

	};
}
