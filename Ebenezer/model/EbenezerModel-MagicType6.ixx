module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:MagicType6;

import ModelUtil;

namespace ebenezer_binder
{
	export class MagicType6;
}

namespace ebenezer_model
{
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
