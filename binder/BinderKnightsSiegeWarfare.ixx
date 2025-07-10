module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:KnightsSiegeWarfare;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderKnightsSiegeWarfare
	export class KnightsSiegeWarfareBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sCastleIndex", &KnightsSiegeWarfareBinder::BindCastleIndex},
				{"sMasterKnights", &KnightsSiegeWarfareBinder::BindMasterKnights},
				{"bySiegeType", &KnightsSiegeWarfareBinder::BindSiegeType},
				{"byWarDay", &KnightsSiegeWarfareBinder::BindWarDay},
				{"byWarTime", &KnightsSiegeWarfareBinder::BindWarHour},
				{"byWarMinute", &KnightsSiegeWarfareBinder::BindWarMinute},
				{"sChallengeList_1", &KnightsSiegeWarfareBinder::BindChallengeList1},
				{"sChallengeList_2", &KnightsSiegeWarfareBinder::BindChallengeList2},
				{"sChallengeList_3", &KnightsSiegeWarfareBinder::BindChallengeList3},
				{"sChallengeList_4", &KnightsSiegeWarfareBinder::BindChallengeList4},
				{"sChallengeList_5", &KnightsSiegeWarfareBinder::BindChallengeList5},
				{"sChallengeList_6", &KnightsSiegeWarfareBinder::BindChallengeList6},
				{"sChallengeList_7", &KnightsSiegeWarfareBinder::BindChallengeList7},
				{"sChallengeList_8", &KnightsSiegeWarfareBinder::BindChallengeList8},
				{"sChallengeList_9", &KnightsSiegeWarfareBinder::BindChallengeList9},
				{"sChallengeList_10", &KnightsSiegeWarfareBinder::BindChallengeList10},
				{"byWarRequestDay", &KnightsSiegeWarfareBinder::BindWarRequestDay},
				{"byWarRequestTime", &KnightsSiegeWarfareBinder::BindWarRequestTime},
				{"byWarRequestMinute", &KnightsSiegeWarfareBinder::BindWarRequestMinute},
				{"byGuerrillaWarDay", &KnightsSiegeWarfareBinder::BindGuerrillaWarDay},
				{"byGuerrillaWarTime", &KnightsSiegeWarfareBinder::BindGuerrillaWarTime},
				{"byGuerrillaWarMinute", &KnightsSiegeWarfareBinder::BindGuerrillaWarMinute},
				{"strChallengeList", &KnightsSiegeWarfareBinder::BindChallengeList},
				{"sMoradonTariff", &KnightsSiegeWarfareBinder::BindMoradonTariff},
				{"sDellosTariff", &KnightsSiegeWarfareBinder::BindDelosTariff},
				{"nDungeonCharge", &KnightsSiegeWarfareBinder::BindDungeonCharge},
				{"nMoradonTax", &KnightsSiegeWarfareBinder::BindMoradonTax},
				{"nDellosTax", &KnightsSiegeWarfareBinder::BindDelosTax},
				{"sRequestList_1", &KnightsSiegeWarfareBinder::BindRequestList1},
				{"sRequestList_2", &KnightsSiegeWarfareBinder::BindRequestList2},
				{"sRequestList_3", &KnightsSiegeWarfareBinder::BindRequestList3},
				{"sRequestList_4", &KnightsSiegeWarfareBinder::BindRequestList4},
				{"sRequestList_5", &KnightsSiegeWarfareBinder::BindRequestList5},
				{"sRequestList_6", &KnightsSiegeWarfareBinder::BindRequestList6},
				{"sRequestList_7", &KnightsSiegeWarfareBinder::BindRequestList7},
				{"sRequestList_8", &KnightsSiegeWarfareBinder::BindRequestList8},
				{"sRequestList_9", &KnightsSiegeWarfareBinder::BindRequestList9},
				{"sRequestList_10", &KnightsSiegeWarfareBinder::BindRequestList10}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CastleIndex
		static void BindCastleIndex(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CastleIndex);
		}

		/// \brief Binds a result's column to MasterKnights
		static void BindMasterKnights(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MasterKnights);
		}

		/// \brief Binds a result's column to SiegeType
		static void BindSiegeType(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SiegeType);
		}

		/// \brief Binds a result's column to WarDay
		static void BindWarDay(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.WarDay);
		}

		/// \brief Binds a result's column to WarHour
		static void BindWarHour(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.WarHour);
		}

		/// \brief Binds a result's column to WarMinute
		static void BindWarMinute(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.WarMinute);
		}

		/// \brief Binds a result's column to ChallengeList1
		static void BindChallengeList1(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList1);
		}

		/// \brief Binds a result's column to ChallengeList2
		static void BindChallengeList2(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList2);
		}

		/// \brief Binds a result's column to ChallengeList3
		static void BindChallengeList3(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList3);
		}

		/// \brief Binds a result's column to ChallengeList4
		static void BindChallengeList4(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList4);
		}

		/// \brief Binds a result's column to ChallengeList5
		static void BindChallengeList5(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList5);
		}

		/// \brief Binds a result's column to ChallengeList6
		static void BindChallengeList6(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList6);
		}

		/// \brief Binds a result's column to ChallengeList7
		static void BindChallengeList7(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList7);
		}

		/// \brief Binds a result's column to ChallengeList8
		static void BindChallengeList8(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList8);
		}

		/// \brief Binds a result's column to ChallengeList9
		static void BindChallengeList9(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList9);
		}

		/// \brief Binds a result's column to ChallengeList10
		static void BindChallengeList10(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList10);
		}

		/// \brief Binds a result's column to WarRequestDay
		static void BindWarRequestDay(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.WarRequestDay);
		}

		/// \brief Binds a result's column to WarRequestTime
		static void BindWarRequestTime(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.WarRequestTime);
		}

		/// \brief Binds a result's column to WarRequestMinute
		static void BindWarRequestMinute(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.WarRequestMinute);
		}

		/// \brief Binds a result's column to GuerrillaWarDay
		static void BindGuerrillaWarDay(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GuerrillaWarDay);
		}

		/// \brief Binds a result's column to GuerrillaWarTime
		static void BindGuerrillaWarTime(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GuerrillaWarTime);
		}

		/// \brief Binds a result's column to GuerrillaWarMinute
		static void BindGuerrillaWarMinute(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GuerrillaWarMinute);
		}

		/// \brief Binds a result's column to ChallengeList
		static void BindChallengeList(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.ChallengeList = result.get<std::vector<uint8_t>>(colIndex);
		}

		/// \brief Binds a result's column to MoradonTariff
		static void BindMoradonTariff(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MoradonTariff);
		}

		/// \brief Binds a result's column to DelosTariff
		static void BindDelosTariff(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DelosTariff);
		}

		/// \brief Binds a result's column to DungeonCharge
		static void BindDungeonCharge(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DungeonCharge);
		}

		/// \brief Binds a result's column to MoradonTax
		static void BindMoradonTax(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MoradonTax);
		}

		/// \brief Binds a result's column to DelosTax
		static void BindDelosTax(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DelosTax);
		}

		/// \brief Binds a result's column to RequestList1
		static void BindRequestList1(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList1);
		}

		/// \brief Binds a result's column to RequestList2
		static void BindRequestList2(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList2);
		}

		/// \brief Binds a result's column to RequestList3
		static void BindRequestList3(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList3);
		}

		/// \brief Binds a result's column to RequestList4
		static void BindRequestList4(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList4);
		}

		/// \brief Binds a result's column to RequestList5
		static void BindRequestList5(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList5);
		}

		/// \brief Binds a result's column to RequestList6
		static void BindRequestList6(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList6);
		}

		/// \brief Binds a result's column to RequestList7
		static void BindRequestList7(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList7);
		}

		/// \brief Binds a result's column to RequestList8
		static void BindRequestList8(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList8);
		}

		/// \brief Binds a result's column to RequestList9
		static void BindRequestList9(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList9);
		}

		/// \brief Binds a result's column to RequestList10
		static void BindRequestList10(model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList10);
		}

	};
}
