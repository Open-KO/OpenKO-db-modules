module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:LoadCharInfo;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class LoadCharInfo
	export class LoadCharInfo : public StoredProcedure
	{
	public:
		LoadCharInfo(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL LOAD_CHAR_INFO(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* CharId, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, CharId);
			_stmt.bind(1, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};
}
