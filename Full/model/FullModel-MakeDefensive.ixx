module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:MakeDefensive;

import ModelUtil;

namespace full_binder
{
	export class MakeDefensive;
}

namespace full_model
{
	/// \brief [MAKE_DEFENSIVE] Make defensive
	/// \class MakeDefensive
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_DEFENSIVE Make defensive
	export class MakeDefensive 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MakeDefensive;

		/// \brief Column [byLevel]: Level
		///
		/// \property Level
		uint8_t Level = 0;

		/// \brief Column [sClass_1]: Class 1
		///
		/// \property Class1
		std::optional<int16_t> Class1;

		/// \brief Column [sClass_2]: Class 2
		///
		/// \property Class2
		std::optional<int16_t> Class2;

		/// \brief Column [sClass_3]: Class 3
		///
		/// \property Class3
		std::optional<int16_t> Class3;

		/// \brief Column [sClass_4]: Class 4
		///
		/// \property Class4
		std::optional<int16_t> Class4;

		/// \brief Column [sClass_5]: Class 5
		///
		/// \property Class5
		std::optional<int16_t> Class5;

		/// \brief Column [sClass_6]: Class 6
		///
		/// \property Class6
		std::optional<int16_t> Class6;

		/// \brief Column [sClass_7]: Class 7
		///
		/// \property Class7
		std::optional<int16_t> Class7;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAKE_DEFENSIVE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"byLevel", "sClass_1", "sClass_2", "sClass_3", "sClass_4", "sClass_5", "sClass_6", "sClass_7"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType() const
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"byLevel"
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
