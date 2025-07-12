module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:MagicType8;

import ModelUtil;

namespace ebenezer_binder
{
	export class MagicType8;
}

namespace ebenezer_model
{
	/// \brief [MAGIC_TYPE8] Supports warp magic
	/// \class MagicType8
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE8 Supports warp magic
	export class MagicType8 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::MagicType8;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property MagicNumber
		int32_t MagicNumber = 0;

		/// \brief Column [Target]: Target
		///
		/// \property Target
		uint8_t Target = 0;

		/// \brief Column [Radius]: Radius
		///
		/// \property Radius
		int16_t Radius = 0;

		/// \brief Column [WarpType]: Warp type
		///
		/// \see EnumWarpType
		/// \property WarpType
		uint8_t WarpType = 0;
	
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
				"iNum", "Target", "Radius", "WarpType", "ExpRecover"
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
