module;


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
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute()
		{
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
