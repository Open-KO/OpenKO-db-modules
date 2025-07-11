module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:MagicType7;

namespace model_binder
{
	export class MagicType7;
}

namespace model
{
	/// \brief [MAGIC_TYPE7] Supports targeting modifications
	/// \class MagicType7
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE7 Supports targeting modifications
	export class MagicType7 
	{
	/// \publicsection
	public:
		using BinderType = model_binder::MagicType7;

		/// \brief Column [nIndex]: Magic identification number
		///
		/// \property MagicNumber
		int32_t MagicNumber = 0;

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [strNote]: Note
		///
		/// \property Note
		std::optional<std::string> Note;

		/// \brief Column [byValidGroup]: Valid group
		///
		/// \property ValidGroup
		int16_t ValidGroup = 0;

		/// \brief Column [byNatoinChange]: Nation change
		///
		/// \property NationChange
		int16_t NationChange = 0;

		/// \brief Column [shMonsterNum]: Monster number
		///
		/// \property MonsterNumber
		int16_t MonsterNumber = 0;

		/// \brief Column [byTargetChange]: Monster target mode change
		///
		/// \see EnumTargetChange
		/// \property TargetChange
		int16_t TargetChange = 0;
	
		/// \enum EnumTargetChange
		/// \brief Known valid values for byTargetChange
		enum class EnumTargetChange
		{
			Provoke = 0, ///< Target will target attacker
			Sleep = 1 ///< Target gets put to sleep
		};

		/// \brief Column [byStateChange]: State change
		///
		/// \property StateChange
		int16_t StateChange = 0;

		/// \brief Column [byRadius]: Area of effect circle radius
		///
		/// \property Radius
		int16_t Radius = 0;

		/// \brief Column [shHitrate]: Hit rate
		///
		/// \property HitRate
		int16_t HitRate = 0;

		/// \brief Column [shDuration]: Duration
		///
		/// \property Duration
		int16_t Duration = 0;

		/// \brief Column [shDamage]: Damage
		///
		/// \property Damage
		int16_t Damage = 0;

		/// \brief Column [byVisoin]: Vision
		///
		/// \property Vision
		int16_t Vision = 0;

		/// \brief Column [nNeedItem]: Needs item
		///
		/// \property NeedItem
		int32_t NeedItem = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE7";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "strName", "strNote", "byValidGroup", "byNatoinChange", "shMonsterNum", "byTargetChange", "byStateChange", "byRadius", "shHitrate", "shDuration", "shDamage", "byVisoin", "nNeedItem"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"nIndex"
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
