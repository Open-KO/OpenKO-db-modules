module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module AIServerModel:Npc;

import ModelUtil;

namespace aiserver_binder
{
	export class Npc;
}

namespace aiserver_model
{
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
}
