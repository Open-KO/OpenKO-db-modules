module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:MonsterChallengeSummonList;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::MonsterChallengeSummonList
	export class MonsterChallengeSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterChallengeSummonList::BindIndex},
				{"bLevel", &MonsterChallengeSummonList::BindLevel},
				{"bStage", &MonsterChallengeSummonList::BindStage},
				{"bStageLevel", &MonsterChallengeSummonList::BindStageLevel},
				{"sTime", &MonsterChallengeSummonList::BindTime},
				{"sSid", &MonsterChallengeSummonList::BindMonsterId},
				{"sCount", &MonsterChallengeSummonList::BindCount},
				{"sPosX", &MonsterChallengeSummonList::BindPosX},
				{"sPosZ", &MonsterChallengeSummonList::BindPosZ},
				{"bRange", &MonsterChallengeSummonList::BindRange}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Stage
		static void BindStage(model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Stage);
		}

		/// \brief Binds a result's column to StageLevel
		static void BindStageLevel(model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StageLevel);
		}

		/// \brief Binds a result's column to Time
		static void BindTime(model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Time);
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Count
		static void BindCount(model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Count);
		}

		/// \brief Binds a result's column to PosX
		static void BindPosX(model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PosX);
		}

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PosZ);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

	};
}
