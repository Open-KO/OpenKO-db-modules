module;

#include <cstdint>
#include <ctime>
#include <string>
#include <unordered_set>

export module FullModel:ProgramListLog;

namespace model_binder
{
	export class ProgramListLog;
}

namespace model
{
	/// \brief [PROGRAMLIST_LOG] Program list log
	/// \class ProgramListLog
	/// \xrefitem gamedb "Game Database" "Game Database" PROGRAMLIST_LOG Program list log
	export class ProgramListLog 
	{
	/// \publicsection
	public:
		using BinderType = model_binder::ProgramListLog;

		/// \brief Column [id]: Identifier
		///
		/// \property Id
		int32_t Id = 0;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [strHackToolName]: Hack tool name
		///
		/// \property HackToolName
		std::string HackToolName;

		/// \brief Column [tWriteTime]: Write time
		///
		/// \property WriteTime
		std::time_t WriteTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "PROGRAMLIST_LOG";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"id", "strAccountID", "strCharID", "strHackToolName", "tWriteTime"
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
