module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module AIServerModel:Magic;

import ModelUtil;

namespace aiserver_binder
{
	export class Magic;
}

namespace aiserver_model
{
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
}
