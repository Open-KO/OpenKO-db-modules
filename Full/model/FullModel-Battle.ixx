module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:Battle;

import ModelUtil;

namespace full_binder
{
	export class Battle;
}

namespace full_model
{
	/// \brief [BATTLE] Battle data for the game server
	/// \class Battle
	/// \xrefitem gamedb "Game Database" "Game Database" BATTLE Battle data for the game server
	export class Battle 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Battle;

		/// \brief Column [sIndex]: Server Index
		///
		/// \property Index
		int16_t Index = 0;

		/// \brief Column [byNation]: Nation Identifier
		///
		/// \property Nation
		uint8_t Nation = 0;

		/// \brief Column [strUserName]: User Name
		///
		/// \property UserName
		std::optional<std::string> UserName;

		/// \brief Column [byElmoArea]: Elmorad Area: TODO Doc
		///
		/// \property ElmoArea
		uint8_t ElmoArea = 0;

		/// \brief Column [byKarusArea]: Karus Area: TODO Doc
		///
		/// \property KarusArea
		uint8_t KarusArea = 0;

		/// \brief Column [byElmoAdvantage]: Elmorad Advantage: TODO Doc
		///
		/// \property ElmoAdvantage
		uint8_t ElmoAdvantage = 0;

		/// \brief Column [byKarusAdvantage]: Karus Advantage: TODO Doc
		///
		/// \property KarusAdvantage
		uint8_t KarusAdvantage = 0;

		/// \brief Column [byArea_1]: Area1: TODO Doc
		///
		/// \property Area1
		uint8_t Area1 = 0;

		/// \brief Column [byArea_2]: Area2: TODO Doc
		///
		/// \property Area2
		uint8_t Area2 = 0;

		/// \brief Column [byArea_3]: Area3: TODO Doc
		///
		/// \property Area3
		uint8_t Area3 = 0;

		/// \brief Column [byArea_4]: Area4: TODO Doc
		///
		/// \property Area4
		uint8_t Area4 = 0;

		/// \brief Column [byArea_5]: Area5: TODO Doc
		///
		/// \property Area5
		uint8_t Area5 = 0;

		/// \brief Column [byArea_6]: Area6: TODO Doc
		///
		/// \property Area6
		uint8_t Area6 = 0;

		/// \brief Column [byArea_7]: Area7: TODO Doc
		///
		/// \property Area7
		uint8_t Area7 = 0;

		/// \brief Column [byArea_8]: Area8: TODO Doc
		///
		/// \property Area8
		uint8_t Area8 = 0;

		/// \brief Column [byArea_9]: Area9: TODO Doc
		///
		/// \property Area9
		uint8_t Area9 = 0;

		/// \brief Column [byArea_10]: Area10: TODO Doc
		///
		/// \property Area10
		uint8_t Area10 = 0;

		/// \brief Column [byArea_11]: Area11: TODO Doc
		///
		/// \property Area11
		uint8_t Area11 = 0;

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
				"sIndex", "byNation", "strUserName", "byElmoArea", "byKarusArea", "byElmoAdvantage", "byKarusAdvantage", "byArea_1", "byArea_2", "byArea_3", "byArea_4", "byArea_5", "byArea_6", "byArea_7", "byArea_8", "byArea_9", "byArea_10", "byArea_11"
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
				"sIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return Index;
		}

	};
}
