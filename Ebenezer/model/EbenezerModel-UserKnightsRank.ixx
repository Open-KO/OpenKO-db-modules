module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module EbenezerModel:UserKnightsRank;

import ModelUtil;

namespace ebenezer_binder
{
	export class UserKnightsRank;
}

namespace ebenezer_model
{
	/// \brief [USER_KNIGHTS_RANK] User Knights Ranking
	/// \class UserKnightsRank
	/// \xrefitem gamedb "Game Database" "Game Database" USER_KNIGHTS_RANK User Knights Ranking
	export class UserKnightsRank 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::UserKnightsRank;

		/// \brief Column [shIndex]: Index
		///
		/// \property Index
		int16_t Index = 0;

		/// \brief Column [strElmoUserID]: ElMorad user identifier
		///
		/// \property ElmoUserId
		std::optional<std::string> ElmoUserId;

		/// \brief Column [strKarusUserID]: Karus user identifier
		///
		/// \property KarusUserId
		std::optional<std::string> KarusUserId;

		/// \brief Column [nMoney]: Money
		///
		/// \property Money
		int32_t Money = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_KNIGHTS_RANK";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"shIndex", "strElmoUserID", "strKarusUserID", "nMoney"
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
				"shIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey()
		{
			return Index;
		}

	};
}
