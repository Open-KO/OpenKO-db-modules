module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:MagicType6;

namespace model_binder
{
	export class MagicType6;
}

namespace model
{
	/// \brief [MAGIC_TYPE6] Supports transformation magic
	/// \class MagicType6
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE6 Supports transformation magic
	export class MagicType6 
	{
	/// \publicsection
	public:
		using BinderType = model_binder::MagicType6;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property MagicNumber
		int32_t MagicNumber = 0;

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
		int16_t Size = 0;

		/// \brief Column [TransformID]: Transformation picture identifier (K_NPC.sPid)
		///
		/// \property TransformId
		int16_t TransformId = 0;

		/// \brief Column [Duration]: Duration
		///
		/// \property Duration
		int16_t Duration = 0;

		/// \brief Column [MaxHp]: Maximum health
		///
		/// \property MaxHp
		int16_t MaxHp = 0;

		/// \brief Column [MaxMp]: Maximum mana
		///
		/// \property MaxMp
		int16_t MaxMp = 0;

		/// \brief Column [Speed]: Movement speed
		///
		/// \property Speed
		int16_t Speed = 0;

		/// \brief Column [AttackSpeed]: Attack speed
		///
		/// \property AttackSpeed
		int16_t AttackSpeed = 0;

		/// \brief Column [TotalHit]: Total hit
		///
		/// \property TotalHit
		int16_t TotalHit = 0;

		/// \brief Column [TotalAc]: Total armor
		///
		/// \property TotalArmor
		int16_t TotalArmor = 0;

		/// \brief Column [TotalHitRate]: Total hit rate
		///
		/// \property TotalHitRate
		int16_t TotalHitRate = 0;

		/// \brief Column [TotalEvasionRate]: Total evasion rate
		///
		/// \property TotalEvasionRate
		int16_t TotalEvasionRate = 0;

		/// \brief Column [TotalFireR]: Total fire resistance
		///
		/// \property TotalFireResist
		int16_t TotalFireResist = 0;

		/// \brief Column [TotalColdR]: Total cold resistance
		///
		/// \property TotalColdResist
		int16_t TotalColdResist = 0;

		/// \brief Column [TotalLightningR]: Total lightning resistance
		///
		/// \property TotalLightningResist
		int16_t TotalLightningResist = 0;

		/// \brief Column [TotalMagicR]: Total magic resistance
		///
		/// \property TotalMagicResist
		int16_t TotalMagicResist = 0;

		/// \brief Column [TotalDiseaseR]: Total disease resistance
		///
		/// \property TotalDiseaseResist
		int16_t TotalDiseaseResist = 0;

		/// \brief Column [TotalPoisonR]: Total poison resistance
		///
		/// \property TotalPoisonResist
		int16_t TotalPoisonResist = 0;

		/// \brief Column [Class]: Class
		///
		/// \property Class
		int16_t Class = 0;

		/// \brief Column [UserSkillUse]: User skill use TODO - allow skill use?
		///
		/// \property UserSkillUse
		int16_t UserSkillUse = 0;

		/// \brief Column [NeedItem]: Needs item
		///
		/// \property NeedItem
		int16_t NeedItem = 0;

		/// \brief Column [SkillSuccessRate]: Skill success rate
		///
		/// \property SkillSuccessRate
		int16_t SkillSuccessRate = 0;

		/// \brief Column [MonsterFriendly]: Do monsters ignore the player while transformed?
		///
		/// \property MonsterFriendly
		int16_t MonsterFriendly = 0;

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

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
