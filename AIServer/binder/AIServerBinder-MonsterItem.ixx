module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module AIServerBinder:MonsterItem;

import AIServerModel;
import BinderUtil;

namespace aiserver_binder
{
	/// \brief generated nanodbc column binder for aiserver_model::MonsterItem
	export class MonsterItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterItem::BindMonsterId},
				{"iItem01", &MonsterItem::BindItemId1},
				{"sPersent01", &MonsterItem::BindDropChance1},
				{"iItem02", &MonsterItem::BindItemId2},
				{"sPersent02", &MonsterItem::BindDropChance2},
				{"iItem03", &MonsterItem::BindItemId3},
				{"sPersent03", &MonsterItem::BindDropChance3},
				{"iItem04", &MonsterItem::BindItemId4},
				{"sPersent04", &MonsterItem::BindDropChance4},
				{"iItem05", &MonsterItem::BindItemId5},
				{"sPersent05", &MonsterItem::BindDropChance5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance1);
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId2);
		}

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance2);
		}

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId3);
		}

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance3);
		}

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId4);
		}

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance4);
		}

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId5);
		}

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance5);
		}

	};
}
