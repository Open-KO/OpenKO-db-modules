module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:MakeItem;

namespace model
{
	class MakeItemBinder;
	
	/// \brief [MAKE_ITEM] Make item
	/// \class MakeItem
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_ITEM
	export class MakeItem 
	{
	/// \publicsection
	public:
		using BinderType = MakeItemBinder;

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
		uint8_t ItemLevel = 0;

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
