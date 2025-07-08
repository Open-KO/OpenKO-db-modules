module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MagicBinder;

import :Magic;

namespace model
{
	/// \brief generated column binder for the Magic model, using nanodbc
	export class MagicBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(Magic& m, const nanodbc::result& result, short colIndex);

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
		static void BindMagicNumber(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to EnglishName
		static void BindEnglishName(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.EnglishName);
		}

		/// \brief Binds a result's column to KoreanName
		static void BindKoreanName(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.KoreanName);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Description);
		}

		/// \brief Binds a result's column to BeforeAction
		static void BindBeforeAction(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.BeforeAction);
		}

		/// \brief Binds a result's column to TargetAction
		static void BindTargetAction(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TargetAction);
		}

		/// \brief Binds a result's column to SelfEffect
		static void BindSelfEffect(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SelfEffect);
		}

		/// \brief Binds a result's column to FlyingEffect
		static void BindFlyingEffect(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.FlyingEffect);
		}

		/// \brief Binds a result's column to TargetEffect
		static void BindTargetEffect(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TargetEffect);
		}

		/// \brief Binds a result's column to Moral
		static void BindMoral(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Moral);
		}

		/// \brief Binds a result's column to SkillLevel
		static void BindSkillLevel(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SkillLevel);
		}

		/// \brief Binds a result's column to Skill
		static void BindSkill(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Skill);
		}

		/// \brief Binds a result's column to ManaCost
		static void BindManaCost(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaCost);
		}

		/// \brief Binds a result's column to HpCost
		static void BindHpCost(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HpCost);
		}

		/// \brief Binds a result's column to ItemGroup
		static void BindItemGroup(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemGroup);
		}

		/// \brief Binds a result's column to UseItem
		static void BindUseItem(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.UseItem);
		}

		/// \brief Binds a result's column to CastTime
		static void BindCastTime(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.CastTime);
		}

		/// \brief Binds a result's column to RecastTime
		static void BindRecastTime(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RecastTime);
		}

		/// \brief Binds a result's column to SuccessRate
		static void BindSuccessRate(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SuccessRate);
		}

		/// \brief Binds a result's column to Type1
		static void BindType1(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type1);
		}

		/// \brief Binds a result's column to Type2
		static void BindType2(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type2);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Etc
		static void BindEtc(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Etc);
		}

		/// \brief Binds a result's column to Event
		static void BindEvent(Magic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.Event);
		}

	};
}
