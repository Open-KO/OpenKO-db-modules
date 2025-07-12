module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:LevelUp;

import ModelUtil;

namespace full_binder
{
	export class LevelUp;
}

namespace full_model
{
	/// \brief [LEVEL_UP] Level experience requirements
	/// \class LevelUp
	/// \xrefitem gamedb "Game Database" "Game Database" LEVEL_UP Level experience requirements
	export class LevelUp 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::LevelUp;

		/// \brief Column [level]: Level
		///
		/// \property Level
		uint8_t Level = 0;

		/// \brief Column [Exp]: Required experience to advance to the next level
		///
		/// \property RequiredExp
		int32_t RequiredExp = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "LEVEL_UP";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"level", "Exp"
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
				"level"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const
		{
			return Level;
		}

	};
}
