module;

#include <cstdint>
#include <string>

export module Procedure:UpdateSiegeChallenger;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeChallenger
	export class UpdateSiegeChallenger : public StoredProcedure
	{
	public:
		UpdateSiegeChallenger(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_SIEGE_CHALLENGER(?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const int16_t& sCastleIndex, const std::string& strChallengerList)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, sCastleIndex);
			_stmt.bind(1, strChallengerList);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
