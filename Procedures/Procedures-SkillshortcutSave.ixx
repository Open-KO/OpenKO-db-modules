module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:SkillshortcutSave;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class SkillshortcutSave
	export class SkillshortcutSave : public StoredProcedure
	{
	public:
		SkillshortcutSave(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL SKILLSHORTCUT_SAVE(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strCharID, const int16_t* nCount, const char* strSkillData)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
			_stmt.bind(1, nCount);
			_stmt.bind(2, strSkillData);
	
			return StoredProcedure::execute();
		}
	};
}
