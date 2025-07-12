module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:Knights;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::Knights
	export class Knights
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Knights& m, const nanodbc::result& result, short colIndex);

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
		static void BindIdNumber(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IdNumber);
		}

		/// \brief Binds a result's column to Flag
		static void BindFlag(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.Flag = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Ranking
		static void BindRanking(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.Ranking = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Members
		static void BindMembers(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Members);
		}

		/// \brief Binds a result's column to Chief
		static void BindChief(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Chief);
		}

		/// \brief Binds a result's column to ViceChief1
		static void BindViceChief1(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ViceChief1.reset();
			}
			else
			{
				m.ViceChief1 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ViceChief2
		static void BindViceChief2(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ViceChief2.reset();
			}
			else
			{
				m.ViceChief2 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ViceChief3
		static void BindViceChief3(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ViceChief3.reset();
			}
			else
			{
				m.ViceChief3 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to EnemyName
		static void BindEnemyName(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.EnemyName.reset();
			}
			else
			{
				m.EnemyName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to OldWarResult
		static void BindOldWarResult(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.OldWarResult = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarEnemyId
		static void BindWarEnemyId(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.WarEnemyId);
		}

		/// \brief Binds a result's column to Victory
		static void BindVictory(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Victory);
		}

		/// \brief Binds a result's column to Lose
		static void BindLose(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Lose);
		}

		/// \brief Binds a result's column to Gold
		static void BindGold(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.Gold);
		}

		/// \brief Binds a result's column to Domination
		static void BindDomination(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Domination);
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Points.reset();
			}
			else
			{
				m.Points = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to CreateTime
		static void BindCreateTime(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.CreateTime);
		}

		/// \brief Binds a result's column to MarkVersion
		static void BindMarkVersion(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MarkVersion);
		}

		/// \brief Binds a result's column to MarkLength
		static void BindMarkLength(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MarkLength);
		}

		/// \brief Binds a result's column to Mark
		static void BindMark(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Mark.reset();
			}
			else
			{
				m.Mark = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to Stash
		static void BindStash(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Stash.reset();
			}
			else
			{
				m.Stash = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to SiegeFlag
		static void BindSiegeFlag(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.SiegeFlag = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to AllianceKnights
		static void BindAllianceKnights(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AllianceKnights);
		}

		/// \brief Binds a result's column to Cape
		static void BindCape(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Cape);
		}

	};
}
