module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:MonsterItemTest;

import ModelUtil;

namespace full_binder
{
	export class MonsterItemTest;
}

namespace full_model
{
	/// \brief [MONSTER_ITEM_TEST] Monster item test
	/// \class MonsterItemTest
	/// \xrefitem gamedb "Game Database" "Game Database" MONSTER_ITEM_TEST Monster item test
	export class MonsterItemTest 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MonsterItemTest;

		/// \brief Column [sIndex]: Index
		///
		/// \property Index
		int16_t Index = 0;

		/// \brief Column [iItem01]: Item 1
		///
		/// \property Item1
		std::optional<int32_t> Item1;

		/// \brief Column [sPersent01]: Percent 1
		///
		/// \property Percent1
		std::optional<int16_t> Percent1;

		/// \brief Column [iItem02]: Item 2
		///
		/// \property Item2
		std::optional<int32_t> Item2;

		/// \brief Column [sPersent02]: Percent 2
		///
		/// \property Percent2
		std::optional<int16_t> Percent2;

		/// \brief Column [iItem03]: Item 3
		///
		/// \property Item3
		std::optional<int32_t> Item3;

		/// \brief Column [sPersent03]: Percent 3
		///
		/// \property Percent3
		std::optional<int16_t> Percent3;

		/// \brief Column [iItem04]: Item 4
		///
		/// \property Item4
		std::optional<int32_t> Item4;

		/// \brief Column [sPersent04]: Percent 4
		///
		/// \property Percent4
		std::optional<int16_t> Percent4;

		/// \brief Column [iItem05]: Item 5
		///
		/// \property Item5
		std::optional<int32_t> Item5;

		/// \brief Column [sPersent05]: Percent 5
		///
		/// \property Percent5
		std::optional<int16_t> Percent5;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MONSTER_ITEM_TEST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIndex", "iItem01", "sPersent01", "iItem02", "sPersent02", "iItem03", "sPersent03", "iItem04", "sPersent04", "iItem05", "sPersent05"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType& DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};
}
