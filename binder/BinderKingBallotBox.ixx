module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:KingBallotBox;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderKingBallotBox
	export class KingBallotBoxBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::KingBallotBox& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &KingBallotBoxBinder::BindAccountId},
				{"strCharID", &KingBallotBoxBinder::BindCharId},
				{"byNation", &KingBallotBoxBinder::BindNation},
				{"strCandidacyID", &KingBallotBoxBinder::BindCandidateId}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to CandidateId
		static void BindCandidateId(model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CandidateId);
		}

	};
}
