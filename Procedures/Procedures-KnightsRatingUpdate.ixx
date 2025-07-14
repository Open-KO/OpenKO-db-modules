module;

#include <memory>

export module Procedures:KnightsRatingUpdate;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KnightsRatingUpdate
	export class KnightsRatingUpdate : public StoredProcedure
	{
	public:
		KnightsRatingUpdate(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL KNIGHTS_RATING_UPDATE()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};
}
