module;

#include <cstdint>
#include <optional>
#include <string>
#include <tuple>
#include <unordered_set>

export module FullModel:ZoneInfo;

namespace full_binder
{
	export class ZoneInfo;
}

namespace full_model
{
	/// \brief [ZONE_INFO] Zone (map) information
	/// \class ZoneInfo
	/// \xrefitem gamedb "Game Database" "Game Database" ZONE_INFO Zone (map) information
	export class ZoneInfo 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::ZoneInfo;

		/// \brief Column [ServerNo]: Server identifier
		///
		/// \property ServerId
		uint8_t ServerId = 0;

		/// \brief Column [ZoneNo]: Zone identifier
		///
		/// \property ZoneId
		int16_t ZoneId = 0;

		/// \brief Column [strZoneName]: Zone name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [InitX]: X-coordinate location for a player loading into the zone
		///
		/// \property InitX
		int32_t InitX = 0;

		/// \brief Column [InitZ]: Z-coordinate location for a player loading into the zone
		///
		/// \property InitZ
		int32_t InitZ = 0;

		/// \brief Column [InitY]: Y-coordinate location for a player loading into the zone
		///
		/// \property InitY
		int32_t InitY = 0;

		/// \brief Column [Type]: Type
		///
		/// \property Type
		uint8_t Type = 0;

		/// \brief Column [RoomEvent]: Map EventId
		///
		/// \property RoomEvent
		uint8_t RoomEvent = 0;

		/// \brief Column [bz]: Bz TODO - just seems like a description column
		///
		/// \property Bz
		std::optional<std::string> Bz;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ZONE_INFO";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"ServerNo", "ZoneNo", "strZoneName", "InitX", "InitZ", "InitY", "Type", "RoomEvent", "bz"
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
				"ServerNo", "ZoneNo"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::tuple<uint8_t, int16_t>& MapKey()
		{
			return std::tuple<uint8_t, int16_t>{ServerId, ZoneId};
		}

	};
}
