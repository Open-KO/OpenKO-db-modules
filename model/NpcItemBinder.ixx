module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:NpcItemBinder;

import FullModel:NpcItem;

namespace model
{
	/// \brief generated column binder for the NpcItem model, using nanodbc
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
				{"sIndex", &NpcItemBinder::BindNpcId},
				{"iItem01", &NpcItemBinder::BindItemId1},
				{"sPersent01", &NpcItemBinder::BindDropChance1},
				{"iItem02", &NpcItemBinder::BindItemId2},
				{"sPersent02", &NpcItemBinder::BindDropChance2},
				{"iItem03", &NpcItemBinder::BindItemId3},
				{"sPersent03", &NpcItemBinder::BindDropChance3},
				{"iItem04", &NpcItemBinder::BindItemId4},
				{"sPersent04", &NpcItemBinder::BindDropChance4},
				{"iItem05", &NpcItemBinder::BindItemId5},
				{"sPersent05", &NpcItemBinder::BindDropChance5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(model::NpcItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(model::NpcItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(model::NpcItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance1);
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(model::NpcItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId2);
		}

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(model::NpcItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance2);
		}

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(model::NpcItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId3);
		}

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(model::NpcItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance3);
		}

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(model::NpcItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId4);
		}

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(model::NpcItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance4);
		}

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(model::NpcItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId5);
		}

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(model::NpcItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance5);
		}

	};
}
