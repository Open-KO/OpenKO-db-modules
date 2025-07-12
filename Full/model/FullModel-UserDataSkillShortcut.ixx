module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:UserDataSkillShortcut;

import ModelUtil;

namespace full_binder
{
	export class UserDataSkillShortcut;
}

namespace full_model
{
	/// \brief [USERDATA_SKILLSHORTCUT] User data skill shortcut
	/// \class UserDataSkillShortcut
	/// \xrefitem gamedb "Game Database" "Game Database" USERDATA_SKILLSHORTCUT User data skill shortcut
	export class UserDataSkillShortcut 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserDataSkillShortcut;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [nCount]: Count
		///
		/// \property Count
		int16_t Count = 0;

		/// \brief Column [strSkillData]: Skill data
		///
		/// \property SkillData
		std::string SkillData;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USERDATA_SKILLSHORTCUT";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strCharID", "nCount", "strSkillData"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"strCharID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::string& MapKey()
		{
			return CharId;
		}

	};
}
