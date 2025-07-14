module;

#include <cstdint>
#include <string>

export module Procedure:UpdateKnights;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class UpdateKnights
	export class UpdateKnights : public StoredProcedure
	{
	public:
		UpdateKnights(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_KNIGHTS(?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(int16_t& nRet, const uint8_t& Type, const std::string& UserId, const int16_t& KnightsIndex, const uint8_t& Domanation)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, Type);
			_stmt.bind(2, UserId);
			_stmt.bind(3, KnightsIndex);
			_stmt.bind(4, Domanation);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
