module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:KingBallotBox;

import ModelUtil;

namespace full_binder
{
	export class KingBallotBox;
}

namespace full_model
{
	/// \brief [KING_BALLOT_BOX] King Ballot Box TODO
	/// \class KingBallotBox
	/// \xrefitem gamedb "Game Database" "Game Database" KING_BALLOT_BOX King Ballot Box TODO
	export class KingBallotBox 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KingBallotBox;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [byNation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = 0;

		/// \brief Column [strCandidacyID]: Candidate identifier
		///
		/// \property CandidateId
		std::string CandidateId;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KING_BALLOT_BOX";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "strCharID", "byNation", "strCandidacyID"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};
}
