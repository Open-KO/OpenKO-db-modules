module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:Magic;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderMagic
	export class MagicBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::Magic& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"MagicNum", &MagicBinder::BindMagicNumber},
				{"EnName", &MagicBinder::BindEnglishName},
				{"KrName", &MagicBinder::BindKoreanName},
				{"Description", &MagicBinder::BindDescription},
				{"BeforeAction", &MagicBinder::BindBeforeAction},
				{"TargetAction", &MagicBinder::BindTargetAction},
				{"SelfEffect", &MagicBinder::BindSelfEffect},
				{"FlyingEffect", &MagicBinder::BindFlyingEffect},
				{"TargetEffect", &MagicBinder::BindTargetEffect},
				{"Moral", &MagicBinder::BindMoral},
				{"SkillLevel", &MagicBinder::BindSkillLevel},
				{"Skill", &MagicBinder::BindSkill},
				{"Msp", &MagicBinder::BindManaCost},
				{"HP", &MagicBinder::BindHpCost},
				{"ItemGroup", &MagicBinder::BindItemGroup},
				{"UseItem", &MagicBinder::BindUseItem},
				{"CastTime", &MagicBinder::BindCastTime},
				{"ReCastTime", &MagicBinder::BindRecastTime},
				{"SuccessRate", &MagicBinder::BindSuccessRate},
				{"Type1", &MagicBinder::BindType1},
				{"Type2", &MagicBinder::BindType2},
				{"Range", &MagicBinder::BindRange},
				{"Etc", &MagicBinder::BindEtc},
				{"Event", &MagicBinder::BindEvent}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to EnglishName
		static void BindEnglishName(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.EnglishName = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to KoreanName
		static void BindKoreanName(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.KoreanName = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.Description = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to BeforeAction
		static void BindBeforeAction(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BeforeAction);
		}

		/// \brief Binds a result's column to TargetAction
		static void BindTargetAction(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TargetAction);
		}

		/// \brief Binds a result's column to SelfEffect
		static void BindSelfEffect(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SelfEffect);
		}

		/// \brief Binds a result's column to FlyingEffect
		static void BindFlyingEffect(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FlyingEffect);
		}

		/// \brief Binds a result's column to TargetEffect
		static void BindTargetEffect(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TargetEffect);
		}

		/// \brief Binds a result's column to Moral
		static void BindMoral(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Moral);
		}

		/// \brief Binds a result's column to SkillLevel
		static void BindSkillLevel(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SkillLevel);
		}

		/// \brief Binds a result's column to Skill
		static void BindSkill(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Skill);
		}

		/// \brief Binds a result's column to ManaCost
		static void BindManaCost(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaCost);
		}

		/// \brief Binds a result's column to HpCost
		static void BindHpCost(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HpCost);
		}

		/// \brief Binds a result's column to ItemGroup
		static void BindItemGroup(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemGroup);
		}

		/// \brief Binds a result's column to UseItem
		static void BindUseItem(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.UseItem);
		}

		/// \brief Binds a result's column to CastTime
		static void BindCastTime(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CastTime);
		}

		/// \brief Binds a result's column to RecastTime
		static void BindRecastTime(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RecastTime);
		}

		/// \brief Binds a result's column to SuccessRate
		static void BindSuccessRate(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SuccessRate);
		}

		/// \brief Binds a result's column to Type1
		static void BindType1(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type1);
		}

		/// \brief Binds a result's column to Type2
		static void BindType2(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type2);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Etc
		static void BindEtc(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Etc);
		}

		/// \brief Binds a result's column to Event
		static void BindEvent(model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.Event = result.get<int32_t>(colIndex);
		}

	};
}
