module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:Magic;

namespace model
{
	class MagicBinder;
	
	/// \brief [MAGIC] Contains the configuration for magic and abilities
	/// \class Magic
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC
	export class Magic 
	{
	/// \publicsection
	public:
		using BinderType = MagicBinder;

		/// \brief Column [MagicNum]: Magic identification number
		///
		/// \property MagicNumber
		int32_t MagicNumber = 0;

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
		uint8_t BeforeAction = 0;

		/// \brief Column [TargetAction]: Target action check
		///
		/// \property TargetAction
		uint8_t TargetAction = 0;

		/// \brief Column [SelfEffect]: Self effect TODO
		///
		/// \property SelfEffect
		uint8_t SelfEffect = 0;

		/// \brief Column [FlyingEffect]: Does the skill fire a projectile
		///
		/// \property FlyingEffect
		uint8_t FlyingEffect = 0;

		/// \brief Column [TargetEffect]: Effect identifier to use on the target
		///
		/// \property TargetEffect
		int16_t TargetEffect = 0;

		/// \brief Column [Moral]: Targeting constraints
		///
		/// \property Moral
		uint8_t Moral = 0;

		/// \brief Column [SkillLevel]: Skill points required in the tree to unlock the skill
		///
		/// \property SkillLevel
		int16_t SkillLevel = 0;

		/// \brief Column [Skill]: Associated skill tree
		///
		/// \property Skill
		int16_t Skill = 0;

		/// \brief Column [Msp]: Mana cost
		///
		/// \property ManaCost
		int16_t ManaCost = 0;

		/// \brief Column [HP]: Health cost
		///
		/// \property HpCost
		int16_t HpCost = 0;

		/// \brief Column [ItemGroup]: Item group allows a skill to be constrained to having an item type equipped
		///
		/// \property ItemGroup
		uint8_t ItemGroup = 0;

		/// \brief Column [UseItem]: Must consume this item from inventory in order to activate ability
		///
		/// \property UseItem
		int32_t UseItem = 0;

		/// \brief Column [CastTime]: Time needed to cast the ability
		///
		/// \property CastTime
		uint8_t CastTime = 0;

		/// \brief Column [ReCastTime]: Cooldown
		///
		/// \property RecastTime
		uint8_t RecastTime = 0;

		/// \brief Column [SuccessRate]: Chance the skill will hit target
		///
		/// \property SuccessRate
		uint8_t SuccessRate = 0;

		/// \brief Column [Type1]: Look up effect in MAGIC_TYPEX table
		///
		/// \property Type1
		uint8_t Type1 = 0;

		/// \brief Column [Type2]: Look up effect in MAGIC_TYPEX table
		///
		/// \property Type2
		uint8_t Type2 = 0;

		/// \brief Column [Range]: Maximum range from target
		///
		/// \property Range
		int16_t Range = 0;

		/// \brief Column [Etc]: Etc TODO
		///
		/// \property Etc
		uint8_t Etc = 0;

		/// \brief Column [Event]: Event TODO
		///
		/// \property Event
		std::optional<int32_t> Event;

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

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
