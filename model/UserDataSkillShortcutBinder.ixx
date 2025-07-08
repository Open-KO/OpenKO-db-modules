module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:UserDataSkillShortcut;

namespace model
{
	/// \brief generated column binder for the UserDataSkillShortcut model, using nanodbc
	export class UserDataSkillShortcutBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserDataSkillShortcutBinder::BindCharId},
				{"nCount", &UserDataSkillShortcutBinder::BindCount},
				{"strSkillData", &UserDataSkillShortcutBinder::BindSkillData}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(UserDataSkillShortcut& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to Count
		static void BindCount(UserDataSkillShortcut& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Count);
		}

		/// \brief Binds a result's column to SkillData
		static void BindSkillData(UserDataSkillShortcut& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.SkillData);
		}

	};
}
