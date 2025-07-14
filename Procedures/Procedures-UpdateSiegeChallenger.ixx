module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:UpdateSiegeChallenger;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeChallenger
	export class UpdateSiegeChallenger : public StoredProcedure
	{
	public:
		UpdateSiegeChallenger(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL UPDATE_SIEGE_CHALLENGER(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* sCastleIndex, const char* strChallengerList)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, sCastleIndex);
			_stmt.bind(1, strChallengerList);
	
			return StoredProcedure::execute();
		}
	};
}
