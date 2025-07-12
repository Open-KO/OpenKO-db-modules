module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:Battle;

import ModelUtil;

namespace ebenezer_binder
{
	export class Battle;
}

namespace ebenezer_model
{
	/// \brief [BATTLE] Battle data for the game server
	/// \class Battle
	/// \xrefitem gamedb "Game Database" "Game Database" BATTLE Battle data for the game server
	export class Battle 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::Battle;

		/// \brief Column [sIndex]: Server Index
		///
		/// \property Index
		int16_t Index = 0;

		/// \brief Column [byNation]: Nation Identifier
		///
		/// \property Nation
		uint8_t Nation = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "BATTLE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIndex", "byNation"
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
				"sIndex"
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
