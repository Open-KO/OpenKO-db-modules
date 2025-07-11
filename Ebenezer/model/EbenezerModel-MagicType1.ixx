module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:MagicType1;

import ModelUtil;

namespace ebenezer_binder
{
	export class MagicType1;
}

namespace ebenezer_model
{
	/// \brief [MAGIC_TYPE1] Supports melee abilities
	/// \class MagicType1
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE1 Supports melee abilities
	export class MagicType1 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::MagicType1;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = 0;

		/// \brief Column [Type]: Attack special type
		///
		/// \see EnumType
		/// \property Type
		uint8_t Type = 0;
	
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
		int16_t HitRateMod = 0;

		/// \brief Column [Hit]: Hit damage modifier - 100 is normal
		///
		/// \property DamageMod
		int16_t DamageMod = 0;

		/// \brief Column [AddDamage]: Additional flat damage caused by ability
		///
		/// \property AddDamage
		int16_t AddDamage = 0;

		/// \brief Column [Delay]: Delay TODO
		///
		/// \property Delay
		uint8_t Delay = 0;

		/// \brief Column [ComboType]: Combo type TODO
		///
		/// \property ComboType
		uint8_t ComboType = 0;

		/// \brief Column [ComboCount]: Combo count TODO
		///
		/// \property ComboCount
		uint8_t ComboCount = 0;

		/// \brief Column [ComboDamage]: Combo damage multiplier
		///
		/// \property ComboDamage
		int16_t ComboDamage = 0;

		/// \brief Column [Range]: Maximum distance to target
		///
		/// \property Range
		int16_t Range = 0;

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
