module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:ItemUpProbability;

import ModelUtil;

namespace full_binder
{
	export class ItemUpProbability;
}

namespace full_model
{
	/// \brief [ITEMUP_PROBABILITY] TODO: Doc usage
	/// \class ItemUpProbability
	/// \xrefitem gamedb "Game Database" "Game Database" ITEMUP_PROBABILITY TODO: Doc usage
	export class ItemUpProbability 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::ItemUpProbability;

		/// \brief Column [bType]: Type
		///
		/// \property Type
		uint8_t Type = {};

		/// \brief Column [nMaxSuccess]: Max Success
		///
		/// \property MaxSuccess
		int16_t MaxSuccess = {};

		/// \brief Column [nMaxFail]: Max Fail
		///
		/// \property MaxFail
		int16_t MaxFail = {};

		/// \brief Column [nCurSuccess]: Current success
		///
		/// \property CurrentSuccess
		int16_t CurrentSuccess = {};

		/// \brief Column [nCurFail]: Current failure
		///
		/// \property CurrentFailure
		int16_t CurrentFailure = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ITEMUP_PROBABILITY";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"bType", "nMaxSuccess", "nMaxFail", "nCurSuccess", "nCurFail"
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
				"bType"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const
		{
			return Type;
		}

	};
}
