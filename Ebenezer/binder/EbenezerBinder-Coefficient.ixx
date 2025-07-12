module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:Coefficient;

import EbenezerModel;
import BinderUtil;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::Coefficient
	export class Coefficient
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

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
				{"Mp", &Coefficient::BindManaPoint},
				{"Sp", &Coefficient::BindSp},
				{"Ac", &Coefficient::BindArmor},
				{"Hitrate", &Coefficient::BindHitRate},
				{"Evasionrate", &Coefficient::BindEvasionrate}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ClassId);
		}

		/// \brief Binds a result's column to ShortSword
		static void BindShortSword(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.ShortSword);
		}

		/// \brief Binds a result's column to Sword
		static void BindSword(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Sword);
		}

		/// \brief Binds a result's column to Axe
		static void BindAxe(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Axe);
		}

		/// \brief Binds a result's column to Club
		static void BindClub(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Club);
		}

		/// \brief Binds a result's column to Spear
		static void BindSpear(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Spear);
		}

		/// \brief Binds a result's column to Pole
		static void BindPole(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Pole);
		}

		/// \brief Binds a result's column to Staff
		static void BindStaff(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Staff);
		}

		/// \brief Binds a result's column to Bow
		static void BindBow(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Bow);
		}

		/// \brief Binds a result's column to HitPoint
		static void BindHitPoint(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.HitPoint);
		}

		/// \brief Binds a result's column to ManaPoint
		static void BindManaPoint(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.ManaPoint);
		}

		/// \brief Binds a result's column to Sp
		static void BindSp(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Sp);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Evasionrate
		static void BindEvasionrate(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Evasionrate);
		}

	};
}
