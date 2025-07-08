module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:LevelUpBinder;

import :LevelUp;

namespace model
{
	/// \brief generated column binder for the LevelUp model, using nanodbc
	export class LevelUpBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(LevelUp& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"level", &LevelUpBinder::BindLevel},
				{"Exp", &LevelUpBinder::BindRequiredExp}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to RequiredExp
		static void BindRequiredExp(LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredExp);
		}

	};
}
