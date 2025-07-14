module;

#include <cstdint>
#include <string>

export module Procedure:KingImpeachmentElection;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentElection
	export class KingImpeachmentElection : public StoredProcedure
	{
	public:
		KingImpeachmentElection(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL KING_IMPEACHMENT_ELECTION(?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const uint8_t& byResult, const uint8_t& byNation, const std::string& strAccountID, const std::string& strCharID, int16_t& nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byResult);
			_stmt.bind(1, byNation);
			_stmt.bind(2, strAccountID);
			_stmt.bind(3, strCharID);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
