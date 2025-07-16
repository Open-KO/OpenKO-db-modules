module;

#include <cstdint>
#include <optional>
#include <string>
#include <tuple>
#include <unordered_set>

export module EbenezerModel;

import ModelUtil;

namespace ebenezer_binder
{
	export class Battle;
	export class Coefficient;
	export class CouponSerialList;
	export class Event;
	export class EventTrigger;
	export class Home;
	export class Item;
	export class ItemExchange;
	export class ItemUpgrade;
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
	export class MonsterChallenge;
	export class MonsterChallengeSummonList;
	export class RentalItem;
	export class ServerResource;
	export class StartPosition;
	export class UserKnightsRank;
	export class UserPersonalRank;
	export class WebpageAddress;
	export class ZoneInfo;
}

namespace ebenezer_model
{
	/// \brief [BATTLE] Battle data for the game server
	/// \class Battle
	/// \xrefitem gamedb "Game Database" "Game Database" BATTLE Battle data for the game server
	export class Battle 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::Battle;

		/// \brief Column [sIndex]: Server Index
		///
		/// \property Index
		int16_t Index = {};

		/// \brief Column [byNation]: Nation Identifier
		///
		/// \property Nation
		uint8_t Nation = {};

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
				"sIndex", "byNation"
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
		using BinderType = ebenezer_binder::Coefficient;

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

	/// \brief [COUPON_SERIAL_LIST] Coupon Serial List
	/// \class CouponSerialList
	/// \xrefitem gamedb "Game Database" "Game Database" COUPON_SERIAL_LIST Coupon Serial List
	export class CouponSerialList 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::CouponSerialList;

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

	/// \brief [EVENT] Event Information
	/// \class Event
	/// \xrefitem gamedb "Game Database" "Game Database" EVENT Event Information
	export class Event 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::Event;

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
				"ZoneNum", "EventNum", "Type", "Exec1", "Exec2", "Exec3", "Exec4", "Exec5"
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
				
			};
			return primaryKey;
		}

	};

	/// \brief [EVENT_TRIGGER] NPC Event Triggers
	/// \class EventTrigger
	/// \xrefitem gamedb "Game Database" "Game Database" EVENT_TRIGGER NPC Event Triggers
	export class EventTrigger 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::EventTrigger;

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

	/// \brief [HOME] TODO Doc
	/// \class Home
	/// \xrefitem gamedb "Game Database" "Game Database" HOME TODO Doc
	export class Home 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::Home;

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
		using BinderType = ebenezer_binder::Item;

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
				"Num", "strName", "Kind", "Slot", "Race", "Class", "Damage", "Delay", "Range", "Weight", "Duration", "BuyPrice", "SellPrice", "Ac", "Countable", "Effect1", "Effect2", "ReqLevel", "ReqRank", "ReqTitle", "ReqStr", "ReqSta", "ReqDex", "ReqIntel", "ReqCha", "SellingGroup", "ItemType", "Hitrate", "Evasionrate", "DaggerAc", "SwordAc", "MaceAc", "AxeAc", "SpearAc", "BowAc", "FireDamage", "IceDamage", "LightningDamage", "PoisonDamage", "HPDrain", "MPDamage", "MPDrain", "MirrorDamage", "Droprate", "StrB", "StaB", "DexB", "IntelB", "ChaB", "MaxHpB", "MaxMpB", "FireR", "ColdR", "LightningR", "MagicR", "PoisonR", "CurseR"
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
		using BinderType = ebenezer_binder::ItemExchange;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = {};

		/// \brief Column [nNpcNum]: NPC identifier (K_NPC.sSid)
		///
		/// \property NpcNumber
		int16_t NpcNumber = {};

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
				"nIndex", "nNpcNum", "bRandomFlag", "nOriginItemNum1", "nOriginItemCount1", "nOriginItemNum2", "nOriginItemCount2", "nOriginItemNum3", "nOriginItemCount3", "nOriginItemNum4", "nOriginItemCount4", "nOriginItemNum5", "nOriginItemCount5", "nExchangeItemNum1", "nExchangeItemCount1", "nExchangeItemNum2", "nExchangeItemCount2", "nExchangeItemNum3", "nExchangeItemCount3", "nExchangeItemNum4", "nExchangeItemCount4", "nExchangeItemNum5", "nExchangeItemCount5"
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

	/// \brief [ITEM_UPGRADE] Item upgrade configuration
	/// \class ItemUpgrade
	/// \xrefitem gamedb "Game Database" "Game Database" ITEM_UPGRADE Item upgrade configuration
	export class ItemUpgrade 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::ItemUpgrade;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = {};

		/// \brief Column [nNPCNum]: NPC Identifier (K_NPC.sSid)
		///
		/// \property NpcNumber
		int16_t NpcNumber = {};

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
				"nIndex", "nNPCNum", "nOriginType", "nOriginItem", "nReqItem1", "nReqItem2", "nReqItem3", "nReqItem4", "nReqItem5", "nReqItem6", "nReqItem7", "nReqItem8", "nReqNoah", "bRateType", "nGenRate", "nGiveItem"
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

	/// \brief [KNIGHTS] Knights are the clan/guild system of the game
	/// \class Knights
	/// \xrefitem gamedb "Game Database" "Game Database" KNIGHTS Knights are the clan/guild system of the game
	export class Knights 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::Knights;

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
				"IDNum", "Flag", "Nation", "Ranking", "IDName", "Members", "Chief", "ViceChief_1", "ViceChief_2", "ViceChief_3", "strEnemyName", "byOldWarResult", "nWarEnemyID", "nVictory", "nLose", "Gold", "Domination", "Points", "sMarkVersion", "sMarkLen", "Mark", "bySiegeFlag", "sAllianceKnights", "sCape"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				"Mark"
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
		using BinderType = ebenezer_binder::KnightsAlliance;

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
		using BinderType = ebenezer_binder::KnightsCape;

		/// \brief Column [sCapeIndex]: Cape identifier
		///
		/// \property CapeIndex
		int16_t CapeIndex = {};

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
				"sCapeIndex", "nBuyPrice", "nDuration", "byGrade"
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
		using BinderType = ebenezer_binder::KnightsRating;

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
		using BinderType = ebenezer_binder::KnightsSiegeWarfare;

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
		using BinderType = ebenezer_binder::KnightsUser;

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
		using BinderType = ebenezer_binder::LevelUp;

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
		using BinderType = ebenezer_binder::Magic;

		/// \brief Column [MagicNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

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
				"MagicNum", "BeforeAction", "TargetAction", "SelfEffect", "FlyingEffect", "TargetEffect", "Moral", "SkillLevel", "Skill", "Msp", "HP", "ItemGroup", "UseItem", "CastTime", "ReCastTime", "SuccessRate", "Type1", "Type2", "Range", "Etc", "Event"
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
		using BinderType = ebenezer_binder::MagicType1;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

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
				"iNum", "Type", "HitRate", "Hit", "AddDamage", "Delay", "ComboType", "ComboCount", "ComboDamage", "Range"
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
		using BinderType = ebenezer_binder::MagicType2;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

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
				"iNum", "HitType", "HitRate", "AddDamage", "AddRange", "NeedArrow", "AddDamagePlus"
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
		using BinderType = ebenezer_binder::MagicType3;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

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
				"iNum", "Radius", "Angle", "DirectType", "FirstDamage", "EndDamage", "TimeDamage", "Duration", "Attribute"
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
		using BinderType = ebenezer_binder::MagicType4;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

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
				"iNum", "BuffType", "Radius", "Duration", "AttackSpeed", "Speed", "AC", "ACPct", "Attack", "MagicAttack", "MaxHP", "MaxHpPct", "MaxMP", "MaxMpPct", "HitRate", "AvoidRate", "Str", "Sta", "Dex", "Intel", "Cha", "FireR", "ColdR", "LightningR", "MagicR", "DiseaseR", "PoisonR", "ExpPct"
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
		using BinderType = ebenezer_binder::MagicType5;

		/// \brief Column [iNum]: Magic number identifier
		///
		/// \property ID
		int32_t ID = {};

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
				"iNum", "Type", "ExpRecover", "NeedStone"
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
		using BinderType = ebenezer_binder::MagicType6;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

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
				"iNum", "Size", "TransformID", "Duration", "MaxHp", "MaxMp", "Speed", "AttackSpeed", "TotalHit", "TotalAc", "TotalHitRate", "TotalEvasionRate", "TotalFireR", "TotalColdR", "TotalLightningR", "TotalMagicR", "TotalDiseaseR", "TotalPoisonR", "Class", "UserSkillUse", "NeedItem", "SkillSuccessRate", "MonsterFriendly"
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
		using BinderType = ebenezer_binder::MagicType7;

		/// \brief Column [nIndex]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

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
				"nIndex", "byValidGroup", "byNatoinChange", "shMonsterNum", "byTargetChange", "byStateChange", "byRadius", "shHitrate", "shDuration", "shDamage", "byVisoin", "nNeedItem"
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
		using BinderType = ebenezer_binder::MagicType8;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

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
				"iNum", "Target", "Radius", "WarpType", "ExpRecover"
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
		using BinderType = ebenezer_binder::MagicType9;

		/// \brief Column [iNum]: Magic number identifier
		///
		/// \property ID
		int32_t ID = {};

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
				"iNum", "ValidGroup", "NationChange", "MonsterNum", "TargetChange", "StateChange", "Radius", "Hitrate", "Duration", "AddDamage", "Vision", "NeedItem"
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

	/// \brief [MONSTER_CHALLENGE] Monster challenge (Forgotten Temple)
	/// \class MonsterChallenge
	/// \xrefitem gamedb "Game Database" "Game Database" MONSTER_CHALLENGE Monster challenge (Forgotten Temple)
	export class MonsterChallenge 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::MonsterChallenge;

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
		using BinderType = ebenezer_binder::MonsterChallengeSummonList;

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

	/// \brief [RENTAL_ITEM] Rental item
	/// \class RentalItem
	/// \xrefitem gamedb "Game Database" "Game Database" RENTAL_ITEM Rental item
	export class RentalItem 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::RentalItem;

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
				"nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "byRegType", "byItemType", "byClass", "sRentalTime", "nRentalMoney", "strLenderCharID", "strLenderAcID", "strBorrowerCharID", "strBorrowerAcID"
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

	/// \brief [SERVER_RESOURCE] Server resource
	/// \class ServerResource
	/// \xrefitem gamedb "Game Database" "Game Database" SERVER_RESOURCE Server resource
	export class ServerResource 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::ServerResource;

		/// \brief Column [nResourceID]: Resource Identifier
		///
		/// \property ResourceId
		int32_t ResourceId = {};

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
				"nResourceID", "strResource"
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
		using BinderType = ebenezer_binder::StartPosition;

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

	/// \brief [USER_KNIGHTS_RANK] User Knights Ranking
	/// \class UserKnightsRank
	/// \xrefitem gamedb "Game Database" "Game Database" USER_KNIGHTS_RANK User Knights Ranking
	export class UserKnightsRank 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::UserKnightsRank;

		/// \brief Column [shIndex]: Index
		///
		/// \property Index
		int16_t Index = {};

		/// \brief Column [strElmoUserID]: ElMorad user identifier
		///
		/// \property ElmoUserId
		std::optional<std::string> ElmoUserId;

		/// \brief Column [strKarusUserID]: Karus user identifier
		///
		/// \property KarusUserId
		std::optional<std::string> KarusUserId;

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
				"shIndex", "strElmoUserID", "strKarusUserID", "nMoney"
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
		using BinderType = ebenezer_binder::UserPersonalRank;

		/// \brief Column [nRank]: Ranking
		///
		/// \property Rank
		int16_t Rank = {};

		/// \brief Column [strElmoUserID]: ElMorad user identifier
		///
		/// \property ElmoUserId
		std::optional<std::string> ElmoUserId;

		/// \brief Column [strKarusUserID]: Karus user identifier
		///
		/// \property KarusUserId
		std::optional<std::string> KarusUserId;

		/// \brief Column [nSalary]: Salary
		///
		/// \property Salary
		int32_t Salary = {};

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
				"nRank", "strElmoUserID", "strKarusUserID", "nSalary"
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

	/// \brief [WEBPAGE_ADDRESS] Webpage URL list
	/// \class WebpageAddress
	/// \xrefitem gamedb "Game Database" "Game Database" WEBPAGE_ADDRESS Webpage URL list
	export class WebpageAddress 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::WebpageAddress;

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
		using BinderType = ebenezer_binder::ZoneInfo;

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
				"ServerNo", "ZoneNo", "strZoneName", "InitX", "InitZ", "InitY", "Type", "RoomEvent"
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