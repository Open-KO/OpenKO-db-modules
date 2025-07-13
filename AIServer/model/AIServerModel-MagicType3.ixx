module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module AIServerModel:MagicType3;

import ModelUtil;

namespace aiserver_binder
{
	export class MagicType3;
}

namespace aiserver_model
{
	/// \brief [MAGIC_TYPE3] Supports Area of Effect and Damage over Time effects
	/// \class MagicType3
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE3 Supports Area of Effect and Damage over Time effects
	export class MagicType3 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MagicType3;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Radius]: Area of effect circle radius
		///
		/// \property Radius
		uint8_t Radius = {};

		/// \brief Column [Angle]: Angle seems unused/unimplemented TODO
		///
		/// \property Angle
		int16_t Angle = {};

		/// \brief Column [DirectType]: Damage calculation type
		///
		/// \see EnumDirectType
		/// \property DirectType
		uint8_t DirectType = {};

		/// \enum EnumDirectType
		/// \brief Known valid values for DirectType
		enum class EnumDirectType
		{
			Unknown0 = 0, ///< TODO: Used by some 300000+ DoT abilities
			FlatHp = 1, ///< Flat damage against health
			FlatMana = 2, ///< Flat damage against mana
			FlatDurability = 4, ///< Flat damage applied to durability
			Unknown5 = 5, ///< TODO: Used by some 400000+ abilities
			AbsorbHp = 8, ///< Absorbs health from target
			PercentHp = 9, ///< Deals damage relative to targets current health
			Unknown11 = 11, ///< TODO: Used by 220011
			Unknown12 = 12, ///< TODO: Used by 490402
			Unknown255 = 255 ///< TODO: Used by 501011
		};

		/// \brief Column [FirstDamage]: Damage applied on hit
		///
		/// \property FirstDamage
		int16_t FirstDamage = {};

		/// \brief Column [EndDamage]: Damage taken at end of effect
		///
		/// \property EndDamage
		int16_t EndDamage = {};

		/// \brief Column [TimeDamage]: Total damage dealt over Duration
		///
		/// \property TimeDamage
		int16_t TimeDamage = {};

		/// \brief Column [Duration]: Duration of damage over time effects
		///
		/// \property Duration
		uint8_t Duration = {};

		/// \brief Column [Attribute]: Attribute TODO
		///
		/// \property Attribute
		uint8_t Attribute = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE3";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Radius", "Angle", "DirectType", "FirstDamage", "EndDamage", "TimeDamage", "Duration", "Attribute"
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
