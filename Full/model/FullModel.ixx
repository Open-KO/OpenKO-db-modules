module;

#include <cstdint>
#include <ctime>
#include <optional>
#include <string>
#include <tuple>
#include <unordered_set>

export module FullModel;

import ModelUtil;

namespace full_binder
{
	export class AccountChar;
	export class Battle;
	export class Coefficient;
	export class Concurrent;
	export class CopySerialItem;
	export class CopyTest;
	export class CouponSerialList;
	export class CurrentUser;
	export class Event;
	export class EventTrigger;
	export class FriendList;
	export class HacktoolUserLog;
	export class HeroUser;
	export class Home;
	export class Item;
	export class ItemExchange;
	export class ItemGroup;
	export class ItemUpgrade;
	export class ItemUpProbability;
	export class Monster;
	export class MonsterItem;
	export class Npc;
	export class NpcItem;
	export class NpcMoveItem;
	export class NpcPos;
	export class KingBallotBox;
	export class KingCandidacyNoticeBoard;
	export class KingElectionList;
	export class KingSystem;
	export class Knights;
	export class KnightsAlliance;
	export class KnightsCape;
	export class KnightsRating;
	export class KnightsSiegeWarfare;
	export class KnightsUser;
	export class LevelUp;
	export class Magic;
	export class MagicType1;
	export class MagicType2;
	export class MagicType3;
	export class MagicType4;
	export class MagicType5;
	export class MagicType6;
	export class MagicType7;
	export class MagicType8;
	export class MagicType9;
	export class MakeDefensive;
	export class MakeItem;
	export class MakeItemGradeCode;
	export class MakeItemGroup;
	export class MakeItemRareCode;
	export class MakeWeapon;
	export class MonsterChallenge;
	export class MonsterChallengeSummonList;
	export class MonsterItemTest;
	export class MonsterSummonList;
	export class ProgramListLog;
	export class RentalItem;
	export class RentalItemList;
	export class ServerResource;
	export class StartPosition;
	export class TbUser;
	export class UserEditor;
	export class UserEditorItem;
	export class UserKnightsRank;
	export class UserPersonalRank;
	export class UserRentalItem;
	export class UserSavedMagic;
	export class UserData;
	export class UserDataSkillShortcut;
	export class Version;
	export class Warehouse;
	export class WebItemMall;
	export class WebItemMallLog;
	export class WebpageAddress;
	export class ZoneInfo;
}

namespace full_model
{
	/// \brief [ACCOUNT_CHAR] Represents the relationship between accounts and characters
	/// \class AccountChar
	/// \xrefitem gamedb "Game Database" "Game Database" ACCOUNT_CHAR Represents the relationship between accounts and characters
	export class AccountChar 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::AccountChar;

		/// \brief Column [strAccountID]: Account Identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [bNation]: Nation Identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [bCharNum]: Number of created characters
		///
		/// \property CharNum
		uint8_t CharNum = {};

		/// \brief Column [strCharID1]: Character 1 Name
		///
		/// \property CharId1
		std::optional<std::string> CharId1;

		/// \brief Column [strCharID2]: Character 2 Name
		///
		/// \property CharId2
		std::optional<std::string> CharId2;

		/// \brief Column [strCharID3]: Character 3 Name
		///
		/// \property CharId3
		std::optional<std::string> CharId3;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ACCOUNT_CHAR";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "bNation", "bCharNum", "strCharID1", "strCharID2", "strCharID3"
			};
			return columnNames;
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
		int16_t Index = {};

		/// \brief Column [byNation]: Nation Identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [strUserName]: User Name
		///
		/// \property UserName
		std::optional<std::string> UserName;

		/// \brief Column [byElmoArea]: Elmorad Area: TODO Doc
		///
		/// \property ElmoArea
		uint8_t ElmoArea = {};

		/// \brief Column [byKarusArea]: Karus Area: TODO Doc
		///
		/// \property KarusArea
		uint8_t KarusArea = {};

		/// \brief Column [byElmoAdvantage]: Elmorad Advantage: TODO Doc
		///
		/// \property ElmoAdvantage
		uint8_t ElmoAdvantage = {};

		/// \brief Column [byKarusAdvantage]: Karus Advantage: TODO Doc
		///
		/// \property KarusAdvantage
		uint8_t KarusAdvantage = {};

		/// \brief Column [byArea_1]: Area1: TODO Doc
		///
		/// \property Area1
		uint8_t Area1 = {};

		/// \brief Column [byArea_2]: Area2: TODO Doc
		///
		/// \property Area2
		uint8_t Area2 = {};

		/// \brief Column [byArea_3]: Area3: TODO Doc
		///
		/// \property Area3
		uint8_t Area3 = {};

		/// \brief Column [byArea_4]: Area4: TODO Doc
		///
		/// \property Area4
		uint8_t Area4 = {};

		/// \brief Column [byArea_5]: Area5: TODO Doc
		///
		/// \property Area5
		uint8_t Area5 = {};

		/// \brief Column [byArea_6]: Area6: TODO Doc
		///
		/// \property Area6
		uint8_t Area6 = {};

		/// \brief Column [byArea_7]: Area7: TODO Doc
		///
		/// \property Area7
		uint8_t Area7 = {};

		/// \brief Column [byArea_8]: Area8: TODO Doc
		///
		/// \property Area8
		uint8_t Area8 = {};

		/// \brief Column [byArea_9]: Area9: TODO Doc
		///
		/// \property Area9
		uint8_t Area9 = {};

		/// \brief Column [byArea_10]: Area10: TODO Doc
		///
		/// \property Area10
		uint8_t Area10 = {};

		/// \brief Column [byArea_11]: Area11: TODO Doc
		///
		/// \property Area11
		uint8_t Area11 = {};

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

	/// \brief [COEFFICIENT] Coefficient relationship between a character class, weapon types, and stats
	/// \class Coefficient
	/// \xrefitem gamedb "Game Database" "Game Database" COEFFICIENT Coefficient relationship between a character class, weapon types, and stats
	export class Coefficient 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Coefficient;

		/// \brief Column [sClass]: ClassIdentifier
		///
		/// \property ClassId
		int16_t ClassId = {};

		/// \brief Column [ShortSword]: Short Sword Coefficient
		///
		/// \property ShortSword
		double ShortSword = {};

		/// \brief Column [Sword]: Sword Coefficient
		///
		/// \property Sword
		double Sword = {};

		/// \brief Column [Axe]: Axe Coefficient
		///
		/// \property Axe
		double Axe = {};

		/// \brief Column [Club]: Club Coefficient
		///
		/// \property Club
		double Club = {};

		/// \brief Column [Spear]: Spear Coefficient
		///
		/// \property Spear
		double Spear = {};

		/// \brief Column [Pole]: Polearm Coefficient
		///
		/// \property Pole
		double Pole = {};

		/// \brief Column [Staff]: Staff Coefficient
		///
		/// \property Staff
		double Staff = {};

		/// \brief Column [Bow]: Bow Coefficient
		///
		/// \property Bow
		double Bow = {};

		/// \brief Column [Hp]: Hit Point Coefficient
		///
		/// \property HitPoint
		double HitPoint = {};

		/// \brief Column [Mp]: Mana Point Coefficient
		///
		/// \property ManaPoint
		double ManaPoint = {};

		/// \brief Column [Sp]: Sp Coefficient
		///
		/// \property Sp
		double Sp = {};

		/// \brief Column [Ac]: Armor Coefficient
		///
		/// \property Armor
		double Armor = {};

		/// \brief Column [Hitrate]: Hit Rate Coefficient
		///
		/// \property HitRate
		double HitRate = {};

		/// \brief Column [Evasionrate]: Evasion Rate Coefficient
		///
		/// \property Evasionrate
		double Evasionrate = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "COEFFICIENT";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sClass", "ShortSword", "Sword", "Axe", "Club", "Spear", "Pole", "Staff", "Bow", "Hp", "Mp", "Sp", "Ac", "Hitrate", "Evasionrate"
			};
			return columnNames;
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
				"sClass"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return ClassId;
		}

	};

	/// \brief [CONCURRENT] Keeps track of concurrent user counts
	/// \class Concurrent
	/// \xrefitem gamedb "Game Database" "Game Database" CONCURRENT Keeps track of concurrent user counts
	export class Concurrent 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Concurrent;

		/// \brief Column [serverid]: Server Identifier
		///
		/// \property ServerId
		uint8_t ServerId = {};

		/// \brief Column [zone1_count]: Zone 1 Count
		///
		/// \property Zone1Count
		int16_t Zone1Count = {};

		/// \brief Column [zone2_count]: Zone 2 Count
		///
		/// \property Zone2Count
		int16_t Zone2Count = {};

		/// \brief Column [zone3_count]: Zone 3 Count
		///
		/// \property Zone3Count
		int16_t Zone3Count = {};

		/// \brief Column [bz]: Bz: TODO
		///
		/// \property Bz
		std::optional<std::string> Bz;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "CONCURRENT";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"serverid", "zone1_count", "zone2_count", "zone3_count", "bz"
			};
			return columnNames;
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
				"serverid"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const
		{
			return ServerId;
		}

	};

	/// \brief [COPY_SERIAL_ITEM] TODO: Doc
	/// \class CopySerialItem
	/// \xrefitem gamedb "Game Database" "Game Database" COPY_SERIAL_ITEM TODO: Doc
	export class CopySerialItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::CopySerialItem;

		/// \brief Column [strUserId]: User Identifier
		///
		/// \property UserId
		std::optional<std::vector<uint8_t>> UserId;

		/// \brief Column [byType]: Type
		///
		/// \property Type
		std::optional<uint8_t> Type;

		/// \brief Column [nPos]: nPos: TODO
		///
		/// \property Pos
		std::optional<int16_t> Pos;

		/// \brief Column [ItemNum]: Item Number
		///
		/// \property ItemNum
		std::optional<std::vector<uint8_t>> ItemNum;

		/// \brief Column [ItemSerial]: Item Serial
		///
		/// \property ItemSerial
		std::optional<std::vector<uint8_t>> ItemSerial;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "COPY_SERIAL_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strUserId", "byType", "nPos", "ItemNum", "ItemSerial"
			};
			return columnNames;
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

	};

	/// \brief [COPY_TEST] TODO: Doc
	/// \class CopyTest
	/// \xrefitem gamedb "Game Database" "Game Database" COPY_TEST TODO: Doc
	export class CopyTest 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::CopyTest;

		/// \brief Column [ITEMSERIAL]: Item Serial
		///
		/// \property ItemSerial
		int64_t ItemSerial = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "COPY_TEST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"ITEMSERIAL"
			};
			return columnNames;
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

	};

	/// \brief [COUPON_SERIAL_LIST] Coupon Serial List
	/// \class CouponSerialList
	/// \xrefitem gamedb "Game Database" "Game Database" COUPON_SERIAL_LIST Coupon Serial List
	export class CouponSerialList 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::CouponSerialList;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = {};

		/// \brief Column [strSerialNum]: Serial Number
		///
		/// \property SerialNum
		std::string SerialNum;

		/// \brief Column [nItemNum]: Item Number
		///
		/// \property ItemNumber
		int32_t ItemNumber = {};

		/// \brief Column [sItemCount]: Item Count
		///
		/// \property ItemCount
		int16_t ItemCount = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "COUPON_SERIAL_LIST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "strSerialNum", "nItemNum", "sItemCount"
			};
			return columnNames;
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
				"nIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return Index;
		}

	};

	/// \brief [CURRENTUSER] Keeps track of users currently connected to the server
	/// \class CurrentUser
	/// \xrefitem gamedb "Game Database" "Game Database" CURRENTUSER Keeps track of users currently connected to the server
	export class CurrentUser 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::CurrentUser;

		/// \brief Column [nServerNo]: Server Index
		///
		/// \property ServerNumber
		int32_t ServerNumber = {};

		/// \brief Column [strServerIP]: Server IP Address
		///
		/// \property ServerIP
		std::string ServerIP;

		/// \brief Column [strAccountID]: User Account Identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: User Character Name
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [strClientIP]: User IP Address
		///
		/// \property ClientIP
		std::string ClientIP;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "CURRENTUSER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nServerNo", "strServerIP", "strAccountID", "strCharID", "strClientIP"
			};
			return columnNames;
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

	};

	/// \brief [EVENT] Event Information
	/// \class Event
	/// \xrefitem gamedb "Game Database" "Game Database" EVENT Event Information
	export class Event 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Event;

		/// \brief Column [ZoneNum]: Zone Number
		///
		/// \property ZoneNumber
		uint8_t ZoneNumber = {};

		/// \brief Column [EventNum]: Event Number
		///
		/// \property EventNumber
		int16_t EventNumber = {};

		/// \brief Column [Type]: Event Type
		///
		/// \property EventType
		uint8_t EventType = {};

		/// \brief Column [Cond1]: Condition 1
		///
		/// \property Condition1
		std::optional<std::string> Condition1;

		/// \brief Column [Cond2]: Condition 2
		///
		/// \property Condition2
		std::optional<std::string> Condition2;

		/// \brief Column [Cond3]: Condition 3
		///
		/// \property Condition3
		std::optional<std::string> Condition3;

		/// \brief Column [Cond4]: Condition 4
		///
		/// \property Condition4
		std::optional<std::string> Condition4;

		/// \brief Column [Cond5]: Condition 5
		///
		/// \property Condition5
		std::optional<std::string> Condition5;

		/// \brief Column [Exec1]: Execute 1
		///
		/// \property Execute1
		std::string Execute1;

		/// \brief Column [Exec2]: Execute 2
		///
		/// \property Execute2
		std::string Execute2;

		/// \brief Column [Exec3]: Execute 3
		///
		/// \property Execute3
		std::string Execute3;

		/// \brief Column [Exec4]: Execute 4
		///
		/// \property Execute4
		std::string Execute4;

		/// \brief Column [Exec5]: Execute 5
		///
		/// \property Execute5
		std::string Execute5;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "EVENT";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"ZoneNum", "EventNum", "Type", "Cond1", "Cond2", "Cond3", "Cond4", "Cond5", "Exec1", "Exec2", "Exec3", "Exec4", "Exec5"
			};
			return columnNames;
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

	};

	/// \brief [EVENT_TRIGGER] NPC Event Triggers
	/// \class EventTrigger
	/// \xrefitem gamedb "Game Database" "Game Database" EVENT_TRIGGER NPC Event Triggers
	export class EventTrigger 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::EventTrigger;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = {};

		/// \brief Column [bNpcType]: NPC type
		///
		/// \property NpcType
		uint8_t NpcType = {};

		/// \brief Column [sNpcID]: NPC identifer
		///
		/// \property NpcId
		int16_t NpcId = {};

		/// \brief Column [nTriggerNum]: Trigger number
		///
		/// \property TriggerNumber
		int32_t TriggerNumber = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "EVENT_TRIGGER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "bNpcType", "sNpcID", "nTriggerNum"
			};
			return columnNames;
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
				"nIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return Index;
		}

	};

	/// \brief [FRIEND_LIST] User friend list
	/// \class FriendList
	/// \xrefitem gamedb "Game Database" "Game Database" FRIEND_LIST User friend list
	export class FriendList 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::FriendList;

		/// \brief Column [strUserID]: User Identifier
		///
		/// \property UserId
		std::string UserId;

		/// \brief Column [strFriend1]: Friend 1
		///
		/// \property Friend1
		std::optional<std::string> Friend1;

		/// \brief Column [strFriend2]: Friend 2
		///
		/// \property Friend2
		std::optional<std::string> Friend2;

		/// \brief Column [strFriend3]: Friend 3
		///
		/// \property Friend3
		std::optional<std::string> Friend3;

		/// \brief Column [strFriend4]: Friend 4
		///
		/// \property Friend4
		std::optional<std::string> Friend4;

		/// \brief Column [strFriend5]: Friend 5
		///
		/// \property Friend5
		std::optional<std::string> Friend5;

		/// \brief Column [strFriend6]: Friend 6
		///
		/// \property Friend6
		std::optional<std::string> Friend6;

		/// \brief Column [strFriend7]: Friend 7
		///
		/// \property Friend7
		std::optional<std::string> Friend7;

		/// \brief Column [strFriend8]: Friend 8
		///
		/// \property Friend8
		std::optional<std::string> Friend8;

		/// \brief Column [strFriend9]: Friend 9
		///
		/// \property Friend9
		std::optional<std::string> Friend9;

		/// \brief Column [strFriend10]: Friend 10
		///
		/// \property Friend10
		std::optional<std::string> Friend10;

		/// \brief Column [strFriend11]: Friend 11
		///
		/// \property Friend11
		std::optional<std::string> Friend11;

		/// \brief Column [strFriend12]: Friend 12
		///
		/// \property Friend12
		std::optional<std::string> Friend12;

		/// \brief Column [strFriend13]: Friend 13
		///
		/// \property Friend13
		std::optional<std::string> Friend13;

		/// \brief Column [strFriend14]: Friend 14
		///
		/// \property Friend14
		std::optional<std::string> Friend14;

		/// \brief Column [strFriend15]: Friend 15
		///
		/// \property Friend15
		std::optional<std::string> Friend15;

		/// \brief Column [strFriend16]: Friend 16
		///
		/// \property Friend16
		std::optional<std::string> Friend16;

		/// \brief Column [strFriend17]: Friend 17
		///
		/// \property Friend17
		std::optional<std::string> Friend17;

		/// \brief Column [strFriend18]: Friend 18
		///
		/// \property Friend18
		std::optional<std::string> Friend18;

		/// \brief Column [strFriend19]: Friend 19
		///
		/// \property Friend19
		std::optional<std::string> Friend19;

		/// \brief Column [strFriend20]: Friend 20
		///
		/// \property Friend20
		std::optional<std::string> Friend20;

		/// \brief Column [strFriend21]: Friend 21
		///
		/// \property Friend21
		std::optional<std::string> Friend21;

		/// \brief Column [strFriend22]: Friend 22
		///
		/// \property Friend22
		std::optional<std::string> Friend22;

		/// \brief Column [strFriend23]: Friend 23
		///
		/// \property Friend23
		std::optional<std::string> Friend23;

		/// \brief Column [strFriend24]: Friend 24
		///
		/// \property Friend24
		std::optional<std::string> Friend24;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "FRIEND_LIST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strUserID", "strFriend1", "strFriend2", "strFriend3", "strFriend4", "strFriend5", "strFriend6", "strFriend7", "strFriend8", "strFriend9", "strFriend10", "strFriend11", "strFriend12", "strFriend13", "strFriend14", "strFriend15", "strFriend16", "strFriend17", "strFriend18", "strFriend19", "strFriend20", "strFriend21", "strFriend22", "strFriend23", "strFriend24"
			};
			return columnNames;
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
				"strUserID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::string& MapKey() const
		{
			return UserId;
		}

	};

	/// \brief [HACKTOOL_USERLOG] Tracks possible detections of a hack tool by a user
	/// \class HacktoolUserLog
	/// \xrefitem gamedb "Game Database" "Game Database" HACKTOOL_USERLOG Tracks possible detections of a hack tool by a user
	export class HacktoolUserLog 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::HacktoolUserLog;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: Character name
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [strHackToolName]: Name of the hack tool detected
		///
		/// \property HackToolName
		std::string HackToolName;

		/// \brief Column [tWriteTime]: Log time
		///
		/// \property WriteTime
		std::time_t WriteTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "HACKTOOL_USERLOG";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "strCharID", "strHackToolName", "tWriteTime"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				"strHackToolName"
			};
			return blobColumns;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};

	/// \brief [HERO_USER] TODO Doc
	/// \class HeroUser
	/// \xrefitem gamedb "Game Database" "Game Database" HERO_USER TODO Doc
	export class HeroUser 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::HeroUser;

		/// \brief Column [shIndex]: Index
		///
		/// \property Index
		int16_t Index = {};

		/// \brief Column [strUserID]: User identifier
		///
		/// \property UserId
		std::optional<std::string> UserId;

		/// \brief Column [strNation]: Nation text
		///
		/// \property Nation
		std::optional<std::string> Nation;

		/// \brief Column [strClass]: Class name
		///
		/// \property ClassName
		std::optional<std::string> ClassName;

		/// \brief Column [strAchievement]: Achievement text
		///
		/// \property Achievement
		std::optional<std::string> Achievement;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "HERO_USER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"shIndex", "strUserID", "strNation", "strClass", "strAchievement"
			};
			return columnNames;
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

	};

	/// \brief [HOME] TODO Doc
	/// \class Home
	/// \xrefitem gamedb "Game Database" "Game Database" HOME TODO Doc
	export class Home 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Home;

		/// \brief Column [Nation]: Nation Identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [ElmoZoneX]: Elmorad Zone X
		///
		/// \property ElmoZoneX
		int32_t ElmoZoneX = {};

		/// \brief Column [ElmoZoneZ]: Elmorad Zone Z
		///
		/// \property ElmoZoneZ
		int32_t ElmoZoneZ = {};

		/// \brief Column [ElmoZoneLX]: Elmorad Zone LX
		///
		/// \property ElmoZoneLX
		uint8_t ElmoZoneLX = {};

		/// \brief Column [ElmoZoneLZ]: Elmorad Zone LZ
		///
		/// \property ElmoZoneLZ
		uint8_t ElmoZoneLZ = {};

		/// \brief Column [KarusZoneX]: Karus Zone X
		///
		/// \property KarusZoneX
		int32_t KarusZoneX = {};

		/// \brief Column [KarusZoneZ]: Karus Zone Z
		///
		/// \property KarusZoneZ
		int32_t KarusZoneZ = {};

		/// \brief Column [KarusZoneLX]: Karus Zone LX
		///
		/// \property KarusZoneLX
		uint8_t KarusZoneLX = {};

		/// \brief Column [KarusZoneLZ]: Karus Zone LZ
		///
		/// \property KarusZoneLZ
		uint8_t KarusZoneLZ = {};

		/// \brief Column [FreeZoneX]: Free Zone X
		///
		/// \property FreeZoneX
		int32_t FreeZoneX = {};

		/// \brief Column [FreeZoneZ]: Free Zone Z
		///
		/// \property FreeZoneZ
		int32_t FreeZoneZ = {};

		/// \brief Column [FreeZoneLX]: Free Zone LX
		///
		/// \property FreeZoneLX
		uint8_t FreeZoneLX = {};

		/// \brief Column [FreeZoneLZ]: Free Zone LZ
		///
		/// \property FreeZoneLZ
		uint8_t FreeZoneLZ = {};

		/// \brief Column [BattleZoneX]: Battle Zone X
		///
		/// \property BattleZoneX
		int32_t BattleZoneX = {};

		/// \brief Column [BattleZoneZ]: Battle Zone Z
		///
		/// \property BattleZoneZ
		int32_t BattleZoneZ = {};

		/// \brief Column [BattleZoneLX]: Battle Zone LX
		///
		/// \property BattleZoneLX
		uint8_t BattleZoneLX = {};

		/// \brief Column [BattleZoneLZ]: Battle Zone LZ
		///
		/// \property BattleZoneLZ
		uint8_t BattleZoneLZ = {};

		/// \brief Column [BattleZone2X]: Battle Zone 2 X
		///
		/// \property BattleZone2X
		int32_t BattleZone2X = {};

		/// \brief Column [BattleZone2Z]: Battle Zone 2 Z
		///
		/// \property BattleZone2Z
		int32_t BattleZone2Z = {};

		/// \brief Column [BattleZone2LX]: Battle Zone 2 LX
		///
		/// \property BattleZone2LX
		uint8_t BattleZone2LX = {};

		/// \brief Column [BattleZone2LZ]: Battle Zone 2 LZ
		///
		/// \property BattleZone2LZ
		uint8_t BattleZone2LZ = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "HOME";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"Nation", "ElmoZoneX", "ElmoZoneZ", "ElmoZoneLX", "ElmoZoneLZ", "KarusZoneX", "KarusZoneZ", "KarusZoneLX", "KarusZoneLZ", "FreeZoneX", "FreeZoneZ", "FreeZoneLX", "FreeZoneLZ", "BattleZoneX", "BattleZoneZ", "BattleZoneLX", "BattleZoneLZ", "BattleZone2X", "BattleZone2Z", "BattleZone2LX", "BattleZone2LZ"
			};
			return columnNames;
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
				"Nation"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const
		{
			return Nation;
		}

	};

	/// \brief [ITEM] Item information
	/// \class Item
	/// \xrefitem gamedb "Game Database" "Game Database" ITEM Item information
	export class Item 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Item;

		/// \brief Column [Num]: Item number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [strName]: Item name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [Kind]: Item kind
		///
		/// \see EnumKind
		/// \property Kind
		uint8_t Kind = {};

		/// \enum EnumKind
		/// \brief Known valid values for Kind
		enum class EnumKind
		{
			Dagger = 1,
			Sword = 2,
			Axe = 3,
			Mace = 4,
			Spear = 5,
			Shield = 6,
			Bow = 7,
			Longbow = 8,
			Launcher = 10,
			Staff = 11,
			Arrow = 12,
			Javelin = 13,
			ArmorWarrior = 21,
			ArmorRogue = 22,
			ArmorWizard = 23,
			ArmorPriest = 24
		};

		/// \brief Column [Slot]: slot this item equips to
		///
		/// \see EnumSlot
		/// \property Slot
		uint8_t Slot = {};

		/// \enum EnumSlot
		/// \brief Known valid values for Slot
		enum class EnumSlot
		{
			RightEar = 0,
			Head = 1,
			LeftEar = 2,
			Neck = 3,
			Breast = 4,
			Shoulder = 5,
			RightHand = 6,
			Waist = 7,
			LeftHand = 8,
			RightRing = 9,
			Leg = 10,
			LeftRing = 11,
			Glove = 12,
			Foot = 13,
			Reserved = 14
		};

		/// \brief Column [Race]: usable by race
		///
		/// \see EnumRace
		/// \property Race
		uint8_t Race = {};

		/// \enum EnumRace
		/// \brief Known valid values for Race
		enum class EnumRace
		{
			Any = 0,
			Karus = 1,
			ElMorad = 2
		};

		/// \brief Column [Class]: usable by class
		///
		/// \see EnumClassId
		/// \property ClassId
		uint8_t ClassId = {};

		/// \enum EnumClassId
		/// \brief Known valid values for Class
		enum class EnumClassId
		{
			Any = 0,
			GroupWarrior = 1,
			GroupRogue = 2,
			GroupMage = 3,
			GroupCleric = 4,
			GroupWarriorJob = 5,
			GroupWarriorMaster = 6,
			GroupRogueJob = 7,
			GroupRogueMaster = 8,
			GroupMageJob = 9,
			GroupMageMaster = 10,
			GroupPriestJob = 11,
			GroupPriestMaster = 12,
			KarusWarrior = 101,
			KarusRogue = 102,
			KarusWizard = 103,
			KarusPriest = 104,
			Berserker = 105,
			Guardian = 106,
			Hunter = 107,
			Penetrator = 108,
			Sorcerer = 109,
			Necromancer = 110,
			Shaman = 111,
			DarkPriest = 112,
			ElmoWarrior = 201,
			ElmoRogue = 202,
			ElmoWizard = 203,
			ElmoPriest = 204,
			Blade = 205,
			Protector = 206,
			Ranger = 207,
			Assassin = 208,
			Mage = 209,
			Enchanter = 210,
			Cleric = 211,
			Druid = 212
		};

		/// \brief Column [Damage]: Physical damage
		///
		/// \property Damage
		int16_t Damage = {};

		/// \brief Column [Delay]: Animation windup time before activation
		///
		/// \property Delay
		int16_t Delay = {};

		/// \brief Column [Range]: Maximum distance from a target before item cannot activate
		///
		/// \property Range
		int16_t Range = {};

		/// \brief Column [Weight]: Weight
		///
		/// \property Weight
		int16_t Weight = {};

		/// \brief Column [Duration]: Durability
		///
		/// \property Durability
		int16_t Durability = {};

		/// \brief Column [BuyPrice]: Price at which item can be bought from a merchant
		///
		/// \property BuyPrice
		int32_t BuyPrice = {};

		/// \brief Column [SellPrice]: Price at which item can be sold to a merchant
		///
		/// \property SellPrice
		int32_t SellPrice = {};

		/// \brief Column [Ac]: Amount contributed to armor value, when equipped
		///
		/// \property Armor
		int16_t Armor = {};

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

		/// \brief Column [Effect1]: Magic effect in MAGIC.MagicNum
		///
		/// \property MagicEffect
		int32_t MagicEffect = {};

		/// \brief Column [Effect2]: Special Effect
		///
		/// \see EnumSpecialEffect
		/// \property SpecialEffect
		int32_t SpecialEffect = {};

		/// \enum EnumSpecialEffect
		/// \brief Known valid values for Effect2
		enum class EnumSpecialEffect
		{
			ScrollTransform = 1,
			ScrollTransform2 = 2,
			ScrollTransform3 = 3,
			ScrollTransform4 = 4,
			ScrollAccessory = 253,
			ScrollRental = 254,
			ScrollUpgrade = 255,
			UniqueAxe = 12050000,
			UniqueSpear = 12070000,
			UniqueBow = 12120000,
			UniqueMace = 12130000,
			UniqueStaff = 40000000
		};

		/// \brief Column [ReqLevel]: Minimum level required to use item
		///
		/// \property MinLevel
		uint8_t MinLevel = {};

		/// \brief Column [ReqLevelMax]: Maximum level allowed to use item
		///
		/// \property MaxLevel
		uint8_t MaxLevel = {};

		/// \brief Column [ReqRank]: Rank required to use item
		///
		/// \property RequiredRank
		uint8_t RequiredRank = {};

		/// \brief Column [ReqTitle]: Title required to use item
		///
		/// \see EnumRequiredTitle
		/// \property RequiredTitle
		uint8_t RequiredTitle = {};

		/// \enum EnumRequiredTitle
		/// \brief Known valid values for ReqTitle
		enum class EnumRequiredTitle
		{
			Any = 0,
			King = 1,
			Chief = 1,
			ViceChief = 2,
			Knight = 3,
			Officer = 4,
			Trainee = 5,
			WarCommander = 100
		};

		/// \brief Column [ReqStr]: Strength required to use item
		///
		/// \property RequiredStrength
		uint8_t RequiredStrength = {};

		/// \brief Column [ReqSta]: Stamina required to use item
		///
		/// \property RequiredStamina
		uint8_t RequiredStamina = {};

		/// \brief Column [ReqDex]: Dexterity required to use item
		///
		/// \property RequiredDexterity
		uint8_t RequiredDexterity = {};

		/// \brief Column [ReqIntel]: Intelligence required to use item
		///
		/// \property RequiredIntelligence
		uint8_t RequiredIntelligence = {};

		/// \brief Column [ReqCha]: Charisma required to use item
		///
		/// \property RequiredCharisma
		uint8_t RequiredCharisma = {};

		/// \brief Column [SellingGroup]: NPC Selling Group
		///
		/// \property SellingGroup
		uint8_t SellingGroup = {};

		/// \brief Column [ItemType]: Item grade
		///
		/// \property Type
		uint8_t Type = {};

		/// \brief Column [Hitrate]: Attack power modifier
		///
		/// \property HitRate
		int16_t HitRate = {};

		/// \brief Column [Evasionrate]: Dodge chance modifier
		///
		/// \property EvasionRate
		int16_t EvasionRate = {};

		/// \brief Column [DaggerAc]: Dagger defense modifier
		///
		/// \property DaggerArmor
		int16_t DaggerArmor = {};

		/// \brief Column [SwordAc]: Sword defense modifier
		///
		/// \property SwordArmor
		int16_t SwordArmor = {};

		/// \brief Column [MaceAc]: Mace defense modifier
		///
		/// \property MaceArmor
		int16_t MaceArmor = {};

		/// \brief Column [AxeAc]: Axe defense modifier
		///
		/// \property AxeArmor
		int16_t AxeArmor = {};

		/// \brief Column [SpearAc]: Spear defense modifier
		///
		/// \property SpearArmor
		int16_t SpearArmor = {};

		/// \brief Column [BowAc]: Bow defense modifier
		///
		/// \property BowArmor
		int16_t BowArmor = {};

		/// \brief Column [FireDamage]: Fire damage
		///
		/// \property FireDamage
		uint8_t FireDamage = {};

		/// \brief Column [IceDamage]: Ice damage
		///
		/// \property IceDamage
		uint8_t IceDamage = {};

		/// \brief Column [LightningDamage]: Lightning damage
		///
		/// \property LightningDamage
		uint8_t LightningDamage = {};

		/// \brief Column [PoisonDamage]: Poison damage
		///
		/// \property PoisonDamage
		uint8_t PoisonDamage = {};

		/// \brief Column [HPDrain]: Percent of damage recovered as health
		///
		/// \property HpDrain
		uint8_t HpDrain = {};

		/// \brief Column [MPDamage]: Percent of damage dealt to target mana
		///
		/// \property MpDamage
		uint8_t MpDamage = {};

		/// \brief Column [MPDrain]: Percent of damage recovered as mana
		///
		/// \property MpDrain
		uint8_t MpDrain = {};

		/// \brief Column [MirrorDamage]: Percent of damage reflected to attacker
		///
		/// \property MirrorDamage
		uint8_t MirrorDamage = {};

		/// \brief Column [Droprate]: TODO: Unused? Drop rates dictated by K_NPC_ITEM
		///
		/// \property DropRate
		uint8_t DropRate = {};

		/// \brief Column [StrB]: Strength bonus when item equipped
		///
		/// \property StrengthBonus
		int16_t StrengthBonus = {};

		/// \brief Column [StaB]: Stamina bonus when item equipped
		///
		/// \property StaminaBonus
		int16_t StaminaBonus = {};

		/// \brief Column [DexB]: Dexterity bonus when item equipped
		///
		/// \property DexterityBonus
		int16_t DexterityBonus = {};

		/// \brief Column [IntelB]: Intelligence bonus when item equipped
		///
		/// \property IntelligenceBonus
		int16_t IntelligenceBonus = {};

		/// \brief Column [ChaB]: Charisma bonus when item equipped
		///
		/// \property CharismaBonus
		int16_t CharismaBonus = {};

		/// \brief Column [MaxHpB]: Maximum health bonus when item equipped
		///
		/// \property MaxHpBonus
		int16_t MaxHpBonus = {};

		/// \brief Column [MaxMpB]: Maximum mana bonus when item equipped
		///
		/// \property MaxMpBonus
		int16_t MaxMpBonus = {};

		/// \brief Column [FireR]: Fire resistance
		///
		/// \property FireResist
		int16_t FireResist = {};

		/// \brief Column [ColdR]: Cold resistance
		///
		/// \property ColdResist
		int16_t ColdResist = {};

		/// \brief Column [LightningR]: Lightning resistance
		///
		/// \property LightningResist
		int16_t LightningResist = {};

		/// \brief Column [MagicR]: Magic resistance
		///
		/// \property MagicResist
		int16_t MagicResist = {};

		/// \brief Column [PoisonR]: Poison resistance
		///
		/// \property PoisonResist
		int16_t PoisonResist = {};

		/// \brief Column [CurseR]: Curse resistance
		///
		/// \property CurseResist
		int16_t CurseResist = {};

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
				"Num", "strName", "Kind", "Slot", "Race", "Class", "Damage", "Delay", "Range", "Weight", "Duration", "BuyPrice", "SellPrice", "Ac", "Countable", "Effect1", "Effect2", "ReqLevel", "ReqLevelMax", "ReqRank", "ReqTitle", "ReqStr", "ReqSta", "ReqDex", "ReqIntel", "ReqCha", "SellingGroup", "ItemType", "Hitrate", "Evasionrate", "DaggerAc", "SwordAc", "MaceAc", "AxeAc", "SpearAc", "BowAc", "FireDamage", "IceDamage", "LightningDamage", "PoisonDamage", "HPDrain", "MPDamage", "MPDrain", "MirrorDamage", "Droprate", "StrB", "StaB", "DexB", "IntelB", "ChaB", "MaxHpB", "MaxMpB", "FireR", "ColdR", "LightningR", "MagicR", "PoisonR", "CurseR"
			};
			return columnNames;
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

	/// \brief [ITEM_EXCHANGE] Enables players to be able to give items in exchange for an item from an NPC
	/// \class ItemExchange
	/// \xrefitem gamedb "Game Database" "Game Database" ITEM_EXCHANGE Enables players to be able to give items in exchange for an item from an NPC
	export class ItemExchange 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::ItemExchange;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = {};

		/// \brief Column [nNpcNum]: NPC identifier (K_NPC.sSid)
		///
		/// \property NpcNumber
		int16_t NpcNumber = {};

		/// \brief Column [strNpcName]: NPC Name
		///
		/// \property NpcName
		std::string NpcName;

		/// \brief Column [strNote]: Note
		///
		/// \property Note
		std::string Note;

		/// \brief Column [bRandomFlag]: Random Flag
		///
		/// \property RandomFlag
		uint8_t RandomFlag = {};

		union
		{
			/// \brief Union array grouping for columns [nOriginItemNum1] to [nOriginItemNum5]
			///
			/// \property OriginItemNumber
			int32_t OriginItemNumber[5] = {};

			struct
			{
				/// \brief Column [nOriginItemNum1]: Player item 1 needed for exchange
				///
				/// \property OriginItemNumber1
				int32_t OriginItemNumber1;

				/// \brief Column [nOriginItemNum2]: Player item 2 needed for exchange
				///
				/// \property OriginItemNumber2
				int32_t OriginItemNumber2;

				/// \brief Column [nOriginItemNum3]: Player item 3 needed for exchange
				///
				/// \property OriginItemNumber3
				int32_t OriginItemNumber3;

				/// \brief Column [nOriginItemNum4]: Player item 4 needed for exchange
				///
				/// \property OriginItemNumber4
				int32_t OriginItemNumber4;

				/// \brief Column [nOriginItemNum5]: Player item 5 needed for exchange
				///
				/// \property OriginItemNumber5
				int32_t OriginItemNumber5;
			};
		};

		union
		{
			/// \brief Union array grouping for columns [nOriginItemCount1] to [nOriginItemCount5]
			///
			/// \property OriginItemCount
			int16_t OriginItemCount[5] = {};

			struct
			{
				/// \brief Column [nOriginItemCount1]: Number of item 1 needed for exchange
				///
				/// \property OriginItemCount1
				int16_t OriginItemCount1;

				/// \brief Column [nOriginItemCount2]: Number of item 2 needed for exchange
				///
				/// \property OriginItemCount2
				int16_t OriginItemCount2;

				/// \brief Column [nOriginItemCount3]: Number of item 3 needed for exchange
				///
				/// \property OriginItemCount3
				int16_t OriginItemCount3;

				/// \brief Column [nOriginItemCount4]: Number of item 4 needed for exchange
				///
				/// \property OriginItemCount4
				int16_t OriginItemCount4;

				/// \brief Column [nOriginItemCount5]: Number of item 5 needed for exchange
				///
				/// \property OriginItemCount5
				int16_t OriginItemCount5;
			};
		};

		union
		{
			/// \brief Union array grouping for columns [nExchangeItemNum1] to [nExchangeItemNum5]
			///
			/// \property ExchangeItemNumber
			int32_t ExchangeItemNumber[5] = {};

			struct
			{
				/// \brief Column [nExchangeItemNum1]: NPC item 1 given in exchange
				///
				/// \property ExchangeItemNumber1
				int32_t ExchangeItemNumber1;

				/// \brief Column [nExchangeItemNum2]: NPC item 2 given in exchange
				///
				/// \property ExchangeItemNumber2
				int32_t ExchangeItemNumber2;

				/// \brief Column [nExchangeItemNum3]: NPC item 3 given in exchange
				///
				/// \property ExchangeItemNumber3
				int32_t ExchangeItemNumber3;

				/// \brief Column [nExchangeItemNum4]: NPC item 4 given in exchange
				///
				/// \property ExchangeItemNumber4
				int32_t ExchangeItemNumber4;

				/// \brief Column [nExchangeItemNum5]: NPC item 5 given in exchange
				///
				/// \property ExchangeItemNumber5
				int32_t ExchangeItemNumber5;
			};
		};

		union
		{
			/// \brief Union array grouping for columns [nExchangeItemCount1] to [nExchangeItemCount5]
			///
			/// \property ExchangeItemCount
			int16_t ExchangeItemCount[5] = {};

			struct
			{
				/// \brief Column [nExchangeItemCount1]: Number of item 1 given for exchange
				///
				/// \property ExchangeItemCount1
				int16_t ExchangeItemCount1;

				/// \brief Column [nExchangeItemCount2]: Number of item 2 given for exchange
				///
				/// \property ExchangeItemCount2
				int16_t ExchangeItemCount2;

				/// \brief Column [nExchangeItemCount3]: Number of item 3 given for exchange
				///
				/// \property ExchangeItemCount3
				int16_t ExchangeItemCount3;

				/// \brief Column [nExchangeItemCount4]: Number of item 4 given for exchange
				///
				/// \property ExchangeItemCount4
				int16_t ExchangeItemCount4;

				/// \brief Column [nExchangeItemCount5]: Number of item 5 given for exchange
				///
				/// \property ExchangeItemCount5
				int16_t ExchangeItemCount5;
			};
		};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ITEM_EXCHANGE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "nNpcNum", "strNpcName", "strNote", "bRandomFlag", "nOriginItemNum1", "nOriginItemCount1", "nOriginItemNum2", "nOriginItemCount2", "nOriginItemNum3", "nOriginItemCount3", "nOriginItemNum4", "nOriginItemCount4", "nOriginItemNum5", "nOriginItemCount5", "nExchangeItemNum1", "nExchangeItemCount1", "nExchangeItemNum2", "nExchangeItemCount2", "nExchangeItemNum3", "nExchangeItemCount3", "nExchangeItemNum4", "nExchangeItemCount4", "nExchangeItemNum5", "nExchangeItemCount5"
			};
			return columnNames;
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
				"nIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return Index;
		}

	};

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
		int16_t Group = {};

		/// \brief Column [name]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [item1]: Item identifier 1
		///
		/// \property Item1
		int32_t Item1 = {};

		/// \brief Column [item2]: Item identifier 2
		///
		/// \property Item2
		int32_t Item2 = {};

		/// \brief Column [item3]: Item identifier 3
		///
		/// \property Item3
		int32_t Item3 = {};

		/// \brief Column [item4]: Item identifier 4
		///
		/// \property Item4
		int32_t Item4 = {};

		/// \brief Column [item5]: Item identifier 5
		///
		/// \property Item5
		int32_t Item5 = {};

		/// \brief Column [item6]: Item identifier 6
		///
		/// \property Item6
		int32_t Item6 = {};

		/// \brief Column [item7]: Item identifier 7
		///
		/// \property Item7
		int32_t Item7 = {};

		/// \brief Column [item8]: Item identifier 8
		///
		/// \property Item8
		int32_t Item8 = {};

		/// \brief Column [item9]: Item identifier 9
		///
		/// \property Item9
		int32_t Item9 = {};

		/// \brief Column [item10]: Item identifier 10
		///
		/// \property Item10
		int32_t Item10 = {};

		/// \brief Column [item11]: Item identifier 11
		///
		/// \property Item11
		int32_t Item11 = {};

		/// \brief Column [item12]: Item identifier 12
		///
		/// \property Item12
		int32_t Item12 = {};

		/// \brief Column [item13]: Item identifier 13
		///
		/// \property Item13
		int32_t Item13 = {};

		/// \brief Column [item14]: Item identifier 14
		///
		/// \property Item14
		int32_t Item14 = {};

		/// \brief Column [item15]: Item identifier 15
		///
		/// \property Item15
		int32_t Item15 = {};

		/// \brief Column [item16]: Item identifier 16
		///
		/// \property Item16
		int32_t Item16 = {};

		/// \brief Column [item17]: Item identifier 17
		///
		/// \property Item17
		int32_t Item17 = {};

		/// \brief Column [item18]: Item identifier 18
		///
		/// \property Item18
		int32_t Item18 = {};

		/// \brief Column [item19]: Item identifier 19
		///
		/// \property Item19
		int32_t Item19 = {};

		/// \brief Column [item20]: Item identifier 20
		///
		/// \property Item20
		int32_t Item20 = {};

		/// \brief Column [item21]: Item identifier 21
		///
		/// \property Item21
		int32_t Item21 = {};

		/// \brief Column [item22]: Item identifier 22
		///
		/// \property Item22
		int32_t Item22 = {};

		/// \brief Column [item23]: Item identifier 23
		///
		/// \property Item23
		int32_t Item23 = {};

		/// \brief Column [item24]: Item identifier 24
		///
		/// \property Item24
		int32_t Item24 = {};

		/// \brief Column [item25]: Item identifier 25
		///
		/// \property Item25
		int32_t Item25 = {};

		/// \brief Column [item26]: Item identifier 26
		///
		/// \property Item26
		int32_t Item26 = {};

		/// \brief Column [item27]: Item identifier 27
		///
		/// \property Item27
		int32_t Item27 = {};

		/// \brief Column [item28]: Item identifier 28
		///
		/// \property Item28
		int32_t Item28 = {};

		/// \brief Column [item29]: Item identifier 29
		///
		/// \property Item29
		int32_t Item29 = {};

		/// \brief Column [item30]: Item identifier 30
		///
		/// \property Item30
		int32_t Item30 = {};

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

	};

	/// \brief [ITEM_UPGRADE] Item upgrade configuration
	/// \class ItemUpgrade
	/// \xrefitem gamedb "Game Database" "Game Database" ITEM_UPGRADE Item upgrade configuration
	export class ItemUpgrade 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::ItemUpgrade;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = {};

		/// \brief Column [nNPCNum]: NPC Identifier (K_NPC.sSid)
		///
		/// \property NpcNumber
		int16_t NpcNumber = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [strNote]: Note
		///
		/// \property Note
		std::string Note;

		/// \brief Column [nOriginType]: Origin Type
		///
		/// \property OriginType
		int16_t OriginType = {};

		/// \brief Column [nOriginItem]: Origin Item
		///
		/// \property OriginItem
		int16_t OriginItem = {};

		union
		{
			/// \brief Union array grouping for columns [nReqItem1] to [nReqItem8]
			///
			/// \property RequiredItem
			int32_t RequiredItem[8] = {};

			struct
			{
				/// \brief Column [nReqItem1]: Required item 1 identifier
				///
				/// \property RequiredItem1
				int32_t RequiredItem1;

				/// \brief Column [nReqItem2]: Required item 2 identifier
				///
				/// \property RequiredItem2
				int32_t RequiredItem2;

				/// \brief Column [nReqItem3]: Required item 3 identifier
				///
				/// \property RequiredItem3
				int32_t RequiredItem3;

				/// \brief Column [nReqItem4]: Required item 4 identifier
				///
				/// \property RequiredItem4
				int32_t RequiredItem4;

				/// \brief Column [nReqItem5]: Required item 5 identifier
				///
				/// \property RequiredItem5
				int32_t RequiredItem5;

				/// \brief Column [nReqItem6]: Required item 6 identifier
				///
				/// \property RequiredItem6
				int32_t RequiredItem6;

				/// \brief Column [nReqItem7]: Required item 7 identifier
				///
				/// \property RequiredItem7
				int32_t RequiredItem7;

				/// \brief Column [nReqItem8]: Required item 8 identifier
				///
				/// \property RequiredItem8
				int32_t RequiredItem8;
			};
		};

		/// \brief Column [nReqNoah]: Coins required to upgrade
		///
		/// \property RequiredCoins
		int32_t RequiredCoins = {};

		/// \brief Column [bRateType]: Rate type
		///
		/// \property RateType
		uint8_t RateType = {};

		/// \brief Column [nGenRate]: Upgrade success rate
		///
		/// \property GenRate
		int16_t GenRate = {};

		/// \brief Column [nGiveItem]: Item acquired on successful upgrade
		///
		/// \property GiveItem
		int16_t GiveItem = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ITEM_UPGRADE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "nNPCNum", "strName", "strNote", "nOriginType", "nOriginItem", "nReqItem1", "nReqItem2", "nReqItem3", "nReqItem4", "nReqItem5", "nReqItem6", "nReqItem7", "nReqItem8", "nReqNoah", "bRateType", "nGenRate", "nGiveItem"
			};
			return columnNames;
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
				"nIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return Index;
		}

	};

	/// \brief [ITEMUP_PROBABILITY] TODO: Doc usage
	/// \class ItemUpProbability
	/// \xrefitem gamedb "Game Database" "Game Database" ITEMUP_PROBABILITY TODO: Doc usage
	export class ItemUpProbability 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::ItemUpProbability;

		/// \brief Column [bType]: Type
		///
		/// \property Type
		uint8_t Type = {};

		/// \brief Column [nMaxSuccess]: Max Success
		///
		/// \property MaxSuccess
		int16_t MaxSuccess = {};

		/// \brief Column [nMaxFail]: Max Fail
		///
		/// \property MaxFail
		int16_t MaxFail = {};

		/// \brief Column [nCurSuccess]: Current success
		///
		/// \property CurrentSuccess
		int16_t CurrentSuccess = {};

		/// \brief Column [nCurFail]: Current failure
		///
		/// \property CurrentFailure
		int16_t CurrentFailure = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ITEMUP_PROBABILITY";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"bType", "nMaxSuccess", "nMaxFail", "nCurSuccess", "nCurFail"
			};
			return columnNames;
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
				"bType"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const
		{
			return Type;
		}

	};

	/// \brief [K_MONSTER] Monster definitions
	/// \class Monster
	/// \xrefitem gamedb "Game Database" "Game Database" K_MONSTER Monster definitions
	export class Monster 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Monster;

		/// \brief Column [sSid]: Monster Identifier
		///
		/// \property MonsterId
		int16_t MonsterId = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [sPid]: Picture identifier
		///
		/// \property PictureId
		int16_t PictureId = {};

		/// \brief Column [sSize]: Size multiplier
		///
		/// \property Size
		int16_t Size = {};

		/// \brief Column [iWeapon1]: Weapon 1 ItemNum
		///
		/// \property Weapon1
		int32_t Weapon1 = {};

		/// \brief Column [iWeapon2]: Weapon 2 ItemNum
		///
		/// \property Weapon2
		int32_t Weapon2 = {};

		/// \brief Column [byGroup]: Group
		///
		/// \property Group
		uint8_t Group = {};

		/// \brief Column [byActType]: Act Type
		///
		/// \property ActType
		uint8_t ActType = {};

		/// \brief Column [byType]: Type
		///
		/// \see EnumType
		/// \property Type
		uint8_t Type = {};

		/// \enum EnumType
		/// \brief Known valid values for byType
		enum class EnumType
		{
			Monster = 0,
			Npc = 1,
			Event = 2,
			Unknown3 = 3,
			Unknown4 = 4,
			Trap = 5,
			RangedOrc = 6,
			Unknown9 = 9
		};

		/// \brief Column [byFamily]: Family
		///
		/// \property Family
		uint8_t Family = {};

		/// \brief Column [byRank]: Rank
		///
		/// \property Rank
		uint8_t Rank = {};

		/// \brief Column [byTitle]: Title
		///
		/// \property Title
		uint8_t Title = {};

		/// \brief Column [iSellingGroup]: Npc selling group
		///
		/// \property SellingGroup
		int32_t SellingGroup = {};

		/// \brief Column [sLevel]: Level
		///
		/// \property Level
		int16_t Level = {};

		/// \brief Column [iExp]: Experience granted when killed
		///
		/// \property Exp
		int32_t Exp = {};

		/// \brief Column [iLoyalty]: NP granted when killed
		///
		/// \property Loyalty
		int32_t Loyalty = {};

		/// \brief Column [iHpPoint]: Max health
		///
		/// \property HitPoints
		int32_t HitPoints = {};

		/// \brief Column [sMpPoint]: Max mana
		///
		/// \property ManaPoints
		int16_t ManaPoints = {};

		/// \brief Column [sAtk]: TODO: Doc usage
		///
		/// \property Attack
		int16_t Attack = {};

		/// \brief Column [sAc]: Armor
		///
		/// \property Armor
		int16_t Armor = {};

		/// \brief Column [sHitRate]: Attack success rate
		///
		/// \property HitRate
		int16_t HitRate = {};

		/// \brief Column [sEvadeRate]: Evasion Rate
		///
		/// \property EvadeRate
		int16_t EvadeRate = {};

		/// \brief Column [sDamage]: Raw damage dealt
		///
		/// \property Damage
		int16_t Damage = {};

		/// \brief Column [sAttackDelay]: Time to wait between attacks
		///
		/// \property AttackDelay
		int16_t AttackDelay = {};

		/// \brief Column [bySpeed1]: Walk movement speed
		///
		/// \property WalkSpeed
		uint8_t WalkSpeed = {};

		/// \brief Column [bySpeed2]: Run movement speed
		///
		/// \property RunSpeed
		uint8_t RunSpeed = {};

		/// \brief Column [sStandtime]: Delay time while in standing state
		///
		/// \property StandTime
		int16_t StandTime = {};

		/// \brief Column [iMagic1]: Magic identifier 1
		///
		/// \property Magic1
		int32_t Magic1 = {};

		/// \brief Column [iMagic2]: Magic identifier 2
		///
		/// \property Magic2
		int32_t Magic2 = {};

		/// \brief Column [iMagic3]: Magic identifier 3
		///
		/// \property Magic3
		int32_t Magic3 = {};

		/// \brief Column [sFireR]: Fire resistance
		///
		/// \property FireResist
		int16_t FireResist = {};

		/// \brief Column [sColdR]: Cold resistance
		///
		/// \property ColdResist
		int16_t ColdResist = {};

		/// \brief Column [sLightningR]: Lightning resistance
		///
		/// \property LightningResist
		int16_t LightningResist = {};

		/// \brief Column [sMagicR]: Magic resistance
		///
		/// \property MagicResist
		int16_t MagicResist = {};

		/// \brief Column [sDiseaseR]: Disease resistance
		///
		/// \property DiseaseResist
		int16_t DiseaseResist = {};

		/// \brief Column [sPoisonR]: Poison resistance
		///
		/// \property PoisonResist
		int16_t PoisonResist = {};

		/// \brief Column [sLightR]: Light resistance
		///
		/// \property LightResist
		int16_t LightResist = {};

		/// \brief Column [sBulk]: Bulk
		///
		/// \property Bulk
		int16_t Bulk = {};

		/// \brief Column [byAttackRange]: Attack range
		///
		/// \property AttackRange
		uint8_t AttackRange = {};

		/// \brief Column [bySearchRange]: Search range
		///
		/// \property SearchRange
		uint8_t SearchRange = {};

		/// \brief Column [byTracingRange]: Tracing range
		///
		/// \property TracingRange
		uint8_t TracingRange = {};

		/// \brief Column [iMoney]: Coins dropped on death
		///
		/// \property Money
		int32_t Money = {};

		/// \brief Column [sItem]: K_MONSTER_ITEM.Index drop table reference
		///
		/// \property Item
		int16_t Item = {};

		/// \brief Column [byDirectAttack]: Direct attack
		///
		/// \property DirectAttack
		uint8_t DirectAttack = {};

		/// \brief Column [byMagicAttack]: Magic attack
		///
		/// \property MagicAttack
		uint8_t MagicAttack = {};

		/// \brief Column [byMoneyType]: Money type
		///
		/// \property MoneyType
		uint8_t MoneyType = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "K_MONSTER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sSid", "strName", "sPid", "sSize", "iWeapon1", "iWeapon2", "byGroup", "byActType", "byType", "byFamily", "byRank", "byTitle", "iSellingGroup", "sLevel", "iExp", "iLoyalty", "iHpPoint", "sMpPoint", "sAtk", "sAc", "sHitRate", "sEvadeRate", "sDamage", "sAttackDelay", "bySpeed1", "bySpeed2", "sStandtime", "iMagic1", "iMagic2", "iMagic3", "sFireR", "sColdR", "sLightningR", "sMagicR", "sDiseaseR", "sPoisonR", "sLightR", "sBulk", "byAttackRange", "bySearchRange", "byTracingRange", "iMoney", "sItem", "byDirectAttack", "byMagicAttack", "byMoneyType"
			};
			return columnNames;
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
				"sSid"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return MonsterId;
		}

	};

	/// \brief [K_MONSTER_ITEM] Monster loot table
	/// \class MonsterItem
	/// \xrefitem gamedb "Game Database" "Game Database" K_MONSTER_ITEM Monster loot table
	export class MonsterItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MonsterItem;

		/// \brief Column [sIndex]: Monster identifier (K_MONSTER.sSid)
		///
		/// \property MonsterId
		int16_t MonsterId = {};

		union
		{
			/// \brief Union array grouping for columns [iItem01] to [iItem05]
			///
			/// \property ItemId
			int32_t ItemId[5] = {};

			struct
			{
				/// \brief Column [iItem01]: Item identifier 1
				///
				/// \property ItemId1
				int32_t ItemId1;

				/// \brief Column [iItem02]: Item identifier 2
				///
				/// \property ItemId2
				int32_t ItemId2;

				/// \brief Column [iItem03]: Item identifier 3
				///
				/// \property ItemId3
				int32_t ItemId3;

				/// \brief Column [iItem04]: Item identifier 4
				///
				/// \property ItemId4
				int32_t ItemId4;

				/// \brief Column [iItem05]: Item identifier 5
				///
				/// \property ItemId5
				int32_t ItemId5;
			};
		};

		union
		{
			/// \brief Union array grouping for columns [sPersent01] to [sPersent05]
			///
			/// \property DropChance
			int16_t DropChance[5] = {};

			struct
			{
				/// \brief Column [sPersent01]: Chance for item 1 to drop
				///
				/// \property DropChance1
				int16_t DropChance1;

				/// \brief Column [sPersent02]: Chance for item 2 to drop
				///
				/// \property DropChance2
				int16_t DropChance2;

				/// \brief Column [sPersent03]: Chance for item 3 to drop
				///
				/// \property DropChance3
				int16_t DropChance3;

				/// \brief Column [sPersent04]: Chance for item 4 to drop
				///
				/// \property DropChance4
				int16_t DropChance4;

				/// \brief Column [sPersent05]: Chance for item 5 to drop
				///
				/// \property DropChance5
				int16_t DropChance5;
			};
		};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "K_MONSTER_ITEM";
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
			return MonsterId;
		}

	};

	/// \brief [K_NPC] Non-Player Character
	/// \class Npc
	/// \xrefitem gamedb "Game Database" "Game Database" K_NPC Non-Player Character
	export class Npc 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Npc;

		/// \brief Column [sSid]: NPC Identifier
		///
		/// \property NpcId
		int16_t NpcId = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [sPid]: Picture identifier
		///
		/// \property PictureId
		int16_t PictureId = {};

		/// \brief Column [sSize]: Size multiplier
		///
		/// \property Size
		int16_t Size = {};

		/// \brief Column [iWeapon1]: Weapon 1 ItemNum
		///
		/// \property Weapon1
		int32_t Weapon1 = {};

		/// \brief Column [iWeapon2]: Weapon 2 ItemNum
		///
		/// \property Weapon2
		int32_t Weapon2 = {};

		/// \brief Column [byGroup]: Group
		///
		/// \property Group
		uint8_t Group = {};

		/// \brief Column [byActType]: Act Type
		///
		/// \property ActType
		uint8_t ActType = {};

		/// \brief Column [byType]: Type
		///
		/// \see EnumType
		/// \property Type
		uint8_t Type = {};

		/// \enum EnumType
		/// \brief Known valid values for byType
		enum class EnumType
		{
			Monster = 0,
			Npc = 1,
			Event = 2,
			Unknown3 = 3,
			Unknown4 = 4,
			Trap = 5,
			RangedOrc = 6,
			Unknown9 = 9
		};

		/// \brief Column [byFamily]: Family
		///
		/// \property Family
		uint8_t Family = {};

		/// \brief Column [byRank]: Rank
		///
		/// \property Rank
		uint8_t Rank = {};

		/// \brief Column [byTitle]: Title
		///
		/// \property Title
		uint8_t Title = {};

		/// \brief Column [iSellingGroup]: Npc selling group
		///
		/// \property SellingGroup
		int32_t SellingGroup = {};

		/// \brief Column [sLevel]: Level
		///
		/// \property Level
		int16_t Level = {};

		/// \brief Column [iExp]: Experience granted when killed
		///
		/// \property Exp
		int32_t Exp = {};

		/// \brief Column [iLoyalty]: NP granted when killed
		///
		/// \property Loyalty
		int32_t Loyalty = {};

		/// \brief Column [iHpPoint]: Max health
		///
		/// \property HitPoints
		int32_t HitPoints = {};

		/// \brief Column [sMpPoint]: Max mana
		///
		/// \property ManaPoints
		int16_t ManaPoints = {};

		/// \brief Column [sAtk]: TODO: Doc usage
		///
		/// \property Attack
		int16_t Attack = {};

		/// \brief Column [sAc]: Armor
		///
		/// \property Armor
		int16_t Armor = {};

		/// \brief Column [sHitRate]: Attack success rate
		///
		/// \property HitRate
		int16_t HitRate = {};

		/// \brief Column [sEvadeRate]: Evasion Rate
		///
		/// \property EvadeRate
		int16_t EvadeRate = {};

		/// \brief Column [sDamage]: Raw damage dealt
		///
		/// \property Damage
		int16_t Damage = {};

		/// \brief Column [sAttackDelay]: Time to wait between attacks
		///
		/// \property AttackDelay
		int16_t AttackDelay = {};

		/// \brief Column [bySpeed1]: Walk movement speed
		///
		/// \property WalkSpeed
		uint8_t WalkSpeed = {};

		/// \brief Column [bySpeed2]: Run movement speed
		///
		/// \property RunSpeed
		uint8_t RunSpeed = {};

		/// \brief Column [sStandtime]: Delay time while in standing state
		///
		/// \property StandTime
		int16_t StandTime = {};

		/// \brief Column [iMagic1]: Magic identifier 1
		///
		/// \property Magic1
		int32_t Magic1 = {};

		/// \brief Column [iMagic2]: Magic identifier 2
		///
		/// \property Magic2
		int32_t Magic2 = {};

		/// \brief Column [iMagic3]: Magic identifier 3
		///
		/// \property Magic3
		int32_t Magic3 = {};

		/// \brief Column [sFireR]: Fire resistance
		///
		/// \property FireResist
		int16_t FireResist = {};

		/// \brief Column [sColdR]: Cold resistance
		///
		/// \property ColdResist
		int16_t ColdResist = {};

		/// \brief Column [sLightningR]: Lightning resistance
		///
		/// \property LightningResist
		int16_t LightningResist = {};

		/// \brief Column [sMagicR]: Magic resistance
		///
		/// \property MagicResist
		int16_t MagicResist = {};

		/// \brief Column [sDiseaseR]: Disease resistance
		///
		/// \property DiseaseResist
		int16_t DiseaseResist = {};

		/// \brief Column [sPoisonR]: Poison resistance
		///
		/// \property PoisonResist
		int16_t PoisonResist = {};

		/// \brief Column [sLightR]: Light resistance
		///
		/// \property LightResist
		int16_t LightResist = {};

		/// \brief Column [sBulk]: Bulk
		///
		/// \property Bulk
		int16_t Bulk = {};

		/// \brief Column [byAttackRange]: Attack range
		///
		/// \property AttackRange
		uint8_t AttackRange = {};

		/// \brief Column [bySearchRange]: Search range
		///
		/// \property SearchRange
		uint8_t SearchRange = {};

		/// \brief Column [byTracingRange]: Tracing range
		///
		/// \property TracingRange
		uint8_t TracingRange = {};

		/// \brief Column [iMoney]: Coins dropped on death
		///
		/// \property Money
		int32_t Money = {};

		/// \brief Column [sItem]: K_MONSTER_ITEM.Index drop table reference
		///
		/// \property Item
		int16_t Item = {};

		/// \brief Column [byDirectAttack]: Direct attack
		///
		/// \property DirectAttack
		uint8_t DirectAttack = {};

		/// \brief Column [byMagicAttack]: Magic attack
		///
		/// \property MagicAttack
		uint8_t MagicAttack = {};

		/// \brief Column [byMoneyType]: Money type
		///
		/// \property MoneyType
		uint8_t MoneyType = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "K_NPC";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sSid", "strName", "sPid", "sSize", "iWeapon1", "iWeapon2", "byGroup", "byActType", "byType", "byFamily", "byRank", "byTitle", "iSellingGroup", "sLevel", "iExp", "iLoyalty", "iHpPoint", "sMpPoint", "sAtk", "sAc", "sHitRate", "sEvadeRate", "sDamage", "sAttackDelay", "bySpeed1", "bySpeed2", "sStandtime", "iMagic1", "iMagic2", "iMagic3", "sFireR", "sColdR", "sLightningR", "sMagicR", "sDiseaseR", "sPoisonR", "sLightR", "sBulk", "byAttackRange", "bySearchRange", "byTracingRange", "iMoney", "sItem", "byDirectAttack", "byMagicAttack", "byMoneyType"
			};
			return columnNames;
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
				"sSid"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return NpcId;
		}

	};

	/// \brief [K_NPC_ITEM] NPC loot table
	/// \class NpcItem
	/// \xrefitem gamedb "Game Database" "Game Database" K_NPC_ITEM NPC loot table
	export class NpcItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::NpcItem;

		/// \brief Column [sIndex]: NPC identifier (K_NPC.sSid)
		///
		/// \property NpcId
		int16_t NpcId = {};

		/// \brief Column [iItem01]: Item identifier 1
		///
		/// \property ItemId1
		int32_t ItemId1 = {};

		union
		{
			/// \brief Union array grouping for columns [sPersent01] to [sPersent05]
			///
			/// \property DropChance
			std::optional<int16_t> DropChance[5];

			struct
			{
				/// \brief Column [sPersent01]: Chance for item 1 to drop
				///
				/// \property DropChance1
				std::optional<int16_t> DropChance1;

				/// \brief Column [sPersent02]: Chance for item 2 to drop
				///
				/// \property DropChance2
				std::optional<int16_t> DropChance2;

				/// \brief Column [sPersent03]: Chance for item 3 to drop
				///
				/// \property DropChance3
				std::optional<int16_t> DropChance3;

				/// \brief Column [sPersent04]: Chance for item 4 to drop
				///
				/// \property DropChance4
				std::optional<int16_t> DropChance4;

				/// \brief Column [sPersent05]: Chance for item 5 to drop
				///
				/// \property DropChance5
				std::optional<int16_t> DropChance5;
			};
		};

		/// \brief Column [iItem02]: Item identifier 2
		///
		/// \property ItemId2
		std::optional<int32_t> ItemId2;

		/// \brief Column [iItem03]: Item identifier 3
		///
		/// \property ItemId3
		std::optional<int32_t> ItemId3;

		/// \brief Column [iItem04]: Item identifier 4
		///
		/// \property ItemId4
		std::optional<int32_t> ItemId4;

		/// \brief Column [iItem05]: Item identifier 5
		///
		/// \property ItemId5
		std::optional<int32_t> ItemId5;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "K_NPC_ITEM";
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
			return NpcId;
		}

	};

	/// \brief [K_NPC_MOVE_ITEM] NPC Move Item: TODO
	/// \class NpcMoveItem
	/// \xrefitem gamedb "Game Database" "Game Database" K_NPC_MOVE_ITEM NPC Move Item: TODO
	export class NpcMoveItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::NpcMoveItem;

		/// \brief Column [sCastleIndex]: Castle identifier TODO mostly lines up with k_npc.ssid
		///
		/// \property CastleIndex
		int16_t CastleIndex = {};

		/// \brief Column [byChangeItem]: Change Item TODO
		///
		/// \property ChangeItem
		std::optional<int32_t> ChangeItem;

		/// \brief Column [sChangeSid]: Change identifier TODO
		///
		/// \property ChangeId
		std::optional<int32_t> ChangeId;

		/// \brief Column [byMoveItem]: Move item to do
		///
		/// \property MoveItem
		std::optional<int32_t> MoveItem;

		/// \brief Column [sMoveMinX]: Minimum x-axis movement
		///
		/// \property MoveMinX
		std::optional<int16_t> MoveMinX;

		/// \brief Column [sMoveMinY]: Minimum y-axis movement
		///
		/// \property MoveMinY
		std::optional<int16_t> MoveMinY;

		/// \brief Column [sMoveMaxX]: Maximum x-axis movement
		///
		/// \property MoveMaxX
		std::optional<int16_t> MoveMaxX;

		/// \brief Column [sMoveMaxY]: Maximum y-axis movement
		///
		/// \property MoveMaxY
		std::optional<int16_t> MoveMaxY;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "K_NPC_MOVE_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sCastleIndex", "byChangeItem", "sChangeSid", "byMoveItem", "sMoveMinX", "sMoveMinY", "sMoveMaxX", "sMoveMaxY"
			};
			return columnNames;
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
				"sCastleIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return CastleIndex;
		}

	};

	/// \brief [K_NPCPOS] NPC Spawn Positions
	/// \class NpcPos
	/// \xrefitem gamedb "Game Database" "Game Database" K_NPCPOS NPC Spawn Positions
	export class NpcPos 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::NpcPos;

		/// \brief Column [ZoneID]: Zone Identifier
		///
		/// \property ZoneId
		int16_t ZoneId = {};

		/// \brief Column [NpcID]: NPC Identifier (K_NPC.sSid)
		///
		/// \property NpcId
		int32_t NpcId = {};

		/// \brief Column [ActType]: Act type TODO
		///
		/// \property ActType
		uint8_t ActType = {};

		/// \brief Column [RegenType]: Regen type TODO
		///
		/// \property RegenType
		uint8_t RegenType = {};

		/// \brief Column [DungeonFamily]: Dungeon family TODO
		///
		/// \property DungeonFamily
		uint8_t DungeonFamily = {};

		/// \brief Column [SpecialType]: Special type TODO
		///
		/// \property SpecialType
		uint8_t SpecialType = {};

		/// \brief Column [TrapNumber]: Trap number
		///
		/// \property TrapNumber
		uint8_t TrapNumber = {};

		/// \brief Column [LeftX]: X-coordinate representing the left side of the spawn area
		///
		/// \property LeftX
		int32_t LeftX = {};

		/// \brief Column [TopZ]: Z-coordinate representing the top side of the spawn area
		///
		/// \property TopZ
		int32_t TopZ = {};

		/// \brief Column [RightX]: X-coordinate representing the right side of the spawn area
		///
		/// \property RightX
		int32_t RightX = {};

		/// \brief Column [BottomZ]: Z-coordinate representing the bottom side of the spawn area
		///
		/// \property BottomZ
		int32_t BottomZ = {};

		/// \brief Column [LimitMinZ]: Minimum z-coordinate value for valid roaming
		///
		/// \property LimitMinZ
		int32_t LimitMinZ = {};

		/// \brief Column [LimitMinX]: Minimum x-coordinate value for valid roaming
		///
		/// \property LimitMinX
		int32_t LimitMinX = {};

		/// \brief Column [LimitMaxX]: Maximum x-coordinate value for valid roaming
		///
		/// \property LimitMaxX
		int32_t LimitMaxX = {};

		/// \brief Column [LimitMaxZ]: Maximum z-coordinate value for valid roaming
		///
		/// \property LimitMaxZ
		int32_t LimitMaxZ = {};

		/// \brief Column [NumNPC]: Target number of NPCs for the spawn area
		///
		/// \property NumNpc
		uint8_t NumNpc = {};

		/// \brief Column [RegTime]: How long it takes for a dead NPC to respawn
		///
		/// \property RespawnTime
		int16_t RespawnTime = {};

		/// \brief Column [byDirection]: Direction TODO
		///
		/// \property Direction
		int32_t Direction = {};

		/// \brief Column [DotCnt]: The number of points contained within Path
		///
		/// \property PathPointCount
		uint8_t PathPointCount = {};

		/// \brief Column [path]: Pathfinding data. Each point contains an x and z coordinate. Each coordinate is 4-digits wide and zero-padded
		///
		/// \property Path
		std::optional<std::string> Path;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "K_NPCPOS";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"ZoneID", "NpcID", "ActType", "RegenType", "DungeonFamily", "SpecialType", "TrapNumber", "LeftX", "TopZ", "RightX", "BottomZ", "LimitMinZ", "LimitMinX", "LimitMaxX", "LimitMaxZ", "NumNPC", "RegTime", "byDirection", "DotCnt", "path"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				"path"
			};
			return blobColumns;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};

	/// \brief [KING_BALLOT_BOX] King Ballot Box TODO
	/// \class KingBallotBox
	/// \xrefitem gamedb "Game Database" "Game Database" KING_BALLOT_BOX King Ballot Box TODO
	export class KingBallotBox 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KingBallotBox;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [byNation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [strCandidacyID]: Candidate identifier
		///
		/// \property CandidateId
		std::string CandidateId;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KING_BALLOT_BOX";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "strCharID", "byNation", "strCandidacyID"
			};
			return columnNames;
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

	};

	/// \brief [KING_CANDIDACY_NOTICE_BOARD] King candidacy notice board
	/// \class KingCandidacyNoticeBoard
	/// \xrefitem gamedb "Game Database" "Game Database" KING_CANDIDACY_NOTICE_BOARD King candidacy notice board
	export class KingCandidacyNoticeBoard 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KingCandidacyNoticeBoard;

		/// \brief Column [strUserID]: Candidate identifier
		///
		/// \property CandidateId
		std::string CandidateId;

		/// \brief Column [byNation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [sNoticeLen]: Notice length
		///
		/// \property NoticeLength
		int16_t NoticeLength = {};

		/// \brief Column [strNotice]: Candidate notice
		///
		/// \property Notice
		std::vector<uint8_t> Notice;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KING_CANDIDACY_NOTICE_BOARD";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strUserID", "byNation", "sNoticeLen", "strNotice"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				"strNotice"
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
				"strUserID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::string& MapKey() const
		{
			return CandidateId;
		}

	};

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
		uint8_t Type = {};

		/// \brief Column [byNation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [nKnights]: Knights identifier (Knights.IDNum)
		///
		/// \property Knights
		int16_t Knights = {};

		/// \brief Column [strName]: Name TODO
		///
		/// \property Name
		std::string Name;

		/// \brief Column [nMoney]: Money TODO
		///
		/// \property Money
		int32_t Money = {};

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

	};

	/// \brief [KING_SYSTEM] King System
	/// \class KingSystem
	/// \xrefitem gamedb "Game Database" "Game Database" KING_SYSTEM King System
	export class KingSystem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KingSystem;

		/// \brief Column [byNation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [byType]: Type TODO
		///
		/// \property Type
		uint8_t Type = {};

		/// \brief Column [sYear]: Year
		///
		/// \property Year
		int16_t Year = {};

		/// \brief Column [byMonth]: Month
		///
		/// \property Month
		uint8_t Month = {};

		/// \brief Column [byDay]: Day
		///
		/// \property Day
		uint8_t Day = {};

		/// \brief Column [byHour]: Hour
		///
		/// \property Hour
		uint8_t Hour = {};

		/// \brief Column [byMinute]: Minute
		///
		/// \property Minute
		uint8_t Minute = {};

		/// \brief Column [byImType]: ImType TODO
		///
		/// \property ImType
		uint8_t ImType = {};

		/// \brief Column [sImYear]: ImYear
		///
		/// \property ImYear
		int16_t ImYear = {};

		/// \brief Column [byImMonth]: ImMonth
		///
		/// \property ImMonth
		uint8_t ImMonth = {};

		/// \brief Column [byImDay]: ImDay
		///
		/// \property ImDay
		uint8_t ImDay = {};

		/// \brief Column [byImHour]: ImHour
		///
		/// \property ImHour
		uint8_t ImHour = {};

		/// \brief Column [byImMinute]: ImMinute
		///
		/// \property ImMinute
		uint8_t ImMinute = {};

		/// \brief Column [byNoahEvent]: Noah Event
		///
		/// \property NoahEvent
		uint8_t NoahEvent = {};

		/// \brief Column [byNoahEvent_Day]: NoahEvent Day
		///
		/// \property NoahEventDay
		uint8_t NoahEventDay = {};

		/// \brief Column [byNoahEvent_Hour]: NoahEvent Hour
		///
		/// \property NoahEventHour
		uint8_t NoahEventHour = {};

		/// \brief Column [byNoahEvent_Minute]: NoahEvent Minute
		///
		/// \property NoahEventMinute
		uint8_t NoahEventMinute = {};

		/// \brief Column [sNoahEvent_Duration]: NoahEvent Duration
		///
		/// \property NoahEventDuration
		int16_t NoahEventDuration = {};

		/// \brief Column [byExpEvent]: Experience Event
		///
		/// \property ExpEvent
		uint8_t ExpEvent = {};

		/// \brief Column [byExpEvent_Day]: Experience Event Day
		///
		/// \property ExpEventDay
		uint8_t ExpEventDay = {};

		/// \brief Column [byExpEvent_Hour]: Experience Event Hour
		///
		/// \property ExpEventHour
		uint8_t ExpEventHour = {};

		/// \brief Column [byExpEvent_Minute]: Experience Event Minute
		///
		/// \property ExpEventMinute
		uint8_t ExpEventMinute = {};

		/// \brief Column [sExpEvent_Duration]: Experience Event Duration
		///
		/// \property ExpEventDuration
		int16_t ExpEventDuration = {};

		/// \brief Column [nTribute]: Tribute TODO Tax Rate?
		///
		/// \property Tribute
		int32_t Tribute = {};

		/// \brief Column [byTerritoryTariff]: Territory tariff
		///
		/// \property TerritoryTariff
		uint8_t TerritoryTariff = {};

		/// \brief Column [nTerritoryTax]: Territory tax
		///
		/// \property TerritoryTax
		int32_t TerritoryTax = {};

		/// \brief Column [nNationalTreasury]: National treasury
		///
		/// \property NationalTreasury
		int32_t NationalTreasury = {};

		/// \brief Column [strKingName]: King character identifier
		///
		/// \property KingName
		std::optional<std::string> KingName;

		/// \brief Column [strImRequestID]: Im Request Id TODO
		///
		/// \property ImRequestId
		std::optional<std::string> ImRequestId;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KING_SYSTEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"byNation", "byType", "sYear", "byMonth", "byDay", "byHour", "byMinute", "byImType", "sImYear", "byImMonth", "byImDay", "byImHour", "byImMinute", "byNoahEvent", "byNoahEvent_Day", "byNoahEvent_Hour", "byNoahEvent_Minute", "sNoahEvent_Duration", "byExpEvent", "byExpEvent_Day", "byExpEvent_Hour", "byExpEvent_Minute", "sExpEvent_Duration", "nTribute", "byTerritoryTariff", "nTerritoryTax", "nNationalTreasury", "strKingName", "strImRequestID"
			};
			return columnNames;
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

	};

	/// \brief [KNIGHTS] Knights are the clan/guild system of the game
	/// \class Knights
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS Knights are the clan/guild system of the game
	export class Knights 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Knights;

		/// \brief Column [IDNum]: Identification number
		///
		/// \property ID
		int16_t ID = {};

		/// \brief Column [Flag]: Flag TODO
		///
		/// \property Flag
		uint8_t Flag = {};

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

		/// \brief Column [Chief]: Leader character identifier
		///
		/// \property Chief
		std::string Chief;

		/// \brief Column [ViceChief_1]: Vice chief 1 character identifier
		///
		/// \property ViceChief1
		std::optional<std::string> ViceChief1;

		/// \brief Column [ViceChief_2]: Vice chief 2 character identifier
		///
		/// \property ViceChief2
		std::optional<std::string> ViceChief2;

		/// \brief Column [ViceChief_3]: Vice chief 3 character identifier
		///
		/// \property ViceChief3
		std::optional<std::string> ViceChief3;

		/// \brief Column [strEnemyName]: Enemy Name TODO
		///
		/// \property EnemyName
		std::optional<std::string> EnemyName;

		/// \brief Column [byOldWarResult]: Old war result
		///
		/// \property OldWarResult
		uint8_t OldWarResult = {};

		/// \brief Column [nWarEnemyID]: War enemy identifier
		///
		/// \property WarEnemyId
		int32_t WarEnemyId = {};

		/// \brief Column [nVictory]: Victory TODO
		///
		/// \property Victory
		int32_t Victory = {};

		/// \brief Column [nLose]: Lose TODO
		///
		/// \property Lose
		int32_t Lose = {};

		/// \brief Column [Gold]: Gold
		///
		/// \property Gold
		int64_t Gold = {};

		/// \brief Column [Domination]: Domination TODO
		///
		/// \property Domination
		int16_t Domination = {};

		/// \brief Column [Points]: National points
		///
		/// \property Points
		int32_t Points = {};

		/// \brief Column [CreateTime]: Create time
		///
		/// \property CreateTime
		std::time_t CreateTime;

		/// \brief Column [sMarkVersion]: Mark version
		///
		/// \property MarkVersion
		int16_t MarkVersion = {};

		/// \brief Column [sMarkLen]: Mark length
		///
		/// \property MarkLength
		int16_t MarkLength = {};

		/// \brief Column [Mark]: Mark image
		///
		/// \property Mark
		std::optional<std::vector<uint8_t>> Mark;

		/// \brief Column [Stash]: Stash TODO
		///
		/// \property Stash
		std::optional<std::vector<uint8_t>> Stash;

		/// \brief Column [bySiegeFlag]: Siege flag
		///
		/// \property SiegeFlag
		uint8_t SiegeFlag = {};

		/// \brief Column [sAllianceKnights]: Alliance Knights TODO
		///
		/// \property AllianceKnights
		int16_t AllianceKnights = {};

		/// \brief Column [sCape]: Cape identifier
		///
		/// \property Cape
		int16_t Cape = {};

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
				"IDNum", "Flag", "Nation", "Ranking", "IDName", "Members", "Chief", "ViceChief_1", "ViceChief_2", "ViceChief_3", "strEnemyName", "byOldWarResult", "nWarEnemyID", "nVictory", "nLose", "Gold", "Domination", "Points", "CreateTime", "sMarkVersion", "sMarkLen", "Mark", "Stash", "bySiegeFlag", "sAllianceKnights", "sCape"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				"Mark", "Stash"
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

	/// \brief [KNIGHTS_ALLIANCE] Knights alliance formations
	/// \class KnightsAlliance
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_ALLIANCE Knights alliance formations
	export class KnightsAlliance 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KnightsAlliance;

		/// \brief Column [sMainAllianceKnights]: Alliance leader clan
		///
		/// \property MainAllianceKnights
		int16_t MainAllianceKnights = {};

		/// \brief Column [sSubAllianceKnights]: Second Knights group
		///
		/// \property SubAllianceKnights
		int16_t SubAllianceKnights = {};

		/// \brief Column [sMercenaryClan_1]: Mercenary clan 1
		///
		/// \property MercenaryClan1
		int16_t MercenaryClan1 = {};

		/// \brief Column [sMercenaryClan_2]: Mercenary clan 2
		///
		/// \property MercenaryClan2
		int16_t MercenaryClan2 = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS_ALLIANCE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sMainAllianceKnights", "sSubAllianceKnights", "sMercenaryClan_1", "sMercenaryClan_2"
			};
			return columnNames;
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
				"sMainAllianceKnights"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return MainAllianceKnights;
		}

	};

	/// \brief [KNIGHTS_CAPE] Knights cape information
	/// \class KnightsCape
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_CAPE Knights cape information
	export class KnightsCape 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KnightsCape;

		/// \brief Column [sCapeIndex]: Cape identifier
		///
		/// \property CapeIndex
		int16_t CapeIndex = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [nBuyPrice]: Buy price
		///
		/// \property BuyPrice
		int32_t BuyPrice = {};

		/// \brief Column [nDuration]: Duration TODO
		///
		/// \property Duration
		int32_t Duration = {};

		/// \brief Column [byGrade]: Required grade
		///
		/// \property Grade
		uint8_t Grade = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS_CAPE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sCapeIndex", "strName", "nBuyPrice", "nDuration", "byGrade"
			};
			return columnNames;
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
				"sCapeIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return CapeIndex;
		}

	};

	/// \brief [KNIGHTS_RATING] Knights Ratings
	/// \class KnightsRating
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_RATING Knights Ratings
	export class KnightsRating 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KnightsRating;

		/// \brief Column [nRank]: Rank
		///
		/// \property Rank
		int32_t Rank = {};

		/// \brief Column [shIndex]: Knights identifier
		///
		/// \property Index
		int16_t Index = {};

		/// \brief Column [strName]: Knights name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [nPoints]: National points
		///
		/// \property Points
		int32_t Points = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS_RATING";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nRank", "shIndex", "strName", "nPoints"
			};
			return columnNames;
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
				"nRank"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return Rank;
		}

	};

	/// \brief [KNIGHTS_SIEGE_WARFARE] Knights Siege Warfare
	/// \class KnightsSiegeWarfare
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_SIEGE_WARFARE Knights Siege Warfare
	export class KnightsSiegeWarfare 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KnightsSiegeWarfare;

		/// \brief Column [sCastleIndex]: Castle index TODO
		///
		/// \property CastleIndex
		int16_t CastleIndex = {};

		/// \brief Column [sMasterKnights]: Master knights TODO
		///
		/// \property MasterKnights
		int16_t MasterKnights = {};

		/// \brief Column [bySiegeType]: Siege type TODO
		///
		/// \property SiegeType
		uint8_t SiegeType = {};

		/// \brief Column [byWarDay]: War day
		///
		/// \property WarDay
		uint8_t WarDay = {};

		/// \brief Column [byWarTime]: War hour
		///
		/// \property WarHour
		uint8_t WarHour = {};

		/// \brief Column [byWarMinute]: War minute
		///
		/// \property WarMinute
		uint8_t WarMinute = {};

		/// \brief Column [sChallengeList_1]: Challenge list 1
		///
		/// \property ChallengeList1
		int16_t ChallengeList1 = {};

		/// \brief Column [sChallengeList_2]: Challenge list 2
		///
		/// \property ChallengeList2
		int16_t ChallengeList2 = {};

		/// \brief Column [sChallengeList_3]: Challenge list 3
		///
		/// \property ChallengeList3
		int16_t ChallengeList3 = {};

		/// \brief Column [sChallengeList_4]: Challenge list 4
		///
		/// \property ChallengeList4
		int16_t ChallengeList4 = {};

		/// \brief Column [sChallengeList_5]: Challenge list 5
		///
		/// \property ChallengeList5
		int16_t ChallengeList5 = {};

		/// \brief Column [sChallengeList_6]: Challenge list 6
		///
		/// \property ChallengeList6
		int16_t ChallengeList6 = {};

		/// \brief Column [sChallengeList_7]: Challenge list 7
		///
		/// \property ChallengeList7
		int16_t ChallengeList7 = {};

		/// \brief Column [sChallengeList_8]: Challenge list 8
		///
		/// \property ChallengeList8
		int16_t ChallengeList8 = {};

		/// \brief Column [sChallengeList_9]: Challenge list 9
		///
		/// \property ChallengeList9
		int16_t ChallengeList9 = {};

		/// \brief Column [sChallengeList_10]: Challenge list 10
		///
		/// \property ChallengeList10
		int16_t ChallengeList10 = {};

		/// \brief Column [byWarRequestDay]: War request day
		///
		/// \property WarRequestDay
		uint8_t WarRequestDay = {};

		/// \brief Column [byWarRequestTime]: War request time
		///
		/// \property WarRequestTime
		uint8_t WarRequestTime = {};

		/// \brief Column [byWarRequestMinute]: War request minute
		///
		/// \property WarRequestMinute
		uint8_t WarRequestMinute = {};

		/// \brief Column [byGuerrillaWarDay]: Guerrilla war day
		///
		/// \property GuerrillaWarDay
		uint8_t GuerrillaWarDay = {};

		/// \brief Column [byGuerrillaWarTime]: Guerrilla war time
		///
		/// \property GuerrillaWarTime
		uint8_t GuerrillaWarTime = {};

		/// \brief Column [byGuerrillaWarMinute]: Guerrilla war minute
		///
		/// \property GuerrillaWarMinute
		uint8_t GuerrillaWarMinute = {};

		/// \brief Column [strChallengeList]: Challenge list
		///
		/// \property ChallengeList
		std::optional<std::vector<uint8_t>> ChallengeList;

		/// \brief Column [sMoradonTariff]: Moradon tariff
		///
		/// \property MoradonTariff
		int16_t MoradonTariff = {};

		/// \brief Column [sDellosTariff]: Delos tariff
		///
		/// \property DelosTariff
		int16_t DelosTariff = {};

		/// \brief Column [nDungeonCharge]: Dungeon charge
		///
		/// \property DungeonCharge
		int32_t DungeonCharge = {};

		/// \brief Column [nMoradonTax]: Moradon tax
		///
		/// \property MoradonTax
		int32_t MoradonTax = {};

		/// \brief Column [nDellosTax]: Delos tax
		///
		/// \property DelosTax
		int32_t DelosTax = {};

		/// \brief Column [sRequestList_1]: Request list 1
		///
		/// \property RequestList1
		int16_t RequestList1 = {};

		/// \brief Column [sRequestList_2]: Request list 2
		///
		/// \property RequestList2
		int16_t RequestList2 = {};

		/// \brief Column [sRequestList_3]: Request list 3
		///
		/// \property RequestList3
		int16_t RequestList3 = {};

		/// \brief Column [sRequestList_4]: Request list 4
		///
		/// \property RequestList4
		int16_t RequestList4 = {};

		/// \brief Column [sRequestList_5]: Request list 5
		///
		/// \property RequestList5
		int16_t RequestList5 = {};

		/// \brief Column [sRequestList_6]: Request list 6
		///
		/// \property RequestList6
		int16_t RequestList6 = {};

		/// \brief Column [sRequestList_7]: Request list 7
		///
		/// \property RequestList7
		int16_t RequestList7 = {};

		/// \brief Column [sRequestList_8]: Request list 8
		///
		/// \property RequestList8
		int16_t RequestList8 = {};

		/// \brief Column [sRequestList_9]: Request list 9
		///
		/// \property RequestList9
		int16_t RequestList9 = {};

		/// \brief Column [sRequestList_10]: Request list 10
		///
		/// \property RequestList10
		int16_t RequestList10 = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS_SIEGE_WARFARE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sCastleIndex", "sMasterKnights", "bySiegeType", "byWarDay", "byWarTime", "byWarMinute", "sChallengeList_1", "sChallengeList_2", "sChallengeList_3", "sChallengeList_4", "sChallengeList_5", "sChallengeList_6", "sChallengeList_7", "sChallengeList_8", "sChallengeList_9", "sChallengeList_10", "byWarRequestDay", "byWarRequestTime", "byWarRequestMinute", "byGuerrillaWarDay", "byGuerrillaWarTime", "byGuerrillaWarMinute", "strChallengeList", "sMoradonTariff", "sDellosTariff", "nDungeonCharge", "nMoradonTax", "nDellosTax", "sRequestList_1", "sRequestList_2", "sRequestList_3", "sRequestList_4", "sRequestList_5", "sRequestList_6", "sRequestList_7", "sRequestList_8", "sRequestList_9", "sRequestList_10"
			};
			return columnNames;
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
				"sCastleIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return CastleIndex;
		}

	};

	/// \brief [KNIGHTS_USER] Knights to character relationships
	/// \class KnightsUser
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS_USER Knights to character relationships
	export class KnightsUser 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KnightsUser;

		/// \brief Column [sIDNum]: Knights identifier
		///
		/// \property KnightsId
		int16_t KnightsId = {};

		/// \brief Column [strUserID]: Character Identifier
		///
		/// \property UserId
		std::string UserId;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KNIGHTS_USER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIDNum", "strUserID"
			};
			return columnNames;
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
				"sIDNum", "strUserID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		std::tuple<const int16_t&, const std::string&> MapKey() const
		{
			return std::tuple<const int16_t&, const std::string&>{KnightsId, UserId};
		}

	};

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
		uint8_t Level = {};

		/// \brief Column [Exp]: Experience required to advance to the next level
		///
		/// \property RequiredExp
		int32_t RequiredExp = {};

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

	/// \brief [MAGIC] Contains the configuration for magic and abilities
	/// \class Magic
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC Contains the configuration for magic and abilities
	export class Magic 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Magic;

		/// \brief Column [MagicNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [EnName]: English name
		///
		/// \property EnglishName
		std::optional<std::string> EnglishName;

		/// \brief Column [KrName]: Korean name
		///
		/// \property KoreanName
		std::optional<std::string> KoreanName;

		/// \brief Column [Description]: Description
		///
		/// \property Description
		std::optional<std::string> Description;

		/// \brief Column [BeforeAction]: Before action check
		///
		/// \property BeforeAction
		uint8_t BeforeAction = {};

		/// \brief Column [TargetAction]: Target action check
		///
		/// \property TargetAction
		uint8_t TargetAction = {};

		/// \brief Column [SelfEffect]: Self effect TODO
		///
		/// \property SelfEffect
		uint8_t SelfEffect = {};

		/// \brief Column [FlyingEffect]: Does the skill fire a projectile
		///
		/// \property FlyingEffect
		uint8_t FlyingEffect = {};

		/// \brief Column [TargetEffect]: Effect identifier to use on the target
		///
		/// \property TargetEffect
		int16_t TargetEffect = {};

		/// \brief Column [Moral]: Targeting constraints
		///
		/// \property Moral
		uint8_t Moral = {};

		/// \brief Column [SkillLevel]: Skill points required in the tree to unlock the skill
		///
		/// \property SkillLevel
		int16_t SkillLevel = {};

		/// \brief Column [Skill]: Associated skill tree
		///
		/// \property Skill
		int16_t Skill = {};

		/// \brief Column [Msp]: Mana cost
		///
		/// \property ManaCost
		int16_t ManaCost = {};

		/// \brief Column [HP]: Health cost
		///
		/// \property HpCost
		int16_t HpCost = {};

		/// \brief Column [ItemGroup]: Item group allows a skill to be constrained to having an item type equipped
		///
		/// \property ItemGroup
		uint8_t ItemGroup = {};

		/// \brief Column [UseItem]: Must consume this item from inventory in order to activate ability
		///
		/// \property UseItem
		int32_t UseItem = {};

		/// \brief Column [CastTime]: Time needed to cast the ability
		///
		/// \property CastTime
		uint8_t CastTime = {};

		/// \brief Column [ReCastTime]: Cooldown
		///
		/// \property RecastTime
		uint8_t RecastTime = {};

		/// \brief Column [SuccessRate]: Chance the skill will hit target
		///
		/// \property SuccessRate
		uint8_t SuccessRate = {};

		/// \brief Column [Type1]: Look up effect in MAGIC_TYPEX table
		///
		/// \property Type1
		uint8_t Type1 = {};

		/// \brief Column [Type2]: Look up effect in MAGIC_TYPEX table
		///
		/// \property Type2
		uint8_t Type2 = {};

		/// \brief Column [Range]: Maximum range from target
		///
		/// \property Range
		int16_t Range = {};

		/// \brief Column [Etc]: Etc TODO
		///
		/// \property Etc
		uint8_t Etc = {};

		/// \brief Column [Event]: Event TODO
		///
		/// \property Event
		int32_t Event = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"MagicNum", "EnName", "KrName", "Description", "BeforeAction", "TargetAction", "SelfEffect", "FlyingEffect", "TargetEffect", "Moral", "SkillLevel", "Skill", "Msp", "HP", "ItemGroup", "UseItem", "CastTime", "ReCastTime", "SuccessRate", "Type1", "Type2", "Range", "Etc", "Event"
			};
			return columnNames;
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
				"MagicNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};

	/// \brief [MAGIC_TYPE1] Supports melee abilities
	/// \class MagicType1
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE1 Supports melee abilities
	export class MagicType1 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MagicType1;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Name]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [Description]: Description
		///
		/// \property Description
		std::optional<std::string> Description;

		/// \brief Column [Type]: Attack special type
		///
		/// \see EnumType
		/// \property Type
		uint8_t Type = {};

		/// \enum EnumType
		/// \brief Known valid values for Type
		enum class EnumType
		{
			Normal = 0, ///< Subject to all normal defence checks
			AlwaysHit = 1, ///< Ability always hits
			IgnoreDefense = 2 ///< Ability ignores defense
		};

		/// \brief Column [HitRate]: Hit chance modifier - 100 is normal
		///
		/// \property HitRateMod
		int16_t HitRateMod = {};

		/// \brief Column [Hit]: Hit damage modifier - 100 is normal
		///
		/// \property DamageMod
		int16_t DamageMod = {};

		/// \brief Column [AddDamage]: Additional flat damage caused by ability
		///
		/// \property AddDamage
		int16_t AddDamage = {};

		/// \brief Column [Delay]: Delay TODO
		///
		/// \property Delay
		uint8_t Delay = {};

		/// \brief Column [ComboType]: Combo type TODO
		///
		/// \property ComboType
		uint8_t ComboType = {};

		/// \brief Column [ComboCount]: Combo count TODO
		///
		/// \property ComboCount
		uint8_t ComboCount = {};

		/// \brief Column [ComboDamage]: Combo damage multiplier
		///
		/// \property ComboDamage
		int16_t ComboDamage = {};

		/// \brief Column [Range]: Maximum distance to target
		///
		/// \property Range
		int16_t Range = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE1";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Name", "Description", "Type", "HitRate", "Hit", "AddDamage", "Delay", "ComboType", "ComboCount", "ComboDamage", "Range"
			};
			return columnNames;
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
				"iNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};

	/// \brief [MAGIC_TYPE2] Supports bow abilities
	/// \class MagicType2
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE2 Supports bow abilities
	export class MagicType2 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MagicType2;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Name]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [Description]: Description
		///
		/// \property Description
		std::optional<std::string> Description;

		/// \brief Column [HitType]: Projectile type
		///
		/// \see EnumHitType
		/// \property HitType
		uint8_t HitType = {};

		/// \enum EnumHitType
		/// \brief Known valid values for HitType
		enum class EnumHitType
		{
			Normal = 0, ///< Fire and forget targeting
			Seeking = 0 ///< Projectile follows target and always hits (unless blocked by collision)
		};

		/// \brief Column [HitRate]: Hit chance modifier - 100 is normal
		///
		/// \property HitRateMod
		int16_t HitRateMod = {};

		/// \brief Column [AddDamage]: Hit damage modifier - 100 is normal
		///
		/// \property DamageMod
		int16_t DamageMod = {};

		/// \brief Column [AddRange]: Range modifier - 100 is normal
		///
		/// \property RangeMod
		int16_t RangeMod = {};

		/// \brief Column [NeedArrow]: Number of arrows needed for ability
		///
		/// \property NeedArrow
		uint8_t NeedArrow = {};

		/// \brief Column [AddDamagePlus]: Additional flat damage caused by ability
		///
		/// \property AddDamagePlus
		int16_t AddDamagePlus = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE2";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Name", "Description", "HitType", "HitRate", "AddDamage", "AddRange", "NeedArrow", "AddDamagePlus"
			};
			return columnNames;
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
				"iNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};

	/// \brief [MAGIC_TYPE3] Supports Area of Effect and Damage over Time effects
	/// \class MagicType3
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE3 Supports Area of Effect and Damage over Time effects
	export class MagicType3 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MagicType3;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Name]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [Description]: Description
		///
		/// \property Description
		std::optional<std::string> Description;

		/// \brief Column [Radius]: Area of effect circle radius
		///
		/// \property Radius
		uint8_t Radius = {};

		/// \brief Column [Angle]: Angle seems unused/unimplemented TODO
		///
		/// \property Angle
		int16_t Angle = {};

		/// \brief Column [DirectType]: Damage calculation type
		///
		/// \see EnumDirectType
		/// \property DirectType
		uint8_t DirectType = {};

		/// \enum EnumDirectType
		/// \brief Known valid values for DirectType
		enum class EnumDirectType
		{
			Unknown0 = 0, ///< TODO: Used by some 300000+ DoT abilities
			FlatHp = 1, ///< Flat damage against health
			FlatMana = 2, ///< Flat damage against mana
			FlatDurability = 4, ///< Flat damage applied to durability
			Unknown5 = 5, ///< TODO: Used by some 400000+ abilities
			AbsorbHp = 8, ///< Absorbs health from target
			PercentHp = 9, ///< Deals damage relative to targets current health
			Unknown11 = 11, ///< TODO: Used by 220011
			Unknown12 = 12, ///< TODO: Used by 490402
			Unknown255 = 255 ///< TODO: Used by 501011
		};

		/// \brief Column [FirstDamage]: Damage applied on hit
		///
		/// \property FirstDamage
		int16_t FirstDamage = {};

		/// \brief Column [EndDamage]: Damage taken at end of effect
		///
		/// \property EndDamage
		int16_t EndDamage = {};

		/// \brief Column [TimeDamage]: Total damage dealt over Duration
		///
		/// \property TimeDamage
		int16_t TimeDamage = {};

		/// \brief Column [Duration]: Duration of damage over time effects
		///
		/// \property Duration
		uint8_t Duration = {};

		/// \brief Column [Attribute]: Attribute TODO
		///
		/// \property Attribute
		uint8_t Attribute = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE3";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Name", "Description", "Radius", "Angle", "DirectType", "FirstDamage", "EndDamage", "TimeDamage", "Duration", "Attribute"
			};
			return columnNames;
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
				"iNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};

	/// \brief [MAGIC_TYPE4] Supports stat modification skills
	/// \class MagicType4
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE4 Supports stat modification skills
	export class MagicType4 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MagicType4;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Name]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [Description]: Description
		///
		/// \property Description
		std::optional<std::string> Description;

		/// \brief Column [BuffType]: Buff type
		///
		/// \see EnumBuffType
		/// \property BuffType
		uint8_t BuffType = {};

		/// \enum EnumBuffType
		/// \brief Known valid values for BuffType
		enum class EnumBuffType
		{
			None = 0,
			HealthMana = 1, ///< Maximum health/mana buffs
			Armor = 2, ///< Armor modifiers
			Size = 3, ///< Affects target size
			AttackPower = 4, ///< Attack power modifiers
			AttackSpeed = 5, ///< Attack speed modifiers
			MovementSpeed = 6, ///< Movement speed modifiers
			Stats = 7, ///< Stat modifiers
			Resistance = 8, ///< Resistance modifiers
			HitChance = 9, ///< Hit Chance modifier
			MagicPower = 10, ///< Magic power modifier
			Experience = 11, ///< Experience modifier
			Weight = 12, ///< Experience modifier
			WeaponEnchant = 13, ///< Weapon damage enchant effect
			ArmorEnchant = 14 ///< Armor enchant effect
		};

		/// \brief Column [Radius]: Area of effect circle radius
		///
		/// \property Radius
		uint8_t Radius = {};

		/// \brief Column [Duration]: Effect duration
		///
		/// \property Duration
		int16_t Duration = {};

		/// \brief Column [AttackSpeed]: Attack speed modifier - 100 is normal
		///
		/// \property AttackSpeed
		uint8_t AttackSpeed = {};

		/// \brief Column [Speed]: Movement speed modifier - 100 is normal
		///
		/// \property Speed
		uint8_t Speed = {};

		/// \brief Column [AC]: Armor modifier
		///
		/// \property Armor
		int16_t Armor = {};

		/// \brief Column [ACPct]: Armor percent modifier
		///
		/// \property ArmorPercent
		int16_t ArmorPercent = {};

		/// \brief Column [Attack]: Attack power modifier
		///
		/// \property AttackPower
		uint8_t AttackPower = {};

		/// \brief Column [MagicAttack]: Magic power modifier
		///
		/// \property MagicPower
		uint8_t MagicPower = {};

		/// \brief Column [MaxHP]: Maximum health modifier
		///
		/// \property MaxHp
		int16_t MaxHp = {};

		/// \brief Column [MaxHpPct]: Maximum health percent modifier
		///
		/// \property MaxHpPercent
		int16_t MaxHpPercent = {};

		/// \brief Column [MaxMP]: Maximum mana modifier
		///
		/// \property MaxMp
		int16_t MaxMp = {};

		/// \brief Column [MaxMpPct]: Maximum mana percent modifier
		///
		/// \property MaxMpPercent
		int16_t MaxMpPercent = {};

		/// \brief Column [HitRate]: Hit chance multiplier
		///
		/// \property HitRate
		uint8_t HitRate = {};

		/// \brief Column [AvoidRate]: Evasion chance multiplier
		///
		/// \property AvoidRate
		int16_t AvoidRate = {};

		/// \brief Column [Str]: Strength modifier
		///
		/// \property Strength
		int16_t Strength = {};

		/// \brief Column [Sta]: Stamina modifier
		///
		/// \property Stamina
		int16_t Stamina = {};

		/// \brief Column [Dex]: Dexterity modifier
		///
		/// \property Dexterity
		int16_t Dexterity = {};

		/// \brief Column [Intel]: Intelligence modifier
		///
		/// \property Intelligence
		int16_t Intelligence = {};

		/// \brief Column [Cha]: Charisma modifier
		///
		/// \property Charisma
		int16_t Charisma = {};

		/// \brief Column [FireR]: Fire resistance
		///
		/// \property FireResist
		uint8_t FireResist = {};

		/// \brief Column [ColdR]: Cold resistance
		///
		/// \property ColdResist
		uint8_t ColdResist = {};

		/// \brief Column [LightningR]: Lightning resistance
		///
		/// \property LightningResist
		uint8_t LightningResist = {};

		/// \brief Column [MagicR]: Magic resistance
		///
		/// \property MagicResist
		uint8_t MagicResist = {};

		/// \brief Column [DiseaseR]: Disease resistance
		///
		/// \property DiseaseResist
		uint8_t DiseaseResist = {};

		/// \brief Column [PoisonR]: Poison resistance
		///
		/// \property PoisonResist
		uint8_t PoisonResist = {};

		/// \brief Column [ExpPct]: Experience percentage modifier
		///
		/// \property ExpPercent
		uint8_t ExpPercent = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE4";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Name", "Description", "BuffType", "Radius", "Duration", "AttackSpeed", "Speed", "AC", "ACPct", "Attack", "MagicAttack", "MaxHP", "MaxHpPct", "MaxMP", "MaxMpPct", "HitRate", "AvoidRate", "Str", "Sta", "Dex", "Intel", "Cha", "FireR", "ColdR", "LightningR", "MagicR", "DiseaseR", "PoisonR", "ExpPct"
			};
			return columnNames;
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
				"iNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};

	/// \brief [MAGIC_TYPE5] Supports recovery skills
	/// \class MagicType5
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE5 Supports recovery skills
	export class MagicType5 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MagicType5;

		/// \brief Column [iNum]: Magic number identifier
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Name]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [Description]: Description
		///
		/// \property Description
		std::optional<std::string> Description;

		/// \brief Column [Type]: Type
		///
		/// \see EnumType
		/// \property Type
		uint8_t Type = {};

		/// \enum EnumType
		/// \brief Known valid values for Type
		enum class EnumType
		{
			CureDisease = 1, ///< Removes diseases
			CureCurse = 2, ///< Remove curses
			Resurrection = 3, ///< Ability ignores defense
			Resurrection4 = 4, ///< Not sure how it differs from 3 other than it being triggered from an item
			Unknown5 = 5 ///< TODO: 300133 only record using it
		};

		/// \brief Column [ExpRecover]: Percent of experience loss recovered
		///
		/// \property ExpRecover
		uint8_t ExpRecover = {};

		/// \brief Column [NeedStone]: Resurrection stones required
		///
		/// \property NeedStone
		int16_t NeedStone = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE5";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Name", "Description", "Type", "ExpRecover", "NeedStone"
			};
			return columnNames;
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
				"iNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};

	/// \brief [MAGIC_TYPE6] Supports transformation magic
	/// \class MagicType6
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE6 Supports transformation magic
	export class MagicType6 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MagicType6;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Name]: Name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [Description]: Description
		///
		/// \property Description
		std::optional<std::string> Description;

		/// \brief Column [Size]: Size modifier
		///
		/// \property Size
		int16_t Size = {};

		/// \brief Column [TransformID]: Transformation picture identifier (K_NPC.sPid)
		///
		/// \property TransformId
		int16_t TransformId = {};

		/// \brief Column [Duration]: Duration
		///
		/// \property Duration
		int16_t Duration = {};

		/// \brief Column [MaxHp]: Maximum health
		///
		/// \property MaxHp
		int16_t MaxHp = {};

		/// \brief Column [MaxMp]: Maximum mana
		///
		/// \property MaxMp
		int16_t MaxMp = {};

		/// \brief Column [Speed]: Movement speed
		///
		/// \property Speed
		uint8_t Speed = {};

		/// \brief Column [AttackSpeed]: Attack speed
		///
		/// \property AttackSpeed
		int16_t AttackSpeed = {};

		/// \brief Column [TotalHit]: Total hit
		///
		/// \property TotalHit
		int16_t TotalHit = {};

		/// \brief Column [TotalAc]: Total armor
		///
		/// \property TotalArmor
		int16_t TotalArmor = {};

		/// \brief Column [TotalHitRate]: Total hit rate
		///
		/// \property TotalHitRate
		int16_t TotalHitRate = {};

		/// \brief Column [TotalEvasionRate]: Total evasion rate
		///
		/// \property TotalEvasionRate
		int16_t TotalEvasionRate = {};

		/// \brief Column [TotalFireR]: Total fire resistance
		///
		/// \property TotalFireResist
		int16_t TotalFireResist = {};

		/// \brief Column [TotalColdR]: Total cold resistance
		///
		/// \property TotalColdResist
		int16_t TotalColdResist = {};

		/// \brief Column [TotalLightningR]: Total lightning resistance
		///
		/// \property TotalLightningResist
		int16_t TotalLightningResist = {};

		/// \brief Column [TotalMagicR]: Total magic resistance
		///
		/// \property TotalMagicResist
		int16_t TotalMagicResist = {};

		/// \brief Column [TotalDiseaseR]: Total disease resistance
		///
		/// \property TotalDiseaseResist
		int16_t TotalDiseaseResist = {};

		/// \brief Column [TotalPoisonR]: Total poison resistance
		///
		/// \property TotalPoisonResist
		int16_t TotalPoisonResist = {};

		/// \brief Column [Class]: Class
		///
		/// \property Class
		int16_t Class = {};

		/// \brief Column [UserSkillUse]: User skill use TODO - allow skill use?
		///
		/// \property UserSkillUse
		uint8_t UserSkillUse = {};

		/// \brief Column [NeedItem]: Needs item
		///
		/// \property NeedItem
		uint8_t NeedItem = {};

		/// \brief Column [SkillSuccessRate]: Skill success rate
		///
		/// \property SkillSuccessRate
		uint8_t SkillSuccessRate = {};

		/// \brief Column [MonsterFriendly]: Do monsters ignore the player while transformed?
		///
		/// \property MonsterFriendly
		uint8_t MonsterFriendly = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE6";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Name", "Description", "Size", "TransformID", "Duration", "MaxHp", "MaxMp", "Speed", "AttackSpeed", "TotalHit", "TotalAc", "TotalHitRate", "TotalEvasionRate", "TotalFireR", "TotalColdR", "TotalLightningR", "TotalMagicR", "TotalDiseaseR", "TotalPoisonR", "Class", "UserSkillUse", "NeedItem", "SkillSuccessRate", "MonsterFriendly"
			};
			return columnNames;
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
				"iNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};

	/// \brief [MAGIC_TYPE7] Supports targeting modifications
	/// \class MagicType7
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE7 Supports targeting modifications
	export class MagicType7 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MagicType7;

		/// \brief Column [nIndex]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [strNote]: Note
		///
		/// \property Note
		std::optional<std::string> Note;

		/// \brief Column [byValidGroup]: Valid group
		///
		/// \property ValidGroup
		uint8_t ValidGroup = {};

		/// \brief Column [byNatoinChange]: Nation change
		///
		/// \property NationChange
		uint8_t NationChange = {};

		/// \brief Column [shMonsterNum]: Monster number
		///
		/// \property MonsterNumber
		int16_t MonsterNumber = {};

		/// \brief Column [byTargetChange]: Monster target mode change
		///
		/// \see EnumTargetChange
		/// \property TargetChange
		uint8_t TargetChange = {};

		/// \enum EnumTargetChange
		/// \brief Known valid values for byTargetChange
		enum class EnumTargetChange
		{
			Provoke = 0, ///< Target will target attacker
			Sleep = 1 ///< Target gets put to sleep
		};

		/// \brief Column [byStateChange]: State change
		///
		/// \property StateChange
		uint8_t StateChange = {};

		/// \brief Column [byRadius]: Area of effect circle radius
		///
		/// \property Radius
		uint8_t Radius = {};

		/// \brief Column [shHitrate]: Hit rate
		///
		/// \property HitRate
		int16_t HitRate = {};

		/// \brief Column [shDuration]: Duration
		///
		/// \property Duration
		int16_t Duration = {};

		/// \brief Column [shDamage]: Damage
		///
		/// \property Damage
		int16_t Damage = {};

		/// \brief Column [byVisoin]: Vision
		///
		/// \property Vision
		uint8_t Vision = {};

		/// \brief Column [nNeedItem]: Needs item
		///
		/// \property NeedItem
		int32_t NeedItem = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE7";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "strName", "strNote", "byValidGroup", "byNatoinChange", "shMonsterNum", "byTargetChange", "byStateChange", "byRadius", "shHitrate", "shDuration", "shDamage", "byVisoin", "nNeedItem"
			};
			return columnNames;
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
				"nIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};

	/// \brief [MAGIC_TYPE8] Supports warp magic
	/// \class MagicType8
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE8 Supports warp magic
	export class MagicType8 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MagicType8;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Name]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [Description]: Description
		///
		/// \property Description
		std::optional<std::string> Description;

		/// \brief Column [Target]: Target
		///
		/// \property Target
		uint8_t Target = {};

		/// \brief Column [Radius]: Radius
		///
		/// \property Radius
		int16_t Radius = {};

		/// \brief Column [WarpType]: Warp type
		///
		/// \see EnumWarpType
		/// \property WarpType
		uint8_t WarpType = {};

		/// \enum EnumWarpType
		/// \brief Known valid values for WarpType
		enum class EnumWarpType
		{
			Gate = 1, ///< Teleport to saved gate
			SummonFriendly = 12, ///< Summons friendly player(s)
			SummonMonster = 21, ///< TODO
			TeleportToFriendly = 25 ///< Teleports to a party member
		};

		/// \brief Column [ExpRecover]: Experience recovery
		///
		/// \property ExpRecover
		int16_t ExpRecover = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE8";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Name", "Description", "Target", "Radius", "WarpType", "ExpRecover"
			};
			return columnNames;
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
				"iNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};

	/// \brief [MAGIC_TYPE9] Supports stealth and detection abilities
	/// \class MagicType9
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE9 Supports stealth and detection abilities
	export class MagicType9 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MagicType9;

		/// \brief Column [iNum]: Magic number identifier
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Name]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [Description]: Description
		///
		/// \property Description
		std::optional<std::string> Description;

		/// \brief Column [ValidGroup]: Valid group
		///
		/// \property ValidGroup
		uint8_t ValidGroup = {};

		/// \brief Column [NationChange]: Nation change
		///
		/// \property NationChange
		uint8_t NationChange = {};

		/// \brief Column [MonsterNum]: Monster number
		///
		/// \property MonsterNumber
		int16_t MonsterNumber = {};

		/// \brief Column [TargetChange]: Target change
		///
		/// \property TargetChange
		uint8_t TargetChange = {};

		/// \brief Column [StateChange]: State change
		///
		/// \property StateChange
		uint8_t StateChange = {};

		/// \brief Column [Radius]: Radius
		///
		/// \property Radius
		int16_t Radius = {};

		/// \brief Column [Hitrate]: Hit rate
		///
		/// \property HitRate
		int16_t HitRate = {};

		/// \brief Column [Duration]: Duration
		///
		/// \property Duration
		int16_t Duration = {};

		/// \brief Column [AddDamage]: AddDamage
		///
		/// \property AddDamage
		int16_t AddDamage = {};

		/// \brief Column [Vision]: Vision
		///
		/// \property Vision
		int16_t Vision = {};

		/// \brief Column [NeedItem]: Needs item
		///
		/// \property NeedItem
		int32_t NeedItem = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE9";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Name", "Description", "ValidGroup", "NationChange", "MonsterNum", "TargetChange", "StateChange", "Radius", "Hitrate", "Duration", "AddDamage", "Vision", "NeedItem"
			};
			return columnNames;
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
				"iNum"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ID;
		}

	};

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
		uint8_t Level = {};

		/// \brief Column [sClass_1]: Class 1
		///
		/// \property Class1
		int16_t Class1 = {};

		/// \brief Column [sClass_2]: Class 2
		///
		/// \property Class2
		int16_t Class2 = {};

		/// \brief Column [sClass_3]: Class 3
		///
		/// \property Class3
		int16_t Class3 = {};

		/// \brief Column [sClass_4]: Class 4
		///
		/// \property Class4
		int16_t Class4 = {};

		/// \brief Column [sClass_5]: Class 5
		///
		/// \property Class5
		int16_t Class5 = {};

		/// \brief Column [sClass_6]: Class 6
		///
		/// \property Class6
		int16_t Class6 = {};

		/// \brief Column [sClass_7]: Class 7
		///
		/// \property Class7
		int16_t Class7 = {};

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

	/// \brief [MAKE_ITEM] Make item
	/// \class MakeItem
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_ITEM Make item
	export class MakeItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MakeItem;

		/// \brief Column [sIndex]: Index
		///
		/// \property Index
		int16_t Index = {};

		/// \brief Column [strItemInfo]: Item information
		///
		/// \property ItemInfo
		std::optional<std::string> ItemInfo;

		/// \brief Column [iItemCode]: Item Code
		///
		/// \property ItemCode
		int32_t ItemCode = {};

		/// \brief Column [byItemLevel]: Item level
		///
		/// \property ItemLevel
		uint8_t ItemLevel = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAKE_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIndex", "strItemInfo", "iItemCode", "byItemLevel"
			};
			return columnNames;
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

	/// \brief [MAKE_ITEM_GRADECODE] Make item grade code
	/// \class MakeItemGradeCode
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_ITEM_GRADECODE Make item grade code
	export class MakeItemGradeCode 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MakeItemGradeCode;

		/// \brief Column [byItemIndex]: Item index
		///
		/// \property ItemIndex
		uint8_t ItemIndex = {};

		union
		{
			/// \brief Union array grouping for columns [byGrade_1] to [byGrade_9]
			///
			/// \property Grade
			int16_t Grade[9] = {};

			struct
			{
				/// \brief Column [byGrade_1]: Grade 1
				///
				/// \property Grade1
				int16_t Grade1;

				/// \brief Column [byGrade_2]: Grade 2
				///
				/// \property Grade2
				int16_t Grade2;

				/// \brief Column [byGrade_3]: Grade 3
				///
				/// \property Grade3
				int16_t Grade3;

				/// \brief Column [byGrade_4]: Grade 4
				///
				/// \property Grade4
				int16_t Grade4;

				/// \brief Column [byGrade_5]: Grade 5
				///
				/// \property Grade5
				int16_t Grade5;

				/// \brief Column [byGrade_6]: Grade 6
				///
				/// \property Grade6
				int16_t Grade6;

				/// \brief Column [byGrade_7]: Grade 7
				///
				/// \property Grade7
				int16_t Grade7;

				/// \brief Column [byGrade_8]: Grade 8
				///
				/// \property Grade8
				int16_t Grade8;

				/// \brief Column [byGrade_9]: Grade 9
				///
				/// \property Grade9
				int16_t Grade9;
			};
		};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAKE_ITEM_GRADECODE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"byItemIndex", "byGrade_1", "byGrade_2", "byGrade_3", "byGrade_4", "byGrade_5", "byGrade_6", "byGrade_7", "byGrade_8", "byGrade_9"
			};
			return columnNames;
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
				"byItemIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const
		{
			return ItemIndex;
		}

	};

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
		int32_t ItemGroupNumber = {};

		union
		{
			/// \brief Union array grouping for columns [iItem_1] to [iItem_30]
			///
			/// \property Item
			int32_t Item[30] = {};

			struct
			{
				/// \brief Column [iItem_1]: Item 1
				///
				/// \property Item1
				int32_t Item1;

				/// \brief Column [iItem_2]: Item 2
				///
				/// \property Item2
				int32_t Item2;

				/// \brief Column [iItem_3]: Item 3
				///
				/// \property Item3
				int32_t Item3;

				/// \brief Column [iItem_4]: Item 4
				///
				/// \property Item4
				int32_t Item4;

				/// \brief Column [iItem_5]: Item 5
				///
				/// \property Item5
				int32_t Item5;

				/// \brief Column [iItem_6]: Item 6
				///
				/// \property Item6
				int32_t Item6;

				/// \brief Column [iItem_7]: Item 7
				///
				/// \property Item7
				int32_t Item7;

				/// \brief Column [iItem_8]: Item 8
				///
				/// \property Item8
				int32_t Item8;

				/// \brief Column [iItem_9]: Item 9
				///
				/// \property Item9
				int32_t Item9;

				/// \brief Column [iItem_10]: Item10
				///
				/// \property Item10
				int32_t Item10;

				/// \brief Column [iItem_11]: Item 11
				///
				/// \property Item11
				int32_t Item11;

				/// \brief Column [iItem_12]: Item 12
				///
				/// \property Item12
				int32_t Item12;

				/// \brief Column [iItem_13]: Item 13
				///
				/// \property Item13
				int32_t Item13;

				/// \brief Column [iItem_14]: Item 14
				///
				/// \property Item14
				int32_t Item14;

				/// \brief Column [iItem_15]: Item 15
				///
				/// \property Item15
				int32_t Item15;

				/// \brief Column [iItem_16]: Item 16
				///
				/// \property Item16
				int32_t Item16;

				/// \brief Column [iItem_17]: Item 17
				///
				/// \property Item17
				int32_t Item17;

				/// \brief Column [iItem_18]: Item 18
				///
				/// \property Item18
				int32_t Item18;

				/// \brief Column [iItem_19]: Item 19
				///
				/// \property Item19
				int32_t Item19;

				/// \brief Column [iItem_20]: Item 20
				///
				/// \property Item20
				int32_t Item20;

				/// \brief Column [iItem_21]: Item 21
				///
				/// \property Item21
				int32_t Item21;

				/// \brief Column [iItem_22]: Item 22
				///
				/// \property Item22
				int32_t Item22;

				/// \brief Column [iItem_23]: Item 23
				///
				/// \property Item23
				int32_t Item23;

				/// \brief Column [iItem_24]: Item 24
				///
				/// \property Item24
				int32_t Item24;

				/// \brief Column [iItem_25]: Item 25
				///
				/// \property Item25
				int32_t Item25;

				/// \brief Column [iItem_26]: Item 26
				///
				/// \property Item26
				int32_t Item26;

				/// \brief Column [iItem_27]: Item 27
				///
				/// \property Item27
				int32_t Item27;

				/// \brief Column [iItem_28]: Item 28
				///
				/// \property Item28
				int32_t Item28;

				/// \brief Column [iItem_29]: Item 29
				///
				/// \property Item29
				int32_t Item29;

				/// \brief Column [iItem_30]: Item 30
				///
				/// \property Item30
				int32_t Item30;
			};
		};

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

	/// \brief [MAKE_ITEM_LARECODE] Make item rarity codes
	/// \class MakeItemRareCode
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_ITEM_LARECODE Make item rarity codes
	export class MakeItemRareCode 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MakeItemRareCode;

		/// \brief Column [byLevelGrade]: Level grade
		///
		/// \property LevelGrade
		uint8_t LevelGrade = {};

		/// \brief Column [sUpgradeItem]: Upgrade item
		///
		/// \property UpgradeItem
		int16_t UpgradeItem = {};

		/// \brief Column [sLareItem]: Rare item
		///
		/// \property RareItem
		int16_t RareItem = {};

		/// \brief Column [sMagicItem]: Magic item
		///
		/// \property MagicItem
		int16_t MagicItem = {};

		/// \brief Column [sGereralItem]: General item
		///
		/// \property GeneralItem
		int16_t GeneralItem = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAKE_ITEM_LARECODE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"byLevelGrade", "sUpgradeItem", "sLareItem", "sMagicItem", "sGereralItem"
			};
			return columnNames;
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
				"byLevelGrade"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const
		{
			return LevelGrade;
		}

	};

	/// \brief [MAKE_WEAPON] Make weapon
	/// \class MakeWeapon
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_WEAPON Make weapon
	export class MakeWeapon 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MakeWeapon;

		/// \brief Column [byLevel]: Level
		///
		/// \property Level
		uint8_t Level = {};

		union
		{
			/// \brief Union array grouping for columns [sClass_1] to [sClass_12]
			///
			/// \property Class
			int16_t Class[12] = {};

			struct
			{
				/// \brief Column [sClass_1]: Class 1
				///
				/// \property Class1
				int16_t Class1;

				/// \brief Column [sClass_2]: Class 2
				///
				/// \property Class2
				int16_t Class2;

				/// \brief Column [sClass_3]: Class 3
				///
				/// \property Class3
				int16_t Class3;

				/// \brief Column [sClass_4]: Class 4
				///
				/// \property Class4
				int16_t Class4;

				/// \brief Column [sClass_5]: Class 5
				///
				/// \property Class5
				int16_t Class5;

				/// \brief Column [sClass_6]: Class 6
				///
				/// \property Class6
				int16_t Class6;

				/// \brief Column [sClass_7]: Class 7
				///
				/// \property Class7
				int16_t Class7;

				/// \brief Column [sClass_8]: Class 8
				///
				/// \property Class8
				int16_t Class8;

				/// \brief Column [sClass_9]: Class 9
				///
				/// \property Class9
				int16_t Class9;

				/// \brief Column [sClass_10]: Class 10
				///
				/// \property Class10
				int16_t Class10;

				/// \brief Column [sClass_11]: Class 11
				///
				/// \property Class11
				int16_t Class11;

				/// \brief Column [sClass_12]: Class 12
				///
				/// \property Class12
				int16_t Class12;
			};
		};

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

	/// \brief [MONSTER_CHALLENGE] Monster challenge (Forgotten Temple)
	/// \class MonsterChallenge
	/// \xrefitem gamedb "Game Database" "Game Database" MONSTER_CHALLENGE Monster challenge (Forgotten Temple)
	export class MonsterChallenge 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MonsterChallenge;

		/// \brief Column [sIndex]: Index
		///
		/// \property Index
		int16_t Index = {};

		/// \brief Column [bStartTime1]: StartTime 1
		///
		/// \property StartTime1
		uint8_t StartTime1 = {};

		/// \brief Column [bStartTime2]: StartTime 2
		///
		/// \property StartTime2
		uint8_t StartTime2 = {};

		/// \brief Column [bStartTime3]: StartTime 3
		///
		/// \property StartTime3
		uint8_t StartTime3 = {};

		/// \brief Column [bLevelMin]: Minimum level to enter
		///
		/// \property LevelMin
		uint8_t LevelMin = {};

		/// \brief Column [bLevelMax]: Maximum level to enter
		///
		/// \property LevelMax
		uint8_t LevelMax = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MONSTER_CHALLENGE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIndex", "bStartTime1", "bStartTime2", "bStartTime3", "bLevelMin", "bLevelMax"
			};
			return columnNames;
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

	/// \brief [MONSTER_CHALLENGE_SUMMON_LIST] Forgotten Temple summon list
	/// \class MonsterChallengeSummonList
	/// \xrefitem gamedb "Game Database" "Game Database" MONSTER_CHALLENGE_SUMMON_LIST Forgotten Temple summon list
	export class MonsterChallengeSummonList 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MonsterChallengeSummonList;

		/// \brief Column [sIndex]: Index
		///
		/// \property Index
		int16_t Index = {};

		/// \brief Column [bLevel]: Level
		///
		/// \property Level
		uint8_t Level = {};

		/// \brief Column [bStage]: Stage
		///
		/// \property Stage
		uint8_t Stage = {};

		/// \brief Column [bStageLevel]: Stage level
		///
		/// \property StageLevel
		uint8_t StageLevel = {};

		/// \brief Column [sTime]: Time to spawn(?)
		///
		/// \property Time
		int16_t Time = {};

		/// \brief Column [sSid]: Monster identifier (K_MONSTER.sSid)
		///
		/// \property MonsterId
		int16_t MonsterId = {};

		/// \brief Column [sCount]: Number to spawn
		///
		/// \property Count
		int16_t Count = {};

		/// \brief Column [sPosX]: Monster spawn point center x-coordinate
		///
		/// \property PosX
		int16_t PosX = {};

		/// \brief Column [sPosZ]: Monster spawn point center z-coordinate
		///
		/// \property PosZ
		int16_t PosZ = {};

		/// \brief Column [bRange]: Radius from spawn point center to spawn monsters
		///
		/// \property Range
		uint8_t Range = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MONSTER_CHALLENGE_SUMMON_LIST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sIndex", "bLevel", "bStage", "bStageLevel", "sTime", "sSid", "sCount", "sPosX", "sPosZ", "bRange"
			};
			return columnNames;
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
		int16_t Index = {};

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

	};

	/// \brief [MONSTER_SUMMON_LIST] Monster summon list
	/// \class MonsterSummonList
	/// \xrefitem gamedb "Game Database" "Game Database" MONSTER_SUMMON_LIST Monster summon list
	export class MonsterSummonList 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::MonsterSummonList;

		/// \brief Column [sSid]: Monster identifier (K_MONSTER.sSid)
		///
		/// \property MonsterId
		int16_t MonsterId = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [sLevel]: Level
		///
		/// \property Level
		int16_t Level = {};

		/// \brief Column [sProbability]: Probability
		///
		/// \property Probability
		int16_t Probability = {};

		/// \brief Column [bType]: Type
		///
		/// \property Type
		uint8_t Type = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MONSTER_SUMMON_LIST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sSid", "strName", "sLevel", "sProbability", "bType"
			};
			return columnNames;
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
				"sSid"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return MonsterId;
		}

	};

	/// \brief [PROGRAMLIST_LOG] Program list log
	/// \class ProgramListLog
	/// \xrefitem gamedb "Game Database" "Game Database" PROGRAMLIST_LOG Program list log
	export class ProgramListLog 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::ProgramListLog;

		/// \brief Column [id]: Identifier
		///
		/// \property Id
		int32_t Id = {};

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [strHackToolName]: Hack tool name
		///
		/// \property HackToolName
		std::string HackToolName;

		/// \brief Column [tWriteTime]: Write time
		///
		/// \property WriteTime
		std::time_t WriteTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "PROGRAMLIST_LOG";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"id", "strAccountID", "strCharID", "strHackToolName", "tWriteTime"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				"strHackToolName"
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
				"id"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return Id;
		}

	};

	/// \brief [RENTAL_ITEM] Rental item
	/// \class RentalItem
	/// \xrefitem gamedb "Game Database" "Game Database" RENTAL_ITEM Rental item
	export class RentalItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::RentalItem;

		/// \brief Column [nRentalIndex]: Rental index
		///
		/// \property RentalIndex
		int32_t RentalIndex = {};

		/// \brief Column [nItemIndex]: Item index
		///
		/// \property ItemIndex
		int32_t ItemIndex = {};

		/// \brief Column [sDurability]: Durability
		///
		/// \property Durability
		int16_t Durability = {};

		/// \brief Column [nSerialNumber]: Serial number
		///
		/// \property SerialNumber
		int64_t SerialNumber = {};

		/// \brief Column [byRegType]: Reg type
		///
		/// \property RegType
		uint8_t RegType = {};

		/// \brief Column [byItemType]: Item type
		///
		/// \property ItemType
		uint8_t ItemType = {};

		/// \brief Column [byClass]: Class
		///
		/// \property Class
		uint8_t Class = {};

		/// \brief Column [sRentalTime]: Rental time
		///
		/// \property RentalTime
		int16_t RentalTime = {};

		/// \brief Column [nRentalMoney]: Rental money
		///
		/// \property RentalMoney
		int32_t RentalMoney = {};

		/// \brief Column [strLenderCharID]: Lender character identifier
		///
		/// \property LenderCharId
		std::string LenderCharId;

		/// \brief Column [strLenderAcID]: Lender account identifier
		///
		/// \property LenderAccountId
		std::string LenderAccountId;

		/// \brief Column [strBorrowerCharID]: Borrower character identifier
		///
		/// \property BorrowerCharId
		std::optional<std::string> BorrowerCharId;

		/// \brief Column [strBorrowerAcID]: Borrower account identifier
		///
		/// \property BorrowerAccountId
		std::optional<std::string> BorrowerAccountId;

		/// \brief Column [timeLender]: Lend time
		///
		/// \property LendTime
		std::optional<std::time_t> LendTime;

		/// \brief Column [timeRegister]: Register time
		///
		/// \property RegisterTime
		std::time_t RegisterTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "RENTAL_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "byRegType", "byItemType", "byClass", "sRentalTime", "nRentalMoney", "strLenderCharID", "strLenderAcID", "strBorrowerCharID", "strBorrowerAcID", "timeLender", "timeRegister"
			};
			return columnNames;
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
				"nRentalIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return RentalIndex;
		}

	};

	/// \brief [RENTAL_ITEM_LIST] Rental item list
	/// \class RentalItemList
	/// \xrefitem gamedb "Game Database" "Game Database" RENTAL_ITEM_LIST Rental item list
	export class RentalItemList 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::RentalItemList;

		/// \brief Column [nRentalIndex]: Rental index
		///
		/// \property RentalIndex
		int32_t RentalIndex = {};

		/// \brief Column [nItemIndex]: Item index
		///
		/// \property ItemIndex
		int32_t ItemIndex = {};

		/// \brief Column [sDurability]: Durability
		///
		/// \property Durability
		int16_t Durability = {};

		/// \brief Column [nSerialNumber]: Serial number
		///
		/// \property SerialNumber
		int64_t SerialNumber = {};

		/// \brief Column [byRegType]: Reg type
		///
		/// \property RegType
		uint8_t RegType = {};

		/// \brief Column [byItemType]: Item type
		///
		/// \property ItemType
		uint8_t ItemType = {};

		/// \brief Column [byClass]: Class
		///
		/// \property Class
		uint8_t Class = {};

		/// \brief Column [sRentalTime]: Rental time
		///
		/// \property RentalTime
		int16_t RentalTime = {};

		/// \brief Column [nRentalMoney]: Rental money
		///
		/// \property RentalMoney
		int32_t RentalMoney = {};

		/// \brief Column [strLenderCharID]: Lender character identifier
		///
		/// \property LenderCharId
		std::string LenderCharId;

		/// \brief Column [strLenderAcID]: Lender account identifier
		///
		/// \property LenderAccountId
		std::string LenderAccountId;

		/// \brief Column [strBorrowerCharID]: Borrower character identifier
		///
		/// \property BorrowerCharId
		std::optional<std::string> BorrowerCharId;

		/// \brief Column [strBorrowerAcID]: Borrower account identifier
		///
		/// \property BorrowerAccountId
		std::optional<std::string> BorrowerAccountId;

		/// \brief Column [timeLender]: Lend time
		///
		/// \property LendTime
		std::optional<std::time_t> LendTime;

		/// \brief Column [timeRegister]: Register time
		///
		/// \property RegisterTime
		std::time_t RegisterTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "RENTAL_ITEM_LIST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "byRegType", "byItemType", "byClass", "sRentalTime", "nRentalMoney", "strLenderCharID", "strLenderAcID", "strBorrowerCharID", "strBorrowerAcID", "timeLender", "timeRegister"
			};
			return columnNames;
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

	};

	/// \brief [SERVER_RESOURCE] Server resource
	/// \class ServerResource
	/// \xrefitem gamedb "Game Database" "Game Database" SERVER_RESOURCE Server resource
	export class ServerResource 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::ServerResource;

		/// \brief Column [nResourceID]: Resource Identifier
		///
		/// \property ResourceId
		int32_t ResourceId = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [strResource]: Sprintf supported string
		///
		/// \property Resource
		std::string Resource;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "SERVER_RESOURCE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nResourceID", "strName", "strResource"
			};
			return columnNames;
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
				"nResourceID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ResourceId;
		}

	};

	/// \brief [START_POSITION] Start position
	/// \class StartPosition
	/// \xrefitem gamedb "Game Database" "Game Database" START_POSITION Start position
	export class StartPosition 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::StartPosition;

		/// \brief Column [ZoneID]: Zone identifier
		///
		/// \property ZoneId
		int16_t ZoneId = {};

		/// \brief Column [sKarusX]: Karus X
		///
		/// \property KarusX
		int16_t KarusX = {};

		/// \brief Column [sKarusZ]: Karus Z
		///
		/// \property KarusZ
		int16_t KarusZ = {};

		/// \brief Column [sElmoradX]: ElMorad X
		///
		/// \property ElmoX
		int16_t ElmoX = {};

		/// \brief Column [sElmoradZ]: ElMorad Z
		///
		/// \property ElmoZ
		int16_t ElmoZ = {};

		/// \brief Column [bRangeX]: Maximum distance from spawn X
		///
		/// \property RangeX
		uint8_t RangeX = {};

		/// \brief Column [bRangeZ]: Maximum distance from spawn Z
		///
		/// \property RangeZ
		uint8_t RangeZ = {};

		/// \brief Column [sKarusGateX]: Karus gate X
		///
		/// \property KarusGateX
		int16_t KarusGateX = {};

		/// \brief Column [sKarusGateZ]: Karus gate Z
		///
		/// \property KarusGateZ
		int16_t KarusGateZ = {};

		/// \brief Column [sElmoGateX]: ElMorad gate X
		///
		/// \property ElmoGateX
		int16_t ElmoGateX = {};

		/// \brief Column [sElmoGateZ]: ElMorad gate Z
		///
		/// \property ElmoGateZ
		int16_t ElmoGateZ = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "START_POSITION";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"ZoneID", "sKarusX", "sKarusZ", "sElmoradX", "sElmoradZ", "bRangeX", "bRangeZ", "sKarusGateX", "sKarusGateZ", "sElmoGateX", "sElmoGateZ"
			};
			return columnNames;
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
				"ZoneID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return ZoneId;
		}

	};

	/// \brief [TB_USER] User Account Information
	/// \class TbUser
	/// \xrefitem gamedb "Game Database" "Game Database" TB_USER User Account Information
	export class TbUser 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::TbUser;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strPasswd]: Password
		///
		/// \property Password
		std::string Password;

		/// \brief Column [strSocNo]: Character delete password
		///
		/// \property SocNo
		std::string SocNo;

		/// \brief Column [strEmail]: Electronic mailing address
		///
		/// \property Email
		std::string Email;

		/// \brief Column [strAuthority]: Authority level
		///
		/// \property Authority
		uint8_t Authority = {};

		/// \brief Column [PremiumExpire]: Premium expiration datetime
		///
		/// \property PremiumExpire
		std::time_t PremiumExpire;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "TB_USER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "strPasswd", "strSocNo", "strEmail", "strAuthority", "PremiumExpire"
			};
			return columnNames;
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

	/// \brief [USER_EDITOR] User editor
	/// \class UserEditor
	/// \xrefitem gamedb "Game Database" "Game Database" USER_EDITOR User editor
	export class UserEditor 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserEditor;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strOpID]: Op identifier
		///
		/// \property OpId
		std::string OpId;

		/// \brief Column [strOpIP]: Op IP address
		///
		/// \property OpIP
		std::string OpIP;

		/// \brief Column [strOldUserValue]: Old user value
		///
		/// \property OldUserValue
		std::vector<uint8_t> OldUserValue;

		/// \brief Column [strNewUserValue]: New user value
		///
		/// \property NewUserValue
		std::vector<uint8_t> NewUserValue;

		/// \brief Column [strOldUserSkill]: Old user skill
		///
		/// \property OldUserSkill
		std::vector<uint8_t> OldUserSkill;

		/// \brief Column [strNewUserSkill]: New user skill
		///
		/// \property NewUserSkill
		std::vector<uint8_t> NewUserSkill;

		/// \brief Column [strOldUserItem]: Old user item
		///
		/// \property OldUserItem
		std::vector<uint8_t> OldUserItem;

		/// \brief Column [strNewUserItem]: New user item
		///
		/// \property NewUserItem
		std::vector<uint8_t> NewUserItem;

		/// \brief Column [strOldWHValue]: Old warehouse value
		///
		/// \property OldWarehouseValue
		std::vector<uint8_t> OldWarehouseValue;

		/// \brief Column [strNewWHValue]: New warehouse value
		///
		/// \property NewWarehouseValue
		std::vector<uint8_t> NewWarehouseValue;

		/// \brief Column [strOldWHItem]: Old warehouse item
		///
		/// \property OldWarehouseItem
		std::vector<uint8_t> OldWarehouseItem;

		/// \brief Column [strNewWHItem]: New warehouse item
		///
		/// \property NewWarehouseItem
		std::vector<uint8_t> NewWarehouseItem;

		/// \brief Column [EditorTime]: Record create time
		///
		/// \property EditorTime
		std::time_t EditorTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_EDITOR";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strCharID", "strAccountID", "strOpID", "strOpIP", "strOldUserValue", "strNewUserValue", "strOldUserSkill", "strNewUserSkill", "strOldUserItem", "strNewUserItem", "strOldWHValue", "strNewWHValue", "strOldWHItem", "strNewWHItem", "EditorTime"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				"strOldUserValue", "strNewUserValue", "strOldUserItem", "strNewUserItem", "strOldWHItem", "strNewWHItem"
			};
			return blobColumns;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};

	/// \brief [USER_EDITOR_ITEM] User editor item
	/// \class UserEditorItem
	/// \xrefitem gamedb "Game Database" "Game Database" USER_EDITOR_ITEM User editor item
	export class UserEditorItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserEditorItem;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strOpID]: Op(erator?) identifier
		///
		/// \property OpId
		std::string OpId;

		/// \brief Column [strOpIP]: Op IP address
		///
		/// \property OpIP
		std::string OpIP;

		/// \brief Column [sDBIndex]: DbIndex
		///
		/// \property DbIndex
		int16_t DbIndex = {};

		/// \brief Column [sPos]: Pos
		///
		/// \property Pos
		int16_t Pos = {};

		/// \brief Column [byType]: Type
		///
		/// \property Type
		uint8_t Type = {};

		/// \brief Column [nItemID1]: Item 1 identifier
		///
		/// \property ItemId1
		int32_t ItemId1 = {};

		/// \brief Column [nItemID2]: Item 2 identifier
		///
		/// \property ItemId2
		int32_t ItemId2 = {};

		/// \brief Column [UpdateTime]: Update time
		///
		/// \property UpdateTime
		std::optional<std::time_t> UpdateTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_EDITOR_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strCharID", "strAccountID", "strOpID", "strOpIP", "sDBIndex", "sPos", "byType", "nItemID1", "nItemID2", "UpdateTime"
			};
			return columnNames;
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

	};

	/// \brief [USER_KNIGHTS_RANK] User Knights Ranking
	/// \class UserKnightsRank
	/// \xrefitem gamedb "Game Database" "Game Database" USER_KNIGHTS_RANK User Knights Ranking
	export class UserKnightsRank 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserKnightsRank;

		/// \brief Column [shIndex]: Index
		///
		/// \property Index
		int16_t Index = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [strElmoUserID]: ElMorad user identifier
		///
		/// \property ElmoUserId
		std::optional<std::string> ElmoUserId;

		/// \brief Column [strElmoKnightsName]: ElMorad Knights name
		///
		/// \property ElmoKnightsName
		std::optional<std::string> ElmoKnightsName;

		/// \brief Column [nElmoLoyalty]: ElMorad national points
		///
		/// \property ElmoLoyalty
		std::optional<int32_t> ElmoLoyalty;

		/// \brief Column [strKarusUserID]: Karus user identifier
		///
		/// \property KarusUserId
		std::optional<std::string> KarusUserId;

		/// \brief Column [strKarusKnightsName]: Karus Knights name
		///
		/// \property KarusKnightsName
		std::optional<std::string> KarusKnightsName;

		/// \brief Column [nKarusLoyalty]: Karus national points
		///
		/// \property KarusLoyalty
		std::optional<int32_t> KarusLoyalty;

		/// \brief Column [nMoney]: Money
		///
		/// \property Money
		int32_t Money = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_KNIGHTS_RANK";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"shIndex", "strName", "strElmoUserID", "strElmoKnightsName", "nElmoLoyalty", "strKarusUserID", "strKarusKnightsName", "nKarusLoyalty", "nMoney"
			};
			return columnNames;
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
				"shIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return Index;
		}

	};

	/// \brief [USER_PERSONAL_RANK] User personal ranking
	/// \class UserPersonalRank
	/// \xrefitem gamedb "Game Database" "Game Database" USER_PERSONAL_RANK User personal ranking
	export class UserPersonalRank 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserPersonalRank;

		/// \brief Column [nRank]: Ranking
		///
		/// \property Rank
		int16_t Rank = {};

		/// \brief Column [strPosition]: Position
		///
		/// \property Position
		std::string Position;

		/// \brief Column [nElmoUP]: ElMorad Up?
		///
		/// \property ElmoUp
		int16_t ElmoUp = {};

		/// \brief Column [strElmoUserID]: ElMorad user identifier
		///
		/// \property ElmoUserId
		std::optional<std::string> ElmoUserId;

		/// \brief Column [nElmoLoyaltyMonthly]: ElMorad national points monthly
		///
		/// \property ElmoLoyaltyMonthly
		std::optional<int32_t> ElmoLoyaltyMonthly;

		/// \brief Column [nElmoCheck]: ElMorad check
		///
		/// \property ElmoCheck
		int32_t ElmoCheck = {};

		/// \brief Column [nKarusUP]: Karus Up?
		///
		/// \property KarusUp
		int16_t KarusUp = {};

		/// \brief Column [strKarusUserID]: Karus user identifier
		///
		/// \property KarusUserId
		std::optional<std::string> KarusUserId;

		/// \brief Column [nKarusLoyaltyMonthly]: Karus national points monthly
		///
		/// \property KarusLoyaltyMonthly
		std::optional<int32_t> KarusLoyaltyMonthly;

		/// \brief Column [nKarusCheck]: Karus check
		///
		/// \property KarusCheck
		int32_t KarusCheck = {};

		/// \brief Column [nSalary]: Salary
		///
		/// \property Salary
		int32_t Salary = {};

		/// \brief Column [UpdateDate]: Update date
		///
		/// \property UpdateDate
		std::time_t UpdateDate;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_PERSONAL_RANK";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nRank", "strPosition", "nElmoUP", "strElmoUserID", "nElmoLoyaltyMonthly", "nElmoCheck", "nKarusUP", "strKarusUserID", "nKarusLoyaltyMonthly", "nKarusCheck", "nSalary", "UpdateDate"
			};
			return columnNames;
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
				"nRank"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return Rank;
		}

	};

	/// \brief [USER_RENTAL_ITEM] User rental item
	/// \class UserRentalItem
	/// \xrefitem gamedb "Game Database" "Game Database" USER_RENTAL_ITEM User rental item
	export class UserRentalItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserRentalItem;

		/// \brief Column [strUserID]: User identifier
		///
		/// \property UserId
		std::string UserId;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [byRentalType]: Rental type
		///
		/// \property RentalType
		uint8_t RentalType = {};

		/// \brief Column [byRegType]: Reg time
		///
		/// \property RegTime
		uint8_t RegTime = {};

		/// \brief Column [nRentalIndex]: Rental index
		///
		/// \property RentalIndex
		int32_t RentalIndex = {};

		/// \brief Column [nItemIndex]: Item index
		///
		/// \property ItemIndex
		int32_t ItemIndex = {};

		/// \brief Column [sDurability]: Durability
		///
		/// \property Durability
		int16_t Durability = {};

		/// \brief Column [nSerialNumber]: Serial number
		///
		/// \property SerialNumber
		int64_t SerialNumber = {};

		/// \brief Column [nRentalMoney]: Rental money
		///
		/// \property RentalMoney
		int32_t RentalMoney = {};

		/// \brief Column [sRentalTime]: Rental time
		///
		/// \property RentalTime
		int16_t RentalTime = {};

		/// \brief Column [sDuringTime]: During time
		///
		/// \property DuringTime
		int16_t DuringTime = {};

		/// \brief Column [timeRental]: Rental time
		///
		/// \property RentalTimestamp
		std::optional<std::time_t> RentalTimestamp;

		/// \brief Column [timeRegister]: Registration time
		///
		/// \property RegisterTime
		std::optional<std::time_t> RegisterTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_RENTAL_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strUserID", "strAccountID", "byRentalType", "byRegType", "nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "nRentalMoney", "sRentalTime", "sDuringTime", "timeRental", "timeRegister"
			};
			return columnNames;
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

	};

	/// \brief [USER_SAVED_MAGIC] User saved magic
	/// \class UserSavedMagic
	/// \xrefitem gamedb "Game Database" "Game Database" USER_SAVED_MAGIC User saved magic
	export class UserSavedMagic 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserSavedMagic;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [nSkill1]: Skill 1
		///
		/// \property Skill1
		int32_t Skill1 = {};

		/// \brief Column [nDuring1]: During 1
		///
		/// \property During1
		int16_t During1 = {};

		/// \brief Column [nSkill2]: Skill 2
		///
		/// \property Skill2
		int32_t Skill2 = {};

		/// \brief Column [nDuring2]: During 2
		///
		/// \property During2
		int16_t During2 = {};

		/// \brief Column [nSkill3]: Skill 3
		///
		/// \property Skill3
		int32_t Skill3 = {};

		/// \brief Column [nDuring3]: During 3
		///
		/// \property During3
		int16_t During3 = {};

		/// \brief Column [nSkill4]: Skill 4
		///
		/// \property Skill4
		int32_t Skill4 = {};

		/// \brief Column [nDuring4]: During 4
		///
		/// \property During4
		int16_t During4 = {};

		/// \brief Column [nSkill5]: Skill 5
		///
		/// \property Skill5
		int32_t Skill5 = {};

		/// \brief Column [nDuring5]: During 5
		///
		/// \property During5
		int16_t During5 = {};

		/// \brief Column [nSkill6]: Skill 6
		///
		/// \property Skill6
		int32_t Skill6 = {};

		/// \brief Column [nDuring6]: During 6
		///
		/// \property During6
		int16_t During6 = {};

		/// \brief Column [nSkill7]: Skill 7
		///
		/// \property Skill7
		int32_t Skill7 = {};

		/// \brief Column [nDuring7]: During 7
		///
		/// \property During7
		int16_t During7 = {};

		/// \brief Column [nSkill8]: Skill 8
		///
		/// \property Skill8
		int32_t Skill8 = {};

		/// \brief Column [nDuring8]: During 8
		///
		/// \property During8
		int16_t During8 = {};

		/// \brief Column [nSkill9]: Skill 9
		///
		/// \property Skill9
		int32_t Skill9 = {};

		/// \brief Column [nDuring9]: During 9
		///
		/// \property During9
		int16_t During9 = {};

		/// \brief Column [nSkill10]: Skill 10
		///
		/// \property Skill10
		int32_t Skill10 = {};

		/// \brief Column [nDuring10]: During 10
		///
		/// \property During10
		int16_t During10 = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_SAVED_MAGIC";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strCharID", "nSkill1", "nDuring1", "nSkill2", "nDuring2", "nSkill3", "nDuring3", "nSkill4", "nDuring4", "nSkill5", "nDuring5", "nSkill6", "nDuring6", "nSkill7", "nDuring7", "nSkill8", "nDuring8", "nSkill9", "nDuring9", "nSkill10", "nDuring10"
			};
			return columnNames;
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
				"strCharID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::string& MapKey() const
		{
			return CharId;
		}

	};

	/// \brief [USERDATA] User data contains saved character information
	/// \class UserData
	/// \xrefitem gamedb "Game Database" "Game Database" USERDATA User data contains saved character information
	export class UserData 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserData;

		/// \brief Column [strUserId]: User identifier
		///
		/// \property UserId
		std::string UserId;

		/// \brief Column [Nation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [Race]: Racial subtype
		///
		/// \see EnumRace
		/// \property Race
		uint8_t Race = {};

		/// \enum EnumRace
		/// \brief Known valid values for Race
		enum class EnumRace
		{
			AechTaurek = 1, ///< Karus warrior
			Tuarek = 2, ///< Karus male
			WrinkleTuarek = 3, ///< Karus mage
			PuriTuarek = 4, ///< Karus female
			Barbarian = 11, ///< ElMorad warrior
			ElMoradMale = 12, ///< ElMorad male
			ElMoradFemale = 13 ///< ElMorad female
		};

		/// \brief Column [Class]: Player job class
		///
		/// \see EnumClass
		/// \property Class
		int16_t Class = {};

		/// \enum EnumClass
		/// \brief Known valid values for Class
		enum class EnumClass
		{
			KarusWarrior = 101, ///< Karus warrior pre-job change
			KarusRogue = 102, ///< Karus rogue pre-job change
			KarusWizard = 103, ///< Karus wizard pre-job change
			KarusPriest = 104, ///< Karus priest pre-job change
			Berserker = 105, ///< Karus warrior
			Guardian = 106, ///< Karus master warrior
			Hunter = 107, ///< Karus rogue
			Penetrator = 108, ///< Karus master rogue
			Sorcerer = 109, ///< Karus wizard
			Necromancer = 110, ///< Karus master wizard
			Shaman = 111, ///< Karus priest
			DarkPriest = 112, ///< Karus master priest
			ElmoWarrior = 201, ///< ElMorad warrior pre-job change
			ElmoRogue = 202, ///< ElMorad rogue pre-job change
			ElmoWizard = 203, ///< ElMorad wizard pre-job change
			ElmoPriest = 204, ///< ElMorad priest pre-job change
			Blade = 205, ///< ElMorad warrior
			Protector = 206, ///< ElMorad master warrior
			Ranger = 207, ///< ElMorad rogue
			Assassin = 208, ///< ElMorad master rogue
			Mage = 209, ///< ElMorad wizard
			Enchanter = 210, ///< ElMorad master wizard
			Cleric = 211, ///< ElMorad priest
			Druid = 212 ///< ElMorad master priest
		};

		/// \brief Column [HairColor]: Hair color
		///
		/// \property HairColor
		uint8_t HairColor = {};

		/// \brief Column [Rank]: User ranking
		///
		/// \property Rank
		uint8_t Rank = {};

		/// \brief Column [Title]: Title
		///
		/// \property Title
		uint8_t Title = {};

		/// \brief Column [Level]: Level
		///
		/// \property Level
		uint8_t Level = {};

		/// \brief Column [Exp]: Experience
		///
		/// \property Exp
		int32_t Exp = {};

		/// \brief Column [Loyalty]: National points
		///
		/// \property Loyalty
		int32_t Loyalty = {};

		/// \brief Column [Face]: Face
		///
		/// \property Face
		uint8_t Face = {};

		/// \brief Column [City]: City
		///
		/// \property City
		uint8_t City = {};

		/// \brief Column [Knights]: Knights identifier (guild/clan)
		///
		/// \property KnightsId
		int16_t KnightsId = {};

		/// \brief Column [Fame]: Fame
		///
		/// \property Fame
		uint8_t Fame = {};

		/// \brief Column [Hp]: Health
		///
		/// \property Hp
		int16_t Hp = {};

		/// \brief Column [Mp]: Mana
		///
		/// \property Mp
		int16_t Mp = {};

		/// \brief Column [Sp]: Sp TODO
		///
		/// \property Sp
		int16_t Sp = {};

		/// \brief Column [Strong]: Strength
		///
		/// \property Strength
		uint8_t Strength = {};

		/// \brief Column [Sta]: Stamina
		///
		/// \property Stamina
		uint8_t Stamina = {};

		/// \brief Column [Dex]: Dexterity
		///
		/// \property Dexterity
		uint8_t Dexterity = {};

		/// \brief Column [Intel]: Intelligence
		///
		/// \property Intelligence
		uint8_t Intelligence = {};

		/// \brief Column [Cha]: Charisma
		///
		/// \property Charisma
		uint8_t Charisma = {};

		/// \brief Column [Authority]: Authorization level
		///
		/// \property Authority
		uint8_t Authority = {};

		/// \brief Column [Points]: Unspent stat points
		///
		/// \property StatPoints
		uint8_t StatPoints = {};

		/// \brief Column [Gold]: Gold
		///
		/// \property Gold
		int32_t Gold = {};

		/// \brief Column [Zone]: Current zone
		///
		/// \property Zone
		uint8_t Zone = {};

		/// \brief Column [Bind]: Bind
		///
		/// \property Bind
		std::optional<int16_t> Bind;

		/// \brief Column [PX]: X-axis position coordinate
		///
		/// \property PosX
		int32_t PosX = {};

		/// \brief Column [PZ]: Z-axis position coordinate
		///
		/// \property PosZ
		int32_t PosZ = {};

		/// \brief Column [PY]: Y-axis position coordinate
		///
		/// \property PosY
		int32_t PosY = {};

		/// \brief Column [dwTime]: DwTime TODO
		///
		/// \property DwTime
		int32_t DwTime = {};

		/// \brief Column [strSkill]: Skill data
		///
		/// \property SkillData
		std::optional<std::vector<uint8_t>> SkillData;

		/// \brief Column [strItem]: Character inventory
		///
		/// \property ItemData
		std::optional<std::vector<uint8_t>> ItemData;

		/// \brief Column [strSerial]: Serial TODO
		///
		/// \property Serial
		std::optional<std::vector<uint8_t>> Serial;

		/// \brief Column [sQuestCount]: Completed quest count
		///
		/// \property QuestCount
		int16_t QuestCount = {};

		/// \brief Column [strQuest]: Quest data
		///
		/// \property QuestData
		std::optional<std::vector<uint8_t>> QuestData;

		/// \brief Column [MannerPoint]: Manner points are awarded when a higher level character helps a Beginner Knight level up
		///
		/// \property MannerPoint
		int32_t MannerPoint = {};

		/// \brief Column [LoyaltyMonthly]: Monthly national points
		///
		/// \property LoyaltyMonthly
		int32_t LoyaltyMonthly = {};

		/// \brief Column [CreateTime]: Creation time
		///
		/// \property CreateTime
		std::time_t CreateTime;

		/// \brief Column [UpdateTime]: Update time
		///
		/// \property UpdateTime
		std::optional<std::time_t> UpdateTime;

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
				"strUserId", "Nation", "Race", "Class", "HairColor", "Rank", "Title", "Level", "Exp", "Loyalty", "Face", "City", "Knights", "Fame", "Hp", "Mp", "Sp", "Strong", "Sta", "Dex", "Intel", "Cha", "Authority", "Points", "Gold", "Zone", "Bind", "PX", "PZ", "PY", "dwTime", "strSkill", "strItem", "strSerial", "sQuestCount", "strQuest", "MannerPoint", "LoyaltyMonthly", "CreateTime", "UpdateTime"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				"strItem", "strSerial", "strQuest"
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

	/// \brief [USERDATA_SKILLSHORTCUT] User data skill shortcut
	/// \class UserDataSkillShortcut
	/// \xrefitem gamedb "Game Database" "Game Database" USERDATA_SKILLSHORTCUT User data skill shortcut
	export class UserDataSkillShortcut 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserDataSkillShortcut;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [nCount]: Count
		///
		/// \property Count
		int16_t Count = {};

		/// \brief Column [strSkillData]: Skill data
		///
		/// \property SkillData
		std::vector<uint8_t> SkillData;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USERDATA_SKILLSHORTCUT";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strCharID", "nCount", "strSkillData"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				"strSkillData"
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
				"strCharID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::string& MapKey() const
		{
			return CharId;
		}

	};

	/// \brief [VERSION] Version data and patch management
	/// \class Version
	/// \xrefitem gamedb "Game Database" "Game Database" VERSION Version data and patch management
	export class Version 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Version;

		/// \brief Column [sVersion]: Game version number
		///
		/// \property Number
		int16_t Number = {};

		/// \brief Column [strFileName]: Patch file name
		///
		/// \property FileName
		std::string FileName;

		/// \brief Column [strCompressName]: User-friendly patch name
		///
		/// \property CompressName
		std::string CompressName;

		/// \brief Column [sHistoryVersion]: Previous patch version
		///
		/// \property HistoryVersion
		int16_t HistoryVersion = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "VERSION";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sVersion", "strFileName", "strCompressName", "sHistoryVersion"
			};
			return columnNames;
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
				"sVersion"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return Number;
		}

	};

	/// \brief [WAREHOUSE] The warehouse system is referred to as the Inn in-game.  It is account-level storage for a user
	/// \class Warehouse
	/// \xrefitem gamedb "Game Database" "Game Database" WAREHOUSE The warehouse system is referred to as the Inn in-game.  It is account-level storage for a user
	export class Warehouse 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Warehouse;

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

	/// \brief [WEB_ITEMMALL] Power-up store purchases
	/// \class WebItemMall
	/// \xrefitem gamedb "Game Database" "Game Database" WEB_ITEMMALL Power-up store purchases
	export class WebItemMall 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::WebItemMall;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [ServerNo]: Server identifier
		///
		/// \property ServerId
		int16_t ServerId = {};

		/// \brief Column [ItemID]: Item identifier
		///
		/// \property ItemId
		int32_t ItemId = {};

		/// \brief Column [ItemCount]: Number of items granted on purchase
		///
		/// \property ItemCount
		int16_t ItemCount = {};

		/// \brief Column [BuyTime]: Time of purchase
		///
		/// \property BuyTime
		std::time_t BuyTime;

		/// \brief Column [img_file_name]: Item image file name
		///
		/// \property ImgFileName
		std::optional<std::string> ImgFileName;

		/// \brief Column [strItemName]: Item name
		///
		/// \property ItemName
		std::optional<std::string> ItemName;

		/// \brief Column [price]: Price
		///
		/// \property Price
		std::optional<int32_t> Price;

		/// \brief Column [pay_type]: Pay type
		///
		/// \property PayType
		std::optional<int32_t> PayType;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "WEB_ITEMMALL";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "strCharID", "ServerNo", "ItemID", "ItemCount", "BuyTime", "img_file_name", "strItemName", "price", "pay_type"
			};
			return columnNames;
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

	};

	/// \brief [WEB_ITEMMALL_LOG] Power-up store purchase log
	/// \class WebItemMallLog
	/// \xrefitem gamedb "Game Database" "Game Database" WEB_ITEMMALL_LOG Power-up store purchase log
	export class WebItemMallLog 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::WebItemMallLog;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [ServerNo]: Server identifier
		///
		/// \property ServerId
		int16_t ServerId = {};

		/// \brief Column [ItemID]: Item identifier
		///
		/// \property ItemId
		int32_t ItemId = {};

		/// \brief Column [ItemCount]: Number of items granted on purchase
		///
		/// \property ItemCount
		int16_t ItemCount = {};

		/// \brief Column [BuyTime]: Time of purchase
		///
		/// \property BuyTime
		std::time_t BuyTime;

		/// \brief Column [img_file_name]: Item image file name
		///
		/// \property ImgFileName
		std::optional<std::string> ImgFileName;

		/// \brief Column [strItemName]: Item name
		///
		/// \property ItemName
		std::optional<std::string> ItemName;

		/// \brief Column [price]: Price
		///
		/// \property Price
		std::optional<int32_t> Price;

		/// \brief Column [pay_type]: Pay type
		///
		/// \property PayType
		std::optional<int32_t> PayType;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "WEB_ITEMMALL_LOG";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "strCharID", "ServerNo", "ItemID", "ItemCount", "BuyTime", "img_file_name", "strItemName", "price", "pay_type"
			};
			return columnNames;
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

	};

	/// \brief [WEBPAGE_ADDRESS] Webpage URL list
	/// \class WebpageAddress
	/// \xrefitem gamedb "Game Database" "Game Database" WEBPAGE_ADDRESS Webpage URL list
	export class WebpageAddress 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::WebpageAddress;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = {};

		/// \brief Column [strWebPageAddress]: Webpage address
		///
		/// \property WebPageAddress
		std::string WebPageAddress;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "WEBPAGE_ADDRESS";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "strWebPageAddress"
			};
			return columnNames;
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
				"nIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return Index;
		}

	};

	/// \brief [ZONE_INFO] Zone (map) information
	/// \class ZoneInfo
	/// \xrefitem gamedb "Game Database" "Game Database" ZONE_INFO Zone (map) information
	export class ZoneInfo 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::ZoneInfo;

		/// \brief Column [ServerNo]: Server identifier
		///
		/// \property ServerId
		uint8_t ServerId = {};

		/// \brief Column [ZoneNo]: Zone identifier
		///
		/// \property ZoneId
		int16_t ZoneId = {};

		/// \brief Column [strZoneName]: Zone name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [InitX]: X-coordinate location for a player loading into the zone
		///
		/// \property InitX
		int32_t InitX = {};

		/// \brief Column [InitZ]: Z-coordinate location for a player loading into the zone
		///
		/// \property InitZ
		int32_t InitZ = {};

		/// \brief Column [InitY]: Y-coordinate location for a player loading into the zone
		///
		/// \property InitY
		int32_t InitY = {};

		/// \brief Column [Type]: Type
		///
		/// \property Type
		uint8_t Type = {};

		/// \brief Column [RoomEvent]: Map EventId
		///
		/// \property RoomEvent
		uint8_t RoomEvent = {};

		/// \brief Column [bz]: Bz TODO - just seems like a description column
		///
		/// \property Bz
		std::optional<std::string> Bz;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "ZONE_INFO";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"ServerNo", "ZoneNo", "strZoneName", "InitX", "InitZ", "InitY", "Type", "RoomEvent", "bz"
			};
			return columnNames;
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
				"ZoneNo"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return ZoneId;
		}

	};
}