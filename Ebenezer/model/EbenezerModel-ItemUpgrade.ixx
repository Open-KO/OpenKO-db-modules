module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:ItemUpgrade;

import ModelUtil;

namespace ebenezer_binder
{
	export class ItemUpgrade;
}

namespace ebenezer_model
{
	/// \brief [ITEM_UPGRADE] Item upgrade configuration
	/// \class ItemUpgrade
	/// \xrefitem gamedb "Game Database" "Game Database" ITEM_UPGRADE Item upgrade configuration
	export class ItemUpgrade 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::ItemUpgrade;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = 0;

		/// \brief Column [nNPCNum]: NPC Identifier (K_NPC.sSid)
		///
		/// \property NpcNumber
		int16_t NpcNumber = 0;

		/// \brief Column [nOriginType]: Origin Type
		///
		/// \property OriginType
		int16_t OriginType = 0;

		/// \brief Column [nOriginItem]: Origin Item
		///
		/// \property OriginItem
		int16_t OriginItem = 0;

		/// \brief Column [nReqItem1]: Required item 1 identifier
		///
		/// \property RequiredItem1
		int32_t RequiredItem1 = 0;

		/// \brief Column [nReqItem2]: Required item 2 identifier
		///
		/// \property RequiredItem2
		int32_t RequiredItem2 = 0;

		/// \brief Column [nReqItem3]: Required item 3 identifier
		///
		/// \property RequiredItem3
		int32_t RequiredItem3 = 0;

		/// \brief Column [nReqItem4]: Required item 4 identifier
		///
		/// \property RequiredItem4
		int32_t RequiredItem4 = 0;

		/// \brief Column [nReqItem5]: Required item 5 identifier
		///
		/// \property RequiredItem5
		int32_t RequiredItem5 = 0;

		/// \brief Column [nReqItem6]: Required item 6 identifier
		///
		/// \property RequiredItem6
		int32_t RequiredItem6 = 0;

		/// \brief Column [nReqItem7]: Required item 7 identifier
		///
		/// \property RequiredItem7
		int32_t RequiredItem7 = 0;

		/// \brief Column [nReqItem8]: Required item 8 identifier
		///
		/// \property RequiredItem8
		int32_t RequiredItem8 = 0;

		/// \brief Column [nReqNoah]: Coins required to upgrade
		///
		/// \property RequiredCoins
		int32_t RequiredCoins = 0;

		/// \brief Column [bRateType]: Rate type
		///
		/// \property RateType
		uint8_t RateType = 0;

		/// \brief Column [nGenRate]: Upgrade success rate
		///
		/// \property GenRate
		int16_t GenRate = 0;

		/// \brief Column [nGiveItem]: Item acquired on successful upgrade
		///
		/// \property GiveItem
		int16_t GiveItem = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ITEM_UPGRADE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "nNPCNum", "nOriginType", "nOriginItem", "nReqItem1", "nReqItem2", "nReqItem3", "nReqItem4", "nReqItem5", "nReqItem6", "nReqItem7", "nReqItem8", "nReqNoah", "bRateType", "nGenRate", "nGiveItem"
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
				"nIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return Index;
		}

	};
}
