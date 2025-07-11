module;

#include <cstdint>
#include <ctime>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:UserData;

namespace full_binder
{
	export class UserData;
}

namespace full_model
{
	/// \brief [USERDATA] User data contains saved character information
	/// \class UserData
	/// \xrefitem gamedb "Game Database" "Game Database" USERDATA User data contains saved character information
	export class UserData 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserData;

		/// \brief Column [strUserId]: User identifier
		///
		/// \property UserId
		std::string UserId;

		/// \brief Column [Nation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = 0;

		/// \brief Column [Race]: Racial subtype
		///
		/// \see EnumRace
		/// \property Race
		uint8_t Race = 0;
	
		/// \enum EnumRace
		/// \brief Known valid values for Race
		enum class EnumRace
		{
			AechTaurek = 1, ///< Karus warrior
			Tuarek = 2, ///< Karus male
			WrinkleTuarek = 3, ///< Karus mage
			PuriTuarek = 4, ///< Karus female
			Barbarian = 11, ///< ElMorad warrior
			ElMoradMale = 12, ///< ElMorad male
			ElMoradFemale = 13 ///< ElMorad female
		};

		/// \brief Column [Class]: Player job class
		///
		/// \see EnumClass
		/// \property Class
		int16_t Class = 0;
	
		/// \enum EnumClass
		/// \brief Known valid values for Class
		enum class EnumClass
		{
			KarusWarrior = 101, ///< Karus warrior pre-job change
			KarusRogue = 102, ///< Karus rogue pre-job change
			KarusWizard = 103, ///< Karus wizard pre-job change
			KarusPriest = 104, ///< Karus priest pre-job change
			Berserker = 105, ///< Karus warrior
			Guardian = 106, ///< Karus master warrior
			Hunter = 107, ///< Karus rogue
			Penetrator = 108, ///< Karus master rogue
			Sorcerer = 109, ///< Karus wizard
			Necromancer = 110, ///< Karus master wizard
			Shaman = 111, ///< Karus priest
			DarkPriest = 112, ///< Karus master priest
			ElmoWarrior = 201, ///< ElMorad warrior pre-job change
			ElmoRogue = 202, ///< ElMorad rogue pre-job change
			ElmoWizard = 203, ///< ElMorad wizard pre-job change
			ElmoPriest = 204, ///< ElMorad priest pre-job change
			Blade = 205, ///< ElMorad warrior
			Protector = 206, ///< ElMorad master warrior
			Ranger = 207, ///< ElMorad rogue
			Assassin = 208, ///< ElMorad master rogue
			Mage = 209, ///< ElMorad wizard
			Enchanter = 210, ///< ElMorad master wizard
			Cleric = 211, ///< ElMorad priest
			Druid = 212 ///< ElMorad master priest
		};

		/// \brief Column [HairColor]: Hair color
		///
		/// \property HairColor
		uint8_t HairColor = 0;

		/// \brief Column [Rank]: User ranking
		///
		/// \property Rank
		uint8_t Rank = 0;

		/// \brief Column [Title]: Title
		///
		/// \property Title
		uint8_t Title = 0;

		/// \brief Column [Level]: Level
		///
		/// \property Level
		uint8_t Level = 0;

		/// \brief Column [Exp]: Experience
		///
		/// \property Exp
		int32_t Exp = 0;

		/// \brief Column [Loyalty]: National points
		///
		/// \property Loyalty
		int32_t Loyalty = 0;

		/// \brief Column [Face]: Face
		///
		/// \property Face
		uint8_t Face = 0;

		/// \brief Column [City]: City
		///
		/// \property City
		uint8_t City = 0;

		/// \brief Column [Knights]: Knights identifier (guild/clan)
		///
		/// \property KnightsId
		int16_t KnightsId = 0;

		/// \brief Column [Fame]: Fame
		///
		/// \property Fame
		uint8_t Fame = 0;

		/// \brief Column [Hp]: Health
		///
		/// \property Hp
		int16_t Hp = 0;

		/// \brief Column [Mp]: Mana
		///
		/// \property Mp
		int16_t Mp = 0;

		/// \brief Column [Sp]: Sp TODO
		///
		/// \property Sp
		int16_t Sp = 0;

		/// \brief Column [Strong]: Strength
		///
		/// \property Strength
		uint8_t Strength = 0;

		/// \brief Column [Sta]: Stamina
		///
		/// \property Stamina
		uint8_t Stamina = 0;

		/// \brief Column [Dex]: Dexterity
		///
		/// \property Dexterity
		uint8_t Dexterity = 0;

		/// \brief Column [Intel]: Intelligence
		///
		/// \property Intelligence
		uint8_t Intelligence = 0;

		/// \brief Column [Cha]: Charisma
		///
		/// \property Charisma
		uint8_t Charisma = 0;

		/// \brief Column [Authority]: Authorization level
		///
		/// \property Authority
		uint8_t Authority = 0;

		/// \brief Column [Points]: Unspent stat points
		///
		/// \property StatPoints
		uint8_t StatPoints = 0;

		/// \brief Column [Gold]: Gold
		///
		/// \property Gold
		int32_t Gold = 0;

		/// \brief Column [Zone]: Current zone
		///
		/// \property Zone
		uint8_t Zone = 0;

		/// \brief Column [Bind]: Bind
		///
		/// \property Bind
		std::optional<int16_t> Bind;

		/// \brief Column [PX]: X-axis position coordinate
		///
		/// \property PosX
		int32_t PosX = 0;

		/// \brief Column [PZ]: Z-axis position coordinate
		///
		/// \property PosZ
		int32_t PosZ = 0;

		/// \brief Column [PY]: Y-axis position coordinate
		///
		/// \property PosY
		int32_t PosY = 0;

		/// \brief Column [dwTime]: DwTime TODO
		///
		/// \property DwTime
		int32_t DwTime = 0;

		/// \brief Column [strSkill]: Skill data
		///
		/// \property SkillData
		std::optional<std::string> SkillData;

		/// \brief Column [strItem]: Character inventory
		///
		/// \property ItemData
		std::optional<std::string> ItemData;

		/// \brief Column [strSerial]: Serial TODO
		///
		/// \property Serial
		std::optional<std::string> Serial;

		/// \brief Column [sQuestCount]: Completed quest count
		///
		/// \property QuestCount
		int16_t QuestCount = 0;

		/// \brief Column [strQuest]: Quest data
		///
		/// \property QuestData
		std::optional<std::string> QuestData;

		/// \brief Column [MannerPoint]: Manner points are awarded when a higher level character helps a Beginner Knight level up
		///
		/// \property MannerPoint
		int32_t MannerPoint = 0;

		/// \brief Column [LoyaltyMonthly]: Monthly national points
		///
		/// \property LoyaltyMonthly
		int32_t LoyaltyMonthly = 0;

		/// \brief Column [CreateTime]: Creation time
		///
		/// \property CreateTime
		std::time_t CreateTime;

		/// \brief Column [UpdateTime]: Update time
		///
		/// \property UpdateTime
		std::optional<std::time_t> UpdateTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USERDATA";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strUserId", "Nation", "Race", "Class", "HairColor", "Rank", "Title", "Level", "Exp", "Loyalty", "Face", "City", "Knights", "Fame", "Hp", "Mp", "Sp", "Strong", "Sta", "Dex", "Intel", "Cha", "Authority", "Points", "Gold", "Zone", "Bind", "PX", "PZ", "PY", "dwTime", "strSkill", "strItem", "strSerial", "sQuestCount", "strQuest", "MannerPoint", "LoyaltyMonthly", "CreateTime", "UpdateTime"
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
				"strUserId"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const std::string& MapKey()
		{
			return UserId;
		}

	};
}
