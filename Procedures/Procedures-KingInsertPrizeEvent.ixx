module;

#include <cstdint>
#include <string>

export module Procedure:KingInsertPrizeEvent;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class KingInsertPrizeEvent
	export class KingInsertPrizeEvent : public StoredProcedure
	{
	public:
		KingInsertPrizeEvent(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL KING_INSERT_PRIZE_EVENT(?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const uint8_t& byType, const uint8_t& byNation, const int32_t& nAmount, const std::string& strUserID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, nAmount);
			_stmt.bind(3, strUserID);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
