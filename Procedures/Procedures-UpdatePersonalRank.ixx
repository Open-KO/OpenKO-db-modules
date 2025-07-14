module;

#include <memory>

export module Procedures:UpdatePersonalRank;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class UpdatePersonalRank
	export class UpdatePersonalRank : public StoredProcedure
	{
	public:
		UpdatePersonalRank(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL UPDATE_PERSONAL_RANK()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};
}
