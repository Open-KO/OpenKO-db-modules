module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:ItemExchange;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::ItemExchange
	export class ItemExchange
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &ItemExchange::BindIndex},
				{"nNpcNum", &ItemExchange::BindNpcNumber},
				{"strNpcName", &ItemExchange::BindNpcName},
				{"strNote", &ItemExchange::BindNote},
				{"bRandomFlag", &ItemExchange::BindRandomFlag},
				{"nOriginItemNum1", &ItemExchange::BindOriginItemNumber1},
				{"nOriginItemCount1", &ItemExchange::BindOriginItemCount1},
				{"nOriginItemNum2", &ItemExchange::BindOriginItemNumber2},
				{"nOriginItemCount2", &ItemExchange::BindOriginItemCount2},
				{"nOriginItemNum3", &ItemExchange::BindOriginItemNumber3},
				{"nOriginItemCount3", &ItemExchange::BindOriginItemCount3},
				{"nOriginItemNum4", &ItemExchange::BindOriginItemNumber4},
				{"nOriginItemCount4", &ItemExchange::BindOriginItemCount4},
				{"nOriginItemNum5", &ItemExchange::BindOriginItemNumber5},
				{"nOriginItemCount5", &ItemExchange::BindOriginItemCount5},
				{"nExchangeItemNum1", &ItemExchange::BindExchangeItemNumber1},
				{"nExchangeItemCount1", &ItemExchange::BindExchangeItemCount1},
				{"nExchangeItemNum2", &ItemExchange::BindExchangeItemNumber2},
				{"nExchangeItemCount2", &ItemExchange::BindExchangeItemCount2},
				{"nExchangeItemNum3", &ItemExchange::BindExchangeItemNumber3},
				{"nExchangeItemCount3", &ItemExchange::BindExchangeItemCount3},
				{"nExchangeItemNum4", &ItemExchange::BindExchangeItemNumber4},
				{"nExchangeItemCount4", &ItemExchange::BindExchangeItemCount4},
				{"nExchangeItemNum5", &ItemExchange::BindExchangeItemNumber5},
				{"nExchangeItemCount5", &ItemExchange::BindExchangeItemCount5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcNumber);
		}

		/// \brief Binds a result's column to NpcName
		static void BindNpcName(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.NpcName.reset();
			}
			else
			{
				m.NpcName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Note
		static void BindNote(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Note.reset();
			}
			else
			{
				m.Note = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to RandomFlag
		static void BindRandomFlag(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			m.RandomFlag = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to OriginItemNumber1
		static void BindOriginItemNumber1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber1);
		}

		/// \brief Binds a result's column to OriginItemCount1
		static void BindOriginItemCount1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount1);
		}

		/// \brief Binds a result's column to OriginItemNumber2
		static void BindOriginItemNumber2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber2);
		}

		/// \brief Binds a result's column to OriginItemCount2
		static void BindOriginItemCount2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount2);
		}

		/// \brief Binds a result's column to OriginItemNumber3
		static void BindOriginItemNumber3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber3);
		}

		/// \brief Binds a result's column to OriginItemCount3
		static void BindOriginItemCount3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount3);
		}

		/// \brief Binds a result's column to OriginItemNumber4
		static void BindOriginItemNumber4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber4);
		}

		/// \brief Binds a result's column to OriginItemCount4
		static void BindOriginItemCount4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount4);
		}

		/// \brief Binds a result's column to OriginItemNumber5
		static void BindOriginItemNumber5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber5);
		}

		/// \brief Binds a result's column to OriginItemCount5
		static void BindOriginItemCount5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount5);
		}

		/// \brief Binds a result's column to ExchangeItemNumber1
		static void BindExchangeItemNumber1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber1);
		}

		/// \brief Binds a result's column to ExchangeItemCount1
		static void BindExchangeItemCount1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount1);
		}

		/// \brief Binds a result's column to ExchangeItemNumber2
		static void BindExchangeItemNumber2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber2);
		}

		/// \brief Binds a result's column to ExchangeItemCount2
		static void BindExchangeItemCount2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount2);
		}

		/// \brief Binds a result's column to ExchangeItemNumber3
		static void BindExchangeItemNumber3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber3);
		}

		/// \brief Binds a result's column to ExchangeItemCount3
		static void BindExchangeItemCount3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount3);
		}

		/// \brief Binds a result's column to ExchangeItemNumber4
		static void BindExchangeItemNumber4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber4);
		}

		/// \brief Binds a result's column to ExchangeItemCount4
		static void BindExchangeItemCount4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount4);
		}

		/// \brief Binds a result's column to ExchangeItemNumber5
		static void BindExchangeItemNumber5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber5);
		}

		/// \brief Binds a result's column to ExchangeItemCount5
		static void BindExchangeItemCount5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount5);
		}

	};
}
