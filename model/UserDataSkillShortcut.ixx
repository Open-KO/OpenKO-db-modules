module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:UserDataSkillShortcut;

namespace model
{
	export class UserDataSkillShortcutBinder;
	
	/// \brief [USERDATA_SKILLSHORTCUT] User data skill shortcut
	/// \class UserDataSkillShortcut
	/// \xrefitem gamedb "Game Database" "Game Database" USERDATA_SKILLSHORTCUT
	export class UserDataSkillShortcut 
	{
	/// \publicsection
	public:
		using BinderType = UserDataSkillShortcutBinder;

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
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
