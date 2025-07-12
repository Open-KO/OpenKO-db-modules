module;

#include <ctime>
#include <string>
#include <unordered_set>

export module FullModel:HacktoolUserLog;

import ModelUtil;

namespace full_binder
{
	export class HacktoolUserLog;
}

namespace full_model
{
	/// \brief [HACKTOOL_USERLOG] Tracks possible detections of a hack tool by a user
	/// \class HacktoolUserLog
	/// \xrefitem gamedb "Game Database" "Game Database" HACKTOOL_USERLOG Tracks possible detections of a hack tool by a user
	export class HacktoolUserLog 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::HacktoolUserLog;

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
		std::string HackToolName;

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
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};
}
