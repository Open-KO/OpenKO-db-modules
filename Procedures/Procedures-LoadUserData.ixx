module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:LoadUserData;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class LoadUserData
	export class LoadUserData : public StoredProcedure
	{
	public:
		LoadUserData(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL LOAD_USER_DATA(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const char* id, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, id);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};
}
