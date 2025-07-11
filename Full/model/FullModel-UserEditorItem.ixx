module;

#include <cstdint>
#include <ctime>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:UserEditorItem;

namespace full_binder
{
	export class UserEditorItem;
}

namespace full_model
{
	/// \brief [USER_EDITOR_ITEM] User editor item
	/// \class UserEditorItem
	/// \xrefitem gamedb "Game Database" "Game Database" USER_EDITOR_ITEM User editor item
	export class UserEditorItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserEditorItem;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strOpID]: Op(erator?) identifier
		///
		/// \property OpId
		std::string OpId;

		/// \brief Column [strOpIP]: Op IP address
		///
		/// \property OpIP
		std::string OpIP;

		/// \brief Column [sDBIndex]: DbIndex
		///
		/// \property DbIndex
		int16_t DbIndex = 0;

		/// \brief Column [sPos]: Pos
		///
		/// \property Pos
		int16_t Pos = 0;

		/// \brief Column [byType]: Type
		///
		/// \property Type
		int16_t Type = 0;

		/// \brief Column [nItemID1]: Item 1 identifier
		///
		/// \property ItemId1
		int32_t ItemId1 = 0;

		/// \brief Column [nItemID2]: Item 2 identifier
		///
		/// \property ItemId2
		int32_t ItemId2 = 0;

		/// \brief Column [UpdateTime]: Update time
		///
		/// \property UpdateTime
		std::optional<std::time_t> UpdateTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_EDITOR_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strCharID", "strAccountID", "strOpID", "strOpIP", "sDBIndex", "sPos", "byType", "nItemID1", "nItemID2", "UpdateTime"
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
