module;


export module Procedure:UpdatePersonalRank;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class UpdatePersonalRank
	export class UpdatePersonalRank : public StoredProcedure
	{
	public:
		UpdatePersonalRank(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_PERSONAL_RANK()}");
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
