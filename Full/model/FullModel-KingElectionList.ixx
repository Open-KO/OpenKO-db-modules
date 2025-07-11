module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:KingElectionList;

namespace full_binder
{
	export class KingElectionList;
}

namespace full_model
{
	/// \brief [KING_ELECTION_LIST] King election list
	/// \class KingElectionList
	/// \xrefitem gamedb "Game Database" "Game Database" KING_ELECTION_LIST King election list
	export class KingElectionList 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KingElectionList;

		/// \brief Column [byType]: Type TODO
		///
		/// \property Type
		int16_t Type = 0;

		/// \brief Column [byNation]: Nation identifier
		///
		/// \property Nation
		int16_t Nation = 0;

		/// \brief Column [nKnights]: Knights identifier (Knights.IDNum)
		///
		/// \property Knights
		std::optional<int16_t> Knights;

		/// \brief Column [strName]: Name TODO
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [nMoney]: Money TODO
		///
		/// \property Money
		int32_t Money = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KING_ELECTION_LIST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"byType", "byNation", "nKnights", "strName", "nMoney"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
