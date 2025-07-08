module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:Knights;

namespace model
{
	class Knights;

	/// \brief generated column binder for the Knights model, using nanodbc
	export class KnightsBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(Knights& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"IDNum", &KnightsBinder::BindIdNumber},
				{"Flag", &KnightsBinder::BindFlag},
				{"Nation", &KnightsBinder::BindNation},
				{"Ranking", &KnightsBinder::BindRanking},
				{"IDName", &KnightsBinder::BindName},
				{"Members", &KnightsBinder::BindMembers},
				{"Chief", &KnightsBinder::BindChief},
				{"ViceChief_1", &KnightsBinder::BindViceChief1},
				{"ViceChief_2", &KnightsBinder::BindViceChief2},
				{"ViceChief_3", &KnightsBinder::BindViceChief3},
				{"strEnemyName", &KnightsBinder::BindEnemyName},
				{"byOldWarResult", &KnightsBinder::BindOldWarResult},
				{"nWarEnemyID", &KnightsBinder::BindWarEnemyId},
				{"nVictory", &KnightsBinder::BindVictory},
				{"nLose", &KnightsBinder::BindLose},
				{"Gold", &KnightsBinder::BindGold},
				{"Domination", &KnightsBinder::BindDomination},
				{"Points", &KnightsBinder::BindPoints},
				{"CreateTime", &KnightsBinder::BindCreateTime},
				{"sMarkVersion", &KnightsBinder::BindMarkVersion},
				{"sMarkLen", &KnightsBinder::BindMarkLength},
				{"Mark", &KnightsBinder::BindMark},
				{"Stash", &KnightsBinder::BindStash},
				{"bySiegeFlag", &KnightsBinder::BindSiegeFlag},
				{"sAllianceKnights", &KnightsBinder::BindAllianceKnights},
				{"sCape", &KnightsBinder::BindCape}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to IdNumber
		static void BindIdNumber(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IdNumber);
		}

		/// \brief Binds a result's column to Flag
		static void BindFlag(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Flag);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Ranking
		static void BindRanking(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Ranking);
		}

		/// \brief Binds a result's column to Name
		static void BindName(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Members
		static void BindMembers(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Members);
		}

		/// \brief Binds a result's column to Chief
		static void BindChief(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Chief);
		}

		/// \brief Binds a result's column to ViceChief1
		static void BindViceChief1(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief1);
		}

		/// \brief Binds a result's column to ViceChief2
		static void BindViceChief2(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief2);
		}

		/// \brief Binds a result's column to ViceChief3
		static void BindViceChief3(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief3);
		}

		/// \brief Binds a result's column to EnemyName
		static void BindEnemyName(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.EnemyName);
		}

		/// \brief Binds a result's column to OldWarResult
		static void BindOldWarResult(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.OldWarResult);
		}

		/// \brief Binds a result's column to WarEnemyId
		static void BindWarEnemyId(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.WarEnemyId);
		}

		/// \brief Binds a result's column to Victory
		static void BindVictory(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Victory);
		}

		/// \brief Binds a result's column to Lose
		static void BindLose(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Lose);
		}

		/// \brief Binds a result's column to Gold
		static void BindGold(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.Gold);
		}

		/// \brief Binds a result's column to Domination
		static void BindDomination(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Domination);
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.Points);
		}

		/// \brief Binds a result's column to CreateTime
		static void BindCreateTime(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.CreateTime);
		}

		/// \brief Binds a result's column to MarkVersion
		static void BindMarkVersion(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MarkVersion);
		}

		/// \brief Binds a result's column to MarkLength
		static void BindMarkLength(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MarkLength);
		}

		/// \brief Binds a result's column to Mark
		static void BindMark(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Mark);
		}

		/// \brief Binds a result's column to Stash
		static void BindStash(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Stash);
		}

		/// \brief Binds a result's column to SiegeFlag
		static void BindSiegeFlag(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SiegeFlag);
		}

		/// \brief Binds a result's column to AllianceKnights
		static void BindAllianceKnights(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AllianceKnights);
		}

		/// \brief Binds a result's column to Cape
		static void BindCape(Knights& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Cape);
		}

	};
}
