module;

#include <cstdint>

export module Procedures:KingImpeachmentResult;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentResult
	export class KingImpeachmentResult : public StoredProcedure
	{
	public:
		KingImpeachmentResult(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL KING_IMPEACHMENT_RESULT(?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const uint8_t& byNation, int16_t& nTotalMan, int16_t& nAgreeMan)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byNation);
			_stmt.bind(1, nTotalMan, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(2, nAgreeMan, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
