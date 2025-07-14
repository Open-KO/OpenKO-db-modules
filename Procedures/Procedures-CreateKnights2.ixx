module;

#include <cstdint>
#include <memory>
#include <string>

export module Procedures:CreateKnights2;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class CreateKnights2
	export class CreateKnights2 : public StoredProcedure
	{
	public:
		CreateKnights2(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL CREATE_KNIGHTS2(?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, int16_t* index, const uint8_t* nation, const uint8_t* community, const char* strName, const char* strChief)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, index, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(2, nation);
			_stmt.bind(3, community);
			_stmt.bind(4, strName);
			_stmt.bind(5, strChief);
	
			return StoredProcedure::execute();
		}
	};
}
