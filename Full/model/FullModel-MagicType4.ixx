module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:MagicType4;

import ModelUtil;

namespace full_binder
{
	export class MagicType4;
}

namespace full_model
{
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
}
