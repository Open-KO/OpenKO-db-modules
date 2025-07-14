module;

#include <cstdint>

export module Procedure:UpdateKnightsWar;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsWar
	export class UpdateKnightsWar : public StoredProcedure
	{
	public:
		UpdateKnightsWar(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_KNIGHTS_WAR(?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const uint8_t& byType, const int16_t& shWhite, const int16_t& shBlue)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, shWhite);
			_stmt.bind(2, shBlue);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
