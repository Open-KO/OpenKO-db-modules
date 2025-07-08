module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:KnightsCape;

namespace model
{
	class KnightsCapeBinder;
	
	/// \brief [KNIGHTS_CAPE] Knights cape information
	/// \class KnightsCape
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_CAPE
	export class KnightsCape 
	{
	/// \publicsection
	public:
		using BinderType = KnightsCapeBinder;

		/// \brief Column [sCapeIndex]: Cape identifier
		///
		/// \property CapeIndex
		int16_t CapeIndex = 0;

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [nBuyPrice]: Buy price
		///
		/// \property BuyPrice
		int32_t BuyPrice = 0;

		/// \brief Column [nDuration]: Duration TODO
		///
		/// \property Duration
		int32_t Duration = 0;

		/// \brief Column [byGrade]: Required grade
		///
		/// \property Grade
		int16_t Grade = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS_CAPE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sCapeIndex", "strName", "nBuyPrice", "nDuration", "byGrade"
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
