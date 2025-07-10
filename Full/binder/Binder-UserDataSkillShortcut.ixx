module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:UserDataSkillShortcut;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::UserDataSkillShortcut
	export class UserDataSkillShortcut
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserDataSkillShortcut::BindCharId},
				{"nCount", &UserDataSkillShortcut::BindCount},
				{"strSkillData", &UserDataSkillShortcut::BindSkillData}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to Count
		static void BindCount(model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Count);
		}

		/// \brief Binds a result's column to SkillData
		static void BindSkillData(model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.SkillData);
		}

	};
}
