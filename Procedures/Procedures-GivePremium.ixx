module;

#include <cstdint>
#include <memory>
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

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strAccountID, const char* strUserID, const int32_t* days)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
			_stmt.bind(1, strUserID);
			_stmt.bind(2, days);
	
			return StoredProcedure::execute();
		}
	};
}
