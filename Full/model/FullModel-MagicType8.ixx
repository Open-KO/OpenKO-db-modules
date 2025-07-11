module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:MagicType8;

namespace model_binder
{
	export class MagicType8;
}

namespace model
{
	/// \brief [MAGIC_TYPE8] Supports warp magic
	/// \class MagicType8
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE8 Supports warp magic
	export class MagicType8 
	{
	/// \publicsection
	public:
		using BinderType = model_binder::MagicType8;

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

		/// \brief Column [Target]: Target
		///
		/// \property Target
		int16_t Target = 0;

		/// \brief Column [Radius]: Radius
		///
		/// \property Radius
		int16_t Radius = 0;

		/// \brief Column [WarpType]: Warp type
		///
		/// \see EnumWarpType
		/// \property WarpType
		int16_t WarpType = 0;
	
		/// \enum EnumWarpType
		/// \brief Known valid values for WarpType
		enum class EnumWarpType
		{
			Gate = 1, ///< Teleport to saved gate
			SummonFriendly = 12, ///< Summons friendly player(s)
			SummonMonster = 21, ///< TODO
			TeleportToFriendly = 25 ///< Teleports to a party member
		};

		/// \brief Column [ExpRecover]: Experience recovery
		///
		/// \property ExpRecover
		int16_t ExpRecover = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE8";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Name", "Description", "Target", "Radius", "WarpType", "ExpRecover"
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
				"iNum"
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
