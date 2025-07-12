module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:ProgramListLog;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::ProgramListLog
	export class ProgramListLog
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"id", &ProgramListLog::BindId},
				{"strAccountID", &ProgramListLog::BindAccountId},
				{"strCharID", &ProgramListLog::BindCharId},
				{"strHackToolName", &ProgramListLog::BindHackToolName},
				{"tWriteTime", &ProgramListLog::BindWriteTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Id
		static void BindId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Id);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to HackToolName
		static void BindHackToolName(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.HackToolName);
		}

		/// \brief Binds a result's column to WriteTime
		static void BindWriteTime(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.WriteTime);
		}

	};
}
