module;

#include <cstdint>
#include <string>

export module Procedures:CreateKnights;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class CreateKnights
	export class CreateKnights : public StoredProcedure
	{
	public:
		CreateKnights(nanodbc::connection& conn) 
		{
			_stmt.prepare("{CALL CREATE_KNIGHTS(?,?,?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(int16_t& nRet, const int16_t& index, const uint8_t& nation, const uint8_t& community, const std::string& strName, const std::string& strChief)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, index);
			_stmt.bind(2, nation);
			_stmt.bind(3, community);
			_stmt.bind(4, strName);
			_stmt.bind(5, strChief);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
