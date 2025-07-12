module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:MonsterChallengeSummonList;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::MonsterChallengeSummonList
	export class MonsterChallengeSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

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
		static void BindIndex(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			m.Level = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Stage
		static void BindStage(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			m.Stage = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StageLevel
		static void BindStageLevel(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			m.StageLevel = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Time
		static void BindTime(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Time);
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Count
		static void BindCount(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Count);
		}

		/// \brief Binds a result's column to PosX
		static void BindPosX(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PosX);
		}

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PosZ);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			m.Range = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
