module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module VersionManagerModel;

import ModelUtil;

namespace versionmanager_binder
{
	export class Concurrent;
	export class CurrentUser;
	export class TbUser;
	export class Version;
}

namespace versionmanager_model
{
	/// \brief [CONCURRENT] Keeps track of concurrent user counts
	/// \class Concurrent
	/// \xrefitem gamedb "Game Database" "Game Database" CONCURRENT Keeps track of concurrent user counts
	export class Concurrent 
	{
	/// \publicsection
	public:
		using BinderType = versionmanager_binder::Concurrent;

		/// \brief Column [serverid]: Server Identifier
		///
		/// \property ServerId
		uint8_t ServerId = {};

		/// \brief Column [zone1_count]: Zone 1 Count
		///
		/// \property Zone1Count
		int16_t Zone1Count = {};

		/// \brief Column [zone2_count]: Zone 2 Count
		///
		/// \property Zone2Count
		int16_t Zone2Count = {};

		/// \brief Column [zone3_count]: Zone 3 Count
		///
		/// \property Zone3Count
		int16_t Zone3Count = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "CONCURRENT";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"serverid", "zone1_count", "zone2_count", "zone3_count"
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
				"serverid"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const
		{
			return ServerId;
		}

	};

	/// \brief [CURRENTUSER] Keeps track of users currently connected to the server
	/// \class CurrentUser
	/// \xrefitem gamedb "Game Database" "Game Database" CURRENTUSER Keeps track of users currently connected to the server
	export class CurrentUser 
	{
	/// \publicsection
	public:
		using BinderType = versionmanager_binder::CurrentUser;

		/// \brief Column [nServerNo]: Server Index
		///
		/// \property ServerNumber
		int32_t ServerNumber = {};

		/// \brief Column [strServerIP]: Server IP Address
		///
		/// \property ServerIP
		std::string ServerIP;

		/// \brief Column [strAccountID]: User Account Identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "CURRENTUSER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nServerNo", "strServerIP", "strAccountID"
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