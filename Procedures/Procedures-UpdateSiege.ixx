module;

#include <cstdint>

export module Procedure:UpdateSiege;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class UpdateSiege
	export class UpdateSiege : public StoredProcedure
	{
	public:
		UpdateSiege(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_SIEGE(?,?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const int16_t& sCastleIndex, const int16_t& sKnightsIndex, const uint8_t& byWarType, const uint8_t& byUpdateType, const uint8_t& byWarDay, const uint8_t& byWarTime, const uint8_t& byWarMinute)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, sCastleIndex);
			_stmt.bind(1, sKnightsIndex);
			_stmt.bind(2, byWarType);
			_stmt.bind(3, byUpdateType);
			_stmt.bind(4, byWarDay);
			_stmt.bind(5, byWarTime);
			_stmt.bind(6, byWarMinute);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
