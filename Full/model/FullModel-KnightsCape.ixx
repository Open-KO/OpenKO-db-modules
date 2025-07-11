module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:KnightsCape;

import ModelUtil;

namespace full_binder
{
	export class KnightsCape;
}

namespace full_model
{
	/// \brief [KNIGHTS_CAPE] Knights cape information
	/// \class KnightsCape
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_CAPE Knights cape information
	export class KnightsCape 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KnightsCape;

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
		uint8_t Grade = 0;

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
