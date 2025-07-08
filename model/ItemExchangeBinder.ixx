module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:ItemExchangeBinder;

import :ItemExchange;

namespace model
{
	/// \brief generated column binder for the ItemExchange model, using nanodbc
	export class ItemExchangeBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ItemExchange& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &ItemExchangeBinder::BindIndex},
				{"nNpcNum", &ItemExchangeBinder::BindNpcNumber},
				{"strNpcName", &ItemExchangeBinder::BindNpcName},
				{"strNote", &ItemExchangeBinder::BindNote},
				{"bRandomFlag", &ItemExchangeBinder::BindRandomFlag},
				{"nOriginItemNum1", &ItemExchangeBinder::BindOriginItemNumber1},
				{"nOriginItemCount1", &ItemExchangeBinder::BindOriginItemCount1},
				{"nOriginItemNum2", &ItemExchangeBinder::BindOriginItemNumber2},
				{"nOriginItemCount2", &ItemExchangeBinder::BindOriginItemCount2},
				{"nOriginItemNum3", &ItemExchangeBinder::BindOriginItemNumber3},
				{"nOriginItemCount3", &ItemExchangeBinder::BindOriginItemCount3},
				{"nOriginItemNum4", &ItemExchangeBinder::BindOriginItemNumber4},
				{"nOriginItemCount4", &ItemExchangeBinder::BindOriginItemCount4},
				{"nOriginItemNum5", &ItemExchangeBinder::BindOriginItemNumber5},
				{"nOriginItemCount5", &ItemExchangeBinder::BindOriginItemCount5},
				{"nExchangeItemNum1", &ItemExchangeBinder::BindExchangeItemNumber1},
				{"nExchangeItemCount1", &ItemExchangeBinder::BindExchangeItemCount1},
				{"nExchangeItemNum2", &ItemExchangeBinder::BindExchangeItemNumber2},
				{"nExchangeItemCount2", &ItemExchangeBinder::BindExchangeItemCount2},
				{"nExchangeItemNum3", &ItemExchangeBinder::BindExchangeItemNumber3},
				{"nExchangeItemCount3", &ItemExchangeBinder::BindExchangeItemCount3},
				{"nExchangeItemNum4", &ItemExchangeBinder::BindExchangeItemNumber4},
				{"nExchangeItemCount4", &ItemExchangeBinder::BindExchangeItemCount4},
				{"nExchangeItemNum5", &ItemExchangeBinder::BindExchangeItemNumber5},
				{"nExchangeItemCount5", &ItemExchangeBinder::BindExchangeItemCount5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcNumber);
		}

		/// \brief Binds a result's column to NpcName
		static void BindNpcName(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.NpcName);
		}

		/// \brief Binds a result's column to Note
		static void BindNote(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Note);
		}

		/// \brief Binds a result's column to RandomFlag
		static void BindRandomFlag(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RandomFlag);
		}

		/// \brief Binds a result's column to OriginItemNumber1
		static void BindOriginItemNumber1(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber1);
		}

		/// \brief Binds a result's column to OriginItemCount1
		static void BindOriginItemCount1(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount1);
		}

		/// \brief Binds a result's column to OriginItemNumber2
		static void BindOriginItemNumber2(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber2);
		}

		/// \brief Binds a result's column to OriginItemCount2
		static void BindOriginItemCount2(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount2);
		}

		/// \brief Binds a result's column to OriginItemNumber3
		static void BindOriginItemNumber3(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber3);
		}

		/// \brief Binds a result's column to OriginItemCount3
		static void BindOriginItemCount3(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount3);
		}

		/// \brief Binds a result's column to OriginItemNumber4
		static void BindOriginItemNumber4(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber4);
		}

		/// \brief Binds a result's column to OriginItemCount4
		static void BindOriginItemCount4(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount4);
		}

		/// \brief Binds a result's column to OriginItemNumber5
		static void BindOriginItemNumber5(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber5);
		}

		/// \brief Binds a result's column to OriginItemCount5
		static void BindOriginItemCount5(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount5);
		}

		/// \brief Binds a result's column to ExchangeItemNumber1
		static void BindExchangeItemNumber1(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber1);
		}

		/// \brief Binds a result's column to ExchangeItemCount1
		static void BindExchangeItemCount1(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount1);
		}

		/// \brief Binds a result's column to ExchangeItemNumber2
		static void BindExchangeItemNumber2(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber2);
		}

		/// \brief Binds a result's column to ExchangeItemCount2
		static void BindExchangeItemCount2(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount2);
		}

		/// \brief Binds a result's column to ExchangeItemNumber3
		static void BindExchangeItemNumber3(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber3);
		}

		/// \brief Binds a result's column to ExchangeItemCount3
		static void BindExchangeItemCount3(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount3);
		}

		/// \brief Binds a result's column to ExchangeItemNumber4
		static void BindExchangeItemNumber4(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber4);
		}

		/// \brief Binds a result's column to ExchangeItemCount4
		static void BindExchangeItemCount4(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount4);
		}

		/// \brief Binds a result's column to ExchangeItemNumber5
		static void BindExchangeItemNumber5(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber5);
		}

		/// \brief Binds a result's column to ExchangeItemCount5
		static void BindExchangeItemCount5(ItemExchange& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount5);
		}

	};
}
