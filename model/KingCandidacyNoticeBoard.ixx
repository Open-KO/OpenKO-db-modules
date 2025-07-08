module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:KingCandidacyNoticeBoard;

namespace model
{
	class KingCandidacyNoticeBoardBinder;
	
	/// \brief [KING_CANDIDACY_NOTICE_BOARD] King candidacy notice board
	/// \class KingCandidacyNoticeBoard
	/// \xrefitem gamedb "Game Database" "Game Database" KING_CANDIDACY_NOTICE_BOARD
	export class KingCandidacyNoticeBoard 
	{
	/// \publicsection
	public:
		using BinderType = KingCandidacyNoticeBoardBinder;

		/// \brief Column [strUserID]: Candidate identifier
		///
		/// \property CandidateId
		std::string CandidateId;

		/// \brief Column [byNation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = 0;

		/// \brief Column [sNoticeLen]: Notice length
		///
		/// \property NoticeLength
		int16_t NoticeLength = 0;

		/// \brief Column [strNotice]: Candidate notice
		///
		/// \property Notice
		std::vector<uint8_t> Notice;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KING_CANDIDACY_NOTICE_BOARD";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strUserID", "byNation", "sNoticeLen", "strNotice"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
