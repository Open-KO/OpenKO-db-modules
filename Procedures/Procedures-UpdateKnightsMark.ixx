module;

#include <cstdint>

export module Procedures:UpdateKnightsMark;
import :StoredProcedure;

namespace procedures {

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsMark
	export class UpdateKnightsMark : public StoredProcedure
	{
	public:
		UpdateKnightsMark(nanodbc::connection& conn) 
		{
			_stmt.prepare("{? = CALL UPDATE_KNIGHTS_MARK(?,?,?,?)}");
		}
		
		using StoredProcedure::returnValue;

		/// \brief Executes the stored procedure
		nanodbc::result* execute(int16_t& nRet, const int16_t& IDNum, const int16_t& MarkLen, const std::vector<uint8_t>& KnightMark)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, IDNum);
			_stmt.bind(2, MarkLen);
			_stmt.bind(3, KnightMark);
	
			_result = std::make_unique<nanodbc::result>(_stmt.execute());
			return _result.get();
		}
	};
}
