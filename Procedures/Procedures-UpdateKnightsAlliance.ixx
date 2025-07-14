module;

#include <cstdint>

export module Procedure:UpdateKnightsAlliance;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsAlliance
	export class UpdateKnightsAlliance : public StoredProcedure
	{
	public:
		UpdateKnightsAlliance(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_KNIGHTS_ALLIANCE(?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const uint8_t& byType, const int16_t& shAlliancIndex, const int16_t& shKnightsIndex, const uint8_t& byEmptyIndex, const uint8_t& bySiegeFlag)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, shAlliancIndex);
			_stmt.bind(2, shKnightsIndex);
			_stmt.bind(3, byEmptyIndex);
			_stmt.bind(4, bySiegeFlag);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
