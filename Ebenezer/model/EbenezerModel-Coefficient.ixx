module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:Coefficient;

import ModelUtil;

namespace ebenezer_binder
{
	export class Coefficient;
}

namespace ebenezer_model
{
	/// \brief [COEFFICIENT] Coefficient relationship between a character class, weapon types, and stats
	/// \class Coefficient
	/// \xrefitem gamedb "Game Database" "Game Database" COEFFICIENT Coefficient relationship between a character class, weapon types, and stats
	export class Coefficient 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::Coefficient;

		/// \brief Column [sClass]: ClassIdentifier
		///
		/// \property ClassId
		int16_t ClassId = {};

		/// \brief Column [ShortSword]: Short Sword Coefficient
		///
		/// \property ShortSword
		double ShortSword = {};

		/// \brief Column [Sword]: Sword Coefficient
		///
		/// \property Sword
		double Sword = {};

		/// \brief Column [Axe]: Axe Coefficient
		///
		/// \property Axe
		double Axe = {};

		/// \brief Column [Club]: Club Coefficient
		///
		/// \property Club
		double Club = {};

		/// \brief Column [Spear]: Spear Coefficient
		///
		/// \property Spear
		double Spear = {};

		/// \brief Column [Pole]: Polearm Coefficient
		///
		/// \property Pole
		double Pole = {};

		/// \brief Column [Staff]: Staff Coefficient
		///
		/// \property Staff
		double Staff = {};

		/// \brief Column [Bow]: Bow Coefficient
		///
		/// \property Bow
		double Bow = {};

		/// \brief Column [Hp]: Hit Point Coefficient
		///
		/// \property HitPoint
		double HitPoint = {};

		/// \brief Column [Mp]: Mana Point Coefficient
		///
		/// \property ManaPoint
		double ManaPoint = {};

		/// \brief Column [Sp]: Sp Coefficient
		///
		/// \property Sp
		double Sp = {};

		/// \brief Column [Ac]: Armor Coefficient
		///
		/// \property Armor
		double Armor = {};

		/// \brief Column [Hitrate]: Hit Rate Coefficient
		///
		/// \property HitRate
		double HitRate = {};

		/// \brief Column [Evasionrate]: Evasion Rate Coefficient
		///
		/// \property Evasionrate
		double Evasionrate = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "COEFFICIENT";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sClass", "ShortSword", "Sword", "Axe", "Club", "Spear", "Pole", "Staff", "Bow", "Hp", "Mp", "Sp", "Ac", "Hitrate", "Evasionrate"
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
				"sClass"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return ClassId;
		}

	};
}
