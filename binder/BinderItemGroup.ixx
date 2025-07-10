module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:ItemGroup;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderItemGroup
	export class ItemGroupBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"group", &ItemGroupBinder::BindGroup},
				{"name", &ItemGroupBinder::BindName},
				{"item1", &ItemGroupBinder::BindItem1},
				{"item2", &ItemGroupBinder::BindItem2},
				{"item3", &ItemGroupBinder::BindItem3},
				{"item4", &ItemGroupBinder::BindItem4},
				{"item5", &ItemGroupBinder::BindItem5},
				{"item6", &ItemGroupBinder::BindItem6},
				{"item7", &ItemGroupBinder::BindItem7},
				{"item8", &ItemGroupBinder::BindItem8},
				{"item9", &ItemGroupBinder::BindItem9},
				{"item10", &ItemGroupBinder::BindItem10},
				{"item11", &ItemGroupBinder::BindItem11},
				{"item12", &ItemGroupBinder::BindItem12},
				{"item13", &ItemGroupBinder::BindItem13},
				{"item14", &ItemGroupBinder::BindItem14},
				{"item15", &ItemGroupBinder::BindItem15},
				{"item16", &ItemGroupBinder::BindItem16},
				{"item17", &ItemGroupBinder::BindItem17},
				{"item18", &ItemGroupBinder::BindItem18},
				{"item19", &ItemGroupBinder::BindItem19},
				{"item20", &ItemGroupBinder::BindItem20},
				{"item21", &ItemGroupBinder::BindItem21},
				{"item22", &ItemGroupBinder::BindItem22},
				{"item23", &ItemGroupBinder::BindItem23},
				{"item24", &ItemGroupBinder::BindItem24},
				{"item25", &ItemGroupBinder::BindItem25},
				{"item26", &ItemGroupBinder::BindItem26},
				{"item27", &ItemGroupBinder::BindItem27},
				{"item28", &ItemGroupBinder::BindItem28},
				{"item29", &ItemGroupBinder::BindItem29},
				{"item30", &ItemGroupBinder::BindItem30}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Group);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Item1
		static void BindItem1(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item1);
		}

		/// \brief Binds a result's column to Item2
		static void BindItem2(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item2);
		}

		/// \brief Binds a result's column to Item3
		static void BindItem3(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item3);
		}

		/// \brief Binds a result's column to Item4
		static void BindItem4(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item4);
		}

		/// \brief Binds a result's column to Item5
		static void BindItem5(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item5);
		}

		/// \brief Binds a result's column to Item6
		static void BindItem6(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item6);
		}

		/// \brief Binds a result's column to Item7
		static void BindItem7(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item7);
		}

		/// \brief Binds a result's column to Item8
		static void BindItem8(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item8);
		}

		/// \brief Binds a result's column to Item9
		static void BindItem9(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item9);
		}

		/// \brief Binds a result's column to Item10
		static void BindItem10(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item10);
		}

		/// \brief Binds a result's column to Item11
		static void BindItem11(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item11);
		}

		/// \brief Binds a result's column to Item12
		static void BindItem12(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item12);
		}

		/// \brief Binds a result's column to Item13
		static void BindItem13(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item13);
		}

		/// \brief Binds a result's column to Item14
		static void BindItem14(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item14);
		}

		/// \brief Binds a result's column to Item15
		static void BindItem15(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item15);
		}

		/// \brief Binds a result's column to Item16
		static void BindItem16(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item16);
		}

		/// \brief Binds a result's column to Item17
		static void BindItem17(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item17);
		}

		/// \brief Binds a result's column to Item18
		static void BindItem18(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item18);
		}

		/// \brief Binds a result's column to Item19
		static void BindItem19(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item19);
		}

		/// \brief Binds a result's column to Item20
		static void BindItem20(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item20);
		}

		/// \brief Binds a result's column to Item21
		static void BindItem21(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item21);
		}

		/// \brief Binds a result's column to Item22
		static void BindItem22(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item22);
		}

		/// \brief Binds a result's column to Item23
		static void BindItem23(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item23);
		}

		/// \brief Binds a result's column to Item24
		static void BindItem24(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item24);
		}

		/// \brief Binds a result's column to Item25
		static void BindItem25(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item25);
		}

		/// \brief Binds a result's column to Item26
		static void BindItem26(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item26);
		}

		/// \brief Binds a result's column to Item27
		static void BindItem27(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item27);
		}

		/// \brief Binds a result's column to Item28
		static void BindItem28(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item28);
		}

		/// \brief Binds a result's column to Item29
		static void BindItem29(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item29);
		}

		/// \brief Binds a result's column to Item30
		static void BindItem30(model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item30);
		}

	};
}
