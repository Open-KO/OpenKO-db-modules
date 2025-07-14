module;

#include <cstdint>
#include <memory>
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
			_stmt.prepare("{CALL KING_UPDATE_IMPEACHMENT_STATUS(?,?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const uint8_t* byType, const uint8_t* byNation, const int16_t* sYear, const uint8_t* byMonth, const uint8_t* byDay, const uint8_t* byHour, const uint8_t* byMinute, const char* strUserID)
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
	
			return StoredProcedure::execute();
		}
	};
}
