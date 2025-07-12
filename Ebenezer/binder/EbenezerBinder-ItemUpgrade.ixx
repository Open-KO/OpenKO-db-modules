module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:ItemUpgrade;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::ItemUpgrade
	export class ItemUpgrade
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &ItemUpgrade::BindIndex},
				{"nNPCNum", &ItemUpgrade::BindNpcNumber},
				{"nOriginType", &ItemUpgrade::BindOriginType},
				{"nOriginItem", &ItemUpgrade::BindOriginItem},
				{"nReqItem1", &ItemUpgrade::BindRequireItem1},
				{"nReqItem2", &ItemUpgrade::BindRequireItem2},
				{"nReqItem3", &ItemUpgrade::BindRequireItem3},
				{"nReqItem4", &ItemUpgrade::BindRequireItem4},
				{"nReqItem5", &ItemUpgrade::BindRequireItem5},
				{"nReqItem6", &ItemUpgrade::BindRequireItem6},
				{"nReqItem7", &ItemUpgrade::BindRequireItem7},
				{"nReqItem8", &ItemUpgrade::BindRequireItem8},
				{"nReqNoah", &ItemUpgrade::BindRequireCoin},
				{"bRateType", &ItemUpgrade::BindRateType},
				{"nGenRate", &ItemUpgrade::BindGenRate},
				{"nGiveItem", &ItemUpgrade::BindGiveItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcNumber);
		}

		/// \brief Binds a result's column to OriginType
		static void BindOriginType(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginType);
		}

		/// \brief Binds a result's column to OriginItem
		static void BindOriginItem(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItem);
		}

		/// \brief Binds a result's column to RequireItem1
		static void BindRequireItem1(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem1);
		}

		/// \brief Binds a result's column to RequireItem2
		static void BindRequireItem2(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem2);
		}

		/// \brief Binds a result's column to RequireItem3
		static void BindRequireItem3(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem3);
		}

		/// \brief Binds a result's column to RequireItem4
		static void BindRequireItem4(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem4);
		}

		/// \brief Binds a result's column to RequireItem5
		static void BindRequireItem5(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem5);
		}

		/// \brief Binds a result's column to RequireItem6
		static void BindRequireItem6(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem6);
		}

		/// \brief Binds a result's column to RequireItem7
		static void BindRequireItem7(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem7);
		}

		/// \brief Binds a result's column to RequireItem8
		static void BindRequireItem8(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem8);
		}

		/// \brief Binds a result's column to RequireCoin
		static void BindRequireCoin(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireCoin);
		}

		/// \brief Binds a result's column to RateType
		static void BindRateType(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			m.RateType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to GenRate
		static void BindGenRate(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GenRate);
		}

		/// \brief Binds a result's column to GiveItem
		static void BindGiveItem(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GiveItem);
		}

	};
}
