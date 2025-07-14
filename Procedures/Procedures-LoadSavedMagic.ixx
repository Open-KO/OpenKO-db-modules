module;

#include <cstdint>
#include <string>

export module Procedure:LoadSavedMagic;
import :StoredProcedure;

namespace procedure {

	/// \brief MANUAL_TODO
	/// \class LoadSavedMagic
	export class LoadSavedMagic : public StoredProcedure
	{
	public:
		LoadSavedMagic(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL LOAD_SAVED_MAGIC(?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(const std::string& CharId, int16_t& nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, CharId);
			_stmt.bind(1, nRet, nanodbc::statement::PARAM_RETURN);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
