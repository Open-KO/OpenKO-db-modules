module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module Model:UserDataSkillShortcut;

namespace binder
{
	export class UserDataSkillShortcutBinder;
}

namespace model
{

	export class UserDataSkillShortcut 
	{
	/// \publicsection
	public:
		using BinderType = binder::UserDataSkillShortcutBinder;

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
