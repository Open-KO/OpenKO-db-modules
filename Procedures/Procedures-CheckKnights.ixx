module;

#include <memory>

export module Procedures:CheckKnights;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class CheckKnights
	export class CheckKnights : public StoredProcedure
	{
	public:
		CheckKnights(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL CHECK_KNIGHTS()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};
}
