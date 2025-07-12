module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:ItemUpgrade;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::ItemUpgrade
	export class ItemUpgrade
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &ItemUpgrade::BindIndex},
				{"nNPCNum", &ItemUpgrade::BindNpcNumber},
				{"strName", &ItemUpgrade::BindName},
				{"strNote", &ItemUpgrade::BindNote},
				{"nOriginType", &ItemUpgrade::BindOriginType},
				{"nOriginItem", &ItemUpgrade::BindOriginItem},
				{"nReqItem1", &ItemUpgrade::BindRequiredItem1},
				{"nReqItem2", &ItemUpgrade::BindRequiredItem2},
				{"nReqItem3", &ItemUpgrade::BindRequiredItem3},
				{"nReqItem4", &ItemUpgrade::BindRequiredItem4},
				{"nReqItem5", &ItemUpgrade::BindRequiredItem5},
				{"nReqItem6", &ItemUpgrade::BindRequiredItem6},
				{"nReqItem7", &ItemUpgrade::BindRequiredItem7},
				{"nReqItem8", &ItemUpgrade::BindRequiredItem8},
				{"nReqNoah", &ItemUpgrade::BindRequiredCoins},
				{"bRateType", &ItemUpgrade::BindRateType},
				{"nGenRate", &ItemUpgrade::BindGenRate},
				{"nGiveItem", &ItemUpgrade::BindGiveItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Name.reset();
			}
			else
			{
				m.Name = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Note
		static void BindNote(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to OriginType
		static void BindOriginType(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginType);
		}

		/// \brief Binds a result's column to OriginItem
		static void BindOriginItem(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItem);
		}

		/// \brief Binds a result's column to RequiredItem1
		static void BindRequiredItem1(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem1);
		}

		/// \brief Binds a result's column to RequiredItem2
		static void BindRequiredItem2(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem2);
		}

		/// \brief Binds a result's column to RequiredItem3
		static void BindRequiredItem3(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem3);
		}

		/// \brief Binds a result's column to RequiredItem4
		static void BindRequiredItem4(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem4);
		}

		/// \brief Binds a result's column to RequiredItem5
		static void BindRequiredItem5(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem5);
		}

		/// \brief Binds a result's column to RequiredItem6
		static void BindRequiredItem6(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem6);
		}

		/// \brief Binds a result's column to RequiredItem7
		static void BindRequiredItem7(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem7);
		}

		/// \brief Binds a result's column to RequiredItem8
		static void BindRequiredItem8(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem8);
		}

		/// \brief Binds a result's column to RequiredCoins
		static void BindRequiredCoins(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredCoins);
		}

		/// \brief Binds a result's column to RateType
		static void BindRateType(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			m.RateType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to GenRate
		static void BindGenRate(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GenRate);
		}

		/// \brief Binds a result's column to GiveItem
		static void BindGiveItem(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GiveItem);
		}

	};
}
