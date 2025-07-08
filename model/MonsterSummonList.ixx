module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:MonsterSummonList;

namespace model
{
	class MonsterSummonListBinder;
	
	/// \brief [MONSTER_SUMMON_LIST] Monster summon list
	/// \class MonsterSummonList
	/// \xrefitem gamedb "Game Database" "Game Database" MONSTER_SUMMON_LIST
	export class MonsterSummonList 
	{
	/// \publicsection
	public:
		using BinderType = MonsterSummonListBinder;

		/// \brief Column [sSid]: Monster identifier (K_MONSTER.sSid)
		///
		/// \property MonsterId
		int16_t MonsterId = 0;

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [sLevel]: Level
		///
		/// \property Level
		int16_t Level = 0;

		/// \brief Column [sProbability]: Probability
		///
		/// \property Probability
		int16_t Probability = 0;

		/// \brief Column [bType]: Type
		///
		/// \property Type
		uint8_t Type = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MONSTER_SUMMON_LIST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sSid", "strName", "sLevel", "sProbability", "bType"
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
