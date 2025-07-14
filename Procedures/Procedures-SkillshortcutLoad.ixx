module;

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
			_stmt.prepare("{? = CALL SKILLSHORTCUT_LOAD(?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& strCharID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
