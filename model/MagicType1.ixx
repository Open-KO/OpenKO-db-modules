module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:MagicType1;

namespace model
{
	class MagicType1Binder;
	
	/// \brief [MAGIC_TYPE1] Type 1 covers melee abilities
	/// \class MagicType1
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE1
	export class MagicType1 
	{
	/// \publicsection
	public:
		using BinderType = MagicType1Binder;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property MagicNumber
		int32_t MagicNumber = 0;

		/// \brief Column [Name]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [Description]: Description
		///
		/// \property Description
		std::optional<std::string> Description;

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
				"iNum", "Name", "Description", "Type", "HitRate", "Hit", "AddDamage", "Delay", "ComboType", "ComboCount", "ComboDamage", "Range"
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
