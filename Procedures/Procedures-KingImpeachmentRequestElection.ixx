module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:KingImpeachmentRequestElection;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentRequestElection
	export class KingImpeachmentRequestElection : public StoredProcedure
	{
	public:
		KingImpeachmentRequestElection(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL KING_IMPEACHMENT_REQUEST_ELECTION(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byType, const uint8_t* byNation, const char* strUserID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, strUserID);
	
			return StoredProcedure::execute();
		}
	};
}
