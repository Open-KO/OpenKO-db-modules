module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:UpdateKnights;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class UpdateKnights
	export class UpdateKnights : public StoredProcedure
	{
	public:
		UpdateKnights(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL UPDATE_KNIGHTS(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, const uint8_t* Type, const char* UserId, const int16_t* KnightsIndex, const uint8_t* Domanation)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, Type);
			_stmt.bind(2, UserId);
			_stmt.bind(3, KnightsIndex);
			_stmt.bind(4, Domanation);
	
			return StoredProcedure::execute();
		}
	};
}
