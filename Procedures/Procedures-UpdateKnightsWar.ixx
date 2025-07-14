module;

#include <cstdint>
#include <memory>

export module Procedures:UpdateKnightsWar;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsWar
	export class UpdateKnightsWar : public StoredProcedure
	{
	public:
		UpdateKnightsWar(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL UPDATE_KNIGHTS_WAR(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const uint8_t* byType, const int16_t* shWhite, const int16_t* shBlue)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, shWhite);
			_stmt.bind(2, shBlue);
	
			return StoredProcedure::execute();
		}
	};
}
