module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MagicType6Binder;

import FullModel:MagicType6;

namespace model
{
	/// \brief generated column binder for the MagicType6 model, using nanodbc
	export class MagicType6Binder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MagicType6& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType6Binder::BindMagicNumber},
				{"Name", &MagicType6Binder::BindName},
				{"Description", &MagicType6Binder::BindDescription},
				{"Size", &MagicType6Binder::BindSize},
				{"TransformID", &MagicType6Binder::BindTransformId},
				{"Duration", &MagicType6Binder::BindDuration},
				{"MaxHp", &MagicType6Binder::BindMaxHp},
				{"MaxMp", &MagicType6Binder::BindMaxMp},
				{"Speed", &MagicType6Binder::BindSpeed},
				{"AttackSpeed", &MagicType6Binder::BindAttackSpeed},
				{"TotalHit", &MagicType6Binder::BindTotalHit},
				{"TotalAc", &MagicType6Binder::BindTotalArmor},
				{"TotalHitRate", &MagicType6Binder::BindTotalHitRate},
				{"TotalEvasionRate", &MagicType6Binder::BindTotalEvasionRate},
				{"TotalFireR", &MagicType6Binder::BindTotalFireResist},
				{"TotalColdR", &MagicType6Binder::BindTotalColdResist},
				{"TotalLightningR", &MagicType6Binder::BindTotalLightningResist},
				{"TotalMagicR", &MagicType6Binder::BindTotalMagicResist},
				{"TotalDiseaseR", &MagicType6Binder::BindTotalDiseaseResist},
				{"TotalPoisonR", &MagicType6Binder::BindTotalPoisonResist},
				{"Class", &MagicType6Binder::BindClass},
				{"UserSkillUse", &MagicType6Binder::BindUserSkillUse},
				{"NeedItem", &MagicType6Binder::BindNeedItem},
				{"SkillSuccessRate", &MagicType6Binder::BindSkillSuccessRate},
				{"MonsterFriendly", &MagicType6Binder::BindMonsterFriendly}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Description);
		}

		/// \brief Binds a result's column to Size
		static void BindSize(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to TransformId
		static void BindTransformId(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TransformId);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHp);
		}

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMp);
		}

		/// \brief Binds a result's column to Speed
		static void BindSpeed(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Speed);
		}

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackSpeed);
		}

		/// \brief Binds a result's column to TotalHit
		static void BindTotalHit(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalHit);
		}

		/// \brief Binds a result's column to TotalArmor
		static void BindTotalArmor(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalArmor);
		}

		/// \brief Binds a result's column to TotalHitRate
		static void BindTotalHitRate(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalHitRate);
		}

		/// \brief Binds a result's column to TotalEvasionRate
		static void BindTotalEvasionRate(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalEvasionRate);
		}

		/// \brief Binds a result's column to TotalFireResist
		static void BindTotalFireResist(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalFireResist);
		}

		/// \brief Binds a result's column to TotalColdResist
		static void BindTotalColdResist(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalColdResist);
		}

		/// \brief Binds a result's column to TotalLightningResist
		static void BindTotalLightningResist(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalLightningResist);
		}

		/// \brief Binds a result's column to TotalMagicResist
		static void BindTotalMagicResist(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalMagicResist);
		}

		/// \brief Binds a result's column to TotalDiseaseResist
		static void BindTotalDiseaseResist(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalDiseaseResist);
		}

		/// \brief Binds a result's column to TotalPoisonResist
		static void BindTotalPoisonResist(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalPoisonResist);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to UserSkillUse
		static void BindUserSkillUse(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.UserSkillUse);
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NeedItem);
		}

		/// \brief Binds a result's column to SkillSuccessRate
		static void BindSkillSuccessRate(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SkillSuccessRate);
		}

		/// \brief Binds a result's column to MonsterFriendly
		static void BindMonsterFriendly(model::MagicType6& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MonsterFriendly);
		}

	};
}
