module;

#include <cstdint>
#include <string>

export module Procedures:GivePremium;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class GivePremium
	export class GivePremium : public StoredProcedure
	{
	public:
		GivePremium(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL GIVE_PREMIUM(?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& strAccountID, const std::string& strUserID, const int32_t& days)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
			_stmt.bind(1, strUserID);
			_stmt.bind(2, days);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
