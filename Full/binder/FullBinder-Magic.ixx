module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:Magic;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::Magic
	export class Magic
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"MagicNum", &Magic::BindID},
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

		/// \brief Binds a result's column to ID
		static void BindID(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to EnglishName
		static void BindEnglishName(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.EnglishName.reset();
			}
			else
			{
				m.EnglishName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to KoreanName
		static void BindKoreanName(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KoreanName.reset();
			}
			else
			{
				m.KoreanName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::Magic& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to BeforeAction
		static void BindBeforeAction(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.BeforeAction = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to TargetAction
		static void BindTargetAction(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.TargetAction = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SelfEffect
		static void BindSelfEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.SelfEffect = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to FlyingEffect
		static void BindFlyingEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.FlyingEffect = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to TargetEffect
		static void BindTargetEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TargetEffect);
		}

		/// \brief Binds a result's column to Moral
		static void BindMoral(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.Moral = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SkillLevel
		static void BindSkillLevel(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SkillLevel);
		}

		/// \brief Binds a result's column to Skill
		static void BindSkill(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Skill);
		}

		/// \brief Binds a result's column to ManaCost
		static void BindManaCost(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaCost);
		}

		/// \brief Binds a result's column to HpCost
		static void BindHpCost(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HpCost);
		}

		/// \brief Binds a result's column to ItemGroup
		static void BindItemGroup(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemGroup = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to UseItem
		static void BindUseItem(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.UseItem);
		}

		/// \brief Binds a result's column to CastTime
		static void BindCastTime(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.CastTime = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RecastTime
		static void BindRecastTime(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.RecastTime = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SuccessRate
		static void BindSuccessRate(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.SuccessRate = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Type1
		static void BindType1(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.Type1 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Type2
		static void BindType2(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.Type2 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Range
		static void BindRange(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Etc
		static void BindEtc(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.Etc = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Event
		static void BindEvent(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Event.reset();
			}
			else
			{
				m.Event = result.get<int32_t>(colIndex);
			}
		}

	};
}
