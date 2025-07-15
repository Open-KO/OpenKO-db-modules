module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module VersionManagerModel;

import ModelUtil;

namespace versionmanager_binder
{
	export class TbUser;
	export class Version;
}

namespace versionmanager_model
{
	/// \brief [TB_USER] User Account Information
	/// \class TbUser
	/// \xrefitem gamedb "Game Database" "Game Database" TB_USER User Account Information
	export class TbUser 
	{
	/// \publicsection
	public:
		using BinderType = versionmanager_binder::TbUser;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strPasswd]: Password
		///
		/// \property Password
		std::string Password;

		/// \brief Column [strAuthority]: Authority level
		///
		/// \property Authority
		uint8_t Authority = {};

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
				"strAccountID", "strPasswd", "strAuthority"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
			};
			return blobColumns;
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

	/// \brief [VERSION] Version data and patch management
	/// \class Version
	/// \xrefitem gamedb "Game Database" "Game Database" VERSION Version data and patch management
	export class Version 
	{
	/// \publicsection
	public:
		using BinderType = versionmanager_binder::Version;

		/// \brief Column [sVersion]: Game version number
		///
		/// \property Number
		int16_t Number = {};

		/// \brief Column [strFileName]: Patch file name
		///
		/// \property FileName
		std::string FileName;

		/// \brief Column [strCompressName]: User-friendly patch name
		///
		/// \property CompressName
		std::string CompressName;

		/// \brief Column [sHistoryVersion]: Previous patch version
		///
		/// \property HistoryVersion
		int16_t HistoryVersion = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "VERSION";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sVersion", "strFileName", "strCompressName", "sHistoryVersion"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
			};
			return blobColumns;
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
				"sVersion"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return Number;
		}

	};
}