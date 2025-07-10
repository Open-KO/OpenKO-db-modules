module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:Magic;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::Magic
	export class Magic
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
				{"MagicNum", &Magic::BindMagicNumber},
				{"EnName", &Magic::BindEnglishName},
				{"KrName", &Magic::BindKoreanName},
				{"Description", &Magic::BindDescription},
				{"BeforeAction", &Magic::BindBeforeAction},
				{"TargetAction", &Magic::BindTargetAction},
				{"SelfEffect", &Magic::BindSelfEffect},
				{"FlyingEffect", &Magic::BindFlyingEffect},
				{"TargetEffect", &Magic::BindTargetEffect},
				{"Moral", &Magic::BindMoral},
				{"SkillLevel", &Magic::BindSkillLevel},
				{"Skill", &Magic::BindSkill},
				{"Msp", &Magic::BindManaCost},
				{"HP", &Magic::BindHpCost},
				{"ItemGroup", &Magic::BindItemGroup},
				{"UseItem", &Magic::BindUseItem},
				{"CastTime", &Magic::BindCastTime},
				{"ReCastTime", &Magic::BindRecastTime},
				{"SuccessRate", &Magic::BindSuccessRate},
				{"Type1", &Magic::BindType1},
				{"Type2", &Magic::BindType2},
				{"Range", &Magic::BindRange},
				{"Etc", &Magic::BindEtc},
				{"Event", &Magic::BindEvent}
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
