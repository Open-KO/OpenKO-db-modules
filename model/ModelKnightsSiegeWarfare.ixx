module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module Model:KnightsSiegeWarfare;

namespace binder
{
	export class KnightsSiegeWarfare;
}

namespace model
{
	/// \brief [KNIGHTS_SIEGE_WARFARE] Knights Siege Warfare
	/// \class KnightsSiegeWarfare
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_SIEGE_WARFARE Knights Siege Warfare
	export class KnightsSiegeWarfare 
	{
	/// \publicsection
	public:
		using BinderType = binder::KnightsSiegeWarfare;

		/// \brief Column [sCastleIndex]: Castle index TODO
		///
		/// \property CastleIndex
		int16_t CastleIndex = 0;

		/// \brief Column [sMasterKnights]: Master knights TODO
		///
		/// \property MasterKnights
		int16_t MasterKnights = 0;

		/// \brief Column [bySiegeType]: Siege type TODO
		///
		/// \property SiegeType
		int16_t SiegeType = 0;

		/// \brief Column [byWarDay]: War day
		///
		/// \property WarDay
		int16_t WarDay = 0;

		/// \brief Column [byWarTime]: War hour
		///
		/// \property WarHour
		int16_t WarHour = 0;

		/// \brief Column [byWarMinute]: War minute
		///
		/// \property WarMinute
		int16_t WarMinute = 0;

		/// \brief Column [sChallengeList_1]: Challenge list 1
		///
		/// \property ChallengeList1
		int16_t ChallengeList1 = 0;

		/// \brief Column [sChallengeList_2]: Challenge list 2
		///
		/// \property ChallengeList2
		int16_t ChallengeList2 = 0;

		/// \brief Column [sChallengeList_3]: Challenge list 3
		///
		/// \property ChallengeList3
		int16_t ChallengeList3 = 0;

		/// \brief Column [sChallengeList_4]: Challenge list 4
		///
		/// \property ChallengeList4
		int16_t ChallengeList4 = 0;

		/// \brief Column [sChallengeList_5]: Challenge list 5
		///
		/// \property ChallengeList5
		int16_t ChallengeList5 = 0;

		/// \brief Column [sChallengeList_6]: Challenge list 6
		///
		/// \property ChallengeList6
		int16_t ChallengeList6 = 0;

		/// \brief Column [sChallengeList_7]: Challenge list 7
		///
		/// \property ChallengeList7
		int16_t ChallengeList7 = 0;

		/// \brief Column [sChallengeList_8]: Challenge list 8
		///
		/// \property ChallengeList8
		int16_t ChallengeList8 = 0;

		/// \brief Column [sChallengeList_9]: Challenge list 9
		///
		/// \property ChallengeList9
		int16_t ChallengeList9 = 0;

		/// \brief Column [sChallengeList_10]: Challenge list 10
		///
		/// \property ChallengeList10
		int16_t ChallengeList10 = 0;

		/// \brief Column [byWarRequestDay]: War request day
		///
		/// \property WarRequestDay
		int16_t WarRequestDay = 0;

		/// \brief Column [byWarRequestTime]: War request time
		///
		/// \property WarRequestTime
		int16_t WarRequestTime = 0;

		/// \brief Column [byWarRequestMinute]: War request minute
		///
		/// \property WarRequestMinute
		int16_t WarRequestMinute = 0;

		/// \brief Column [byGuerrillaWarDay]: Guerrilla war day
		///
		/// \property GuerrillaWarDay
		int16_t GuerrillaWarDay = 0;

		/// \brief Column [byGuerrillaWarTime]: Guerrilla war time
		///
		/// \property GuerrillaWarTime
		int16_t GuerrillaWarTime = 0;

		/// \brief Column [byGuerrillaWarMinute]: Guerrilla war minute
		///
		/// \property GuerrillaWarMinute
		int16_t GuerrillaWarMinute = 0;

		/// \brief Column [strChallengeList]: Challenge list
		///
		/// \property ChallengeList
		std::optional<std::vector<uint8_t>> ChallengeList;

		/// \brief Column [sMoradonTariff]: Moradon tariff
		///
		/// \property MoradonTariff
		int16_t MoradonTariff = 0;

		/// \brief Column [sDellosTariff]: Delos tariff
		///
		/// \property DelosTariff
		int16_t DelosTariff = 0;

		/// \brief Column [nDungeonCharge]: Dungeon charge
		///
		/// \property DungeonCharge
		int32_t DungeonCharge = 0;

		/// \brief Column [nMoradonTax]: Moradon tax
		///
		/// \property MoradonTax
		int32_t MoradonTax = 0;

		/// \brief Column [nDellosTax]: Delos tax
		///
		/// \property DelosTax
		int32_t DelosTax = 0;

		/// \brief Column [sRequestList_1]: Request list 1
		///
		/// \property RequestList1
		int16_t RequestList1 = 0;

		/// \brief Column [sRequestList_2]: Request list 2
		///
		/// \property RequestList2
		int16_t RequestList2 = 0;

		/// \brief Column [sRequestList_3]: Request list 3
		///
		/// \property RequestList3
		int16_t RequestList3 = 0;

		/// \brief Column [sRequestList_4]: Request list 4
		///
		/// \property RequestList4
		int16_t RequestList4 = 0;

		/// \brief Column [sRequestList_5]: Request list 5
		///
		/// \property RequestList5
		int16_t RequestList5 = 0;

		/// \brief Column [sRequestList_6]: Request list 6
		///
		/// \property RequestList6
		int16_t RequestList6 = 0;

		/// \brief Column [sRequestList_7]: Request list 7
		///
		/// \property RequestList7
		int16_t RequestList7 = 0;

		/// \brief Column [sRequestList_8]: Request list 8
		///
		/// \property RequestList8
		int16_t RequestList8 = 0;

		/// \brief Column [sRequestList_9]: Request list 9
		///
		/// \property RequestList9
		int16_t RequestList9 = 0;

		/// \brief Column [sRequestList_10]: Request list 10
		///
		/// \property RequestList10
		int16_t RequestList10 = 0;

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

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
