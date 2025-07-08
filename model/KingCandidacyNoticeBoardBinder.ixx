module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:KingCandidacyNoticeBoardBinder;

import :KingCandidacyNoticeBoard;

namespace model
{
	/// \brief generated column binder for the KingCandidacyNoticeBoard model, using nanodbc
	export class KingCandidacyNoticeBoardBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserID", &KingCandidacyNoticeBoardBinder::BindCandidateId},
				{"byNation", &KingCandidacyNoticeBoardBinder::BindNation},
				{"sNoticeLen", &KingCandidacyNoticeBoardBinder::BindNoticeLength},
				{"strNotice", &KingCandidacyNoticeBoardBinder::BindNotice}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CandidateId
		static void BindCandidateId(KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CandidateId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to NoticeLength
		static void BindNoticeLength(KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoticeLength);
		}

		/// \brief Binds a result's column to Notice
		static void BindNotice(KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.Notice);
		}

	};
}
