module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:NpcItemBinder;

import :NpcItem;

namespace model
{
	/// \brief generated column binder for the NpcItem model, using nanodbc
	export class NpcItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(NpcItem& m, const nanodbc::result& result, short colIndex);

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
		static void BindNpcId(NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.DropChance1 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemId2 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.DropChance2 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemId3 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.DropChance3 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemId4 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.DropChance4 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemId5 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			m.DropChance5 = result.get<int16_t>(colIndex);
		}

	};
}
