module;

#include <cstdint>
#include <memory>

export module Procedures:ChangeKnightsCape;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class ChangeKnightsCape
	export class ChangeKnightsCape : public StoredProcedure
	{
	public:
		ChangeKnightsCape(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL CHANGE_KNIGHTS_CAPE(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* KnightsIndex, const int16_t* CapeIndex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, KnightsIndex);
			_stmt.bind(1, CapeIndex);
	
			return StoredProcedure::execute();
		}
	};
}
