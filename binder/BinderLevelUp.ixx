module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:LevelUp;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderLevelUp
	export class LevelUpBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::LevelUp& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"level", &LevelUp::BindLevel},
				{"Exp", &LevelUp::BindRequiredExp}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(model::LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to RequiredExp
		static void BindRequiredExp(model::LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredExp);
		}

	};
}
