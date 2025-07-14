module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:CreateNewChar;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class CreateNewChar
	export class CreateNewChar : public StoredProcedure
	{
	public:
		CreateNewChar(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL CREATE_NEW_CHAR(?,?,?,?,?,?,?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, const char* AccountID, const uint8_t* index, const char* CharID, const uint8_t* Race, const int16_t* Class, const uint8_t* Hair, const uint8_t* Face, const uint8_t* Str, const uint8_t* Sta, const uint8_t* Dex, const uint8_t* Intel, const uint8_t* Cha)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, index);
			_stmt.bind(3, CharID);
			_stmt.bind(4, Race);
			_stmt.bind(5, Class);
			_stmt.bind(6, Hair);
			_stmt.bind(7, Face);
			_stmt.bind(8, Str);
			_stmt.bind(9, Sta);
			_stmt.bind(10, Dex);
			_stmt.bind(11, Intel);
			_stmt.bind(12, Cha);
	
			return StoredProcedure::execute();
		}
	};
}
