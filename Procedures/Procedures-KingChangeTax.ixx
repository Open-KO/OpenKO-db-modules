module;

#include <cstdint>

export module Procedures:KingChangeTax;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class KingChangeTax
	export class KingChangeTax : public StoredProcedure
	{
	public:
		KingChangeTax(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL KING_CHANGE_TAX(?,?,?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const uint8_t& byType, const uint8_t& byNation, const int32_t& nKarusTax1, const int32_t& nKarusTax2, const int32_t& nKarusTax3, const int32_t& nElmoTax1, const int32_t& nElmoTax2, const int32_t& nElmoTax3)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, nKarusTax1);
			_stmt.bind(3, nKarusTax2);
			_stmt.bind(4, nKarusTax3);
			_stmt.bind(5, nElmoTax1);
			_stmt.bind(6, nElmoTax2);
			_stmt.bind(7, nElmoTax3);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
