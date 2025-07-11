module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:Item;

import ModelUtil;

namespace ebenezer_binder
{
	export class Item;
}

namespace ebenezer_model
{
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
		int32_t ID = 0;

		/// \brief Column [strName]: Item name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [Kind]: Item kind
		///
		/// \see EnumKind
		/// \property Kind
		uint8_t Kind = 0;
	
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
		uint8_t Slot = 0;
	
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
		uint8_t Race = 0;
	
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
		uint8_t ClassId = 0;
	
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
		int16_t Damage = 0;

		/// \brief Column [Delay]: Animation windup time before activation
		///
		/// \property Delay
		int16_t Delay = 0;

		/// \brief Column [Range]: Maximum distance from a target before item cannot activate
		///
		/// \property Range
		int16_t Range = 0;

		/// \brief Column [Weight]: Weight
		///
		/// \property Weight
		int16_t Weight = 0;

		/// \brief Column [Duration]: Durability
		///
		/// \property Durability
		int16_t Durability = 0;

		/// \brief Column [BuyPrice]: Price at which item can be bought from a merchant
		///
		/// \property BuyPrice
		int32_t BuyPrice = 0;

		/// \brief Column [SellPrice]: Price at which item can be sold to a merchant
		///
		/// \property SellPrice
		int32_t SellPrice = 0;

		/// \brief Column [Ac]: Amount contributed to armor value, when equipped
		///
		/// \property Armor
		int16_t Armor = 0;

		/// \brief Column [Countable]: Price at which item can be sold to a merchant
		///
		/// \see EnumCountable
		/// \property Countable
		uint8_t Countable = 0;
	
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
		int32_t MagicEffect = 0;

		/// \brief Column [Effect2]: Special Effect
		///
		/// \see EnumSpecialEffect
		/// \property SpecialEffect
		int32_t SpecialEffect = 0;
	
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
		uint8_t MinLevel = 0;

		/// \brief Column [ReqRank]: Rank required to use item
		///
		/// \property RequiredRank
		uint8_t RequiredRank = 0;

		/// \brief Column [ReqTitle]: Title required to use item
		///
		/// \see EnumRequiredTitle
		/// \property RequiredTitle
		uint8_t RequiredTitle = 0;
	
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
		uint8_t RequiredStrength = 0;

		/// \brief Column [ReqSta]: Stamina required to use item
		///
		/// \property RequiredStamina
		uint8_t RequiredStamina = 0;

		/// \brief Column [ReqDex]: Dexterity required to use item
		///
		/// \property RequiredDexterity
		uint8_t RequiredDexterity = 0;

		/// \brief Column [ReqIntel]: Intelligence required to use item
		///
		/// \property RequiredIntelligence
		uint8_t RequiredIntelligence = 0;

		/// \brief Column [ReqCha]: Charisma required to use item
		///
		/// \property RequiredCharisma
		uint8_t RequiredCharisma = 0;

		/// \brief Column [SellingGroup]: NPC Selling Group
		///
		/// \property SellingGroup
		uint8_t SellingGroup = 0;

		/// \brief Column [ItemType]: Item grade
		///
		/// \property Type
		uint8_t Type = 0;

		/// \brief Column [Hitrate]: Attack power modifier
		///
		/// \property HitRate
		int16_t HitRate = 0;

		/// \brief Column [Evasionrate]: Dodge chance modifier
		///
		/// \property EvasionRate
		int16_t EvasionRate = 0;

		/// \brief Column [DaggerAc]: Dagger defense modifier
		///
		/// \property DaggerArmor
		int16_t DaggerArmor = 0;

		/// \brief Column [SwordAc]: Sword defense modifier
		///
		/// \property SwordArmor
		int16_t SwordArmor = 0;

		/// \brief Column [MaceAc]: Mace defense modifier
		///
		/// \property MaceArmor
		int16_t MaceArmor = 0;

		/// \brief Column [AxeAc]: Axe defense modifier
		///
		/// \property AxeArmor
		int16_t AxeArmor = 0;

		/// \brief Column [SpearAc]: Spear defense modifier
		///
		/// \property SpearArmor
		int16_t SpearArmor = 0;

		/// \brief Column [BowAc]: Bow defense modifier
		///
		/// \property BowArmor
		int16_t BowArmor = 0;

		/// \brief Column [FireDamage]: Fire damage
		///
		/// \property FireDamage
		uint8_t FireDamage = 0;

		/// \brief Column [IceDamage]: Ice damage
		///
		/// \property IceDamage
		uint8_t IceDamage = 0;

		/// \brief Column [LightningDamage]: Lightning damage
		///
		/// \property LightningDamage
		uint8_t LightningDamage = 0;

		/// \brief Column [PoisonDamage]: Poison damage
		///
		/// \property PoisonDamage
		uint8_t PoisonDamage = 0;

		/// \brief Column [HPDrain]: Percent of damage recovered as health
		///
		/// \property HpDrain
		uint8_t HpDrain = 0;

		/// \brief Column [MPDamage]: Percent of damage dealt to target mana
		///
		/// \property MpDamage
		uint8_t MpDamage = 0;

		/// \brief Column [MPDrain]: Percent of damage recovered as mana
		///
		/// \property MpDrain
		uint8_t MpDrain = 0;

		/// \brief Column [MirrorDamage]: Percent of damage reflected to attacker
		///
		/// \property MirrorDamage
		uint8_t MirrorDamage = 0;

		/// \brief Column [Droprate]: TODO: Unused? Drop rates dictated by K_NPC_ITEM
		///
		/// \property DropRate
		uint8_t DropRate = 0;

		/// \brief Column [StrB]: Strength bonus when item equipped
		///
		/// \property StrengthBonus
		int16_t StrengthBonus = 0;

		/// \brief Column [StaB]: Stamina bonus when item equipped
		///
		/// \property StaminaBonus
		int16_t StaminaBonus = 0;

		/// \brief Column [DexB]: Dexterity bonus when item equipped
		///
		/// \property DexterityBonus
		int16_t DexterityBonus = 0;

		/// \brief Column [IntelB]: Intelligence bonus when item equipped
		///
		/// \property IntelligenceBonus
		int16_t IntelligenceBonus = 0;

		/// \brief Column [ChaB]: Charisma bonus when item equipped
		///
		/// \property CharismaBonus
		int16_t CharismaBonus = 0;

		/// \brief Column [MaxHpB]: Maximum health bonus when item equipped
		///
		/// \property MaxHpBonus
		int16_t MaxHpBonus = 0;

		/// \brief Column [MaxMpB]: Maximum mana bonus when item equipped
		///
		/// \property MaxMpBonus
		int16_t MaxMpBonus = 0;

		/// \brief Column [FireR]: Fire resistance
		///
		/// \property FireResist
		int16_t FireResist = 0;

		/// \brief Column [ColdR]: Cold resistance
		///
		/// \property ColdResist
		int16_t ColdResist = 0;

		/// \brief Column [LightningR]: Lightning resistance
		///
		/// \property LightningResist
		int16_t LightningResist = 0;

		/// \brief Column [MagicR]: Magic resistance
		///
		/// \property MagicResist
		int16_t MagicResist = 0;

		/// \brief Column [PoisonR]: Poison resistance
		///
		/// \property PoisonResist
		int16_t PoisonResist = 0;

		/// \brief Column [CurseR]: Curse resistance
		///
		/// \property CurseResist
		int16_t CurseResist = 0;

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
}
