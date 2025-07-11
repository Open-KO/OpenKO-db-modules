module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:Concurrent;

namespace full_binder
{
	export class Concurrent;
}

namespace full_model
{
	/// \brief [CONCURRENT] Keeps track of concurrent user counts
	/// \class Concurrent
	/// \xrefitem gamedb "Game Database" "Game Database" CONCURRENT Keeps track of concurrent user counts
	export class Concurrent 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Concurrent;

		/// \brief Column [serverid]: Server Identifier
		///
		/// \property ServerId
		uint8_t ServerId = 0;

		/// \brief Column [zone1_count]: Zone 1 Count
		///
		/// \property Zone1Count
		std::optional<int16_t> Zone1Count;

		/// \brief Column [zone2_count]: Zone 2 Count
		///
		/// \property Zone2Count
		std::optional<int16_t> Zone2Count;

		/// \brief Column [zone3_count]: Zone 3 Count
		///
		/// \property Zone3Count
		std::optional<int16_t> Zone3Count;

		/// \brief Column [bz]: Bz: TODO
		///
		/// \property Bz
		std::optional<std::string> Bz;

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
				"serverid", "zone1_count", "zone2_count", "zone3_count", "bz"
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
				"serverid"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey()
		{
			return ServerId;
		}

	};
}
