module;

#include <cstdint>
#include <string>

export module Procedure:KingCandidacyRecommend;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class KingCandidacyRecommend
	export class KingCandidacyRecommend : public StoredProcedure
	{
	public:
		KingCandidacyRecommend(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL KING_CANDIDACY_RECOMMEND(?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& CharID_1, const std::string& CharID_2, const uint8_t& nNation, int16_t& nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, CharID_1);
			_stmt.bind(1, CharID_2);
			_stmt.bind(2, nNation);
			_stmt.bind(3, nRet, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
