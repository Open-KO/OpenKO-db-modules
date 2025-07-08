module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MonsterItemBinder;

import :MonsterItem;

namespace model
{
	/// \brief generated column binder for the MonsterItem model, using nanodbc
	export class MonsterItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MonsterItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterItemBinder::BindMonsterId},
				{"iItem01", &MonsterItemBinder::BindItemId1},
				{"sPersent01", &MonsterItemBinder::BindDropChance1},
				{"iItem02", &MonsterItemBinder::BindItemId2},
				{"sPersent02", &MonsterItemBinder::BindDropChance2},
				{"iItem03", &MonsterItemBinder::BindItemId3},
				{"sPersent03", &MonsterItemBinder::BindDropChance3},
				{"iItem04", &MonsterItemBinder::BindItemId4},
				{"sPersent04", &MonsterItemBinder::BindDropChance4},
				{"iItem05", &MonsterItemBinder::BindItemId5},
				{"sPersent05", &MonsterItemBinder::BindDropChance5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(MonsterItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(MonsterItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(MonsterItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance1);
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(MonsterItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId2);
		}

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(MonsterItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance2);
		}

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(MonsterItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId3);
		}

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(MonsterItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance3);
		}

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(MonsterItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId4);
		}

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(MonsterItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance4);
		}

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(MonsterItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId5);
		}

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(MonsterItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance5);
		}

	};
}
