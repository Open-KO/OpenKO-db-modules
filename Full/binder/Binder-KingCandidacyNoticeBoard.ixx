module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:KingCandidacyNoticeBoard;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::KingCandidacyNoticeBoard
	export class KingCandidacyNoticeBoard
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex);

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
		static void BindCandidateId(model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CandidateId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to NoticeLength
		static void BindNoticeLength(model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoticeLength);
		}

		/// \brief Binds a result's column to Notice
		static void BindNotice(model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.Notice);
		}

	};
}
