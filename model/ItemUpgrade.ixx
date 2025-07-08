module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:ItemUpgrade;

namespace model
{
	export class ItemUpgradeBinder;
	
	/// \brief [ITEM_UPGRADE] Item upgrade configuration
	/// \class ItemUpgrade
	/// \xrefitem gamedb "Game Database" "Game Database" ITEM_UPGRADE
	export class ItemUpgrade 
	{
	/// \publicsection
	public:
		using BinderType = ItemUpgradeBinder;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = 0;

		/// \brief Column [nNPCNum]: NPC Identifier (K_NPC.sSid)
		///
		/// \property NpcNumber
		int16_t NpcNumber = 0;

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [strNote]: Note
		///
		/// \property Note
		std::optional<std::string> Note;

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
		/// \property RequireItem1
		int32_t RequireItem1 = 0;

		/// \brief Column [nReqItem2]: Required item 2 identifier
		///
		/// \property RequireItem2
		int32_t RequireItem2 = 0;

		/// \brief Column [nReqItem3]: Required item 3 identifier
		///
		/// \property RequireItem3
		int32_t RequireItem3 = 0;

		/// \brief Column [nReqItem4]: Required item 4 identifier
		///
		/// \property RequireItem4
		int32_t RequireItem4 = 0;

		/// \brief Column [nReqItem5]: Required item 5 identifier
		///
		/// \property RequireItem5
		int32_t RequireItem5 = 0;

		/// \brief Column [nReqItem6]: Required item 6 identifier
		///
		/// \property RequireItem6
		int32_t RequireItem6 = 0;

		/// \brief Column [nReqItem7]: Required item 7 identifier
		///
		/// \property RequireItem7
		int32_t RequireItem7 = 0;

		/// \brief Column [nReqItem8]: Required item 8 identifier
		///
		/// \property RequireItem8
		int32_t RequireItem8 = 0;

		/// \brief Column [nReqNoah]: Coins required to upgrade
		///
		/// \property RequireCoin
		int32_t RequireCoin = 0;

		/// \brief Column [bRateType]: Rate type
		///
		/// \property RateType
		int16_t RateType = 0;

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
				"nIndex", "nNPCNum", "strName", "strNote", "nOriginType", "nOriginItem", "nReqItem1", "nReqItem2", "nReqItem3", "nReqItem4", "nReqItem5", "nReqItem6", "nReqItem7", "nReqItem8", "nReqNoah", "bRateType", "nGenRate", "nGiveItem"
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
