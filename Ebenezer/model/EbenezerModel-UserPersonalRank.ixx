module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module EbenezerModel:UserPersonalRank;

import ModelUtil;

namespace ebenezer_binder
{
	export class UserPersonalRank;
}

namespace ebenezer_model
{
	/// \brief [USER_PERSONAL_RANK] User personal ranking
	/// \class UserPersonalRank
	/// \xrefitem gamedb "Game Database" "Game Database" USER_PERSONAL_RANK User personal ranking
	export class UserPersonalRank 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::UserPersonalRank;

		/// \brief Column [nRank]: Ranking
		///
		/// \property Rank
		int16_t Rank = 0;

		/// \brief Column [strElmoUserID]: ElMorad user identifier
		///
		/// \property ElmoUserId
		std::optional<std::string> ElmoUserId;

		/// \brief Column [strKarusUserID]: Karus user identifier
		///
		/// \property KarusUserId
		std::optional<std::string> KarusUserId;

		/// \brief Column [nSalary]: Salary
		///
		/// \property Salary
		int32_t Salary = 0;

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
				"nRank", "strElmoUserID", "strKarusUserID", "nSalary"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType& DbType()
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
		const int16_t& MapKey()
		{
			return Rank;
		}

	};
}
