module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:TbUser;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::TbUser
	export class TbUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::TbUser& m, const nanodbc::result& result, short colIndex);

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
		static void BindAccountId(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Password
		static void BindPassword(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Password);
		}

		/// \brief Binds a result's column to SocNo
		static void BindSocNo(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.SocNo);
		}

		/// \brief Binds a result's column to Email
		static void BindEmail(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Email);
		}

		/// \brief Binds a result's column to Authority
		static void BindAuthority(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			m.Authority = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to PremiumExpire
		static void BindPremiumExpire(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			m.PremiumExpire = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

	};
}
