module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module AIServerModel:MonsterSummonList;

import ModelUtil;

namespace aiserver_binder
{
	export class MonsterSummonList;
}

namespace aiserver_model
{
	/// \brief [MONSTER_SUMMON_LIST] Monster summon list
	/// \class MonsterSummonList
	/// \xrefitem gamedb "Game Database" "Game Database" MONSTER_SUMMON_LIST Monster summon list
	export class MonsterSummonList 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MonsterSummonList;

		/// \brief Column [sSid]: Monster identifier (K_MONSTER.sSid)
		///
		/// \property MonsterId
		int16_t MonsterId = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [sLevel]: Level
		///
		/// \property Level
		int16_t Level = {};

		/// \brief Column [sProbability]: Probability
		///
		/// \property Probability
		int16_t Probability = {};

		/// \brief Column [bType]: Type
		///
		/// \property Type
		uint8_t Type = {};

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

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
			};
			return blobColumns;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"sSid"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return MonsterId;
		}

	};
}
