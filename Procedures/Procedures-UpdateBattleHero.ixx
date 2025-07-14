module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:UpdateBattleHero;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class UpdateBattleHero
	export class UpdateBattleHero : public StoredProcedure
	{
	public:
		UpdateBattleHero(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL UPDATE_BATTLE_HERO(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strCharID, const char* strNation, const char* strClass, const char* strAchievement, const int16_t* nIndex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
			_stmt.bind(1, strNation);
			_stmt.bind(2, strClass);
			_stmt.bind(3, strAchievement);
			_stmt.bind(4, nIndex);
	
			return StoredProcedure::execute();
		}
	};
}
