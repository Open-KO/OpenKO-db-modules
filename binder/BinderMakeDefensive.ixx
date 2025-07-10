module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:MakeDefensive;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderMakeDefensive
	export class MakeDefensiveBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byLevel", &MakeDefensiveBinder::BindLevel},
				{"sClass_1", &MakeDefensiveBinder::BindClass1},
				{"sClass_2", &MakeDefensiveBinder::BindClass2},
				{"sClass_3", &MakeDefensiveBinder::BindClass3},
				{"sClass_4", &MakeDefensiveBinder::BindClass4},
				{"sClass_5", &MakeDefensiveBinder::BindClass5},
				{"sClass_6", &MakeDefensiveBinder::BindClass6},
				{"sClass_7", &MakeDefensiveBinder::BindClass7}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Class1
		static void BindClass1(model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			m.Class1 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Class2
		static void BindClass2(model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			m.Class2 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Class3
		static void BindClass3(model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			m.Class3 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Class4
		static void BindClass4(model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			m.Class4 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Class5
		static void BindClass5(model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			m.Class5 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Class6
		static void BindClass6(model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			m.Class6 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Class7
		static void BindClass7(model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			m.Class7 = result.get<int16_t>(colIndex);
		}

	};
}
