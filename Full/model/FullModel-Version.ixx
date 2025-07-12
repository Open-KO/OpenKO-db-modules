module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:Version;

import ModelUtil;

namespace full_binder
{
	export class Version;
}

namespace full_model
{
	/// \brief [VERSION] Version data and patch management
	/// \class Version
	/// \xrefitem gamedb "Game Database" "Game Database" VERSION Version data and patch management
	export class Version 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Version;

		/// \brief Column [sVersion]: Game version number
		///
		/// \property Number
		int16_t Number = 0;

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
		int16_t HistoryVersion = 0;

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

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType() const
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
