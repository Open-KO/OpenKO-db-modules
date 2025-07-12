module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:KnightsRating;

import ModelUtil;

namespace full_binder
{
	export class KnightsRating;
}

namespace full_model
{
	/// \brief [KNIGHTS_RATING] Knights Ratings
	/// \class KnightsRating
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_RATING Knights Ratings
	export class KnightsRating 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KnightsRating;

		/// \brief Column [nRank]: Rank
		///
		/// \property Rank
		int32_t Rank = 0;

		/// \brief Column [shIndex]: Knights identifier
		///
		/// \property Index
		std::optional<int16_t> Index;

		/// \brief Column [strName]: Knights name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [nPoints]: National points
		///
		/// \property Points
		std::optional<int32_t> Points;

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
				"nRank", "shIndex", "strName", "nPoints"
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
