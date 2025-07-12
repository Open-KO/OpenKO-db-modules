module;

#include <cstdint>
#include <ctime>
#include <string>
#include <unordered_set>

export module FullModel:UserEditor;

import ModelUtil;

namespace full_binder
{
	export class UserEditor;
}

namespace full_model
{
	/// \brief [USER_EDITOR] User editor
	/// \class UserEditor
	/// \xrefitem gamedb "Game Database" "Game Database" USER_EDITOR User editor
	export class UserEditor 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserEditor;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strOpID]: Op identifier
		///
		/// \property OpId
		std::string OpId;

		/// \brief Column [strOpIP]: Op IP address
		///
		/// \property OpIP
		std::string OpIP;

		/// \brief Column [strOldUserValue]: Old user value
		///
		/// \property OldUserValue
		std::vector<uint8_t> OldUserValue;

		/// \brief Column [strNewUserValue]: New user value
		///
		/// \property NewUserValue
		std::vector<uint8_t> NewUserValue;

		/// \brief Column [strOldUserSkill]: Old user skill
		///
		/// \property OldUserSkill
		std::vector<uint8_t> OldUserSkill;

		/// \brief Column [strNewUserSkill]: New user skill
		///
		/// \property NewUserSkill
		std::vector<uint8_t> NewUserSkill;

		/// \brief Column [strOldUserItem]: Old user item
		///
		/// \property OldUserItem
		std::vector<uint8_t> OldUserItem;

		/// \brief Column [strNewUserItem]: New user item
		///
		/// \property NewUserItem
		std::vector<uint8_t> NewUserItem;

		/// \brief Column [strOldWHValue]: Old warehouse value
		///
		/// \property OldWarehouseValue
		std::vector<uint8_t> OldWarehouseValue;

		/// \brief Column [strNewWHValue]: New warehouse value
		///
		/// \property NewWarehouseValue
		std::vector<uint8_t> NewWarehouseValue;

		/// \brief Column [strOldWHItem]: Old warehouse item
		///
		/// \property OldWarehouseItem
		std::vector<uint8_t> OldWarehouseItem;

		/// \brief Column [strNewWHItem]: New warehouse item
		///
		/// \property NewWarehouseItem
		std::vector<uint8_t> NewWarehouseItem;

		/// \brief Column [EditorTime]: Record create time
		///
		/// \property EditorTime
		std::time_t EditorTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_EDITOR";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strCharID", "strAccountID", "strOpID", "strOpIP", "strOldUserValue", "strNewUserValue", "strOldUserSkill", "strNewUserSkill", "strOldUserItem", "strNewUserItem", "strOldWHValue", "strNewWHValue", "strOldWHItem", "strNewWHItem", "EditorTime"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType() const
		{
			return modelUtil::DbType::GAME;
		}

	};
}
