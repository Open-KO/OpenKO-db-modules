module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module AIServerModel:MakeWeapon;

import ModelUtil;

namespace aiserver_binder
{
	export class MakeWeapon;
}

namespace aiserver_model
{
	/// \brief [MAKE_WEAPON] Make weapon
	/// \class MakeWeapon
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_WEAPON Make weapon
	export class MakeWeapon 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MakeWeapon;

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

		/// \brief Column [sClass_8]: Class 8
		///
		/// \property Class8
		std::optional<int16_t> Class8;

		/// \brief Column [sClass_9]: Class 9
		///
		/// \property Class9
		std::optional<int16_t> Class9;

		/// \brief Column [sClass_10]: Class 10
		///
		/// \property Class10
		std::optional<int16_t> Class10;

		/// \brief Column [sClass_11]: Class 11
		///
		/// \property Class11
		std::optional<int16_t> Class11;

		/// \brief Column [sClass_12]: Class 12
		///
		/// \property Class12
		std::optional<int16_t> Class12;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAKE_WEAPON";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"byLevel", "sClass_1", "sClass_2", "sClass_3", "sClass_4", "sClass_5", "sClass_6", "sClass_7", "sClass_8", "sClass_9", "sClass_10", "sClass_11", "sClass_12"
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
