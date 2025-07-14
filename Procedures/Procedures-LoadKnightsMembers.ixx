module;

#include <cstdint>

export module Procedure:LoadKnightsMembers;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class LoadKnightsMembers
	export class LoadKnightsMembers : public StoredProcedure
	{
	public:
		LoadKnightsMembers(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL LOAD_KNIGHTS_MEMBERS(?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const int16_t& knightsindex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, knightsindex);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
