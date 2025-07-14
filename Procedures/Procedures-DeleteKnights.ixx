module;

#include <cstdint>
#include <memory>

export module Procedures:DeleteKnights;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class DeleteKnights
	export class DeleteKnights : public StoredProcedure
	{
	public:
		DeleteKnights(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL DELETE_KNIGHTS(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, const int16_t* knightsindex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, knightsindex);
	
			return StoredProcedure::execute();
		}
	};
}
