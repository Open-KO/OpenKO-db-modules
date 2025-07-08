module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MagicType4Binder;

import :MagicType4;

namespace model
{
	/// \brief generated column binder for the MagicType4 model, using nanodbc
	export class MagicType4Binder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MagicType4& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType4Binder::BindMagicNumber},
				{"Name", &MagicType4Binder::BindName},
				{"Description", &MagicType4Binder::BindDescription},
				{"BuffType", &MagicType4Binder::BindBuffType},
				{"Radius", &MagicType4Binder::BindRadius},
				{"Duration", &MagicType4Binder::BindDuration},
				{"AttackSpeed", &MagicType4Binder::BindAttackSpeed},
				{"Speed", &MagicType4Binder::BindSpeed},
				{"AC", &MagicType4Binder::BindArmor},
				{"ACPct", &MagicType4Binder::BindArmorPercent},
				{"Attack", &MagicType4Binder::BindAttackPower},
				{"MagicAttack", &MagicType4Binder::BindMagicPower},
				{"MaxHP", &MagicType4Binder::BindMaxHp},
				{"MaxHpPct", &MagicType4Binder::BindMaxHpPercent},
				{"MaxMP", &MagicType4Binder::BindMaxMp},
				{"MaxMpPct", &MagicType4Binder::BindMaxMpPercent},
				{"HitRate", &MagicType4Binder::BindHitRate},
				{"AvoidRate", &MagicType4Binder::BindAvoidRate},
				{"Str", &MagicType4Binder::BindStrength},
				{"Sta", &MagicType4Binder::BindStamina},
				{"Dex", &MagicType4Binder::BindDexterity},
				{"Intel", &MagicType4Binder::BindIntelligence},
				{"Cha", &MagicType4Binder::BindCharisma},
				{"FireR", &MagicType4Binder::BindFireResist},
				{"ColdR", &MagicType4Binder::BindColdResist},
				{"LightningR", &MagicType4Binder::BindLightningResist},
				{"MagicR", &MagicType4Binder::BindMagicResist},
				{"DiseaseR", &MagicType4Binder::BindDiseaseResist},
				{"PoisonR", &MagicType4Binder::BindPoisonResist},
				{"ExpPct", &MagicType4Binder::BindExpPercent}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Description);
		}

		/// \brief Binds a result's column to BuffType
		static void BindBuffType(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BuffType);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackSpeed);
		}

		/// \brief Binds a result's column to Speed
		static void BindSpeed(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Speed);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to ArmorPercent
		static void BindArmorPercent(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ArmorPercent);
		}

		/// \brief Binds a result's column to AttackPower
		static void BindAttackPower(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackPower);
		}

		/// \brief Binds a result's column to MagicPower
		static void BindMagicPower(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicPower);
		}

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHp);
		}

		/// \brief Binds a result's column to MaxHpPercent
		static void BindMaxHpPercent(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpPercent);
		}

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMp);
		}

		/// \brief Binds a result's column to MaxMpPercent
		static void BindMaxMpPercent(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpPercent);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to AvoidRate
		static void BindAvoidRate(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AvoidRate);
		}

		/// \brief Binds a result's column to Strength
		static void BindStrength(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Strength);
		}

		/// \brief Binds a result's column to Stamina
		static void BindStamina(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Stamina);
		}

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Dexterity);
		}

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Intelligence);
		}

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Charisma);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResist);
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResist);
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResist);
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResist);
		}

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DiseaseResist);
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResist);
		}

		/// \brief Binds a result's column to ExpPercent
		static void BindExpPercent(MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpPercent);
		}

	};
}
