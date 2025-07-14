module;

#include <cstdint>
#include <string>

export module Procedure:UpdateBattleHero;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class UpdateBattleHero
	export class UpdateBattleHero : public StoredProcedure
	{
	public:
		UpdateBattleHero(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_BATTLE_HERO(?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& strCharID, const std::string& strNation, const std::string& strClass, const std::string& strAchievement, const int16_t& nIndex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
			_stmt.bind(1, strNation);
			_stmt.bind(2, strClass);
			_stmt.bind(3, strAchievement);
			_stmt.bind(4, nIndex);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
