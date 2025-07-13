module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:MagicType7;

import ModelUtil;

namespace ebenezer_binder
{
	export class MagicType7;
}

namespace ebenezer_model
{
	/// \brief [MAGIC_TYPE7] Supports targeting modifications
	/// \class MagicType7
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE7 Supports targeting modifications
	export class MagicType7 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::MagicType7;

		/// \brief Column [nIndex]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [byValidGroup]: Valid group
		///
		/// \property ValidGroup
		uint8_t ValidGroup = {};

		/// \brief Column [byNatoinChange]: Nation change
		///
		/// \property NationChange
		uint8_t NationChange = {};

		/// \brief Column [shMonsterNum]: Monster number
		///
		/// \property MonsterNumber
		int16_t MonsterNumber = {};

		/// \brief Column [byTargetChange]: Monster target mode change
		///
		/// \see EnumTargetChange
		/// \property TargetChange
		uint8_t TargetChange = {};

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
		uint8_t StateChange = {};

		/// \brief Column [byRadius]: Area of effect circle radius
		///
		/// \property Radius
		uint8_t Radius = {};

		/// \brief Column [shHitrate]: Hit rate
		///
		/// \property HitRate
		int16_t HitRate = {};

		/// \brief Column [shDuration]: Duration
		///
		/// \property Duration
		int16_t Duration = {};

		/// \brief Column [shDamage]: Damage
		///
		/// \property Damage
		int16_t Damage = {};

		/// \brief Column [byVisoin]: Vision
		///
		/// \property Vision
		uint8_t Vision = {};

		/// \brief Column [nNeedItem]: Needs item
		///
		/// \property NeedItem
		int32_t NeedItem = {};

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
				"nIndex", "byValidGroup", "byNatoinChange", "shMonsterNum", "byTargetChange", "byStateChange", "byRadius", "shHitrate", "shDuration", "shDamage", "byVisoin", "nNeedItem"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
			};
			return blobColumns;
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
				"nIndex"
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
