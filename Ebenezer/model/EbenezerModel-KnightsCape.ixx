module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:KnightsCape;

import ModelUtil;

namespace ebenezer_binder
{
	export class KnightsCape;
}

namespace ebenezer_model
{
	/// \brief [KNIGHTS_CAPE] Knights cape information
	/// \class KnightsCape
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_CAPE Knights cape information
	export class KnightsCape 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::KnightsCape;

		/// \brief Column [sCapeIndex]: Cape identifier
		///
		/// \property CapeIndex
		int16_t CapeIndex = {};

		/// \brief Column [nBuyPrice]: Buy price
		///
		/// \property BuyPrice
		int32_t BuyPrice = {};

		/// \brief Column [nDuration]: Duration TODO
		///
		/// \property Duration
		int32_t Duration = {};

		/// \brief Column [byGrade]: Required grade
		///
		/// \property Grade
		uint8_t Grade = {};

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
				"sCapeIndex", "nBuyPrice", "nDuration", "byGrade"
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
				"sCapeIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return CapeIndex;
		}

	};
}
