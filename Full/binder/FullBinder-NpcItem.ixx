module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:NpcItem;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::NpcItem
	export class NpcItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

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
		static void BindNpcId(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DropChance1.reset();
			}
			else
			{
				m.DropChance1 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemId2.reset();
			}
			else
			{
				m.ItemId2 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DropChance2.reset();
			}
			else
			{
				m.DropChance2 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemId3.reset();
			}
			else
			{
				m.ItemId3 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DropChance3.reset();
			}
			else
			{
				m.DropChance3 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemId4.reset();
			}
			else
			{
				m.ItemId4 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DropChance4.reset();
			}
			else
			{
				m.DropChance4 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemId5.reset();
			}
			else
			{
				m.ItemId5 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DropChance5.reset();
			}
			else
			{
				m.DropChance5 = result.get<int16_t>(colIndex);
			}
		}

	};
}
