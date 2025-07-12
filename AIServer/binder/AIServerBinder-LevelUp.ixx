module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module AIServerBinder:LevelUp;

import AIServerModel;

namespace aiserver_binder
{
	/// \brief generated nanodbc column binder for aiserver_model::LevelUp
	export class LevelUp
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex);

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
		static void BindLevel(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			m.Level = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RequiredExp
		static void BindRequiredExp(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredExp);
		}

	};
}
