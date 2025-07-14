module;

#include <cstdint>
#include <string>

export module Procedure:UpdateSiegeChallenger2;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeChallenger2
	export class UpdateSiegeChallenger2 : public StoredProcedure
	{
	public:
		UpdateSiegeChallenger2(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_SIEGE_CHALLENGER2(?,?,?,?,?,?,?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const int16_t& sCastleIndex, const int16_t& sKnights_1, const int16_t& sKnights_2, const int16_t& sKnights_3, const int16_t& sKnights_4, const int16_t& sKnights_5, const int16_t& sKnights_6, const int16_t& sKnights_7, const int16_t& sKnights_8, const int16_t& sKnights_9, const int16_t& sKnights_10, const std::string& strChallengerList)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, sCastleIndex);
			_stmt.bind(1, sKnights_1);
			_stmt.bind(2, sKnights_2);
			_stmt.bind(3, sKnights_3);
			_stmt.bind(4, sKnights_4);
			_stmt.bind(5, sKnights_5);
			_stmt.bind(6, sKnights_6);
			_stmt.bind(7, sKnights_7);
			_stmt.bind(8, sKnights_8);
			_stmt.bind(9, sKnights_9);
			_stmt.bind(10, sKnights_10);
			_stmt.bind(11, strChallengerList);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
