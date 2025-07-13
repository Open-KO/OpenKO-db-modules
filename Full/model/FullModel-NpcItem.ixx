module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:NpcItem;

import ModelUtil;

namespace full_binder
{
	export class NpcItem;
}

namespace full_model
{
	/// \brief [K_NPC_ITEM] NPC loot table
	/// \class NpcItem
	/// \xrefitem gamedb "Game Database" "Game Database" K_NPC_ITEM NPC loot table
	export class NpcItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::NpcItem;

		/// \brief Column [sIndex]: NPC identifier (K_NPC.sSid)
		///
		/// \property NpcId
		int16_t NpcId = {};

		/// \brief Column [iItem01]: Item identifier 1
		///
		/// \property ItemId1
		int32_t ItemId1 = {};

		union
		{
			/// \\brief Union array grouping for columns [sPersent01] to [sPersent05]
			///
			// \\property DropChance
			std::optional<int16_t> DropChance[5];

			struct
			{
				/// \brief Column [sPersent01]: Chance for item 1 to drop
				///
				/// \property DropChance1
				std::optional<int16_t> DropChance1;

				/// \brief Column [sPersent02]: Chance for item 2 to drop
				///
				/// \property DropChance2
				std::optional<int16_t> DropChance2;

				/// \brief Column [sPersent03]: Chance for item 3 to drop
				///
				/// \property DropChance3
				std::optional<int16_t> DropChance3;

				/// \brief Column [sPersent04]: Chance for item 4 to drop
				///
				/// \property DropChance4
				std::optional<int16_t> DropChance4;

				/// \brief Column [sPersent05]: Chance for item 5 to drop
				///
				/// \property DropChance5
				std::optional<int16_t> DropChance5;
			};
		};

		/// \brief Column [iItem02]: Item identifier 2
		///
		/// \property ItemId2
		std::optional<int32_t> ItemId2;

		/// \brief Column [iItem03]: Item identifier 3
		///
		/// \property ItemId3
		std::optional<int32_t> ItemId3;

		/// \brief Column [iItem04]: Item identifier 4
		///
		/// \property ItemId4
		std::optional<int32_t> ItemId4;

		/// \brief Column [iItem05]: Item identifier 5
		///
		/// \property ItemId5
		std::optional<int32_t> ItemId5;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "K_NPC_ITEM";
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

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
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
				"sIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return NpcId;
		}

	};
}
