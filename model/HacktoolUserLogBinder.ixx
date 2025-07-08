module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:HacktoolUserLog;

namespace model
{
	/// \brief generated column binder for the HacktoolUserLog model, using nanodbc
	export class HacktoolUserLogBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(HacktoolUserLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &HacktoolUserLogBinder::BindAccountId},
				{"strCharID", &HacktoolUserLogBinder::BindCharId},
				{"strHackToolName", &HacktoolUserLogBinder::BindHackToolName},
				{"tWriteTime", &HacktoolUserLogBinder::BindWriteTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(HacktoolUserLog& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(HacktoolUserLog& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to HackToolName
		static void BindHackToolName(HacktoolUserLog& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.HackToolName);
		}

		/// \brief Binds a result's column to WriteTime
		static void BindWriteTime(HacktoolUserLog& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.WriteTime);
		}

	};
}
