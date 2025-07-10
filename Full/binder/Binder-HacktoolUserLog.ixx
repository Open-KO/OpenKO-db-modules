module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:HacktoolUserLog;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::HacktoolUserLog
	export class HacktoolUserLog
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &HacktoolUserLog::BindAccountId},
				{"strCharID", &HacktoolUserLog::BindCharId},
				{"strHackToolName", &HacktoolUserLog::BindHackToolName},
				{"tWriteTime", &HacktoolUserLog::BindWriteTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to HackToolName
		static void BindHackToolName(model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
		{
			m.HackToolName = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to WriteTime
		static void BindWriteTime(model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.WriteTime);
		}

	};
}
