module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:Version;

namespace model
{
	class VersionBinder;
	
	/// \brief [VERSION] Version data and patch management
	/// \class Version
	/// \xrefitem gamedb "Game Database" "Game Database" VERSION
	export class Version 
	{
	/// \publicsection
	public:
		using BinderType = VersionBinder;

		/// \brief Column [sVersion]: Game version
		///
		/// \property Version
		int16_t Version = 0;

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
		static std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sVersion", "strFileName", "strCompressName", "sHistoryVersion"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
