module;


export module Procedures:CheckKnights;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class CheckKnights
	export class CheckKnights : public StoredProcedure
	{
	public:
		CheckKnights(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL CHECK_KNIGHTS()}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute()
		{
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
