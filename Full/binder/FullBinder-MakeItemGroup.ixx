module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MakeItemGroup;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MakeItemGroup
	export class MakeItemGroup
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iItemGroupNum", &MakeItemGroup::BindItemGroupNumber},
				{"iItem_1", &MakeItemGroup::BindItem1},
				{"iItem_2", &MakeItemGroup::BindItem2},
				{"iItem_3", &MakeItemGroup::BindItem3},
				{"iItem_4", &MakeItemGroup::BindItem4},
				{"iItem_5", &MakeItemGroup::BindItem5},
				{"iItem_6", &MakeItemGroup::BindItem6},
				{"iItem_7", &MakeItemGroup::BindItem7},
				{"iItem_8", &MakeItemGroup::BindItem8},
				{"iItem_9", &MakeItemGroup::BindItem9},
				{"iItem_10", &MakeItemGroup::BindItem10},
				{"iItem_11", &MakeItemGroup::BindItem11},
				{"iItem_12", &MakeItemGroup::BindItem12},
				{"iItem_13", &MakeItemGroup::BindItem13},
				{"iItem_14", &MakeItemGroup::BindItem14},
				{"iItem_15", &MakeItemGroup::BindItem15},
				{"iItem_16", &MakeItemGroup::BindItem16},
				{"iItem_17", &MakeItemGroup::BindItem17},
				{"iItem_18", &MakeItemGroup::BindItem18},
				{"iItem_19", &MakeItemGroup::BindItem19},
				{"iItem_20", &MakeItemGroup::BindItem20},
				{"iItem_21", &MakeItemGroup::BindItem21},
				{"iItem_22", &MakeItemGroup::BindItem22},
				{"iItem_23", &MakeItemGroup::BindItem23},
				{"iItem_24", &MakeItemGroup::BindItem24},
				{"iItem_25", &MakeItemGroup::BindItem25},
				{"iItem_26", &MakeItemGroup::BindItem26},
				{"iItem_27", &MakeItemGroup::BindItem27},
				{"iItem_28", &MakeItemGroup::BindItem28},
				{"iItem_29", &MakeItemGroup::BindItem29},
				{"iItem_30", &MakeItemGroup::BindItem30}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ItemGroupNumber
		static void BindItemGroupNumber(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemGroupNumber);
		}

		/// \brief Binds a result's column to Item1
		static void BindItem1(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item1);
		}

		/// \brief Binds a result's column to Item2
		static void BindItem2(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item2);
		}

		/// \brief Binds a result's column to Item3
		static void BindItem3(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item3);
		}

		/// \brief Binds a result's column to Item4
		static void BindItem4(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item4);
		}

		/// \brief Binds a result's column to Item5
		static void BindItem5(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item5);
		}

		/// \brief Binds a result's column to Item6
		static void BindItem6(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item6);
		}

		/// \brief Binds a result's column to Item7
		static void BindItem7(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item7);
		}

		/// \brief Binds a result's column to Item8
		static void BindItem8(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item8);
		}

		/// \brief Binds a result's column to Item9
		static void BindItem9(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item9);
		}

		/// \brief Binds a result's column to Item10
		static void BindItem10(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item10);
		}

		/// \brief Binds a result's column to Item11
		static void BindItem11(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item11);
		}

		/// \brief Binds a result's column to Item12
		static void BindItem12(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item12);
		}

		/// \brief Binds a result's column to Item13
		static void BindItem13(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item13);
		}

		/// \brief Binds a result's column to Item14
		static void BindItem14(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item14);
		}

		/// \brief Binds a result's column to Item15
		static void BindItem15(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item15);
		}

		/// \brief Binds a result's column to Item16
		static void BindItem16(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item16);
		}

		/// \brief Binds a result's column to Item17
		static void BindItem17(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item17);
		}

		/// \brief Binds a result's column to Item18
		static void BindItem18(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item18);
		}

		/// \brief Binds a result's column to Item19
		static void BindItem19(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item19);
		}

		/// \brief Binds a result's column to Item20
		static void BindItem20(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item20);
		}

		/// \brief Binds a result's column to Item21
		static void BindItem21(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item21);
		}

		/// \brief Binds a result's column to Item22
		static void BindItem22(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item22);
		}

		/// \brief Binds a result's column to Item23
		static void BindItem23(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item23);
		}

		/// \brief Binds a result's column to Item24
		static void BindItem24(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item24);
		}

		/// \brief Binds a result's column to Item25
		static void BindItem25(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item25);
		}

		/// \brief Binds a result's column to Item26
		static void BindItem26(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item26);
		}

		/// \brief Binds a result's column to Item27
		static void BindItem27(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item27);
		}

		/// \brief Binds a result's column to Item28
		static void BindItem28(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item28);
		}

		/// \brief Binds a result's column to Item29
		static void BindItem29(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item29);
		}

		/// \brief Binds a result's column to Item30
		static void BindItem30(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item30);
		}

	};
}
