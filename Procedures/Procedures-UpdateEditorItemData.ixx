module;

#include <cstdint>
#include <string>

export module Procedure:UpdateEditorItemData;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class UpdateEditorItemData
	export class UpdateEditorItemData : public StoredProcedure
	{
	public:
		UpdateEditorItemData(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_EDITOR_ITEM_DATA(?,?,?,?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& charid, const std::string& accountid, const std::string& opid, const std::string& opip, const int16_t& sPos, const int32_t& nItemID1, const int32_t& nItemID2, const uint8_t& byType, const int16_t& sDBIndex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, charid);
			_stmt.bind(1, accountid);
			_stmt.bind(2, opid);
			_stmt.bind(3, opip);
			_stmt.bind(4, sPos);
			_stmt.bind(5, nItemID1);
			_stmt.bind(6, nItemID2);
			_stmt.bind(7, byType);
			_stmt.bind(8, sDBIndex);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
