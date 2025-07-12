module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module AIServerModel:MagicType4;

import ModelUtil;

namespace aiserver_binder
{
	export class MagicType4;
}

namespace aiserver_model
{
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
		/// \property MagicNumber
		int32_t MagicNumber = 0;

		/// \brief Column [BuffType]: Buff type
		///
		/// \see EnumBuffType
		/// \property BuffType
		uint8_t BuffType = 0;
	
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
		uint8_t Radius = 0;

		/// \brief Column [Duration]: Effect duration
		///
		/// \property Duration
		int16_t Duration = 0;

		/// \brief Column [AttackSpeed]: Attack speed modifier - 100 is normal
		///
		/// \property AttackSpeed
		uint8_t AttackSpeed = 0;

		/// \brief Column [Speed]: Movement speed modifier - 100 is normal
		///
		/// \property Speed
		uint8_t Speed = 0;

		/// \brief Column [AC]: Armor modifier
		///
		/// \property Armor
		int16_t Armor = 0;

		/// \brief Column [ACPct]: Armor percent modifier
		///
		/// \property ArmorPercent
		int16_t ArmorPercent = 0;

		/// \brief Column [Attack]: Attack power modifier
		///
		/// \property AttackPower
		uint8_t AttackPower = 0;

		/// \brief Column [MagicAttack]: Magic power modifier
		///
		/// \property MagicPower
		uint8_t MagicPower = 0;

		/// \brief Column [MaxHP]: Maximum health modifier
		///
		/// \property MaxHp
		int16_t MaxHp = 0;

		/// \brief Column [MaxHpPct]: Maximum health percent modifier
		///
		/// \property MaxHpPercent
		int16_t MaxHpPercent = 0;

		/// \brief Column [MaxMP]: Maximum mana modifier
		///
		/// \property MaxMp
		int16_t MaxMp = 0;

		/// \brief Column [MaxMpPct]: Maximum mana percent modifier
		///
		/// \property MaxMpPercent
		int16_t MaxMpPercent = 0;

		/// \brief Column [HitRate]: Hit chance multiplier
		///
		/// \property HitRate
		uint8_t HitRate = 0;

		/// \brief Column [AvoidRate]: Evasion chance multiplier
		///
		/// \property AvoidRate
		int16_t AvoidRate = 0;

		/// \brief Column [Str]: Strength modifier
		///
		/// \property Strength
		int16_t Strength = 0;

		/// \brief Column [Sta]: Stamina modifier
		///
		/// \property Stamina
		int16_t Stamina = 0;

		/// \brief Column [Dex]: Dexterity modifier
		///
		/// \property Dexterity
		int16_t Dexterity = 0;

		/// \brief Column [Intel]: Intelligence modifier
		///
		/// \property Intelligence
		int16_t Intelligence = 0;

		/// \brief Column [Cha]: Charisma modifier
		///
		/// \property Charisma
		int16_t Charisma = 0;

		/// \brief Column [FireR]: Fire resistance
		///
		/// \property FireResist
		uint8_t FireResist = 0;

		/// \brief Column [ColdR]: Cold resistance
		///
		/// \property ColdResist
		uint8_t ColdResist = 0;

		/// \brief Column [LightningR]: Lightning resistance
		///
		/// \property LightningResist
		uint8_t LightningResist = 0;

		/// \brief Column [MagicR]: Magic resistance
		///
		/// \property MagicResist
		uint8_t MagicResist = 0;

		/// \brief Column [DiseaseR]: Disease resistance
		///
		/// \property DiseaseResist
		uint8_t DiseaseResist = 0;

		/// \brief Column [PoisonR]: Poison resistance
		///
		/// \property PoisonResist
		uint8_t PoisonResist = 0;

		/// \brief Column [ExpPct]: Experience percentage modifier
		///
		/// \property ExpPercent
		uint8_t ExpPercent = 0;

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
		const int32_t& MapKey()
		{
			return MagicNumber;
		}

	};
}
