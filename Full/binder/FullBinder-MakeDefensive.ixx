module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MakeDefensive;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MakeDefensive
	export class MakeDefensive
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byLevel", &MakeDefensive::BindLevel},
				{"sClass_1", &MakeDefensive::BindClass1},
				{"sClass_2", &MakeDefensive::BindClass2},
				{"sClass_3", &MakeDefensive::BindClass3},
				{"sClass_4", &MakeDefensive::BindClass4},
				{"sClass_5", &MakeDefensive::BindClass5},
				{"sClass_6", &MakeDefensive::BindClass6},
				{"sClass_7", &MakeDefensive::BindClass7}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			m.Level = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Class1
		static void BindClass1(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class1);
		}

		/// \brief Binds a result's column to Class2
		static void BindClass2(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class2);
		}

		/// \brief Binds a result's column to Class3
		static void BindClass3(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class3);
		}

		/// \brief Binds a result's column to Class4
		static void BindClass4(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class4);
		}

		/// \brief Binds a result's column to Class5
		static void BindClass5(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class5);
		}

		/// \brief Binds a result's column to Class6
		static void BindClass6(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class6);
		}

		/// \brief Binds a result's column to Class7
		static void BindClass7(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class7);
		}

	};
}
