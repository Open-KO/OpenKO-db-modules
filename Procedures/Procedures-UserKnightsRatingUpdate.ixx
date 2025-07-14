module;

#include <memory>

export module Procedures:UserKnightsRatingUpdate;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class UserKnightsRatingUpdate
	export class UserKnightsRatingUpdate : public StoredProcedure
	{
	public:
		UserKnightsRatingUpdate(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL USER_KNIGHTS_RATING_UPDATE()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};
}
