module;

#include <cstdint>
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
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& strUserID, const int16_t& sNoticeLen, const uint8_t& byNation, const std::vector<uint8_t>& strNotice)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strUserID);
			_stmt.bind(1, sNoticeLen);
			_stmt.bind(2, byNation);
			_stmt.bind(3, strNotice);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
