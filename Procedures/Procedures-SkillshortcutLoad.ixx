module;

#include <memory>
#include <string>

export module Procedures:SkillshortcutLoad;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class SkillshortcutLoad
	export class SkillshortcutLoad : public StoredProcedure
	{
	public:
		SkillshortcutLoad(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL SKILLSHORTCUT_LOAD(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strCharID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
	
			return StoredProcedure::execute();
		}
	};
}
