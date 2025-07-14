module;

#include <cstdint>
#include <memory>

export module Procedures:LoadKnightsMembers;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class LoadKnightsMembers
	export class LoadKnightsMembers : public StoredProcedure
	{
	public:
		LoadKnightsMembers(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL LOAD_KNIGHTS_MEMBERS(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* knightsindex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, knightsindex);
	
			return StoredProcedure::execute();
		}
	};
}
