module;


export module Procedures:ChangeCopySerialItem;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class ChangeCopySerialItem
	export class ChangeCopySerialItem : public StoredProcedure
	{
	public:
		ChangeCopySerialItem(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL CHANGE_COPY_SERIAL_ITEM()}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute()
		{
			_stmt.reset_parameters();

	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
