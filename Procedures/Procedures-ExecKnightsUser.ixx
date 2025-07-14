module;

#include <memory>

export module Procedures:ExecKnightsUser;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class ExecKnightsUser
	export class ExecKnightsUser : public StoredProcedure
	{
	public:
		ExecKnightsUser(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL EXEC_KNIGHTS_USER()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};
}
