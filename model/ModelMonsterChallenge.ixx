module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module Model:MonsterChallenge;

namespace binder
{
	export class MonsterChallenge;
}

namespace model
{
	/// \brief [MONSTER_CHALLENGE] Monster challenge (Forgotten Temple)
	/// \class MonsterChallenge
	/// \xrefitem gamedb "Game Database" "Game Database" MONSTER_CHALLENGE Monster challenge (Forgotten Temple)
	export class MonsterChallenge 
	{
	/// \publicsection
	public:
		using BinderType = binder::MonsterChallenge;

		/// \brief Column [sIndex]: Index
		///
		/// \property Index
		int16_t Index = 0;

		/// \brief Column [bStartTime1]: StartTime 1
		///
		/// \property StartTime1
		int16_t StartTime1 = 0;

		/// \brief Column [bStartTime2]: StartTime 2
		///
		/// \property StartTime2
		int16_t StartTime2 = 0;

		/// \brief Column [bStartTime3]: StartTime 3
		///
		/// \property StartTime3
		int16_t StartTime3 = 0;

		/// \brief Column [bLevelMin]: Minimum level to enter
		///
		/// \property LevelMin
		int16_t LevelMin = 0;

		/// \brief Column [bLevelMax]: Maximum level to enter
		///
		/// \property LevelMax
		int16_t LevelMax = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MONSTER_CHALLENGE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIndex", "bStartTime1", "bStartTime2", "bStartTime3", "bLevelMin", "bLevelMax"
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
