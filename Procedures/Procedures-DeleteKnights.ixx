module;

#include <cstdint>

export module Procedures:DeleteKnights;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class DeleteKnights
	export class DeleteKnights : public StoredProcedure
	{
	public:
		DeleteKnights(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL DELETE_KNIGHTS(?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(int16_t& nRet, const int16_t& knightsindex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, knightsindex);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
