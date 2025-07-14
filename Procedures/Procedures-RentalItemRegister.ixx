module;

#include <cstdint>
#include <string>

export module Procedures:RentalItemRegister;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class RentalItemRegister
	export class RentalItemRegister : public StoredProcedure
	{
	public:
		RentalItemRegister(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL RENTAL_ITEM_REGISTER(?,?,?,?,?,?,?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& charID, const std::string& AccountID, const int16_t& sRentalTime, const int32_t& nItemID, const int16_t& sDurability, const int32_t& nMoney, const uint8_t& bGameBangType, const uint8_t& bItemType, const uint8_t& bItemClass, const int64_t& nSerialNumber, int32_t& nRet_Index, int16_t& nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, charID);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, sRentalTime);
			_stmt.bind(3, nItemID);
			_stmt.bind(4, sDurability);
			_stmt.bind(5, nMoney);
			_stmt.bind(6, bGameBangType);
			_stmt.bind(7, bItemType);
			_stmt.bind(8, bItemClass);
			_stmt.bind(9, nSerialNumber);
			_stmt.bind(10, nRet_Index, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(11, nRet, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
