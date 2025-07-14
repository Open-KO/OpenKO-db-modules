module;


export module Procedure:RankKnights;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class RankKnights
	export class RankKnights : public StoredProcedure
	{
	public:
		RankKnights(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL RANK_KNIGHTS()}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute()
		{
			_stmt.reset_parameters();

	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
