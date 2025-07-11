module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:ItemGroup;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::ItemGroup
	export class ItemGroup
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"group", &ItemGroup::BindGroup},
				{"name", &ItemGroup::BindName},
				{"item1", &ItemGroup::BindItem1},
				{"item2", &ItemGroup::BindItem2},
				{"item3", &ItemGroup::BindItem3},
				{"item4", &ItemGroup::BindItem4},
				{"item5", &ItemGroup::BindItem5},
				{"item6", &ItemGroup::BindItem6},
				{"item7", &ItemGroup::BindItem7},
				{"item8", &ItemGroup::BindItem8},
				{"item9", &ItemGroup::BindItem9},
				{"item10", &ItemGroup::BindItem10},
				{"item11", &ItemGroup::BindItem11},
				{"item12", &ItemGroup::BindItem12},
				{"item13", &ItemGroup::BindItem13},
				{"item14", &ItemGroup::BindItem14},
				{"item15", &ItemGroup::BindItem15},
				{"item16", &ItemGroup::BindItem16},
				{"item17", &ItemGroup::BindItem17},
				{"item18", &ItemGroup::BindItem18},
				{"item19", &ItemGroup::BindItem19},
				{"item20", &ItemGroup::BindItem20},
				{"item21", &ItemGroup::BindItem21},
				{"item22", &ItemGroup::BindItem22},
				{"item23", &ItemGroup::BindItem23},
				{"item24", &ItemGroup::BindItem24},
				{"item25", &ItemGroup::BindItem25},
				{"item26", &ItemGroup::BindItem26},
				{"item27", &ItemGroup::BindItem27},
				{"item28", &ItemGroup::BindItem28},
				{"item29", &ItemGroup::BindItem29},
				{"item30", &ItemGroup::BindItem30}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Group);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Item1
		static void BindItem1(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item1);
		}

		/// \brief Binds a result's column to Item2
		static void BindItem2(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item2);
		}

		/// \brief Binds a result's column to Item3
		static void BindItem3(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item3);
		}

		/// \brief Binds a result's column to Item4
		static void BindItem4(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item4);
		}

		/// \brief Binds a result's column to Item5
		static void BindItem5(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item5);
		}

		/// \brief Binds a result's column to Item6
		static void BindItem6(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item6);
		}

		/// \brief Binds a result's column to Item7
		static void BindItem7(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item7);
		}

		/// \brief Binds a result's column to Item8
		static void BindItem8(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item8);
		}

		/// \brief Binds a result's column to Item9
		static void BindItem9(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item9);
		}

		/// \brief Binds a result's column to Item10
		static void BindItem10(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item10);
		}

		/// \brief Binds a result's column to Item11
		static void BindItem11(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item11);
		}

		/// \brief Binds a result's column to Item12
		static void BindItem12(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item12);
		}

		/// \brief Binds a result's column to Item13
		static void BindItem13(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item13);
		}

		/// \brief Binds a result's column to Item14
		static void BindItem14(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item14);
		}

		/// \brief Binds a result's column to Item15
		static void BindItem15(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item15);
		}

		/// \brief Binds a result's column to Item16
		static void BindItem16(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item16);
		}

		/// \brief Binds a result's column to Item17
		static void BindItem17(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item17);
		}

		/// \brief Binds a result's column to Item18
		static void BindItem18(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item18);
		}

		/// \brief Binds a result's column to Item19
		static void BindItem19(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item19);
		}

		/// \brief Binds a result's column to Item20
		static void BindItem20(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item20);
		}

		/// \brief Binds a result's column to Item21
		static void BindItem21(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item21);
		}

		/// \brief Binds a result's column to Item22
		static void BindItem22(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item22);
		}

		/// \brief Binds a result's column to Item23
		static void BindItem23(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item23);
		}

		/// \brief Binds a result's column to Item24
		static void BindItem24(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item24);
		}

		/// \brief Binds a result's column to Item25
		static void BindItem25(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item25);
		}

		/// \brief Binds a result's column to Item26
		static void BindItem26(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item26);
		}

		/// \brief Binds a result's column to Item27
		static void BindItem27(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item27);
		}

		/// \brief Binds a result's column to Item28
		static void BindItem28(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item28);
		}

		/// \brief Binds a result's column to Item29
		static void BindItem29(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item29);
		}

		/// \brief Binds a result's column to Item30
		static void BindItem30(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item30);
		}

	};
}
