module;

#include <cstdint>
#include <memory>

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
			_stmt.prepare("{CALL KING_IMPEACHMENT_RESULT(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const uint8_t* byNation, int16_t* nTotalMan, int16_t* nAgreeMan)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byNation);
			_stmt.bind(1, nTotalMan, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(2, nAgreeMan, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};
}
