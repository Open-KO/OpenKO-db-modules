module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:KingElectionProc;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingElectionProc
	export class KingElectionProc : public StoredProcedure
	{
	public:
		KingElectionProc(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL KING_ELECTION_PROC(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strAccountID, const char* strCharID, const uint8_t* byNation, const char* strCandidacyID, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
			_stmt.bind(1, strCharID);
			_stmt.bind(2, byNation);
			_stmt.bind(3, strCandidacyID);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};
}
