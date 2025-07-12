module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MakeWeapon;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MakeWeapon
	export class MakeWeapon
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byLevel", &MakeWeapon::BindLevel},
				{"sClass_1", &MakeWeapon::BindClass1},
				{"sClass_2", &MakeWeapon::BindClass2},
				{"sClass_3", &MakeWeapon::BindClass3},
				{"sClass_4", &MakeWeapon::BindClass4},
				{"sClass_5", &MakeWeapon::BindClass5},
				{"sClass_6", &MakeWeapon::BindClass6},
				{"sClass_7", &MakeWeapon::BindClass7},
				{"sClass_8", &MakeWeapon::BindClass8},
				{"sClass_9", &MakeWeapon::BindClass9},
				{"sClass_10", &MakeWeapon::BindClass10},
				{"sClass_11", &MakeWeapon::BindClass11},
				{"sClass_12", &MakeWeapon::BindClass12}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			m.Level = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Class1
		static void BindClass1(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class1);
		}

		/// \brief Binds a result's column to Class2
		static void BindClass2(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class2);
		}

		/// \brief Binds a result's column to Class3
		static void BindClass3(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class3);
		}

		/// \brief Binds a result's column to Class4
		static void BindClass4(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class4);
		}

		/// \brief Binds a result's column to Class5
		static void BindClass5(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class5);
		}

		/// \brief Binds a result's column to Class6
		static void BindClass6(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class6);
		}

		/// \brief Binds a result's column to Class7
		static void BindClass7(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class7);
		}

		/// \brief Binds a result's column to Class8
		static void BindClass8(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class8);
		}

		/// \brief Binds a result's column to Class9
		static void BindClass9(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class9);
		}

		/// \brief Binds a result's column to Class10
		static void BindClass10(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class10);
		}

		/// \brief Binds a result's column to Class11
		static void BindClass11(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class11);
		}

		/// \brief Binds a result's column to Class12
		static void BindClass12(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class12);
		}

	};
}
