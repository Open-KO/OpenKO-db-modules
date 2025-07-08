module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:CurrentUser;

namespace model
{
	/// \brief generated column binder for the CurrentUser model, using nanodbc
	export class CurrentUserBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(CurrentUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nServerNo", &CurrentUserBinder::BindServerNumber},
				{"strServerIP", &CurrentUserBinder::BindServerIP},
				{"strAccountID", &CurrentUserBinder::BindAccountId},
				{"strCharID", &CurrentUserBinder::BindCharId},
				{"strClientIP", &CurrentUserBinder::BindClientIP}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ServerNumber
		static void BindServerNumber(CurrentUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ServerNumber);
		}

		/// \brief Binds a result's column to ServerIP
		static void BindServerIP(CurrentUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.ServerIP);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(CurrentUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(CurrentUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to ClientIP
		static void BindClientIP(CurrentUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.ClientIP);
		}

	};
}
