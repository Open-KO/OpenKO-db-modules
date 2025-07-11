module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:KingBallotBox;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::KingBallotBox
	export class KingBallotBox
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &KingBallotBox::BindAccountId},
				{"strCharID", &KingBallotBox::BindCharId},
				{"byNation", &KingBallotBox::BindNation},
				{"strCandidacyID", &KingBallotBox::BindCandidateId}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to CandidateId
		static void BindCandidateId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CandidateId);
		}

	};
}
