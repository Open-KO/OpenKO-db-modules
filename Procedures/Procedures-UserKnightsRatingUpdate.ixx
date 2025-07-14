module;


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
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute()
		{
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
