module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:ItemGroup;

import ModelUtil;

namespace full_binder
{
	export class ItemGroup;
}

namespace full_model
{
	/// \brief [ITEM_GROUP] TODO Doc; No Data in table
	/// \class ItemGroup
	/// \xrefitem gamedb "Game Database" "Game Database" ITEM_GROUP TODO Doc; No Data in table
	export class ItemGroup 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::ItemGroup;

		/// \brief Column [group]: Group
		///
		/// \property Group
		int16_t Group = 0;

		/// \brief Column [name]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [item1]: Item identifier 1
		///
		/// \property Item1
		int32_t Item1 = 0;

		/// \brief Column [item2]: Item identifier 2
		///
		/// \property Item2
		int32_t Item2 = 0;

		/// \brief Column [item3]: Item identifier 3
		///
		/// \property Item3
		int32_t Item3 = 0;

		/// \brief Column [item4]: Item identifier 4
		///
		/// \property Item4
		int32_t Item4 = 0;

		/// \brief Column [item5]: Item identifier 5
		///
		/// \property Item5
		int32_t Item5 = 0;

		/// \brief Column [item6]: Item identifier 6
		///
		/// \property Item6
		int32_t Item6 = 0;

		/// \brief Column [item7]: Item identifier 7
		///
		/// \property Item7
		int32_t Item7 = 0;

		/// \brief Column [item8]: Item identifier 8
		///
		/// \property Item8
		int32_t Item8 = 0;

		/// \brief Column [item9]: Item identifier 9
		///
		/// \property Item9
		int32_t Item9 = 0;

		/// \brief Column [item10]: Item identifier 10
		///
		/// \property Item10
		int32_t Item10 = 0;

		/// \brief Column [item11]: Item identifier 11
		///
		/// \property Item11
		int32_t Item11 = 0;

		/// \brief Column [item12]: Item identifier 12
		///
		/// \property Item12
		int32_t Item12 = 0;

		/// \brief Column [item13]: Item identifier 13
		///
		/// \property Item13
		int32_t Item13 = 0;

		/// \brief Column [item14]: Item identifier 14
		///
		/// \property Item14
		int32_t Item14 = 0;

		/// \brief Column [item15]: Item identifier 15
		///
		/// \property Item15
		int32_t Item15 = 0;

		/// \brief Column [item16]: Item identifier 16
		///
		/// \property Item16
		int32_t Item16 = 0;

		/// \brief Column [item17]: Item identifier 17
		///
		/// \property Item17
		int32_t Item17 = 0;

		/// \brief Column [item18]: Item identifier 18
		///
		/// \property Item18
		int32_t Item18 = 0;

		/// \brief Column [item19]: Item identifier 19
		///
		/// \property Item19
		int32_t Item19 = 0;

		/// \brief Column [item20]: Item identifier 20
		///
		/// \property Item20
		int32_t Item20 = 0;

		/// \brief Column [item21]: Item identifier 21
		///
		/// \property Item21
		int32_t Item21 = 0;

		/// \brief Column [item22]: Item identifier 22
		///
		/// \property Item22
		int32_t Item22 = 0;

		/// \brief Column [item23]: Item identifier 23
		///
		/// \property Item23
		int32_t Item23 = 0;

		/// \brief Column [item24]: Item identifier 24
		///
		/// \property Item24
		int32_t Item24 = 0;

		/// \brief Column [item25]: Item identifier 25
		///
		/// \property Item25
		int32_t Item25 = 0;

		/// \brief Column [item26]: Item identifier 26
		///
		/// \property Item26
		int32_t Item26 = 0;

		/// \brief Column [item27]: Item identifier 27
		///
		/// \property Item27
		int32_t Item27 = 0;

		/// \brief Column [item28]: Item identifier 28
		///
		/// \property Item28
		int32_t Item28 = 0;

		/// \brief Column [item29]: Item identifier 29
		///
		/// \property Item29
		int32_t Item29 = 0;

		/// \brief Column [item30]: Item identifier 30
		///
		/// \property Item30
		int32_t Item30 = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ITEM_GROUP";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"group", "name", "item1", "item2", "item3", "item4", "item5", "item6", "item7", "item8", "item9", "item10", "item11", "item12", "item13", "item14", "item15", "item16", "item17", "item18", "item19", "item20", "item21", "item22", "item23", "item24", "item25", "item26", "item27", "item28", "item29", "item30"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};
}
