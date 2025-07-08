module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MonsterChallengeSummonList;

namespace model
{
	/// \brief generated column binder for the MonsterChallengeSummonList model, using nanodbc
	export class MonsterChallengeSummonListBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterChallengeSummonListBinder::BindIndex},
				{"bLevel", &MonsterChallengeSummonListBinder::BindLevel},
				{"bStage", &MonsterChallengeSummonListBinder::BindStage},
				{"bStageLevel", &MonsterChallengeSummonListBinder::BindStageLevel},
				{"sTime", &MonsterChallengeSummonListBinder::BindTime},
				{"sSid", &MonsterChallengeSummonListBinder::BindMonsterId},
				{"sCount", &MonsterChallengeSummonListBinder::BindCount},
				{"sPosX", &MonsterChallengeSummonListBinder::BindPosX},
				{"sPosZ", &MonsterChallengeSummonListBinder::BindPosZ},
				{"bRange", &MonsterChallengeSummonListBinder::BindRange}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(MonsterChallengeSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(MonsterChallengeSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Stage
		static void BindStage(MonsterChallengeSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Stage);
		}

		/// \brief Binds a result's column to StageLevel
		static void BindStageLevel(MonsterChallengeSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StageLevel);
		}

		/// \brief Binds a result's column to Time
		static void BindTime(MonsterChallengeSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Time);
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(MonsterChallengeSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Count
		static void BindCount(MonsterChallengeSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Count);
		}

		/// \brief Binds a result's column to PosX
		static void BindPosX(MonsterChallengeSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PosX);
		}

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(MonsterChallengeSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PosZ);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(MonsterChallengeSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Range);
		}

	};
}
