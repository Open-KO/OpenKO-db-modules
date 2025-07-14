module;

#include <string>

export module Procedures:LoadAccountCharid;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class LoadAccountCharid
	export class LoadAccountCharid : public StoredProcedure
	{
	public:
		LoadAccountCharid(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL LOAD_ACCOUNT_CHARID(?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& Accountid)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, &_returnValue, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, Accountid);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
