module;

#include <ctime>
#include <optional>
#include <string>
#include <unordered_set>

export module Model:HacktoolUserLog;

namespace binder
{
	export class HacktoolUserLogBinder;
}

namespace model
{

	export class HacktoolUserLog 
	{
	/// \publicsection
	public:
		using BinderType = binder::HacktoolUserLogBinder;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: Character name
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [strHackToolName]: Name of the hack tool detected
		///
		/// \property HackToolName
		std::optional<std::string> HackToolName;

		/// \brief Column [tWriteTime]: Log time
		///
		/// \property WriteTime
		std::time_t WriteTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "HACKTOOL_USERLOG";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "strCharID", "strHackToolName", "tWriteTime"
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
