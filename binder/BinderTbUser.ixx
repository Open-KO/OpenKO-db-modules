module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:TbUser;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderTbUser
	export class TbUserBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::TbUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &TbUser::BindAccountId},
				{"strPasswd", &TbUser::BindPassword},
				{"strSocNo", &TbUser::BindSocNo},
				{"strEmail", &TbUser::BindEmail},
				{"strAuthority", &TbUser::BindAuthority},
				{"PremiumExpire", &TbUser::BindPremiumExpire}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Password
		static void BindPassword(model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Password);
		}

		/// \brief Binds a result's column to SocNo
		static void BindSocNo(model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.SocNo);
		}

		/// \brief Binds a result's column to Email
		static void BindEmail(model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Email);
		}

		/// \brief Binds a result's column to Authority
		static void BindAuthority(model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Authority);
		}

		/// \brief Binds a result's column to PremiumExpire
		static void BindPremiumExpire(model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.PremiumExpire);
		}

	};
}
