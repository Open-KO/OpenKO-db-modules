module;

#include <cstdint>
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
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const int16_t& sCastleIndex, const uint8_t& byType, const int32_t& nMoradonTariff, const int32_t& nDellosTariff, const int32_t& nMoney, const std::string& strACID, const std::string& strCharID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, sCastleIndex);
			_stmt.bind(1, byType);
			_stmt.bind(2, nMoradonTariff);
			_stmt.bind(3, nDellosTariff);
			_stmt.bind(4, nMoney);
			_stmt.bind(5, strACID);
			_stmt.bind(6, strCharID);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
