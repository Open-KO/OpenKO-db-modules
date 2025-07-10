module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:ItemUpgrade;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderItemUpgrade
	export class ItemUpgradeBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &ItemUpgradeBinder::BindIndex},
				{"nNPCNum", &ItemUpgradeBinder::BindNpcNumber},
				{"strName", &ItemUpgradeBinder::BindName},
				{"strNote", &ItemUpgradeBinder::BindNote},
				{"nOriginType", &ItemUpgradeBinder::BindOriginType},
				{"nOriginItem", &ItemUpgradeBinder::BindOriginItem},
				{"nReqItem1", &ItemUpgradeBinder::BindRequireItem1},
				{"nReqItem2", &ItemUpgradeBinder::BindRequireItem2},
				{"nReqItem3", &ItemUpgradeBinder::BindRequireItem3},
				{"nReqItem4", &ItemUpgradeBinder::BindRequireItem4},
				{"nReqItem5", &ItemUpgradeBinder::BindRequireItem5},
				{"nReqItem6", &ItemUpgradeBinder::BindRequireItem6},
				{"nReqItem7", &ItemUpgradeBinder::BindRequireItem7},
				{"nReqItem8", &ItemUpgradeBinder::BindRequireItem8},
				{"nReqNoah", &ItemUpgradeBinder::BindRequireCoin},
				{"bRateType", &ItemUpgradeBinder::BindRateType},
				{"nGenRate", &ItemUpgradeBinder::BindGenRate},
				{"nGiveItem", &ItemUpgradeBinder::BindGiveItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Note
		static void BindNote(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			m.Note = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to OriginType
		static void BindOriginType(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginType);
		}

		/// \brief Binds a result's column to OriginItem
		static void BindOriginItem(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItem);
		}

		/// \brief Binds a result's column to RequireItem1
		static void BindRequireItem1(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem1);
		}

		/// \brief Binds a result's column to RequireItem2
		static void BindRequireItem2(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem2);
		}

		/// \brief Binds a result's column to RequireItem3
		static void BindRequireItem3(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem3);
		}

		/// \brief Binds a result's column to RequireItem4
		static void BindRequireItem4(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem4);
		}

		/// \brief Binds a result's column to RequireItem5
		static void BindRequireItem5(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem5);
		}

		/// \brief Binds a result's column to RequireItem6
		static void BindRequireItem6(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem6);
		}

		/// \brief Binds a result's column to RequireItem7
		static void BindRequireItem7(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem7);
		}

		/// \brief Binds a result's column to RequireItem8
		static void BindRequireItem8(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireItem8);
		}

		/// \brief Binds a result's column to RequireCoin
		static void BindRequireCoin(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequireCoin);
		}

		/// \brief Binds a result's column to RateType
		static void BindRateType(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RateType);
		}

		/// \brief Binds a result's column to GenRate
		static void BindGenRate(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GenRate);
		}

		/// \brief Binds a result's column to GiveItem
		static void BindGiveItem(model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GiveItem);
		}

	};
}
