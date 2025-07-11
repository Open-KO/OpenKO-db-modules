module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:MagicType5;

import ModelUtil;

namespace ebenezer_binder
{
	export class MagicType5;
}

namespace ebenezer_model
{
	/// \brief [MAGIC_TYPE5] Supports recovery skills
	/// \class MagicType5
	/// \xrefitem gamedb "Game Database" "Game Database" MAGIC_TYPE5 Supports recovery skills
	export class MagicType5 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::MagicType5;

		/// \brief Column [iNum]: Magic number identifier
		///
		/// \property ID
		int32_t ID = 0;

		/// \brief Column [Type]: Type
		///
		/// \see EnumType
		/// \property Type
		uint8_t Type = 0;
	
		/// \enum EnumType
		/// \brief Known valid values for Type
		enum class EnumType
		{
			CureDisease = 1, ///< Removes diseases
			CureCurse = 2, ///< Remove curses
			Resurrection = 3, ///< Ability ignores defense
			Resurrection4 = 4, ///< Not sure how it differs from 3 other than it being triggered from an item
			Unknown5 = 5 ///< TODO: 300133 only record using it
		};

		/// \brief Column [ExpRecover]: Percent of experience loss recovered
		///
		/// \property ExpRecover
		uint8_t ExpRecover = 0;

		/// \brief Column [NeedStone]: Resurrection stones required
		///
		/// \property NeedStone
		int16_t NeedStone = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "MAGIC_TYPE5";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"iNum", "Type", "ExpRecover", "NeedStone"
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
