module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:MakeItemGroup;

import ModelUtil;

namespace full_binder
{
	export class MakeItemGroup;
}

namespace full_model
{
	/// \brief [MAKE_ITEM_GROUP] Make item group
	/// \class MakeItemGroup
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_ITEM_GROUP Make item group
	export class MakeItemGroup 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MakeItemGroup;

		/// \brief Column [iItemGroupNum]: Item group number
		///
		/// \property ItemGroupNumber
		int32_t ItemGroupNumber = 0;

		/// \brief Column [iItem_1]: Item 1
		///
		/// \property Item1
		int32_t Item1 = 0;

		/// \brief Column [iItem_2]: Item 2
		///
		/// \property Item2
		int32_t Item2 = 0;

		/// \brief Column [iItem_3]: Item 3
		///
		/// \property Item3
		int32_t Item3 = 0;

		/// \brief Column [iItem_4]: Item 4
		///
		/// \property Item4
		int32_t Item4 = 0;

		/// \brief Column [iItem_5]: Item 5
		///
		/// \property Item5
		int32_t Item5 = 0;

		/// \brief Column [iItem_6]: Item 6
		///
		/// \property Item6
		int32_t Item6 = 0;

		/// \brief Column [iItem_7]: Item 7
		///
		/// \property Item7
		int32_t Item7 = 0;

		/// \brief Column [iItem_8]: Item 8
		///
		/// \property Item8
		int32_t Item8 = 0;

		/// \brief Column [iItem_9]: Item 9
		///
		/// \property Item9
		int32_t Item9 = 0;

		/// \brief Column [iItem_10]: Item10
		///
		/// \property Item10
		int32_t Item10 = 0;

		/// \brief Column [iItem_11]: Item 11
		///
		/// \property Item11
		int32_t Item11 = 0;

		/// \brief Column [iItem_12]: Item 12
		///
		/// \property Item12
		int32_t Item12 = 0;

		/// \brief Column [iItem_13]: Item 13
		///
		/// \property Item13
		int32_t Item13 = 0;

		/// \brief Column [iItem_14]: Item 14
		///
		/// \property Item14
		int32_t Item14 = 0;

		/// \brief Column [iItem_15]: Item 15
		///
		/// \property Item15
		int32_t Item15 = 0;

		/// \brief Column [iItem_16]: Item 16
		///
		/// \property Item16
		int32_t Item16 = 0;

		/// \brief Column [iItem_17]: Item 17
		///
		/// \property Item17
		int32_t Item17 = 0;

		/// \brief Column [iItem_18]: Item 18
		///
		/// \property Item18
		int32_t Item18 = 0;

		/// \brief Column [iItem_19]: Item 19
		///
		/// \property Item19
		int32_t Item19 = 0;

		/// \brief Column [iItem_20]: Item 20
		///
		/// \property Item20
		int32_t Item20 = 0;

		/// \brief Column [iItem_21]: Item 21
		///
		/// \property Item21
		int32_t Item21 = 0;

		/// \brief Column [iItem_22]: Item 22
		///
		/// \property Item22
		int32_t Item22 = 0;

		/// \brief Column [iItem_23]: Item 23
		///
		/// \property Item23
		int32_t Item23 = 0;

		/// \brief Column [iItem_24]: Item 24
		///
		/// \property Item24
		int32_t Item24 = 0;

		/// \brief Column [iItem_25]: Item 25
		///
		/// \property Item25
		int32_t Item25 = 0;

		/// \brief Column [iItem_26]: Item 26
		///
		/// \property Item26
		int32_t Item26 = 0;

		/// \brief Column [iItem_27]: Item 27
		///
		/// \property Item27
		int32_t Item27 = 0;

		/// \brief Column [iItem_28]: Item 28
		///
		/// \property Item28
		int32_t Item28 = 0;

		/// \brief Column [iItem_29]: Item 29
		///
		/// \property Item29
		int32_t Item29 = 0;

		/// \brief Column [iItem_30]: Item 30
		///
		/// \property Item30
		int32_t Item30 = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAKE_ITEM_GROUP";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iItemGroupNum", "iItem_1", "iItem_2", "iItem_3", "iItem_4", "iItem_5", "iItem_6", "iItem_7", "iItem_8", "iItem_9", "iItem_10", "iItem_11", "iItem_12", "iItem_13", "iItem_14", "iItem_15", "iItem_16", "iItem_17", "iItem_18", "iItem_19", "iItem_20", "iItem_21", "iItem_22", "iItem_23", "iItem_24", "iItem_25", "iItem_26", "iItem_27", "iItem_28", "iItem_29", "iItem_30"
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
				"iItemGroupNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ItemGroupNumber;
		}

	};
}
