module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module Model:MakeItem;

namespace binder
{
	export class MakeItemBinder;
}

namespace model
{

	export class MakeItem 
	{
	/// \publicsection
	public:
		using BinderType = binder::MakeItemBinder;

		/// \brief Column [sIndex]: Index
		///
		/// \property Index
		int16_t Index = 0;

		/// \brief Column [strItemInfo]: Item information
		///
		/// \property ItemInfo
		std::optional<std::string> ItemInfo;

		/// \brief Column [iItemCode]: Item Code
		///
		/// \property ItemCode
		int32_t ItemCode = 0;

		/// \brief Column [byItemLevel]: Item level
		///
		/// \property ItemLevel
		int16_t ItemLevel = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAKE_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIndex", "strItemInfo", "iItemCode", "byItemLevel"
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
