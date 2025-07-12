module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MagicType6;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MagicType6
	export class MagicType6
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType6::BindID},
				{"Name", &MagicType6::BindName},
				{"Description", &MagicType6::BindDescription},
				{"Size", &MagicType6::BindSize},
				{"TransformID", &MagicType6::BindTransformId},
				{"Duration", &MagicType6::BindDuration},
				{"MaxHp", &MagicType6::BindMaxHp},
				{"MaxMp", &MagicType6::BindMaxMp},
				{"Speed", &MagicType6::BindSpeed},
				{"AttackSpeed", &MagicType6::BindAttackSpeed},
				{"TotalHit", &MagicType6::BindTotalHit},
				{"TotalAc", &MagicType6::BindTotalArmor},
				{"TotalHitRate", &MagicType6::BindTotalHitRate},
				{"TotalEvasionRate", &MagicType6::BindTotalEvasionRate},
				{"TotalFireR", &MagicType6::BindTotalFireResist},
				{"TotalColdR", &MagicType6::BindTotalColdResist},
				{"TotalLightningR", &MagicType6::BindTotalLightningResist},
				{"TotalMagicR", &MagicType6::BindTotalMagicResist},
				{"TotalDiseaseR", &MagicType6::BindTotalDiseaseResist},
				{"TotalPoisonR", &MagicType6::BindTotalPoisonResist},
				{"Class", &MagicType6::BindClass},
				{"UserSkillUse", &MagicType6::BindUserSkillUse},
				{"NeedItem", &MagicType6::BindNeedItem},
				{"SkillSuccessRate", &MagicType6::BindSkillSuccessRate},
				{"MonsterFriendly", &MagicType6::BindMonsterFriendly}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Description.reset();
			}
			else
			{
				m.Description = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Size
		static void BindSize(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to TransformId
		static void BindTransformId(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TransformId);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHp);
		}

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMp);
		}

		/// \brief Binds a result's column to Speed
		static void BindSpeed(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			m.Speed = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackSpeed);
		}

		/// \brief Binds a result's column to TotalHit
		static void BindTotalHit(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalHit);
		}

		/// \brief Binds a result's column to TotalArmor
		static void BindTotalArmor(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalArmor);
		}

		/// \brief Binds a result's column to TotalHitRate
		static void BindTotalHitRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalHitRate);
		}

		/// \brief Binds a result's column to TotalEvasionRate
		static void BindTotalEvasionRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalEvasionRate);
		}

		/// \brief Binds a result's column to TotalFireResist
		static void BindTotalFireResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalFireResist);
		}

		/// \brief Binds a result's column to TotalColdResist
		static void BindTotalColdResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalColdResist);
		}

		/// \brief Binds a result's column to TotalLightningResist
		static void BindTotalLightningResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalLightningResist);
		}

		/// \brief Binds a result's column to TotalMagicResist
		static void BindTotalMagicResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalMagicResist);
		}

		/// \brief Binds a result's column to TotalDiseaseResist
		static void BindTotalDiseaseResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalDiseaseResist);
		}

		/// \brief Binds a result's column to TotalPoisonResist
		static void BindTotalPoisonResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalPoisonResist);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to UserSkillUse
		static void BindUserSkillUse(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			m.UserSkillUse = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			m.NeedItem = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SkillSuccessRate
		static void BindSkillSuccessRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			m.SkillSuccessRate = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MonsterFriendly
		static void BindMonsterFriendly(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			m.MonsterFriendly = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
