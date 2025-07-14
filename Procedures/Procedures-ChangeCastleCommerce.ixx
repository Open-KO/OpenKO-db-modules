module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:ChangeCastleCommerce;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class ChangeCastleCommerce
	export class ChangeCastleCommerce : public StoredProcedure
	{
	public:
		ChangeCastleCommerce(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL CHANGE_CASTLE_COMMERCE(?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* sCastleIndex, const uint8_t* byType, const int32_t* nMoradonTariff, const int32_t* nDellosTariff, const int32_t* nMoney, const char* strACID, const char* strCharID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, sCastleIndex);
			_stmt.bind(1, byType);
			_stmt.bind(2, nMoradonTariff);
			_stmt.bind(3, nDellosTariff);
			_stmt.bind(4, nMoney);
			_stmt.bind(5, strACID);
			_stmt.bind(6, strCharID);
	
			return StoredProcedure::execute();
		}
	};
}
