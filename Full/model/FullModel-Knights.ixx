module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:Knights;

import ModelUtil;

namespace full_binder
{
	export class Knights;
}

namespace full_model
{
	/// \brief [KNIGHTS] Knights are the clan/guild system of the game
	/// \class Knights
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS Knights are the clan/guild system of the game
	export class Knights 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Knights;

		/// \brief Column [IDNum]: Identification number
		///
		/// \property IdNumber
		int16_t IdNumber = 0;

		/// \brief Column [Flag]: Flag TODO
		///
		/// \property Flag
		uint8_t Flag = 0;

		/// \brief Column [Nation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = 0;

		/// \brief Column [Ranking]: Ranking by sum of members National Points
		///
		/// \property Ranking
		uint8_t Ranking = 0;

		/// \brief Column [IDName]: Name of the Knights clan
		///
		/// \property Name
		std::string Name;

		/// \brief Column [Members]: Member count
		///
		/// \property Members
		int16_t Members = 0;

		/// \brief Column [Chief]: Leader character identifier
		///
		/// \property Chief
		std::string Chief;

		/// \brief Column [ViceChief_1]: Vice chief 1 character identifier
		///
		/// \property ViceChief1
		std::optional<std::string> ViceChief1;

		/// \brief Column [ViceChief_2]: Vice chief 2 character identifier
		///
		/// \property ViceChief2
		std::optional<std::string> ViceChief2;

		/// \brief Column [ViceChief_3]: Vice chief 3 character identifier
		///
		/// \property ViceChief3
		std::optional<std::string> ViceChief3;

		/// \brief Column [strEnemyName]: Enemy Name TODO
		///
		/// \property EnemyName
		std::optional<std::string> EnemyName;

		/// \brief Column [byOldWarResult]: Old war result
		///
		/// \property OldWarResult
		uint8_t OldWarResult = 0;

		/// \brief Column [nWarEnemyID]: War enemy identifier
		///
		/// \property WarEnemyId
		int32_t WarEnemyId = 0;

		/// \brief Column [nVictory]: Victory TODO
		///
		/// \property Victory
		int32_t Victory = 0;

		/// \brief Column [nLose]: Lose TODO
		///
		/// \property Lose
		int32_t Lose = 0;

		/// \brief Column [Gold]: Gold
		///
		/// \property Gold
		int64_t Gold = 0;

		/// \brief Column [Domination]: Domination TODO
		///
		/// \property Domination
		int16_t Domination = 0;

		/// \brief Column [Points]: National points
		///
		/// \property Points
		std::optional<int32_t> Points;

		/// \brief Column [CreateTime]: Create time
		///
		/// \property CreateTime
		int64_t CreateTime = 0;

		/// \brief Column [sMarkVersion]: Mark version
		///
		/// \property MarkVersion
		int16_t MarkVersion = 0;

		/// \brief Column [sMarkLen]: Mark length
		///
		/// \property MarkLength
		int16_t MarkLength = 0;

		/// \brief Column [Mark]: Mark image
		///
		/// \property Mark
		std::optional<std::vector<uint8_t>> Mark;

		/// \brief Column [Stash]: Stash TODO
		///
		/// \property Stash
		std::optional<std::string> Stash;

		/// \brief Column [bySiegeFlag]: Siege flag
		///
		/// \property SiegeFlag
		uint8_t SiegeFlag = 0;

		/// \brief Column [sAllianceKnights]: Alliance Knights TODO
		///
		/// \property AllianceKnights
		int16_t AllianceKnights = 0;

		/// \brief Column [sCape]: Cape identifier
		///
		/// \property Cape
		int16_t Cape = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"IDNum", "Flag", "Nation", "Ranking", "IDName", "Members", "Chief", "ViceChief_1", "ViceChief_2", "ViceChief_3", "strEnemyName", "byOldWarResult", "nWarEnemyID", "nVictory", "nLose", "Gold", "Domination", "Points", "CreateTime", "sMarkVersion", "sMarkLen", "Mark", "Stash", "bySiegeFlag", "sAllianceKnights", "sCape"
			};
			return columnNames;
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
				"IDNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return IdNumber;
		}

	};
}
