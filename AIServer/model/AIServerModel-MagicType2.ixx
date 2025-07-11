module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module AIServerModel:MagicType2;

import ModelUtil;

namespace aiserver_binder
{
	export class MagicType2;
}

namespace aiserver_model
{
	/// \brief [MAGIC_TYPE2] Supports bow abilities
	/// \class MagicType2
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE2 Supports bow abilities
	export class MagicType2 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MagicType2;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = 0;

		/// \brief Column [HitType]: Projectile type
		///
		/// \see EnumHitType
		/// \property HitType
		uint8_t HitType = 0;
	
		/// \enum EnumHitType
		/// \brief Known valid values for HitType
		enum class EnumHitType
		{
			Normal = 0, ///< Fire and forget targeting
			Seeking = 0 ///< Projectile follows target and always hits (unless blocked by collision)
		};

		/// \brief Column [HitRate]: Hit chance modifier - 100 is normal
		///
		/// \property HitRateMod
		int16_t HitRateMod = 0;

		/// \brief Column [AddDamage]: Hit damage modifier - 100 is normal
		///
		/// \property DamageMod
		int16_t DamageMod = 0;

		/// \brief Column [AddRange]: Range modifier - 100 is normal
		///
		/// \property RangeMod
		int16_t RangeMod = 0;

		/// \brief Column [NeedArrow]: Number of arrows needed for ability
		///
		/// \property NeedArrow
		uint8_t NeedArrow = 0;

		/// \brief Column [AddDamagePlus]: Additional flat damage caused by ability
		///
		/// \property AddDamagePlus
		int16_t AddDamagePlus = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE2";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "HitType", "HitRate", "AddDamage", "AddRange", "NeedArrow", "AddDamagePlus"
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
