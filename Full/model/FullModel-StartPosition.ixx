module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:StartPosition;

namespace full_binder
{
	export class StartPosition;
}

namespace full_model
{
	/// \brief [START_POSITION] Start position
	/// \class StartPosition
	/// \xrefitem gamedb "Game Database" "Game Database" START_POSITION Start position
	export class StartPosition 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::StartPosition;

		/// \brief Column [ZoneID]: Zone identifier
		///
		/// \property ZoneId
		int16_t ZoneId = 0;

		/// \brief Column [sKarusX]: Karus X
		///
		/// \property KarusX
		int16_t KarusX = 0;

		/// \brief Column [sKarusZ]: Karus Z
		///
		/// \property KarusZ
		int16_t KarusZ = 0;

		/// \brief Column [sElmoradX]: ElMorad X
		///
		/// \property ElmoX
		int16_t ElmoX = 0;

		/// \brief Column [sElmoradZ]: ElMorad Z
		///
		/// \property ElmoZ
		int16_t ElmoZ = 0;

		/// \brief Column [bRangeX]: Maximum distance from spawn X
		///
		/// \property RangeX
		int16_t RangeX = 0;

		/// \brief Column [bRangeZ]: Maximum distance from spawn Z
		///
		/// \property RangeZ
		int16_t RangeZ = 0;

		/// \brief Column [sKarusGateX]: Karus gate X
		///
		/// \property KarusGateX
		int16_t KarusGateX = 0;

		/// \brief Column [sKarusGateZ]: Karus gate Z
		///
		/// \property KarusGateZ
		int16_t KarusGateZ = 0;

		/// \brief Column [sElmoGateX]: ElMorad gate X
		///
		/// \property ElmoGateX
		int16_t ElmoGateX = 0;

		/// \brief Column [sElmoGateZ]: ElMorad gate Z
		///
		/// \property ElmoGateZ
		int16_t ElmoGateZ = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "START_POSITION";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"ZoneID", "sKarusX", "sKarusZ", "sElmoradX", "sElmoradZ", "bRangeX", "bRangeZ", "sKarusGateX", "sKarusGateZ", "sElmoGateX", "sElmoGateZ"
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
				"ZoneID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey()
		{
			return ZoneId;
		}

	};
}
