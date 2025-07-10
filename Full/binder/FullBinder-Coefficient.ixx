module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:Coefficient;

import FullModel;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::Coefficient
	export class Coefficient
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::Coefficient& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sClass", &Coefficient::BindClassId},
				{"ShortSword", &Coefficient::BindShortSword},
				{"Sword", &Coefficient::BindSword},
				{"Axe", &Coefficient::BindAxe},
				{"Club", &Coefficient::BindClub},
				{"Spear", &Coefficient::BindSpear},
				{"Pole", &Coefficient::BindPole},
				{"Staff", &Coefficient::BindStaff},
				{"Bow", &Coefficient::BindBow},
				{"Hp", &Coefficient::BindHitPoint},
				{"Mp", &Coefficient::BindMagicPower},
				{"Sp", &Coefficient::BindSp},
				{"Ac", &Coefficient::BindArmor},
				{"Hitrate", &Coefficient::BindHitRate},
				{"Evasionrate", &Coefficient::BindEvasionrate}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ClassId);
		}

		/// \brief Binds a result's column to ShortSword
		static void BindShortSword(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.ShortSword);
		}

		/// \brief Binds a result's column to Sword
		static void BindSword(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Sword);
		}

		/// \brief Binds a result's column to Axe
		static void BindAxe(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Axe);
		}

		/// \brief Binds a result's column to Club
		static void BindClub(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Club);
		}

		/// \brief Binds a result's column to Spear
		static void BindSpear(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Spear);
		}

		/// \brief Binds a result's column to Pole
		static void BindPole(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Pole);
		}

		/// \brief Binds a result's column to Staff
		static void BindStaff(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Staff);
		}

		/// \brief Binds a result's column to Bow
		static void BindBow(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			m.Bow = result.get<double>(colIndex);
		}

		/// \brief Binds a result's column to HitPoint
		static void BindHitPoint(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.HitPoint);
		}

		/// \brief Binds a result's column to MagicPower
		static void BindMagicPower(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.MagicPower);
		}

		/// \brief Binds a result's column to Sp
		static void BindSp(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Sp);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Evasionrate
		static void BindEvasionrate(model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Evasionrate);
		}

	};
}
