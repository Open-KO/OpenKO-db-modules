module;

#include <cstdint>
#include <string>

export module Procedure:UpdateUserData;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class UpdateUserData
	export class UpdateUserData : public StoredProcedure
	{
	public:
		UpdateUserData(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_USER_DATA(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& id, const uint8_t& Nation, const uint8_t& Race, const int16_t& Class, const uint8_t& HairColor, const uint8_t& Rank, const uint8_t& Title, const uint8_t& Level, const int32_t& Exp, const int32_t& Loyalty, const uint8_t& Face, const uint8_t& City, const int16_t& Knights, const uint8_t& Fame, const int16_t& Hp, const int16_t& Mp, const int16_t& Sp, const uint8_t& Str, const uint8_t& Sta, const uint8_t& Dex, const uint8_t& Intel, const uint8_t& Cha, const uint8_t& Authority, const uint8_t& Points, const int32_t& Gold, const uint8_t& Zone, const int16_t& Bind, const int32_t& PX, const int32_t& PZ, const int32_t& PY, const int32_t& dwTime, const int16_t& QuestTotal, const std::string& strSkill, const std::string& strItem, const std::string& strSerial, const std::string& strQuest, const int32_t& MannerPoint, const int32_t& LoyaltyMonthly)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, id);
			_stmt.bind(1, Nation);
			_stmt.bind(2, Race);
			_stmt.bind(3, Class);
			_stmt.bind(4, HairColor);
			_stmt.bind(5, Rank);
			_stmt.bind(6, Title);
			_stmt.bind(7, Level);
			_stmt.bind(8, Exp);
			_stmt.bind(9, Loyalty);
			_stmt.bind(10, Face);
			_stmt.bind(11, City);
			_stmt.bind(12, Knights);
			_stmt.bind(13, Fame);
			_stmt.bind(14, Hp);
			_stmt.bind(15, Mp);
			_stmt.bind(16, Sp);
			_stmt.bind(17, Str);
			_stmt.bind(18, Sta);
			_stmt.bind(19, Dex);
			_stmt.bind(20, Intel);
			_stmt.bind(21, Cha);
			_stmt.bind(22, Authority);
			_stmt.bind(23, Points);
			_stmt.bind(24, Gold);
			_stmt.bind(25, Zone);
			_stmt.bind(26, Bind);
			_stmt.bind(27, PX);
			_stmt.bind(28, PZ);
			_stmt.bind(29, PY);
			_stmt.bind(30, dwTime);
			_stmt.bind(31, QuestTotal);
			_stmt.bind(32, strSkill);
			_stmt.bind(33, strItem);
			_stmt.bind(34, strSerial);
			_stmt.bind(35, strQuest);
			_stmt.bind(36, MannerPoint);
			_stmt.bind(37, LoyaltyMonthly);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
