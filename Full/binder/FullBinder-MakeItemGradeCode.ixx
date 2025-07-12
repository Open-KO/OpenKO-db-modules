module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MakeItemGradeCode;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MakeItemGradeCode
	export class MakeItemGradeCode
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byItemIndex", &MakeItemGradeCode::BindItemIndex},
				{"byGrade_1", &MakeItemGradeCode::BindGrade1},
				{"byGrade_2", &MakeItemGradeCode::BindGrade2},
				{"byGrade_3", &MakeItemGradeCode::BindGrade3},
				{"byGrade_4", &MakeItemGradeCode::BindGrade4},
				{"byGrade_5", &MakeItemGradeCode::BindGrade5},
				{"byGrade_6", &MakeItemGradeCode::BindGrade6},
				{"byGrade_7", &MakeItemGradeCode::BindGrade7},
				{"byGrade_8", &MakeItemGradeCode::BindGrade8},
				{"byGrade_9", &MakeItemGradeCode::BindGrade9}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemIndex = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Grade1
		static void BindGrade1(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade1);
		}

		/// \brief Binds a result's column to Grade2
		static void BindGrade2(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade2);
		}

		/// \brief Binds a result's column to Grade3
		static void BindGrade3(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade3);
		}

		/// \brief Binds a result's column to Grade4
		static void BindGrade4(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade4);
		}

		/// \brief Binds a result's column to Grade5
		static void BindGrade5(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade5);
		}

		/// \brief Binds a result's column to Grade6
		static void BindGrade6(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade6);
		}

		/// \brief Binds a result's column to Grade7
		static void BindGrade7(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade7);
		}

		/// \brief Binds a result's column to Grade8
		static void BindGrade8(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade8);
		}

		/// \brief Binds a result's column to Grade9
		static void BindGrade9(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade9);
		}

	};
}
