module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module AujardModel;

import ModelUtil;

namespace aujard_binder
{
	export class Battle;
	export class Item;
	export class Knights;
	export class UserData;
	export class Warehouse;
}

namespace aujard_model
{
	/// \brief [BATTLE] Battle data for the game server
	/// \class Battle
	/// \xrefitem gamedb "Game Database" "Game Database" BATTLE Battle data for the game server
	export class Battle 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::Battle;

		/// \brief Column [sIndex]: Server Index
		///
		/// \property Index
		int16_t Index = {};

		/// \brief Column [byNation]: Nation Identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [strUserName]: User Name
		///
		/// \property UserName
		std::optional<std::string> UserName;

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
				"sIndex", "byNation", "strUserName"
			};
			return columnNames;
		}

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"sIndex", "byNation", "strUserName"
			};
			return orderedColumnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
			};
			return blobColumns;
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

	/// \brief [ITEM] Item information
	/// \class Item
	/// \xrefitem gamedb "Game Database" "Game Database" ITEM Item information
	export class Item 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::Item;

		/// \brief Column [Num]: Item number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Countable]: Price at which item can be sold to a merchant
		///
		/// \see EnumCountable
		/// \property Countable
		uint8_t Countable = {};

		/// \enum EnumCountable
		/// \brief Known valid values for Countable
		enum class EnumCountable
		{
			NonStackable = 0,
			Stackable = 1,
			Coins = 2
		};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"Num", "Countable"
			};
			return columnNames;
		}

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"Num", "Countable"
			};
			return orderedColumnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
			};
			return blobColumns;
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
				"Num"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};

	/// \brief [KNIGHTS] Knights are the clan/guild system of the game
	/// \class Knights
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS Knights are the clan/guild system of the game
	export class Knights 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::Knights;

		/// \brief Column [IDNum]: Identification number
		///
		/// \property ID
		int16_t ID = {};

		/// \brief Column [Nation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [Ranking]: Ranking by sum of members National Points
		///
		/// \property Ranking
		uint8_t Ranking = {};

		/// \brief Column [IDName]: Name of the Knights clan
		///
		/// \property Name
		std::string Name;

		/// \brief Column [Members]: Member count
		///
		/// \property Members
		int16_t Members = {};

		/// \brief Column [Points]: National points
		///
		/// \property Points
		int32_t Points = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"IDNum", "Nation", "Ranking", "IDName", "Members", "Points"
			};
			return columnNames;
		}

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"IDNum", "Nation", "Ranking", "IDName", "Members", "Points"
			};
			return orderedColumnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
			};
			return blobColumns;
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
				"IDNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return ID;
		}

	};

	/// \brief [USERDATA] User data contains saved character information
	/// \class UserData
	/// \xrefitem gamedb "Game Database" "Game Database" USERDATA User data contains saved character information
	export class UserData 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::UserData;

		/// \brief Column [strUserId]: User identifier
		///
		/// \property UserId
		std::string UserId;

		/// \brief Column [Exp]: Experience
		///
		/// \property Exp
		int32_t Exp = {};

		/// \brief Column [dwTime]: DwTime TODO
		///
		/// \property DwTime
		int32_t DwTime = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USERDATA";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strUserId", "Exp", "dwTime"
			};
			return columnNames;
		}

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"strUserId", "Exp", "dwTime"
			};
			return orderedColumnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
			};
			return blobColumns;
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
				"strUserId"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::string& MapKey() const
		{
			return UserId;
		}

	};

	/// \brief [WAREHOUSE] The warehouse system is referred to as the Inn in-game.  It is account-level storage for a user
	/// \class Warehouse
	/// \xrefitem gamedb "Game Database" "Game Database" WAREHOUSE The warehouse system is referred to as the Inn in-game.  It is account-level storage for a user
	export class Warehouse 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::Warehouse;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [nMoney]: Money stored in the warehouse
		///
		/// \property Money
		int32_t Money = {};

		/// \brief Column [dwTime]: DwTime TODO
		///
		/// \property DwTime
		int32_t DwTime = {};

		/// \brief Column [WarehouseData]: Data on items stored in the warehouse
		///
		/// \property ItemData
		std::optional<std::vector<uint8_t>> ItemData;

		/// \brief Column [strSerial]: Serial TODO
		///
		/// \property Serial
		std::optional<std::vector<uint8_t>> Serial;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"strAccountID", "nMoney", "dwTime", "WarehouseData", "strSerial"
			};
			return orderedColumnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				"WarehouseData", "strSerial"
			};
			return blobColumns;
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
				"strAccountID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::string& MapKey() const
		{
			return AccountId;
		}

	};
}