module;

#include <cstdint>

export module Procedures:KingUpdateElectionStatus;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionStatus
	export class KingUpdateElectionStatus : public StoredProcedure
	{
	public:
		KingUpdateElectionStatus(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL KING_UPDATE_ELECTION_STATUS(?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const uint8_t& byType, const uint8_t& byNation)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
