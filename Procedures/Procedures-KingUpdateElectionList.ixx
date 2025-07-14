module;

#include <cstdint>
#include <memory>
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
			_stmt.prepare("{CALL KING_UPDATE_ELECTION_LIST(?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const uint8_t* byDBType, const uint8_t* byType, const uint8_t* byNation, const int16_t* nKnights, const int32_t* nAmount, const char* strUserID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byDBType);
			_stmt.bind(1, byType);
			_stmt.bind(2, byNation);
			_stmt.bind(3, nKnights);
			_stmt.bind(4, nAmount);
			_stmt.bind(5, strUserID);
	
			return StoredProcedure::execute();
		}
	};
}
