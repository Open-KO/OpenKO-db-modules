module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module Model:KnightsUser;

namespace binder
{
	export class KnightsUser;
}

namespace model
{
	/// \brief [KNIGHTS_USER] Knights to character relationships
	/// \class KnightsUser
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_USER
	export class KnightsUser 
	{
	/// \publicsection
	public:
		using BinderType = binder::KnightsUser;

		/// \brief Column [sIDNum]: Knights identifier
		///
		/// \property KnightsId
		int16_t KnightsId = 0;

		/// \brief Column [strUserID]: Character Identifier
		///
		/// \property UserId
		std::string UserId;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS_USER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIDNum", "strUserID"
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
