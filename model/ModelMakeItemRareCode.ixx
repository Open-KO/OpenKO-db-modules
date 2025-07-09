module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module Model:MakeItemRareCode;

namespace binder
{
	export class MakeItemRareCode;
}

namespace model
{
	/// \brief [MAKE_ITEM_LARECODE] Make item rarity codes
	/// \class MakeItemRareCode
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_ITEM_LARECODE
	export class MakeItemRareCode 
	{
	/// \publicsection
	public:
		using BinderType = binder::MakeItemRareCode;

		/// \brief Column [byLevelGrade]: Level grade
		///
		/// \property LevelGrade
		int16_t LevelGrade = 0;

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
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
