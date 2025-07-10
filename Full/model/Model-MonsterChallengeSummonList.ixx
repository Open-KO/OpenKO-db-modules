module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module Model:MonsterChallengeSummonList;

namespace model_binder
{
	export class MonsterChallengeSummonList;
}

namespace model
{
	/// \brief [MONSTER_CHALLENGE_SUMMON_LIST] Forgotten Temple summon list
	/// \class MonsterChallengeSummonList
	/// \xrefitem gamedb "Game Database" "Game Database" MONSTER_CHALLENGE_SUMMON_LIST Forgotten Temple summon list
	export class MonsterChallengeSummonList 
	{
	/// \publicsection
	public:
		using BinderType = model_binder::MonsterChallengeSummonList;

		/// \brief Column [sIndex]: Index
		///
		/// \property Index
		int16_t Index = 0;

		/// \brief Column [bLevel]: Level
		///
		/// \property Level
		int16_t Level = 0;

		/// \brief Column [bStage]: Stage
		///
		/// \property Stage
		int16_t Stage = 0;

		/// \brief Column [bStageLevel]: Stage level
		///
		/// \property StageLevel
		int16_t StageLevel = 0;

		/// \brief Column [sTime]: Time to spawn(?)
		///
		/// \property Time
		int16_t Time = 0;

		/// \brief Column [sSid]: Monster identifier (K_MONSTER.sSid)
		///
		/// \property MonsterId
		int16_t MonsterId = 0;

		/// \brief Column [sCount]: Number to spawn
		///
		/// \property Count
		int16_t Count = 0;

		/// \brief Column [sPosX]: Monster spawn point center x-coordinate
		///
		/// \property PosX
		int16_t PosX = 0;

		/// \brief Column [sPosZ]: Monster spawn point center z-coordinate
		///
		/// \property PosZ
		int16_t PosZ = 0;

		/// \brief Column [bRange]: Radius from spawn point center to spawn monsters
		///
		/// \property Range
		int16_t Range = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MONSTER_CHALLENGE_SUMMON_LIST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIndex", "bLevel", "bStage", "bStageLevel", "sTime", "sSid", "sCount", "sPosX", "sPosZ", "bRange"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
