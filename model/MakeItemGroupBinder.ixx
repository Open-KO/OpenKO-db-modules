module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MakeItemGroupBinder;

import FullModel:MakeItemGroup;

namespace model
{
	/// \brief generated column binder for the MakeItemGroup model, using nanodbc
	export class MakeItemGroupBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iItemGroupNum", &MakeItemGroupBinder::BindItemGroupNumber},
				{"iItem_1", &MakeItemGroupBinder::BindItem1},
				{"iItem_2", &MakeItemGroupBinder::BindItem2},
				{"iItem_3", &MakeItemGroupBinder::BindItem3},
				{"iItem_4", &MakeItemGroupBinder::BindItem4},
				{"iItem_5", &MakeItemGroupBinder::BindItem5},
				{"iItem_6", &MakeItemGroupBinder::BindItem6},
				{"iItem_7", &MakeItemGroupBinder::BindItem7},
				{"iItem_8", &MakeItemGroupBinder::BindItem8},
				{"iItem_9", &MakeItemGroupBinder::BindItem9},
				{"iItem_10", &MakeItemGroupBinder::BindItem10},
				{"iItem_11", &MakeItemGroupBinder::BindItem11},
				{"iItem_12", &MakeItemGroupBinder::BindItem12},
				{"iItem_13", &MakeItemGroupBinder::BindItem13},
				{"iItem_14", &MakeItemGroupBinder::BindItem14},
				{"iItem_15", &MakeItemGroupBinder::BindItem15},
				{"iItem_16", &MakeItemGroupBinder::BindItem16},
				{"iItem_17", &MakeItemGroupBinder::BindItem17},
				{"iItem_18", &MakeItemGroupBinder::BindItem18},
				{"iItem_19", &MakeItemGroupBinder::BindItem19},
				{"iItem_20", &MakeItemGroupBinder::BindItem20},
				{"iItem_21", &MakeItemGroupBinder::BindItem21},
				{"iItem_22", &MakeItemGroupBinder::BindItem22},
				{"iItem_23", &MakeItemGroupBinder::BindItem23},
				{"iItem_24", &MakeItemGroupBinder::BindItem24},
				{"iItem_25", &MakeItemGroupBinder::BindItem25},
				{"iItem_26", &MakeItemGroupBinder::BindItem26},
				{"iItem_27", &MakeItemGroupBinder::BindItem27},
				{"iItem_28", &MakeItemGroupBinder::BindItem28},
				{"iItem_29", &MakeItemGroupBinder::BindItem29},
				{"iItem_30", &MakeItemGroupBinder::BindItem30}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ItemGroupNumber
		static void BindItemGroupNumber(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemGroupNumber);
		}

		/// \brief Binds a result's column to Item1
		static void BindItem1(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item1);
		}

		/// \brief Binds a result's column to Item2
		static void BindItem2(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item2);
		}

		/// \brief Binds a result's column to Item3
		static void BindItem3(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item3);
		}

		/// \brief Binds a result's column to Item4
		static void BindItem4(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item4);
		}

		/// \brief Binds a result's column to Item5
		static void BindItem5(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item5);
		}

		/// \brief Binds a result's column to Item6
		static void BindItem6(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item6);
		}

		/// \brief Binds a result's column to Item7
		static void BindItem7(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item7);
		}

		/// \brief Binds a result's column to Item8
		static void BindItem8(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item8);
		}

		/// \brief Binds a result's column to Item9
		static void BindItem9(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item9);
		}

		/// \brief Binds a result's column to Item10
		static void BindItem10(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item10);
		}

		/// \brief Binds a result's column to Item11
		static void BindItem11(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item11);
		}

		/// \brief Binds a result's column to Item12
		static void BindItem12(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item12);
		}

		/// \brief Binds a result's column to Item13
		static void BindItem13(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item13);
		}

		/// \brief Binds a result's column to Item14
		static void BindItem14(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item14);
		}

		/// \brief Binds a result's column to Item15
		static void BindItem15(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item15);
		}

		/// \brief Binds a result's column to Item16
		static void BindItem16(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item16);
		}

		/// \brief Binds a result's column to Item17
		static void BindItem17(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item17);
		}

		/// \brief Binds a result's column to Item18
		static void BindItem18(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item18);
		}

		/// \brief Binds a result's column to Item19
		static void BindItem19(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item19);
		}

		/// \brief Binds a result's column to Item20
		static void BindItem20(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item20);
		}

		/// \brief Binds a result's column to Item21
		static void BindItem21(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item21);
		}

		/// \brief Binds a result's column to Item22
		static void BindItem22(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item22);
		}

		/// \brief Binds a result's column to Item23
		static void BindItem23(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item23);
		}

		/// \brief Binds a result's column to Item24
		static void BindItem24(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item24);
		}

		/// \brief Binds a result's column to Item25
		static void BindItem25(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item25);
		}

		/// \brief Binds a result's column to Item26
		static void BindItem26(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item26);
		}

		/// \brief Binds a result's column to Item27
		static void BindItem27(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item27);
		}

		/// \brief Binds a result's column to Item28
		static void BindItem28(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item28);
		}

		/// \brief Binds a result's column to Item29
		static void BindItem29(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item29);
		}

		/// \brief Binds a result's column to Item30
		static void BindItem30(model::MakeItemGroup& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item30);
		}

	};
}
