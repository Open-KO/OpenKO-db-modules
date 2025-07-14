module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:KingCandidacyRecommend;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingCandidacyRecommend
	export class KingCandidacyRecommend : public StoredProcedure
	{
	public:
		KingCandidacyRecommend(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL KING_CANDIDACY_RECOMMEND(?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* CharID_1, const char* CharID_2, const uint8_t* nNation, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, CharID_1);
			_stmt.bind(1, CharID_2);
			_stmt.bind(2, nNation);
			_stmt.bind(3, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};
}
