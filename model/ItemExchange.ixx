module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:ItemExchange;

namespace model
{
	class ItemExchangeBinder;
	
	/// \brief [ITEM_EXCHANGE] Enables players to be able to give items in exchange for an item from an NPC
	/// \class ItemExchange
	/// \xrefitem gamedb "Game Database" "Game Database" ITEM_EXCHANGE
	export class ItemExchange 
	{
	/// \publicsection
	public:
		using BinderType = ItemExchangeBinder;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = 0;

		/// \brief Column [nNpcNum]: NPC identifier (K_NPC.sSid)
		///
		/// \property NpcNumber
		int16_t NpcNumber = 0;

		/// \brief Column [strNpcName]: NPC Name
		///
		/// \property NpcName
		std::optional<std::string> NpcName;

		/// \brief Column [strNote]: Note
		///
		/// \property Note
		std::optional<std::string> Note;

		/// \brief Column [bRandomFlag]: Random Flag
		///
		/// \property RandomFlag
		uint8_t RandomFlag = 0;

		/// \brief Column [nOriginItemNum1]: Player item 1 needed for exchange
		///
		/// \property OriginItemNumber1
		int32_t OriginItemNumber1 = 0;

		/// \brief Column [nOriginItemCount1]: Number of item 1 needed for exchange
		///
		/// \property OriginItemCount1
		int16_t OriginItemCount1 = 0;

		/// \brief Column [nOriginItemNum2]: Player item 2 needed for exchange
		///
		/// \property OriginItemNumber2
		int32_t OriginItemNumber2 = 0;

		/// \brief Column [nOriginItemCount2]: Number of item 2 needed for exchange
		///
		/// \property OriginItemCount2
		int16_t OriginItemCount2 = 0;

		/// \brief Column [nOriginItemNum3]: Player item 3 needed for exchange
		///
		/// \property OriginItemNumber3
		int32_t OriginItemNumber3 = 0;

		/// \brief Column [nOriginItemCount3]: Number of item 3 needed for exchange
		///
		/// \property OriginItemCount3
		int16_t OriginItemCount3 = 0;

		/// \brief Column [nOriginItemNum4]: Player item 4 needed for exchange
		///
		/// \property OriginItemNumber4
		int32_t OriginItemNumber4 = 0;

		/// \brief Column [nOriginItemCount4]: Number of item 4 needed for exchange
		///
		/// \property OriginItemCount4
		int16_t OriginItemCount4 = 0;

		/// \brief Column [nOriginItemNum5]: Player item 5 needed for exchange
		///
		/// \property OriginItemNumber5
		int32_t OriginItemNumber5 = 0;

		/// \brief Column [nOriginItemCount5]: Number of item 5 needed for exchange
		///
		/// \property OriginItemCount5
		int16_t OriginItemCount5 = 0;

		/// \brief Column [nExchangeItemNum1]: NPC item 1 given in exchange
		///
		/// \property ExchangeItemNumber1
		int32_t ExchangeItemNumber1 = 0;

		/// \brief Column [nExchangeItemCount1]: Number of item 1 given for exchange
		///
		/// \property ExchangeItemCount1
		int16_t ExchangeItemCount1 = 0;

		/// \brief Column [nExchangeItemNum2]: NPC item 2 given in exchange
		///
		/// \property ExchangeItemNumber2
		int32_t ExchangeItemNumber2 = 0;

		/// \brief Column [nExchangeItemCount2]: Number of item 2 given for exchange
		///
		/// \property ExchangeItemCount2
		int16_t ExchangeItemCount2 = 0;

		/// \brief Column [nExchangeItemNum3]: NPC item 3 given in exchange
		///
		/// \property ExchangeItemNumber3
		int32_t ExchangeItemNumber3 = 0;

		/// \brief Column [nExchangeItemCount3]: Number of item 3 given for exchange
		///
		/// \property ExchangeItemCount3
		int16_t ExchangeItemCount3 = 0;

		/// \brief Column [nExchangeItemNum4]: NPC item 4 given in exchange
		///
		/// \property ExchangeItemNumber4
		int32_t ExchangeItemNumber4 = 0;

		/// \brief Column [nExchangeItemCount4]: Number of item 4 given for exchange
		///
		/// \property ExchangeItemCount4
		int16_t ExchangeItemCount4 = 0;

		/// \brief Column [nExchangeItemNum5]: NPC item 5 given in exchange
		///
		/// \property ExchangeItemNumber5
		int32_t ExchangeItemNumber5 = 0;

		/// \brief Column [nExchangeItemCount5]: Number of item 5 given for exchange
		///
		/// \property ExchangeItemCount5
		int16_t ExchangeItemCount5 = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ITEM_EXCHANGE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "nNpcNum", "strNpcName", "strNote", "bRandomFlag", "nOriginItemNum1", "nOriginItemCount1", "nOriginItemNum2", "nOriginItemCount2", "nOriginItemNum3", "nOriginItemCount3", "nOriginItemNum4", "nOriginItemCount4", "nOriginItemNum5", "nOriginItemCount5", "nExchangeItemNum1", "nExchangeItemCount1", "nExchangeItemNum2", "nExchangeItemCount2", "nExchangeItemNum3", "nExchangeItemCount3", "nExchangeItemNum4", "nExchangeItemCount4", "nExchangeItemNum5", "nExchangeItemCount5"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
