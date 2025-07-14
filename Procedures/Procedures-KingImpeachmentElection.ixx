module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:KingImpeachmentElection;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentElection
	export class KingImpeachmentElection : public StoredProcedure
	{
	public:
		KingImpeachmentElection(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL KING_IMPEACHMENT_ELECTION(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const uint8_t* byResult, const uint8_t* byNation, const char* strAccountID, const char* strCharID, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byResult);
			_stmt.bind(1, byNation);
			_stmt.bind(2, strAccountID);
			_stmt.bind(3, strCharID);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};
}
