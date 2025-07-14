module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:KingCandidacyNoticeBoardProc;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingCandidacyNoticeBoardProc
	export class KingCandidacyNoticeBoardProc : public StoredProcedure
	{
	public:
		KingCandidacyNoticeBoardProc(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL KING_CANDIDACY_NOTICE_BOARD_PROC(?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strUserID, const int16_t* sNoticeLen, const uint8_t* byNation, const std::vector<uint8_t>* strNotice)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strUserID);
			_stmt.bind(1, sNoticeLen);
			_stmt.bind(2, byNation);
			_stmt.bind(3, strNotice);
	
			return StoredProcedure::execute();
		}
	};
}
