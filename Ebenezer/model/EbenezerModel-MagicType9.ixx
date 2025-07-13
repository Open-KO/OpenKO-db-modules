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
		/// \property ID
		int32_t ID = {};

		/// \brief Column [ValidGroup]: Valid group
		///
		/// \property ValidGroup
		uint8_t ValidGroup = {};

		/// \brief Column [NationChange]: Nation change
		///
		/// \property NationChange
		uint8_t NationChange = {};

		/// \brief Column [MonsterNum]: Monster number
		///
		/// \property MonsterNumber
		int16_t MonsterNumber = {};

		/// \brief Column [TargetChange]: Target change
		///
		/// \property TargetChange
		uint8_t TargetChange = {};

		/// \brief Column [StateChange]: State change
		///
		/// \property StateChange
		uint8_t StateChange = {};

		/// \brief Column [Radius]: Radius
		///
		/// \property Radius
		int16_t Radius = {};

		/// \brief Column [Hitrate]: Hit rate
		///
		/// \property HitRate
		int16_t HitRate = {};

		/// \brief Column [Duration]: Duration
		///
		/// \property Duration
		int16_t Duration = {};

		/// \brief Column [AddDamage]: AddDamage
		///
		/// \property AddDamage
		int16_t AddDamage = {};

		/// \brief Column [Vision]: Vision
		///
		/// \property Vision
		int16_t Vision = {};

		/// \brief Column [NeedItem]: Needs item
		///
		/// \property NeedItem
		int32_t NeedItem = {};

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
			return ID;
		}

	};
}
