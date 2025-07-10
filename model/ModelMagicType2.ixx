module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module Model:MagicType2;

namespace binder
{
	export class MagicType2Binder;
}

namespace model
{

	export class MagicType2 
	{
	/// \publicsection
	public:
		using BinderType = binder::MagicType2Binder;

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

		/// \brief Column [HitType]: Projectile type
		///
		/// \see EnumHitType
		/// \property HitType
		int16_t HitType = 0;
	
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
		int16_t NeedArrow = 0;

		/// \brief Column [AddDamagePlus]: Additional flat damage caused by ability
		///
		/// \property AddDamagePlus
		std::optional<int16_t> AddDamagePlus;

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
				"iNum", "Name", "Description", "HitType", "HitRate", "AddDamage", "AddRange", "NeedArrow", "AddDamagePlus"
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
