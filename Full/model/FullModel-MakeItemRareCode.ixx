module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:MakeItemRareCode;

import ModelUtil;

namespace full_binder
{
	export class MakeItemRareCode;
}

namespace full_model
{
	/// \brief [MAKE_ITEM_LARECODE] Make item rarity codes
	/// \class MakeItemRareCode
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_ITEM_LARECODE Make item rarity codes
	export class MakeItemRareCode 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MakeItemRareCode;

		/// \brief Column [byLevelGrade]: Level grade
		///
		/// \property LevelGrade
		uint8_t LevelGrade = 0;

		/// \brief Column [sUpgradeItem]: Upgrade item
		///
		/// \property UpgradeItem
		int16_t UpgradeItem = 0;

		/// \brief Column [sLareItem]: Rare item
		///
		/// \property RareItem
		int16_t RareItem = 0;

		/// \brief Column [sMagicItem]: Magic item
		///
		/// \property MagicItem
		int16_t MagicItem = 0;

		/// \brief Column [sGereralItem]: General item
		///
		/// \property GeneralItem
		int16_t GeneralItem = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAKE_ITEM_LARECODE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"byLevelGrade", "sUpgradeItem", "sLareItem", "sMagicItem", "sGereralItem"
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
				"byLevelGrade"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const
		{
			return LevelGrade;
		}

	};
}
