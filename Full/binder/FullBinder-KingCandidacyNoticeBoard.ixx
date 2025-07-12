module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:KingCandidacyNoticeBoard;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::KingCandidacyNoticeBoard
	export class KingCandidacyNoticeBoard
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserID", &KingCandidacyNoticeBoard::BindCandidateId},
				{"byNation", &KingCandidacyNoticeBoard::BindNation},
				{"sNoticeLen", &KingCandidacyNoticeBoard::BindNoticeLength},
				{"strNotice", &KingCandidacyNoticeBoard::BindNotice}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CandidateId
		static void BindCandidateId(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CandidateId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NoticeLength
		static void BindNoticeLength(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoticeLength);
		}

		/// \brief Binds a result's column to Notice
		static void BindNotice(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.Notice);
		}

	};
}
