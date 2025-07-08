module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MakeItemGradeCodeBinder;

import :MakeItemGradeCode;

namespace model
{
	/// \brief generated column binder for the MakeItemGradeCode model, using nanodbc
	export class MakeItemGradeCodeBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byItemIndex", &MakeItemGradeCodeBinder::BindItemIndex},
				{"byGrade_1", &MakeItemGradeCodeBinder::BindGrade1},
				{"byGrade_2", &MakeItemGradeCodeBinder::BindGrade2},
				{"byGrade_3", &MakeItemGradeCodeBinder::BindGrade3},
				{"byGrade_4", &MakeItemGradeCodeBinder::BindGrade4},
				{"byGrade_5", &MakeItemGradeCodeBinder::BindGrade5},
				{"byGrade_6", &MakeItemGradeCodeBinder::BindGrade6},
				{"byGrade_7", &MakeItemGradeCodeBinder::BindGrade7},
				{"byGrade_8", &MakeItemGradeCodeBinder::BindGrade8},
				{"byGrade_9", &MakeItemGradeCodeBinder::BindGrade9}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Grade1
		static void BindGrade1(MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade1);
		}

		/// \brief Binds a result's column to Grade2
		static void BindGrade2(MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Grade2);
		}

		/// \brief Binds a result's column to Grade3
		static void BindGrade3(MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Grade3);
		}

		/// \brief Binds a result's column to Grade4
		static void BindGrade4(MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Grade4);
		}

		/// \brief Binds a result's column to Grade5
		static void BindGrade5(MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Grade5);
		}

		/// \brief Binds a result's column to Grade6
		static void BindGrade6(MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Grade6);
		}

		/// \brief Binds a result's column to Grade7
		static void BindGrade7(MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Grade7);
		}

		/// \brief Binds a result's column to Grade8
		static void BindGrade8(MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Grade8);
		}

		/// \brief Binds a result's column to Grade9
		static void BindGrade9(MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Grade9);
		}

	};
}
