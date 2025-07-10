module;

#include <cstdint>
#include <ctime>
#include <string>
#include <unordered_set>

export module Model:TbUser;

namespace binder
{
	export class TbUserBinder;
}

namespace model
{

	export class TbUser 
	{
	/// \publicsection
	public:
		using BinderType = binder::TbUserBinder;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strPasswd]: Password
		///
		/// \property Password
		std::string Password;

		/// \brief Column [strSocNo]: Character delete password
		///
		/// \property SocNo
		std::string SocNo;

		/// \brief Column [strEmail]: Electronic mailing address
		///
		/// \property Email
		std::string Email;

		/// \brief Column [strAuthority]: Authority level
		///
		/// \property Authority
		int16_t Authority = 0;

		/// \brief Column [PremiumExpire]: Premium expiration datetime
		///
		/// \property PremiumExpire
		std::time_t PremiumExpire;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "TB_USER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "strPasswd", "strSocNo", "strEmail", "strAuthority", "PremiumExpire"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
