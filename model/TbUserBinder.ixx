module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:TbUser;

namespace model
{
	/// \brief generated column binder for the TbUser model, using nanodbc
	export class TbUserBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(TbUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &TbUserBinder::BindAccountId},
				{"strPasswd", &TbUserBinder::BindPassword},
				{"strSocNo", &TbUserBinder::BindSocNo},
				{"strEmail", &TbUserBinder::BindEmail},
				{"strAuthority", &TbUserBinder::BindAuthority},
				{"PremiumExpire", &TbUserBinder::BindPremiumExpire}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(TbUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Password
		static void BindPassword(TbUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Password);
		}

		/// \brief Binds a result's column to SocNo
		static void BindSocNo(TbUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.SocNo);
		}

		/// \brief Binds a result's column to Email
		static void BindEmail(TbUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Email);
		}

		/// \brief Binds a result's column to Authority
		static void BindAuthority(TbUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Authority);
		}

		/// \brief Binds a result's column to PremiumExpire
		static void BindPremiumExpire(TbUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.PremiumExpire);
		}

	};
}
