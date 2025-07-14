module;

#include <cstdint>
#include <string>

export module Procedure:UpdateSavedMagic;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class UpdateSavedMagic
	export class UpdateSavedMagic : public StoredProcedure
	{
	public:
		UpdateSavedMagic(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_SAVED_MAGIC(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& strCharID, const int32_t& Skill1, const int16_t& During1, const int32_t& Skill2, const int16_t& During2, const int32_t& Skill3, const int16_t& During3, const int32_t& Skill4, const int16_t& During4, const int32_t& Skill5, const int16_t& During5, const int32_t& Skill6, const int16_t& During6, const int32_t& Skill7, const int16_t& During7, const int32_t& Skill8, const int16_t& During8, const int32_t& Skill9, const int16_t& During9, const int32_t& Skill10, const int16_t& During10)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
			_stmt.bind(1, Skill1);
			_stmt.bind(2, During1);
			_stmt.bind(3, Skill2);
			_stmt.bind(4, During2);
			_stmt.bind(5, Skill3);
			_stmt.bind(6, During3);
			_stmt.bind(7, Skill4);
			_stmt.bind(8, During4);
			_stmt.bind(9, Skill5);
			_stmt.bind(10, During5);
			_stmt.bind(11, Skill6);
			_stmt.bind(12, During6);
			_stmt.bind(13, Skill7);
			_stmt.bind(14, During7);
			_stmt.bind(15, Skill8);
			_stmt.bind(16, During8);
			_stmt.bind(17, Skill9);
			_stmt.bind(18, During9);
			_stmt.bind(19, Skill10);
			_stmt.bind(20, During10);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
