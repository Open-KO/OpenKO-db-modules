module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module EbenezerModel:KnightsSiegeWarfare;

import ModelUtil;

namespace ebenezer_binder
{
	export class KnightsSiegeWarfare;
}

namespace ebenezer_model
{
	/// \brief [KNIGHTS_SIEGE_WARFARE] Knights Siege Warfare
	/// \class KnightsSiegeWarfare
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_SIEGE_WARFARE Knights Siege Warfare
	export class KnightsSiegeWarfare 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::KnightsSiegeWarfare;

		/// \brief Column [sCastleIndex]: Castle index TODO
		///
		/// \property CastleIndex
		int16_t CastleIndex = {};

		/// \brief Column [sMasterKnights]: Master knights TODO
		///
		/// \property MasterKnights
		int16_t MasterKnights = {};

		/// \brief Column [bySiegeType]: Siege type TODO
		///
		/// \property SiegeType
		uint8_t SiegeType = {};

		/// \brief Column [byWarDay]: War day
		///
		/// \property WarDay
		uint8_t WarDay = {};

		/// \brief Column [byWarTime]: War hour
		///
		/// \property WarHour
		uint8_t WarHour = {};

		/// \brief Column [byWarMinute]: War minute
		///
		/// \property WarMinute
		uint8_t WarMinute = {};

		/// \brief Column [sChallengeList_1]: Challenge list 1
		///
		/// \property ChallengeList1
		int16_t ChallengeList1 = {};

		/// \brief Column [sChallengeList_2]: Challenge list 2
		///
		/// \property ChallengeList2
		int16_t ChallengeList2 = {};

		/// \brief Column [sChallengeList_3]: Challenge list 3
		///
		/// \property ChallengeList3
		int16_t ChallengeList3 = {};

		/// \brief Column [sChallengeList_4]: Challenge list 4
		///
		/// \property ChallengeList4
		int16_t ChallengeList4 = {};

		/// \brief Column [sChallengeList_5]: Challenge list 5
		///
		/// \property ChallengeList5
		int16_t ChallengeList5 = {};

		/// \brief Column [sChallengeList_6]: Challenge list 6
		///
		/// \property ChallengeList6
		int16_t ChallengeList6 = {};

		/// \brief Column [sChallengeList_7]: Challenge list 7
		///
		/// \property ChallengeList7
		int16_t ChallengeList7 = {};

		/// \brief Column [sChallengeList_8]: Challenge list 8
		///
		/// \property ChallengeList8
		int16_t ChallengeList8 = {};

		/// \brief Column [sChallengeList_9]: Challenge list 9
		///
		/// \property ChallengeList9
		int16_t ChallengeList9 = {};

		/// \brief Column [sChallengeList_10]: Challenge list 10
		///
		/// \property ChallengeList10
		int16_t ChallengeList10 = {};

		/// \brief Column [byWarRequestDay]: War request day
		///
		/// \property WarRequestDay
		uint8_t WarRequestDay = {};

		/// \brief Column [byWarRequestTime]: War request time
		///
		/// \property WarRequestTime
		uint8_t WarRequestTime = {};

		/// \brief Column [byWarRequestMinute]: War request minute
		///
		/// \property WarRequestMinute
		uint8_t WarRequestMinute = {};

		/// \brief Column [byGuerrillaWarDay]: Guerrilla war day
		///
		/// \property GuerrillaWarDay
		uint8_t GuerrillaWarDay = {};

		/// \brief Column [byGuerrillaWarTime]: Guerrilla war time
		///
		/// \property GuerrillaWarTime
		uint8_t GuerrillaWarTime = {};

		/// \brief Column [byGuerrillaWarMinute]: Guerrilla war minute
		///
		/// \property GuerrillaWarMinute
		uint8_t GuerrillaWarMinute = {};

		/// \brief Column [strChallengeList]: Challenge list
		///
		/// \property ChallengeList
		std::optional<std::vector<uint8_t>> ChallengeList;

		/// \brief Column [sMoradonTariff]: Moradon tariff
		///
		/// \property MoradonTariff
		int16_t MoradonTariff = {};

		/// \brief Column [sDellosTariff]: Delos tariff
		///
		/// \property DelosTariff
		int16_t DelosTariff = {};

		/// \brief Column [nDungeonCharge]: Dungeon charge
		///
		/// \property DungeonCharge
		int32_t DungeonCharge = {};

		/// \brief Column [nMoradonTax]: Moradon tax
		///
		/// \property MoradonTax
		int32_t MoradonTax = {};

		/// \brief Column [nDellosTax]: Delos tax
		///
		/// \property DelosTax
		int32_t DelosTax = {};

		/// \brief Column [sRequestList_1]: Request list 1
		///
		/// \property RequestList1
		int16_t RequestList1 = {};

		/// \brief Column [sRequestList_2]: Request list 2
		///
		/// \property RequestList2
		int16_t RequestList2 = {};

		/// \brief Column [sRequestList_3]: Request list 3
		///
		/// \property RequestList3
		int16_t RequestList3 = {};

		/// \brief Column [sRequestList_4]: Request list 4
		///
		/// \property RequestList4
		int16_t RequestList4 = {};

		/// \brief Column [sRequestList_5]: Request list 5
		///
		/// \property RequestList5
		int16_t RequestList5 = {};

		/// \brief Column [sRequestList_6]: Request list 6
		///
		/// \property RequestList6
		int16_t RequestList6 = {};

		/// \brief Column [sRequestList_7]: Request list 7
		///
		/// \property RequestList7
		int16_t RequestList7 = {};

		/// \brief Column [sRequestList_8]: Request list 8
		///
		/// \property RequestList8
		int16_t RequestList8 = {};

		/// \brief Column [sRequestList_9]: Request list 9
		///
		/// \property RequestList9
		int16_t RequestList9 = {};

		/// \brief Column [sRequestList_10]: Request list 10
		///
		/// \property RequestList10
		int16_t RequestList10 = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS_SIEGE_WARFARE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sCastleIndex", "sMasterKnights", "bySiegeType", "byWarDay", "byWarTime", "byWarMinute", "sChallengeList_1", "sChallengeList_2", "sChallengeList_3", "sChallengeList_4", "sChallengeList_5", "sChallengeList_6", "sChallengeList_7", "sChallengeList_8", "sChallengeList_9", "sChallengeList_10", "byWarRequestDay", "byWarRequestTime", "byWarRequestMinute", "byGuerrillaWarDay", "byGuerrillaWarTime", "byGuerrillaWarMinute", "strChallengeList", "sMoradonTariff", "sDellosTariff", "nDungeonCharge", "nMoradonTax", "nDellosTax", "sRequestList_1", "sRequestList_2", "sRequestList_3", "sRequestList_4", "sRequestList_5", "sRequestList_6", "sRequestList_7", "sRequestList_8", "sRequestList_9", "sRequestList_10"
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
				"sCastleIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return CastleIndex;
		}

	};
}
