module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:MagicType3;

namespace model
{
	class MagicType3Binder;
	
	/// \brief [MAGIC_TYPE3] Type 3 supports Area of Effect and Damage over Time effects
	/// \class MagicType3
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE3
	export class MagicType3 
	{
	/// \publicsection
	public:
		using BinderType = MagicType3Binder;

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

		/// \brief Column [Radius]: Area of effect circle radius
		///
		/// \property Radius
		uint8_t Radius = 0;

		/// \brief Column [Angle]: Angle seems unused/unimplemented TODO
		///
		/// \property Angle
		int16_t Angle = 0;

		/// \brief Column [DirectType]: Damage calculation type
		///
		/// \see EnumDirectType
		/// \property DirectType
		uint8_t DirectType = 0;
	
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
		int16_t FirstDamage = 0;

		/// \brief Column [EndDamage]: Damage taken at end of effect
		///
		/// \property EndDamage
		int16_t EndDamage = 0;

		/// \brief Column [TimeDamage]: Total damage dealt over Duration
		///
		/// \property TimeDamage
		int16_t TimeDamage = 0;

		/// \brief Column [Duration]: Duration of damage over time effects
		///
		/// \property Duration
		uint8_t Duration = 0;

		/// \brief Column [Attribute]: Attribute TODO
		///
		/// \property Attribute
		uint8_t Attribute = 0;

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
				"iNum", "Name", "Description", "Radius", "Angle", "DirectType", "FirstDamage", "EndDamage", "TimeDamage", "Duration", "Attribute"
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
