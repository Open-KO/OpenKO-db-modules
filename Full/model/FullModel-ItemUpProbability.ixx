module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:ItemUpProbability;

namespace model_binder
{
	export class ItemUpProbability;
}

namespace model
{
	/// \brief [ITEMUP_PROBABILITY] TODO: Doc usage
	/// \class ItemUpProbability
	/// \xrefitem gamedb "Game Database" "Game Database" ITEMUP_PROBABILITY TODO: Doc usage
	export class ItemUpProbability 
	{
	/// \publicsection
	public:
		using BinderType = model_binder::ItemUpProbability;

		/// \brief Column [bType]: Type
		///
		/// \property Type
		int16_t Type = 0;

		/// \brief Column [nMaxSuccess]: Max Success
		///
		/// \property MaxSuccess
		int16_t MaxSuccess = 0;

		/// \brief Column [nMaxFail]: Max Fail
		///
		/// \property MaxFail
		int16_t MaxFail = 0;

		/// \brief Column [nCurSuccess]: Current success
		///
		/// \property CurrentSuccess
		int16_t CurrentSuccess = 0;

		/// \brief Column [nCurFail]: Current failure
		///
		/// \property CurrentFailure
		int16_t CurrentFailure = 0;

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
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
