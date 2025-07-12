module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:MagicType9;

import ModelUtil;

namespace ebenezer_binder
{
	export class MagicType9;
}

namespace ebenezer_model
{
	/// \brief [MAGIC_TYPE9] Supports stealth and detection abilities
	/// \class MagicType9
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE9 Supports stealth and detection abilities
	export class MagicType9 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::MagicType9;

		/// \brief Column [iNum]: Magic number identifier
		///
		/// \property MagicNumber
		int32_t MagicNumber = 0;

		/// \brief Column [ValidGroup]: Valid group
		///
		/// \property ValidGroup
		uint8_t ValidGroup = 0;

		/// \brief Column [NationChange]: Nation change
		///
		/// \property NationChange
		uint8_t NationChange = 0;

		/// \brief Column [MonsterNum]: Monster number
		///
		/// \property MonsterNumber
		int16_t MonsterNumber = 0;

		/// \brief Column [TargetChange]: Target change
		///
		/// \property TargetChange
		uint8_t TargetChange = 0;

		/// \brief Column [StateChange]: State change
		///
		/// \property StateChange
		uint8_t StateChange = 0;

		/// \brief Column [Radius]: Radius
		///
		/// \property Radius
		int16_t Radius = 0;

		/// \brief Column [Hitrate]: Hit rate
		///
		/// \property HitRate
		int16_t HitRate = 0;

		/// \brief Column [Duration]: Duration
		///
		/// \property Duration
		int16_t Duration = 0;

		/// \brief Column [AddDamage]: AddDamage
		///
		/// \property AddDamage
		int16_t AddDamage = 0;

		/// \brief Column [Vision]: Vision
		///
		/// \property Vision
		int16_t Vision = 0;

		/// \brief Column [NeedItem]: Needs item
		///
		/// \property NeedItem
		int32_t NeedItem = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE9";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "ValidGroup", "NationChange", "MonsterNum", "TargetChange", "StateChange", "Radius", "Hitrate", "Duration", "AddDamage", "Vision", "NeedItem"
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
			return MagicNumber;
		}

	};
}
