module;

#include <memory>

export module Procedures:RankKnights;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class RankKnights
	export class RankKnights : public StoredProcedure
	{
	public:
		RankKnights(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL RANK_KNIGHTS()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};
}
