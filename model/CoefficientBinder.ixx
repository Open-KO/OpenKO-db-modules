module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:CoefficientBinder;

import :Coefficient;

namespace model
{
	/// \brief generated column binder for the Coefficient model, using nanodbc
	export class CoefficientBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(Coefficient& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sClass", &CoefficientBinder::BindClassId},
				{"ShortSword", &CoefficientBinder::BindShortSword},
				{"Sword", &CoefficientBinder::BindSword},
				{"Axe", &CoefficientBinder::BindAxe},
				{"Club", &CoefficientBinder::BindClub},
				{"Spear", &CoefficientBinder::BindSpear},
				{"Pole", &CoefficientBinder::BindPole},
				{"Staff", &CoefficientBinder::BindStaff},
				{"Bow", &CoefficientBinder::BindBow},
				{"Hp", &CoefficientBinder::BindHitPoint},
				{"Mp", &CoefficientBinder::BindMagicPower},
				{"Sp", &CoefficientBinder::BindSp},
				{"Ac", &CoefficientBinder::BindArmor},
				{"Hitrate", &CoefficientBinder::BindHitRate},
				{"Evasionrate", &CoefficientBinder::BindEvasionrate}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ClassId);
		}

		/// \brief Binds a result's column to ShortSword
		static void BindShortSword(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.ShortSword);
		}

		/// \brief Binds a result's column to Sword
		static void BindSword(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Sword);
		}

		/// \brief Binds a result's column to Axe
		static void BindAxe(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Axe);
		}

		/// \brief Binds a result's column to Club
		static void BindClub(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Club);
		}

		/// \brief Binds a result's column to Spear
		static void BindSpear(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Spear);
		}

		/// \brief Binds a result's column to Pole
		static void BindPole(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Pole);
		}

		/// \brief Binds a result's column to Staff
		static void BindStaff(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Staff);
		}

		/// \brief Binds a result's column to Bow
		static void BindBow(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			m.Bow = result.get<double>(colIndex);
		}

		/// \brief Binds a result's column to HitPoint
		static void BindHitPoint(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.HitPoint);
		}

		/// \brief Binds a result's column to MagicPower
		static void BindMagicPower(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.MagicPower);
		}

		/// \brief Binds a result's column to Sp
		static void BindSp(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Sp);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Evasionrate
		static void BindEvasionrate(Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Evasionrate);
		}

	};
}
