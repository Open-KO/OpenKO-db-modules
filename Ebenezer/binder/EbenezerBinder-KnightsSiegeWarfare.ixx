module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:KnightsSiegeWarfare;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::KnightsSiegeWarfare
	export class KnightsSiegeWarfare
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sCastleIndex", &KnightsSiegeWarfare::BindCastleIndex},
				{"sMasterKnights", &KnightsSiegeWarfare::BindMasterKnights},
				{"bySiegeType", &KnightsSiegeWarfare::BindSiegeType},
				{"byWarDay", &KnightsSiegeWarfare::BindWarDay},
				{"byWarTime", &KnightsSiegeWarfare::BindWarHour},
				{"byWarMinute", &KnightsSiegeWarfare::BindWarMinute},
				{"sChallengeList_1", &KnightsSiegeWarfare::BindChallengeList1},
				{"sChallengeList_2", &KnightsSiegeWarfare::BindChallengeList2},
				{"sChallengeList_3", &KnightsSiegeWarfare::BindChallengeList3},
				{"sChallengeList_4", &KnightsSiegeWarfare::BindChallengeList4},
				{"sChallengeList_5", &KnightsSiegeWarfare::BindChallengeList5},
				{"sChallengeList_6", &KnightsSiegeWarfare::BindChallengeList6},
				{"sChallengeList_7", &KnightsSiegeWarfare::BindChallengeList7},
				{"sChallengeList_8", &KnightsSiegeWarfare::BindChallengeList8},
				{"sChallengeList_9", &KnightsSiegeWarfare::BindChallengeList9},
				{"sChallengeList_10", &KnightsSiegeWarfare::BindChallengeList10},
				{"byWarRequestDay", &KnightsSiegeWarfare::BindWarRequestDay},
				{"byWarRequestTime", &KnightsSiegeWarfare::BindWarRequestTime},
				{"byWarRequestMinute", &KnightsSiegeWarfare::BindWarRequestMinute},
				{"byGuerrillaWarDay", &KnightsSiegeWarfare::BindGuerrillaWarDay},
				{"byGuerrillaWarTime", &KnightsSiegeWarfare::BindGuerrillaWarTime},
				{"byGuerrillaWarMinute", &KnightsSiegeWarfare::BindGuerrillaWarMinute},
				{"strChallengeList", &KnightsSiegeWarfare::BindChallengeList},
				{"sMoradonTariff", &KnightsSiegeWarfare::BindMoradonTariff},
				{"sDellosTariff", &KnightsSiegeWarfare::BindDelosTariff},
				{"nDungeonCharge", &KnightsSiegeWarfare::BindDungeonCharge},
				{"nMoradonTax", &KnightsSiegeWarfare::BindMoradonTax},
				{"nDellosTax", &KnightsSiegeWarfare::BindDelosTax},
				{"sRequestList_1", &KnightsSiegeWarfare::BindRequestList1},
				{"sRequestList_2", &KnightsSiegeWarfare::BindRequestList2},
				{"sRequestList_3", &KnightsSiegeWarfare::BindRequestList3},
				{"sRequestList_4", &KnightsSiegeWarfare::BindRequestList4},
				{"sRequestList_5", &KnightsSiegeWarfare::BindRequestList5},
				{"sRequestList_6", &KnightsSiegeWarfare::BindRequestList6},
				{"sRequestList_7", &KnightsSiegeWarfare::BindRequestList7},
				{"sRequestList_8", &KnightsSiegeWarfare::BindRequestList8},
				{"sRequestList_9", &KnightsSiegeWarfare::BindRequestList9},
				{"sRequestList_10", &KnightsSiegeWarfare::BindRequestList10}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CastleIndex
		static void BindCastleIndex(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CastleIndex);
		}

		/// \brief Binds a result's column to MasterKnights
		static void BindMasterKnights(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MasterKnights);
		}

		/// \brief Binds a result's column to SiegeType
		static void BindSiegeType(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.SiegeType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarDay
		static void BindWarDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarDay = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarHour
		static void BindWarHour(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarHour = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarMinute
		static void BindWarMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarMinute = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ChallengeList1
		static void BindChallengeList1(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList1);
		}

		/// \brief Binds a result's column to ChallengeList2
		static void BindChallengeList2(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList2);
		}

		/// \brief Binds a result's column to ChallengeList3
		static void BindChallengeList3(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList3);
		}

		/// \brief Binds a result's column to ChallengeList4
		static void BindChallengeList4(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList4);
		}

		/// \brief Binds a result's column to ChallengeList5
		static void BindChallengeList5(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList5);
		}

		/// \brief Binds a result's column to ChallengeList6
		static void BindChallengeList6(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList6);
		}

		/// \brief Binds a result's column to ChallengeList7
		static void BindChallengeList7(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList7);
		}

		/// \brief Binds a result's column to ChallengeList8
		static void BindChallengeList8(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList8);
		}

		/// \brief Binds a result's column to ChallengeList9
		static void BindChallengeList9(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList9);
		}

		/// \brief Binds a result's column to ChallengeList10
		static void BindChallengeList10(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList10);
		}

		/// \brief Binds a result's column to WarRequestDay
		static void BindWarRequestDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarRequestDay = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarRequestTime
		static void BindWarRequestTime(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarRequestTime = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarRequestMinute
		static void BindWarRequestMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarRequestMinute = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to GuerrillaWarDay
		static void BindGuerrillaWarDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.GuerrillaWarDay = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to GuerrillaWarTime
		static void BindGuerrillaWarTime(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.GuerrillaWarTime = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to GuerrillaWarMinute
		static void BindGuerrillaWarMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.GuerrillaWarMinute = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ChallengeList
		static void BindChallengeList(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ChallengeList.reset();
			}
			else
			{
				m.ChallengeList = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoradonTariff
		static void BindMoradonTariff(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MoradonTariff);
		}

		/// \brief Binds a result's column to DelosTariff
		static void BindDelosTariff(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DelosTariff);
		}

		/// \brief Binds a result's column to DungeonCharge
		static void BindDungeonCharge(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DungeonCharge);
		}

		/// \brief Binds a result's column to MoradonTax
		static void BindMoradonTax(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MoradonTax);
		}

		/// \brief Binds a result's column to DelosTax
		static void BindDelosTax(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DelosTax);
		}

		/// \brief Binds a result's column to RequestList1
		static void BindRequestList1(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList1);
		}

		/// \brief Binds a result's column to RequestList2
		static void BindRequestList2(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList2);
		}

		/// \brief Binds a result's column to RequestList3
		static void BindRequestList3(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList3);
		}

		/// \brief Binds a result's column to RequestList4
		static void BindRequestList4(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList4);
		}

		/// \brief Binds a result's column to RequestList5
		static void BindRequestList5(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList5);
		}

		/// \brief Binds a result's column to RequestList6
		static void BindRequestList6(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList6);
		}

		/// \brief Binds a result's column to RequestList7
		static void BindRequestList7(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList7);
		}

		/// \brief Binds a result's column to RequestList8
		static void BindRequestList8(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList8);
		}

		/// \brief Binds a result's column to RequestList9
		static void BindRequestList9(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList9);
		}

		/// \brief Binds a result's column to RequestList10
		static void BindRequestList10(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList10);
		}

	};
}
