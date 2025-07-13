module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module AujardModel:Item;

import ModelUtil;

namespace aujard_binder
{
	export class Item;
}

namespace aujard_model
{
	/// \brief [ITEM] Item information
	/// \class Item
	/// \xrefitem gamedb "Game Database" "Game Database" ITEM Item information
	export class Item 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::Item;

		/// \brief Column [Num]: Item number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Countable]: Price at which item can be sold to a merchant
		///
		/// \see EnumCountable
		/// \property Countable
		uint8_t Countable = {};

		/// \enum EnumCountable
		/// \brief Known valid values for Countable
		enum class EnumCountable
		{
			NonStackable = 0,
			Stackable = 1,
			Coins = 2
		};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"Num", "Countable"
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
				"Num"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};
}
