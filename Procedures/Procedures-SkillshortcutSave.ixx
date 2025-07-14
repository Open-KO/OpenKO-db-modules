module;

#include <cstdint>
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
			_stmt.prepare("{? = CALL SKILLSHORTCUT_SAVE(?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& strCharID, const int16_t& nCount, const std::string& strSkillData)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
			_stmt.bind(1, nCount);
			_stmt.bind(2, strSkillData);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
