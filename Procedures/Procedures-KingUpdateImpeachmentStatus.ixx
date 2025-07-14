module;

#include <cstdint>
#include <string>

export module Procedures:KingUpdateImpeachmentStatus;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingUpdateImpeachmentStatus
	export class KingUpdateImpeachmentStatus : public StoredProcedure
	{
	public:
		KingUpdateImpeachmentStatus(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL KING_UPDATE_IMPEACHMENT_STATUS(?,?,?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const uint8_t& byType, const uint8_t& byNation, const int16_t& sYear, const uint8_t& byMonth, const uint8_t& byDay, const uint8_t& byHour, const uint8_t& byMinute, const std::string& strUserID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, sYear);
			_stmt.bind(3, byMonth);
			_stmt.bind(4, byDay);
			_stmt.bind(5, byHour);
			_stmt.bind(6, byMinute);
			_stmt.bind(7, strUserID);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
