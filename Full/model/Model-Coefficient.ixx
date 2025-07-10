module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module Model:Coefficient;

namespace model_binder
{
	export class Coefficient;
}

namespace model
{
	/// \brief [COEFFICIENT] Coefficient relationship between a character class, weapon types, and stats
	/// \class Coefficient
	/// \xrefitem gamedb "Game Database" "Game Database" COEFFICIENT Coefficient relationship between a character class, weapon types, and stats
	export class Coefficient 
	{
	/// \publicsection
	public:
		using BinderType = model_binder::Coefficient;

		/// \brief Column [sClass]: ClassIdentifier
		///
		/// \property ClassId
		int16_t ClassId = 0;

		/// \brief Column [ShortSword]: Short Sword Coefficient
		///
		/// \property ShortSword
		double ShortSword = 0;

		/// \brief Column [Sword]: Sword Coefficient
		///
		/// \property Sword
		double Sword = 0;

		/// \brief Column [Axe]: Axe Coefficient
		///
		/// \property Axe
		double Axe = 0;

		/// \brief Column [Club]: Club Coefficient
		///
		/// \property Club
		double Club = 0;

		/// \brief Column [Spear]: Spear Coefficient
		///
		/// \property Spear
		double Spear = 0;

		/// \brief Column [Pole]: Polearm Coefficient
		///
		/// \property Pole
		double Pole = 0;

		/// \brief Column [Staff]: Staff Coefficient
		///
		/// \property Staff
		double Staff = 0;

		/// \brief Column [Bow]: Bow Coefficient
		///
		/// \property Bow
		std::optional<double> Bow;

		/// \brief Column [Hp]: Hit Point Coefficient
		///
		/// \property HitPoint
		double HitPoint = 0;

		/// \brief Column [Mp]: Magic Power Coefficient
		///
		/// \property MagicPower
		double MagicPower = 0;

		/// \brief Column [Sp]: Sp Coefficient
		///
		/// \property Sp
		double Sp = 0;

		/// \brief Column [Ac]: Armor Coefficient
		///
		/// \property Armor
		double Armor = 0;

		/// \brief Column [Hitrate]: Hit Rate Coefficient
		///
		/// \property HitRate
		double HitRate = 0;

		/// \brief Column [Evasionrate]: Evasion Rate Coefficient
		///
		/// \property Evasionrate
		double Evasionrate = 0;

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
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
