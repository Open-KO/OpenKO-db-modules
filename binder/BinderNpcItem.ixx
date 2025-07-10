module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:NpcItem;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderNpcItem
	export class NpcItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::NpcItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &NpcItem::BindNpcId},
				{"iItem01", &NpcItem::BindItemId1},
				{"sPersent01", &NpcItem::BindDropChance1},
				{"iItem02", &NpcItem::BindItemId2},
				{"sPersent02", &NpcItem::BindDropChance2},
				{"iItem03", &NpcItem::BindItemId3},
				{"sPersent03", &NpcItem::BindDropChance3},
				{"iItem04", &NpcItem::BindItemId4},
				{"sPersent04", &NpcItem::BindDropChance4},
				{"iItem05", &NpcItem::BindItemId5},
				{"sPersent05", &NpcItem::BindDropChance5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.DropChance1 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemId2 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.DropChance2 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemId3 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.DropChance3 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemId4 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.DropChance4 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemId5 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.DropChance5 = result.get<int16_t>(colIndex);
		}

	};
}
