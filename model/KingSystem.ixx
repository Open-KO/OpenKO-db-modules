module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:KingSystem;

namespace model
{
	class KingSystemBinder;
	
	/// \brief [KING_SYSTEM] King System
	/// \class KingSystem
	/// \xrefitem gamedb "Game Database" "Game Database" KING_SYSTEM
	export class KingSystem 
	{
	/// \publicsection
	public:
		using BinderType = KingSystemBinder;

		/// \brief Column [byNation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = 0;

		/// \brief Column [byType]: Type TODO
		///
		/// \property Type
		uint8_t Type = 0;

		/// \brief Column [sYear]: Year
		///
		/// \property Year
		int16_t Year = 0;

		/// \brief Column [byMonth]: Month
		///
		/// \property Month
		uint8_t Month = 0;

		/// \brief Column [byDay]: Day
		///
		/// \property Day
		uint8_t Day = 0;

		/// \brief Column [byHour]: Hour
		///
		/// \property Hour
		uint8_t Hour = 0;

		/// \brief Column [byMinute]: Minute
		///
		/// \property Minute
		uint8_t Minute = 0;

		/// \brief Column [byImType]: ImType TODO
		///
		/// \property ImType
		uint8_t ImType = 0;

		/// \brief Column [sImYear]: ImYear
		///
		/// \property ImYear
		int16_t ImYear = 0;

		/// \brief Column [byImMonth]: ImMonth
		///
		/// \property ImMonth
		uint8_t ImMonth = 0;

		/// \brief Column [byImDay]: ImDay
		///
		/// \property ImDay
		uint8_t ImDay = 0;

		/// \brief Column [byImHour]: ImHour
		///
		/// \property ImHour
		uint8_t ImHour = 0;

		/// \brief Column [byImMinute]: ImMinute
		///
		/// \property ImMinute
		uint8_t ImMinute = 0;

		/// \brief Column [byNoahEvent]: Noah Event
		///
		/// \property NoahEvent
		uint8_t NoahEvent = 0;

		/// \brief Column [byNoahEvent_Day]: NoahEvent Day
		///
		/// \property NoahEventDay
		uint8_t NoahEventDay = 0;

		/// \brief Column [byNoahEvent_Hour]: NoahEvent Hour
		///
		/// \property NoahEventHour
		uint8_t NoahEventHour = 0;

		/// \brief Column [byNoahEvent_Minute]: NoahEvent Minute
		///
		/// \property NoahEventMinute
		uint8_t NoahEventMinute = 0;

		/// \brief Column [sNoahEvent_Duration]: NoahEvent Duration
		///
		/// \property NoahEventDuration
		int16_t NoahEventDuration = 0;

		/// \brief Column [byExpEvent]: Experience Event
		///
		/// \property ExpEvent
		uint8_t ExpEvent = 0;

		/// \brief Column [byExpEvent_Day]: Experience Event Day
		///
		/// \property ExpEventDay
		uint8_t ExpEventDay = 0;

		/// \brief Column [byExpEvent_Hour]: Experience Event Hour
		///
		/// \property ExpEventHour
		uint8_t ExpEventHour = 0;

		/// \brief Column [byExpEvent_Minute]: Experience Event Minute
		///
		/// \property ExpEventMinute
		uint8_t ExpEventMinute = 0;

		/// \brief Column [sExpEvent_Duration]: Experience Event Duration
		///
		/// \property ExpEventDuration
		int16_t ExpEventDuration = 0;

		/// \brief Column [nTribute]: Tribute TODO Tax Rate?
		///
		/// \property Tribute
		int32_t Tribute = 0;

		/// \brief Column [byTerritoryTariff]: Territory tariff
		///
		/// \property TerritoryTariff
		uint8_t TerritoryTariff = 0;

		/// \brief Column [nTerritoryTax]: Territory tax
		///
		/// \property TerritoryTax
		int32_t TerritoryTax = 0;

		/// \brief Column [nNationalTreasury]: National treasury
		///
		/// \property NationalTreasury
		int32_t NationalTreasury = 0;

		/// \brief Column [strKingName]: King character identifier
		///
		/// \property KingName
		std::optional<std::string> KingName;

		/// \brief Column [strImRequestID]: Im Request Id TODO
		///
		/// \property ImRequestId
		std::optional<std::string> ImRequestId;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "KING_SYSTEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"byNation", "byType", "sYear", "byMonth", "byDay", "byHour", "byMinute", "byImType", "sImYear", "byImMonth", "byImDay", "byImHour", "byImMinute", "byNoahEvent", "byNoahEvent_Day", "byNoahEvent_Hour", "byNoahEvent_Minute", "sNoahEvent_Duration", "byExpEvent", "byExpEvent_Day", "byExpEvent_Hour", "byExpEvent_Minute", "sExpEvent_Duration", "nTribute", "byTerritoryTariff", "nTerritoryTax", "nNationalTreasury", "strKingName", "strImRequestID"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
