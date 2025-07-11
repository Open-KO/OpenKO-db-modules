module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:CurrentUser;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::CurrentUser
	export class CurrentUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nServerNo", &CurrentUser::BindServerNumber},
				{"strServerIP", &CurrentUser::BindServerIP},
				{"strAccountID", &CurrentUser::BindAccountId},
				{"strCharID", &CurrentUser::BindCharId},
				{"strClientIP", &CurrentUser::BindClientIP}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ServerNumber
		static void BindServerNumber(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ServerNumber);
		}

		/// \brief Binds a result's column to ServerIP
		static void BindServerIP(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.ServerIP);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to ClientIP
		static void BindClientIP(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.ClientIP);
		}

	};
}
