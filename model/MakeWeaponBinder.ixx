module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MakeWeaponBinder;

import :MakeWeapon;

namespace model
{
	/// \brief generated column binder for the MakeWeapon model, using nanodbc
	export class MakeWeaponBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MakeWeapon& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byLevel", &MakeWeaponBinder::BindLevel},
				{"sClass_1", &MakeWeaponBinder::BindClass1},
				{"sClass_2", &MakeWeaponBinder::BindClass2},
				{"sClass_3", &MakeWeaponBinder::BindClass3},
				{"sClass_4", &MakeWeaponBinder::BindClass4},
				{"sClass_5", &MakeWeaponBinder::BindClass5},
				{"sClass_6", &MakeWeaponBinder::BindClass6},
				{"sClass_7", &MakeWeaponBinder::BindClass7},
				{"sClass_8", &MakeWeaponBinder::BindClass8},
				{"sClass_9", &MakeWeaponBinder::BindClass9},
				{"sClass_10", &MakeWeaponBinder::BindClass10},
				{"sClass_11", &MakeWeaponBinder::BindClass11},
				{"sClass_12", &MakeWeaponBinder::BindClass12}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Class1
		static void BindClass1(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class1);
		}

		/// \brief Binds a result's column to Class2
		static void BindClass2(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class2);
		}

		/// \brief Binds a result's column to Class3
		static void BindClass3(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class3);
		}

		/// \brief Binds a result's column to Class4
		static void BindClass4(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class4);
		}

		/// \brief Binds a result's column to Class5
		static void BindClass5(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class5);
		}

		/// \brief Binds a result's column to Class6
		static void BindClass6(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class6);
		}

		/// \brief Binds a result's column to Class7
		static void BindClass7(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class7);
		}

		/// \brief Binds a result's column to Class8
		static void BindClass8(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class8);
		}

		/// \brief Binds a result's column to Class9
		static void BindClass9(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class9);
		}

		/// \brief Binds a result's column to Class10
		static void BindClass10(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class10);
		}

		/// \brief Binds a result's column to Class11
		static void BindClass11(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class11);
		}

		/// \brief Binds a result's column to Class12
		static void BindClass12(MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Class12);
		}

	};
}
