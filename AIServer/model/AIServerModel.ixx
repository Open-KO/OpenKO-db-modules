module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module AIServerModel;

import ModelUtil;

namespace aiserver_binder
{
	export class Monster;
	export class MonsterItem;
	export class Npc;
	export class NpcMoveItem;
	export class NpcPos;
	export class LevelUp;
	export class Magic;
	export class MagicType1;
	export class MagicType2;
	export class MagicType3;
	export class MagicType4;
	export class MagicType7;
	export class MakeDefensive;
	export class MakeItem;
	export class MakeItemGradeCode;
	export class MakeItemGroup;
	export class MakeItemRareCode;
	export class MakeWeapon;
	export class MonsterSummonList;
	export class ZoneInfo;
}

namespace aiserver_model
{
	/// \brief [K_MONSTER] Monster definitions
	/// \class Monster
	/// \xrefitem gamedb "Game Database" "Game Database" K_MONSTER Monster definitions
	export class Monster 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::Monster;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"sSid", "strName", "sPid", "sSize", "iWeapon1", "iWeapon2", "byGroup", "byActType", "byType", "byFamily", "byRank", "byTitle", "iSellingGroup", "sLevel", "iExp", "iLoyalty", "iHpPoint", "sMpPoint", "sAtk", "sAc", "sHitRate", "sEvadeRate", "sDamage", "sAttackDelay", "bySpeed1", "bySpeed2", "sStandtime", "iMagic1", "iMagic2", "iMagic3", "sFireR", "sColdR", "sLightningR", "sMagicR", "sDiseaseR", "sPoisonR", "sLightR", "sBulk", "byAttackRange", "bySearchRange", "byTracingRange", "iMoney", "sItem", "byDirectAttack", "byMagicAttack", "byMoneyType"
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
		using BinderType = aiserver_binder::MonsterItem;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"sIndex", "iItem01", "sPersent01", "iItem02", "sPersent02", "iItem03", "sPersent03", "iItem04", "sPersent04", "iItem05", "sPersent05"
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
		using BinderType = aiserver_binder::Npc;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"sSid", "strName", "sPid", "sSize", "iWeapon1", "iWeapon2", "byGroup", "byActType", "byType", "byFamily", "byRank", "byTitle", "iSellingGroup", "sLevel", "iExp", "iLoyalty", "iHpPoint", "sMpPoint", "sAtk", "sAc", "sHitRate", "sEvadeRate", "sDamage", "sAttackDelay", "bySpeed1", "bySpeed2", "sStandtime", "iMagic1", "iMagic2", "iMagic3", "sFireR", "sColdR", "sLightningR", "sMagicR", "sDiseaseR", "sPoisonR", "sLightR", "sBulk", "byAttackRange", "bySearchRange", "byTracingRange", "iMoney", "sItem", "byDirectAttack", "byMagicAttack", "byMoneyType"
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

	/// \brief [K_NPC_MOVE_ITEM] NPC Move Item: TODO
	/// \class NpcMoveItem
	/// \xrefitem gamedb "Game Database" "Game Database" K_NPC_MOVE_ITEM NPC Move Item: TODO
	export class NpcMoveItem 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::NpcMoveItem;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"sCastleIndex", "byChangeItem", "sChangeSid", "byMoveItem", "sMoveMinX", "sMoveMinY", "sMoveMaxX", "sMoveMaxY"
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
		using BinderType = aiserver_binder::NpcPos;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"ZoneID", "NpcID", "ActType", "RegenType", "DungeonFamily", "SpecialType", "TrapNumber", "LeftX", "TopZ", "RightX", "BottomZ", "LimitMinZ", "LimitMinX", "LimitMaxX", "LimitMaxZ", "NumNPC", "RegTime", "byDirection", "DotCnt", "path"
			};
			return orderedColumnNames;
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

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				
			};
			return primaryKey;
		}

	};

	/// \brief [LEVEL_UP] Level experience requirements
	/// \class LevelUp
	/// \xrefitem gamedb "Game Database" "Game Database" LEVEL_UP Level experience requirements
	export class LevelUp 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::LevelUp;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"level", "Exp"
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
		using BinderType = aiserver_binder::Magic;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"MagicNum", "BeforeAction", "TargetAction", "SelfEffect", "FlyingEffect", "TargetEffect", "Moral", "SkillLevel", "Skill", "Msp", "HP", "ItemGroup", "UseItem", "CastTime", "ReCastTime", "SuccessRate", "Type1", "Type2", "Range", "Etc", "Event"
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
		using BinderType = aiserver_binder::MagicType1;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"iNum", "Type", "HitRate", "Hit", "AddDamage", "Delay", "ComboType", "ComboCount", "ComboDamage", "Range"
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
		using BinderType = aiserver_binder::MagicType2;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"iNum", "HitType", "HitRate", "AddDamage", "AddRange", "NeedArrow", "AddDamagePlus"
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
		using BinderType = aiserver_binder::MagicType3;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"iNum", "Radius", "Angle", "DirectType", "FirstDamage", "EndDamage", "TimeDamage", "Duration", "Attribute"
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
		using BinderType = aiserver_binder::MagicType4;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"iNum", "BuffType", "Radius", "Duration", "AttackSpeed", "Speed", "AC", "ACPct", "Attack", "MagicAttack", "MaxHP", "MaxHpPct", "MaxMP", "MaxMpPct", "HitRate", "AvoidRate", "Str", "Sta", "Dex", "Intel", "Cha", "FireR", "ColdR", "LightningR", "MagicR", "DiseaseR", "PoisonR", "ExpPct"
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
		using BinderType = aiserver_binder::MagicType7;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"nIndex", "byValidGroup", "byNatoinChange", "shMonsterNum", "byTargetChange", "byStateChange", "byRadius", "shHitrate", "shDuration", "shDamage", "byVisoin", "nNeedItem"
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

	/// \brief [MAKE_DEFENSIVE] Make defensive
	/// \class MakeDefensive
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_DEFENSIVE Make defensive
	export class MakeDefensive 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MakeDefensive;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"byLevel", "sClass_1", "sClass_2", "sClass_3", "sClass_4", "sClass_5", "sClass_6", "sClass_7"
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
		using BinderType = aiserver_binder::MakeItem;

		/// \brief Column [sIndex]: Index
		///
		/// \property Index
		int16_t Index = {};

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
				"sIndex", "iItemCode", "byItemLevel"
			};
			return columnNames;
		}

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"sIndex", "iItemCode", "byItemLevel"
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

	/// \brief [MAKE_ITEM_GRADECODE] Make item grade code
	/// \class MakeItemGradeCode
	/// \xrefitem gamedb "Game Database" "Game Database" MAKE_ITEM_GRADECODE Make item grade code
	export class MakeItemGradeCode 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MakeItemGradeCode;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"byItemIndex", "byGrade_1", "byGrade_2", "byGrade_3", "byGrade_4", "byGrade_5", "byGrade_6", "byGrade_7", "byGrade_8", "byGrade_9"
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
		using BinderType = aiserver_binder::MakeItemGroup;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"iItemGroupNum", "iItem_1", "iItem_2", "iItem_3", "iItem_4", "iItem_5", "iItem_6", "iItem_7", "iItem_8", "iItem_9", "iItem_10", "iItem_11", "iItem_12", "iItem_13", "iItem_14", "iItem_15", "iItem_16", "iItem_17", "iItem_18", "iItem_19", "iItem_20", "iItem_21", "iItem_22", "iItem_23", "iItem_24", "iItem_25", "iItem_26", "iItem_27", "iItem_28", "iItem_29", "iItem_30"
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
		using BinderType = aiserver_binder::MakeItemRareCode;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"byLevelGrade", "sUpgradeItem", "sLareItem", "sMagicItem", "sGereralItem"
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
		using BinderType = aiserver_binder::MakeWeapon;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"byLevel", "sClass_1", "sClass_2", "sClass_3", "sClass_4", "sClass_5", "sClass_6", "sClass_7", "sClass_8", "sClass_9", "sClass_10", "sClass_11", "sClass_12"
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

	/// \brief [MONSTER_SUMMON_LIST] Monster summon list
	/// \class MonsterSummonList
	/// \xrefitem gamedb "Game Database" "Game Database" MONSTER_SUMMON_LIST Monster summon list
	export class MonsterSummonList 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MonsterSummonList;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"sSid", "strName", "sLevel", "sProbability", "bType"
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

	/// \brief [ZONE_INFO] Zone (map) information
	/// \class ZoneInfo
	/// \xrefitem gamedb "Game Database" "Game Database" ZONE_INFO Zone (map) information
	export class ZoneInfo 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::ZoneInfo;

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

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames()
		{
			static const std::vector<std::string> orderedColumnNames =
			{
				"ServerNo", "ZoneNo", "strZoneName", "InitX", "InitZ", "InitY", "Type", "RoomEvent"
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