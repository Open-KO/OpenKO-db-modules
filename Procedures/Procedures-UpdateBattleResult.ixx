module;

#include <cstdint>
#include <string>

export module Procedures:UpdateBattleResult;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class UpdateBattleResult
	export class UpdateBattleResult : public StoredProcedure
	{
	public:
		UpdateBattleResult(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_BATTLE_RESULT(?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& UserId, const uint8_t& byNation, const int16_t& index)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, UserId);
			_stmt.bind(1, byNation);
			_stmt.bind(2, index);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
