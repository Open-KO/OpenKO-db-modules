module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:ProgramListLogBinder;

import :ProgramListLog;

namespace model
{
	/// \brief generated column binder for the ProgramListLog model, using nanodbc
	export class ProgramListLogBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ProgramListLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"id", &ProgramListLogBinder::BindId},
				{"strAccountID", &ProgramListLogBinder::BindAccountId},
				{"strCharID", &ProgramListLogBinder::BindCharId},
				{"strHackToolName", &ProgramListLogBinder::BindHackToolName},
				{"tWriteTime", &ProgramListLogBinder::BindWriteTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Id
		static void BindId(ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Id);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to HackToolName
		static void BindHackToolName(ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.HackToolName);
		}

		/// \brief Binds a result's column to WriteTime
		static void BindWriteTime(ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.WriteTime);
		}

	};
}
