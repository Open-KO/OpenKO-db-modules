module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:KingInsertPrizeEvent;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingInsertPrizeEvent
	export class KingInsertPrizeEvent : public StoredProcedure
	{
	public:
		KingInsertPrizeEvent(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL KING_INSERT_PRIZE_EVENT(?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const uint8_t* byType, const uint8_t* byNation, const int32_t* nAmount, const char* strUserID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, nAmount);
			_stmt.bind(3, strUserID);
	
			return StoredProcedure::execute();
		}
	};
}
