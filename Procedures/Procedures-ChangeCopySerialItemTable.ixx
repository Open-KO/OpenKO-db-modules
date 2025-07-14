module;

#include <memory>

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

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};
}
