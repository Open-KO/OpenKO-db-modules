module;

#include <cstdint>
#include <memory>

export module Procedures:KingUpdateNoahOrExpEvent;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingUpdateNoahOrExpEvent
	export class KingUpdateNoahOrExpEvent : public StoredProcedure
	{
	public:
		KingUpdateNoahOrExpEvent(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL KING_UPDATE_NOAH_OR_EXP_EVENT(?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const uint8_t* byType, const uint8_t* byNation, const uint8_t* byAmount, const uint8_t* byDay, const uint8_t* byHout, const uint8_t* byMinute, const int16_t* sDurationTime)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, byAmount);
			_stmt.bind(3, byDay);
			_stmt.bind(4, byHout);
			_stmt.bind(5, byMinute);
			_stmt.bind(6, sDurationTime);
	
			return StoredProcedure::execute();
		}
	};
}
