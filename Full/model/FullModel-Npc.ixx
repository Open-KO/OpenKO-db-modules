module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:Npc;

namespace full_binder
{
	export class Npc;
}

namespace full_model
{
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
		int16_t NpcId = 0;

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [sPid]: Picture identifier
		///
		/// \property PictureId
		int16_t PictureId = 0;

		/// \brief Column [sSize]: Size multiplier
		///
		/// \property Size
		int16_t Size = 0;

		/// \brief Column [iWeapon1]: Weapon 1 ItemNum
		///
		/// \property Weapon1
		int32_t Weapon1 = 0;

		/// \brief Column [iWeapon2]: Weapon 2 ItemNum
		///
		/// \property Weapon2
		int32_t Weapon2 = 0;

		/// \brief Column [byGroup]: Group
		///
		/// \property Group
		int16_t Group = 0;

		/// \brief Column [byActType]: Act Type
		///
		/// \property ActType
		int16_t ActType = 0;

		/// \brief Column [byType]: Type
		///
		/// \see EnumType
		/// \property Type
		int16_t Type = 0;
	
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
		int16_t Family = 0;

		/// \brief Column [byRank]: Rank
		///
		/// \property Rank
		int16_t Rank = 0;

		/// \brief Column [byTitle]: Title
		///
		/// \property Title
		int16_t Title = 0;

		/// \brief Column [iSellingGroup]: Npc selling group
		///
		/// \property SellingGroup
		int32_t SellingGroup = 0;

		/// \brief Column [sLevel]: Level
		///
		/// \property Level
		int16_t Level = 0;

		/// \brief Column [iExp]: Experience granted when killed
		///
		/// \property Exp
		int32_t Exp = 0;

		/// \brief Column [iLoyalty]: NP granted when killed
		///
		/// \property Loyalty
		int32_t Loyalty = 0;

		/// \brief Column [iHpPoint]: Max health
		///
		/// \property HitPoints
		int32_t HitPoints = 0;

		/// \brief Column [sMpPoint]: Max mana
		///
		/// \property ManaPoints
		int16_t ManaPoints = 0;

		/// \brief Column [sAtk]: TODO: Doc usage
		///
		/// \property Attack
		int16_t Attack = 0;

		/// \brief Column [sAc]: Armor
		///
		/// \property Armor
		int16_t Armor = 0;

		/// \brief Column [sHitRate]: Attack success rate
		///
		/// \property HitRate
		int16_t HitRate = 0;

		/// \brief Column [sEvadeRate]: Evasion Rate
		///
		/// \property EvadeRate
		int16_t EvadeRate = 0;

		/// \brief Column [sDamage]: Raw damage dealt
		///
		/// \property Damage
		int16_t Damage = 0;

		/// \brief Column [sAttackDelay]: Time to wait between attacks
		///
		/// \property AttackDelay
		int16_t AttackDelay = 0;

		/// \brief Column [bySpeed1]: Walk movement speed
		///
		/// \property WalkSpeed
		int16_t WalkSpeed = 0;

		/// \brief Column [bySpeed2]: Run movement speed
		///
		/// \property RunSpeed
		int16_t RunSpeed = 0;

		/// \brief Column [sStandtime]: Delay time while in standing state
		///
		/// \property StandTime
		int16_t StandTime = 0;

		/// \brief Column [iMagic1]: Magic identifier 1
		///
		/// \property Magic1
		int32_t Magic1 = 0;

		/// \brief Column [iMagic2]: Magic identifier 2
		///
		/// \property Magic2
		int32_t Magic2 = 0;

		/// \brief Column [iMagic3]: Magic identifier 3
		///
		/// \property Magic3
		int32_t Magic3 = 0;

		/// \brief Column [sFireR]: Fire resistance
		///
		/// \property FireResistance
		int16_t FireResistance = 0;

		/// \brief Column [sColdR]: Cold resistance
		///
		/// \property ColdResistance
		int16_t ColdResistance = 0;

		/// \brief Column [sLightningR]: Lightning resistance
		///
		/// \property LightningResistance
		int16_t LightningResistance = 0;

		/// \brief Column [sMagicR]: Magic resistance
		///
		/// \property MagicResistance
		int16_t MagicResistance = 0;

		/// \brief Column [sDiseaseR]: Disease resistance
		///
		/// \property DiseaseResistance
		int16_t DiseaseResistance = 0;

		/// \brief Column [sPoisonR]: Poison resistance
		///
		/// \property PoisonResistance
		int16_t PoisonResistance = 0;

		/// \brief Column [sLightR]: Light resistance
		///
		/// \property LightResistance
		int16_t LightResistance = 0;

		/// \brief Column [sBulk]: Bulk
		///
		/// \property Bulk
		int16_t Bulk = 0;

		/// \brief Column [byAttackRange]: Attack range
		///
		/// \property AttackRange
		int16_t AttackRange = 0;

		/// \brief Column [bySearchRange]: Search range
		///
		/// \property SearchRange
		int16_t SearchRange = 0;

		/// \brief Column [byTracingRange]: Tracing range
		///
		/// \property TracingRange
		int16_t TracingRange = 0;

		/// \brief Column [iMoney]: Coins dropped on death
		///
		/// \property Money
		int32_t Money = 0;

		/// \brief Column [sItem]: K_MONSTER_ITEM.Index drop table reference
		///
		/// \property Item
		int16_t Item = 0;

		/// \brief Column [byDirectAttack]: Direct attack
		///
		/// \property DirectAttack
		int16_t DirectAttack = 0;

		/// \brief Column [byMagicAttack]: Magic attack
		///
		/// \property MagicAttack
		int16_t MagicAttack = 0;

		/// \brief Column [byMoneyType]: Money type
		///
		/// \property MoneyType
		int16_t MoneyType = 0;

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

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
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
		const int16_t& MapKey()
		{
			return NpcId;
		}

	};
}
