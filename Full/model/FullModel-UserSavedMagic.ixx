module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:UserSavedMagic;

namespace model_binder
{
	export class UserSavedMagic;
}

namespace model
{
	/// \brief [USER_SAVED_MAGIC] User saved magic
	/// \class UserSavedMagic
	/// \xrefitem gamedb "Game Database" "Game Database" USER_SAVED_MAGIC User saved magic
	export class UserSavedMagic 
	{
	/// \publicsection
	public:
		using BinderType = model_binder::UserSavedMagic;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [nSkill1]: Skill 1
		///
		/// \property Skill1
		int32_t Skill1 = 0;

		/// \brief Column [nDuring1]: During 1
		///
		/// \property During1
		int16_t During1 = 0;

		/// \brief Column [nSkill2]: Skill 2
		///
		/// \property Skill2
		int32_t Skill2 = 0;

		/// \brief Column [nDuring2]: During 2
		///
		/// \property During2
		int16_t During2 = 0;

		/// \brief Column [nSkill3]: Skill 3
		///
		/// \property Skill3
		int32_t Skill3 = 0;

		/// \brief Column [nDuring3]: During 3
		///
		/// \property During3
		int16_t During3 = 0;

		/// \brief Column [nSkill4]: Skill 4
		///
		/// \property Skill4
		int32_t Skill4 = 0;

		/// \brief Column [nDuring4]: During 4
		///
		/// \property During4
		int16_t During4 = 0;

		/// \brief Column [nSkill5]: Skill 5
		///
		/// \property Skill5
		int32_t Skill5 = 0;

		/// \brief Column [nDuring5]: During 5
		///
		/// \property During5
		int16_t During5 = 0;

		/// \brief Column [nSkill6]: Skill 6
		///
		/// \property Skill6
		int32_t Skill6 = 0;

		/// \brief Column [nDuring6]: During 6
		///
		/// \property During6
		int16_t During6 = 0;

		/// \brief Column [nSkill7]: Skill 7
		///
		/// \property Skill7
		int32_t Skill7 = 0;

		/// \brief Column [nDuring7]: During 7
		///
		/// \property During7
		int16_t During7 = 0;

		/// \brief Column [nSkill8]: Skill 8
		///
		/// \property Skill8
		int32_t Skill8 = 0;

		/// \brief Column [nDuring8]: During 8
		///
		/// \property During8
		int16_t During8 = 0;

		/// \brief Column [nSkill9]: Skill 9
		///
		/// \property Skill9
		int32_t Skill9 = 0;

		/// \brief Column [nDuring9]: During 9
		///
		/// \property During9
		int16_t During9 = 0;

		/// \brief Column [nSkill10]: Skill 10
		///
		/// \property Skill10
		int32_t Skill10 = 0;

		/// \brief Column [nDuring10]: During 10
		///
		/// \property During10
		int16_t During10 = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_SAVED_MAGIC";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strCharID", "nSkill1", "nDuring1", "nSkill2", "nDuring2", "nSkill3", "nDuring3", "nSkill4", "nDuring4", "nSkill5", "nDuring5", "nSkill6", "nDuring6", "nSkill7", "nDuring7", "nSkill8", "nDuring8", "nSkill9", "nDuring9", "nSkill10", "nDuring10"
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
