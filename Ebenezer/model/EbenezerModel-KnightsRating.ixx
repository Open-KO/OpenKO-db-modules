module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:KnightsRating;

import ModelUtil;

namespace ebenezer_binder
{
	export class KnightsRating;
}

namespace ebenezer_model
{
	/// \brief [KNIGHTS_RATING] Knights Ratings
	/// \class KnightsRating
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_RATING Knights Ratings
	export class KnightsRating 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::KnightsRating;

		/// \brief Column [nRank]: Rank
		///
		/// \property Rank
		int32_t Rank = 0;

		/// \brief Column [shIndex]: Knights identifier
		///
		/// \property Index
		int16_t Index = 0;

		/// \brief Column [nPoints]: National points
		///
		/// \property Points
		int32_t Points = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS_RATING";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nRank", "shIndex", "nPoints"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"nRank"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return Rank;
		}

	};
}
