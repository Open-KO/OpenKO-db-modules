module;

#include <cstdint>

export module Procedure:KingUpdateElectionSchdule;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionSchdule
	export class KingUpdateElectionSchdule : public StoredProcedure
	{
	public:
		KingUpdateElectionSchdule(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL KING_UPDATE_ELECTION_SCHDULE(?,?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const uint8_t& byType, const uint8_t& byNation, const int16_t& sYear, const uint8_t& byMonth, const uint8_t& byDay, const uint8_t& byHour, const uint8_t& byMinute)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, sYear);
			_stmt.bind(3, byMonth);
			_stmt.bind(4, byDay);
			_stmt.bind(5, byHour);
			_stmt.bind(6, byMinute);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
