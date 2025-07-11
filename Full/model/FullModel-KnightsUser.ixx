module;

#include <cstdint>
#include <string>
#include <tuple>
#include <unordered_set>

export module FullModel:KnightsUser;

namespace full_binder
{
	export class KnightsUser;
}

namespace full_model
{
	/// \brief [KNIGHTS_USER] Knights to character relationships
	/// \class KnightsUser
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_USER Knights to character relationships
	export class KnightsUser 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KnightsUser;

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

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"sIDNum", "strUserID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::tuple<int16_t, std::string>& MapKey()
		{
			return std::tuple<int16_t, std::string>{KnightsId, UserId};
		}

	};
}
