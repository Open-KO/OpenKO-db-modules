module;


export module Procedures:ExecKnightsUser;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class ExecKnightsUser
	export class ExecKnightsUser : public StoredProcedure
	{
	public:
		ExecKnightsUser(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL EXEC_KNIGHTS_USER()}");
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
