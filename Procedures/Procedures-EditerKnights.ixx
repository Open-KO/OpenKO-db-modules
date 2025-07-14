module;

#include <memory>

export module Procedures:EditerKnights;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class EditerKnights
	export class EditerKnights : public StoredProcedure
	{
	public:
		EditerKnights(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL EDITER_KNIGHTS()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};
}
