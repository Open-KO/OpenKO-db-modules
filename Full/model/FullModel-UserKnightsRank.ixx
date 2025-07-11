module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:UserKnightsRank;

import ModelUtil;

namespace full_binder
{
	export class UserKnightsRank;
}

namespace full_model
{
	/// \brief [USER_KNIGHTS_RANK] User Knights Ranking
	/// \class UserKnightsRank
	/// \xrefitem gamedb "Game Database" "Game Database" USER_KNIGHTS_RANK User Knights Ranking
	export class UserKnightsRank 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserKnightsRank;

		/// \brief Column [shIndex]: Index
		///
		/// \property Index
		int16_t Index = 0;

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [strElmoUserID]: ElMorad user identifier
		///
		/// \property ElmoUserId
		std::optional<std::string> ElmoUserId;

		/// \brief Column [strElmoKnightsName]: ElMorad Knights name
		///
		/// \property ElmoKnightsName
		std::optional<std::string> ElmoKnightsName;

		/// \brief Column [nElmoLoyalty]: ElMorad national points
		///
		/// \property ElmoLoyalty
		std::optional<int32_t> ElmoLoyalty;

		/// \brief Column [strKarusUserID]: Karus user identifier
		///
		/// \property KarusUserId
		std::optional<std::string> KarusUserId;

		/// \brief Column [strKarusKnightsName]: Karus Knights name
		///
		/// \property KarusKnightsName
		std::optional<std::string> KarusKnightsName;

		/// \brief Column [nKarusLoyalty]: Karus national points
		///
		/// \property KarusLoyalty
		std::optional<int32_t> KarusLoyalty;

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
				"shIndex", "strName", "strElmoUserID", "strElmoKnightsName", "nElmoLoyalty", "strKarusUserID", "strKarusKnightsName", "nKarusLoyalty", "nMoney"
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
		const int16_t& MapKey() const
		{
			return Index;
		}

	};
}
