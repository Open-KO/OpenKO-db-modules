module;

#include <memory>

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
			_stmt.prepare("{CALL CHANGE_COPY_SERIAL_ITEM()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};
}
