module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:KnightsAlliance;

namespace full_binder
{
	export class KnightsAlliance;
}

namespace full_model
{
	/// \brief [KNIGHTS_ALLIANCE] Knights alliance formations
	/// \class KnightsAlliance
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_ALLIANCE Knights alliance formations
	export class KnightsAlliance 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KnightsAlliance;

		/// \brief Column [sMainAllianceKnights]: Alliance leader clan
		///
		/// \property MainAllianceKnights
		int16_t MainAllianceKnights = 0;

		/// \brief Column [sSubAllianceKnights]: Second Knights group
		///
		/// \property SubAllianceKnights
		int16_t SubAllianceKnights = 0;

		/// \brief Column [sMercenaryClan_1]: Mercenary clan 1
		///
		/// \property MercenaryClan1
		int16_t MercenaryClan1 = 0;

		/// \brief Column [sMercenaryClan_2]: Mercenary clan 2
		///
		/// \property MercenaryClan2
		int16_t MercenaryClan2 = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS_ALLIANCE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sMainAllianceKnights", "sSubAllianceKnights", "sMercenaryClan_1", "sMercenaryClan_2"
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
				"sMainAllianceKnights"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey()
		{
			return MainAllianceKnights;
		}

	};
}
