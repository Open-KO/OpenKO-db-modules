module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:MagicType4;

import EbenezerModel;
import BinderUtil;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::MagicType4
	export class MagicType4
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType4::BindID},
				{"BuffType", &MagicType4::BindBuffType},
				{"Radius", &MagicType4::BindRadius},
				{"Duration", &MagicType4::BindDuration},
				{"AttackSpeed", &MagicType4::BindAttackSpeed},
				{"Speed", &MagicType4::BindSpeed},
				{"AC", &MagicType4::BindArmor},
				{"ACPct", &MagicType4::BindArmorPercent},
				{"Attack", &MagicType4::BindAttackPower},
				{"MagicAttack", &MagicType4::BindMagicPower},
				{"MaxHP", &MagicType4::BindMaxHp},
				{"MaxHpPct", &MagicType4::BindMaxHpPercent},
				{"MaxMP", &MagicType4::BindMaxMp},
				{"MaxMpPct", &MagicType4::BindMaxMpPercent},
				{"HitRate", &MagicType4::BindHitRate},
				{"AvoidRate", &MagicType4::BindAvoidRate},
				{"Str", &MagicType4::BindStrength},
				{"Sta", &MagicType4::BindStamina},
				{"Dex", &MagicType4::BindDexterity},
				{"Intel", &MagicType4::BindIntelligence},
				{"Cha", &MagicType4::BindCharisma},
				{"FireR", &MagicType4::BindFireResist},
				{"ColdR", &MagicType4::BindColdResist},
				{"LightningR", &MagicType4::BindLightningResist},
				{"MagicR", &MagicType4::BindMagicResist},
				{"DiseaseR", &MagicType4::BindDiseaseResist},
				{"PoisonR", &MagicType4::BindPoisonResist},
				{"ExpPct", &MagicType4::BindExpPercent}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to BuffType
		static void BindBuffType(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.BuffType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.Radius = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.AttackSpeed = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Speed
		static void BindSpeed(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.Speed = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to ArmorPercent
		static void BindArmorPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ArmorPercent);
		}

		/// \brief Binds a result's column to AttackPower
		static void BindAttackPower(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.AttackPower = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MagicPower
		static void BindMagicPower(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.MagicPower = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHp);
		}

		/// \brief Binds a result's column to MaxHpPercent
		static void BindMaxHpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpPercent);
		}

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMp);
		}

		/// \brief Binds a result's column to MaxMpPercent
		static void BindMaxMpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpPercent);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.HitRate = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to AvoidRate
		static void BindAvoidRate(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AvoidRate);
		}

		/// \brief Binds a result's column to Strength
		static void BindStrength(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Strength);
		}

		/// \brief Binds a result's column to Stamina
		static void BindStamina(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Stamina);
		}

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Dexterity);
		}

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Intelligence);
		}

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Charisma);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.FireResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.ColdResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.LightningResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.MagicResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.DiseaseResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.PoisonResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ExpPercent
		static void BindExpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.ExpPercent = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
