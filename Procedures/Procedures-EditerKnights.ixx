module;


export module Procedure:EditerKnights;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class EditerKnights
	export class EditerKnights : public StoredProcedure
	{
	public:
		EditerKnights(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL EDITER_KNIGHTS()}");
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
