module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module Model:KingCandidacyNoticeBoard;

namespace binder
{
	export class KingCandidacyNoticeBoardBinder;
}

namespace model
{

	export class KingCandidacyNoticeBoard 
	{
	/// \publicsection
	public:
		using BinderType = binder::KingCandidacyNoticeBoardBinder;

		/// \brief Column [strUserID]: Candidate identifier
		///
		/// \property CandidateId
		std::string CandidateId;

		/// \brief Column [byNation]: Nation identifier
		///
		/// \property Nation
		int16_t Nation = 0;

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
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strUserID", "byNation", "sNoticeLen", "strNotice"
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
