module;

#include <cstdint>
#include <ctime>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:UserPersonalRank;

import ModelUtil;

namespace full_binder
{
	export class UserPersonalRank;
}

namespace full_model
{
	/// \brief [USER_PERSONAL_RANK] User personal ranking
	/// \class UserPersonalRank
	/// \xrefitem gamedb "Game Database" "Game Database" USER_PERSONAL_RANK User personal ranking
	export class UserPersonalRank 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserPersonalRank;

		/// \brief Column [nRank]: Ranking
		///
		/// \property Rank
		int16_t Rank = {};

		/// \brief Column [strPosition]: Position
		///
		/// \property Position
		std::string Position;

		/// \brief Column [nElmoUP]: ElMorad Up?
		///
		/// \property ElmoUp
		int16_t ElmoUp = {};

		/// \brief Column [strElmoUserID]: ElMorad user identifier
		///
		/// \property ElmoUserId
		std::optional<std::string> ElmoUserId;

		/// \brief Column [nElmoLoyaltyMonthly]: ElMorad national points monthly
		///
		/// \property ElmoLoyaltyMonthly
		std::optional<int32_t> ElmoLoyaltyMonthly;

		/// \brief Column [nElmoCheck]: ElMorad check
		///
		/// \property ElmoCheck
		int32_t ElmoCheck = {};

		/// \brief Column [nKarusUP]: Karus Up?
		///
		/// \property KarusUp
		int16_t KarusUp = {};

		/// \brief Column [strKarusUserID]: Karus user identifier
		///
		/// \property KarusUserId
		std::optional<std::string> KarusUserId;

		/// \brief Column [nKarusLoyaltyMonthly]: Karus national points monthly
		///
		/// \property KarusLoyaltyMonthly
		std::optional<int32_t> KarusLoyaltyMonthly;

		/// \brief Column [nKarusCheck]: Karus check
		///
		/// \property KarusCheck
		int32_t KarusCheck = {};

		/// \brief Column [nSalary]: Salary
		///
		/// \property Salary
		int32_t Salary = {};

		/// \brief Column [UpdateDate]: Update date
		///
		/// \property UpdateDate
		std::time_t UpdateDate;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_PERSONAL_RANK";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nRank", "strPosition", "nElmoUP", "strElmoUserID", "nElmoLoyaltyMonthly", "nElmoCheck", "nKarusUP", "strKarusUserID", "nKarusLoyaltyMonthly", "nKarusCheck", "nSalary", "UpdateDate"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
			};
			return blobColumns;
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
		const int16_t& MapKey() const
		{
			return Rank;
		}

	};
}
