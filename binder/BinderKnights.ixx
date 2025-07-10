module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:Knights;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderKnights
	export class KnightsBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::Knights& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"IDNum", &Knights::BindIdNumber},
				{"Flag", &Knights::BindFlag},
				{"Nation", &Knights::BindNation},
				{"Ranking", &Knights::BindRanking},
				{"IDName", &Knights::BindName},
				{"Members", &Knights::BindMembers},
				{"Chief", &Knights::BindChief},
				{"ViceChief_1", &Knights::BindViceChief1},
				{"ViceChief_2", &Knights::BindViceChief2},
				{"ViceChief_3", &Knights::BindViceChief3},
				{"strEnemyName", &Knights::BindEnemyName},
				{"byOldWarResult", &Knights::BindOldWarResult},
				{"nWarEnemyID", &Knights::BindWarEnemyId},
				{"nVictory", &Knights::BindVictory},
				{"nLose", &Knights::BindLose},
				{"Gold", &Knights::BindGold},
				{"Domination", &Knights::BindDomination},
				{"Points", &Knights::BindPoints},
				{"CreateTime", &Knights::BindCreateTime},
				{"sMarkVersion", &Knights::BindMarkVersion},
				{"sMarkLen", &Knights::BindMarkLength},
				{"Mark", &Knights::BindMark},
				{"Stash", &Knights::BindStash},
				{"bySiegeFlag", &Knights::BindSiegeFlag},
				{"sAllianceKnights", &Knights::BindAllianceKnights},
				{"sCape", &Knights::BindCape}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to IdNumber
		static void BindIdNumber(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IdNumber);
		}

		/// \brief Binds a result's column to Flag
		static void BindFlag(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Flag);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Ranking
		static void BindRanking(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Ranking);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Members
		static void BindMembers(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Members);
		}

		/// \brief Binds a result's column to Chief
		static void BindChief(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Chief);
		}

		/// \brief Binds a result's column to ViceChief1
		static void BindViceChief1(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.ViceChief1 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ViceChief2
		static void BindViceChief2(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.ViceChief2 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ViceChief3
		static void BindViceChief3(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.ViceChief3 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to EnemyName
		static void BindEnemyName(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.EnemyName = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to OldWarResult
		static void BindOldWarResult(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OldWarResult);
		}

		/// \brief Binds a result's column to WarEnemyId
		static void BindWarEnemyId(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.WarEnemyId);
		}

		/// \brief Binds a result's column to Victory
		static void BindVictory(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Victory);
		}

		/// \brief Binds a result's column to Lose
		static void BindLose(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Lose);
		}

		/// \brief Binds a result's column to Gold
		static void BindGold(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.Gold);
		}

		/// \brief Binds a result's column to Domination
		static void BindDomination(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Domination);
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.Points = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to CreateTime
		static void BindCreateTime(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.CreateTime);
		}

		/// \brief Binds a result's column to MarkVersion
		static void BindMarkVersion(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MarkVersion);
		}

		/// \brief Binds a result's column to MarkLength
		static void BindMarkLength(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MarkLength);
		}

		/// \brief Binds a result's column to Mark
		static void BindMark(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.Mark = result.get<std::vector<uint8_t>>(colIndex);
		}

		/// \brief Binds a result's column to Stash
		static void BindStash(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.Stash = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to SiegeFlag
		static void BindSiegeFlag(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SiegeFlag);
		}

		/// \brief Binds a result's column to AllianceKnights
		static void BindAllianceKnights(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AllianceKnights);
		}

		/// \brief Binds a result's column to Cape
		static void BindCape(model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Cape);
		}

	};
}
