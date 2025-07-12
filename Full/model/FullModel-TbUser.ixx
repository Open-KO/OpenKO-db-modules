module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:TbUser;

import ModelUtil;

namespace full_binder
{
	export class TbUser;
}

namespace full_model
{
	/// \brief [TB_USER] User Account Information
	/// \class TbUser
	/// \xrefitem gamedb "Game Database" "Game Database" TB_USER User Account Information
	export class TbUser 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::TbUser;

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
		uint8_t Authority = 0;

		/// \brief Column [PremiumExpire]: Premium expiration datetime
		///
		/// \property PremiumExpire
		int64_t PremiumExpire = 0;

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
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"strAccountID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::string& MapKey() const
		{
			return AccountId;
		}

	};
}
