module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module Model:MagicType5;

namespace binder
{
	export class MagicType5Binder;
}

namespace model
{

	export class MagicType5 
	{
	/// \publicsection
	public:
		using BinderType = binder::MagicType5Binder;

		/// \brief Column [iNum]: Magic number identifier
		///
		/// \property MagicNumber
		int32_t MagicNumber = 0;

		/// \brief Column [Name]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [Description]: Description
		///
		/// \property Description
		std::optional<std::string> Description;

		/// \brief Column [Type]: Type
		///
		/// \see EnumType
		/// \property Type
		int16_t Type = 0;
	
		/// \enum EnumType
		/// \brief Known valid values for Type
		enum class EnumType
		{
			CureDisease = 1, ///< Removes diseases
			CureCurse = 2, ///< Remove curses
			Resurrection = 3, ///< Ability ignores defense
			Resurrection4 = 4, ///< Not sure how it differs from 3 other than it being triggered from an item
			Unknown5 = 5 ///< TODO: 300133 only record using it
		};

		/// \brief Column [ExpRecover]: Percent of experience loss recovered
		///
		/// \property ExpRecover
		int16_t ExpRecover = 0;

		/// \brief Column [NeedStone]: Resurrection stones required
		///
		/// \property NeedStone
		int16_t NeedStone = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE5";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Name", "Description", "Type", "ExpRecover", "NeedStone"
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
