module;


export module Procedures:ChangeCopySerialItemTable;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class ChangeCopySerialItemTable
	export class ChangeCopySerialItemTable : public StoredProcedure
	{
	public:
		ChangeCopySerialItemTable(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL CHANGE_COPY_SERIAL_ITEM_TABLE()}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute()
		{
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
