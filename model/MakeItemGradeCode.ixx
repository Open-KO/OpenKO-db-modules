module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:MakeItemGradeCode;

namespace model
{
	export class MakeItemGradeCodeBinder;
	
	/// \brief [MAKE_ITEM_GRADECODE] Make item grade code
	/// \class MakeItemGradeCode
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_ITEM_GRADECODE
	export class MakeItemGradeCode 
	{
	/// \publicsection
	public:
		using BinderType = MakeItemGradeCodeBinder;

		/// \brief Column [byItemIndex]: Item index
		///
		/// \property ItemIndex
		int16_t ItemIndex = 0;

		/// \brief Column [byGrade_1]: Grade 1
		///
		/// \property Grade1
		int16_t Grade1 = 0;

		/// \brief Column [byGrade_2]: Grade 2
		///
		/// \property Grade2
		std::optional<int16_t> Grade2;

		/// \brief Column [byGrade_3]: Grade 3
		///
		/// \property Grade3
		std::optional<int16_t> Grade3;

		/// \brief Column [byGrade_4]: Grade 4
		///
		/// \property Grade4
		std::optional<int16_t> Grade4;

		/// \brief Column [byGrade_5]: Grade 5
		///
		/// \property Grade5
		std::optional<int16_t> Grade5;

		/// \brief Column [byGrade_6]: Grade 6
		///
		/// \property Grade6
		std::optional<int16_t> Grade6;

		/// \brief Column [byGrade_7]: Grade 7
		///
		/// \property Grade7
		std::optional<int16_t> Grade7;

		/// \brief Column [byGrade_8]: Grade 8
		///
		/// \property Grade8
		std::optional<int16_t> Grade8;

		/// \brief Column [byGrade_9]: Grade 9
		///
		/// \property Grade9
		std::optional<int16_t> Grade9;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAKE_ITEM_GRADECODE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"byItemIndex", "byGrade_1", "byGrade_2", "byGrade_3", "byGrade_4", "byGrade_5", "byGrade_6", "byGrade_7", "byGrade_8", "byGrade_9"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
