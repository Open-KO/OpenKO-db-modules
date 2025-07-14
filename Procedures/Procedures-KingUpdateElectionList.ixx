module;

#include <cstdint>
#include <string>

export module Procedures:KingUpdateElectionList;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionList
	export class KingUpdateElectionList : public StoredProcedure
	{
	public:
		KingUpdateElectionList(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL KING_UPDATE_ELECTION_LIST(?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const uint8_t& byDBType, const uint8_t& byType, const uint8_t& byNation, const int16_t& nKnights, const int32_t& nAmount, const std::string& strUserID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byDBType);
			_stmt.bind(1, byType);
			_stmt.bind(2, byNation);
			_stmt.bind(3, nKnights);
			_stmt.bind(4, nAmount);
			_stmt.bind(5, strUserID);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
