module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:Warehouse;

namespace model_binder
{
	export class Warehouse;
}

namespace model
{
	/// \brief [WAREHOUSE] The warehouse system is referred to as the Inn in-game.  It is account-level storage for a user
	/// \class Warehouse
	/// \xrefitem gamedb "Game Database" "Game Database" WAREHOUSE The warehouse system is referred to as the Inn in-game.  It is account-level storage for a user
	export class Warehouse 
	{
	/// \publicsection
	public:
		using BinderType = model_binder::Warehouse;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [nMoney]: Money stored in the warehouse
		///
		/// \property Money
		int32_t Money = 0;

		/// \brief Column [dwTime]: DwTime TODO
		///
		/// \property DwTime
		int32_t DwTime = 0;

		/// \brief Column [WarehouseData]: Data on items stored in the warehouse
		///
		/// \property ItemData
		std::optional<std::string> ItemData;

		/// \brief Column [strSerial]: Serial TODO
		///
		/// \property Serial
		std::optional<std::string> Serial;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "WAREHOUSE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "nMoney", "dwTime", "WarehouseData", "strSerial"
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
