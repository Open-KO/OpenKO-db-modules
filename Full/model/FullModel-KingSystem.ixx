module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:KingSystem;

import ModelUtil;

namespace full_binder
{
	export class KingSystem;
}

namespace full_model
{
	/// \brief [KING_SYSTEM] King System
	/// \class KingSystem
	/// \xrefitem gamedb "Game Database" "Game Database" KING_SYSTEM King System
	export class KingSystem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::KingSystem;

		/// \brief Column [byNation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [byType]: Type TODO
		///
		/// \property Type
		uint8_t Type = {};

		/// \brief Column [sYear]: Year
		///
		/// \property Year
		int16_t Year = {};

		/// \brief Column [byMonth]: Month
		///
		/// \property Month
		uint8_t Month = {};

		/// \brief Column [byDay]: Day
		///
		/// \property Day
		uint8_t Day = {};

		/// \brief Column [byHour]: Hour
		///
		/// \property Hour
		uint8_t Hour = {};

		/// \brief Column [byMinute]: Minute
		///
		/// \property Minute
		uint8_t Minute = {};

		/// \brief Column [byImType]: ImType TODO
		///
		/// \property ImType
		uint8_t ImType = {};

		/// \brief Column [sImYear]: ImYear
		///
		/// \property ImYear
		int16_t ImYear = {};

		/// \brief Column [byImMonth]: ImMonth
		///
		/// \property ImMonth
		uint8_t ImMonth = {};

		/// \brief Column [byImDay]: ImDay
		///
		/// \property ImDay
		uint8_t ImDay = {};

		/// \brief Column [byImHour]: ImHour
		///
		/// \property ImHour
		uint8_t ImHour = {};

		/// \brief Column [byImMinute]: ImMinute
		///
		/// \property ImMinute
		uint8_t ImMinute = {};

		/// \brief Column [byNoahEvent]: Noah Event
		///
		/// \property NoahEvent
		uint8_t NoahEvent = {};

		/// \brief Column [byNoahEvent_Day]: NoahEvent Day
		///
		/// \property NoahEventDay
		uint8_t NoahEventDay = {};

		/// \brief Column [byNoahEvent_Hour]: NoahEvent Hour
		///
		/// \property NoahEventHour
		uint8_t NoahEventHour = {};

		/// \brief Column [byNoahEvent_Minute]: NoahEvent Minute
		///
		/// \property NoahEventMinute
		uint8_t NoahEventMinute = {};

		/// \brief Column [sNoahEvent_Duration]: NoahEvent Duration
		///
		/// \property NoahEventDuration
		int16_t NoahEventDuration = {};

		/// \brief Column [byExpEvent]: Experience Event
		///
		/// \property ExpEvent
		uint8_t ExpEvent = {};

		/// \brief Column [byExpEvent_Day]: Experience Event Day
		///
		/// \property ExpEventDay
		uint8_t ExpEventDay = {};

		/// \brief Column [byExpEvent_Hour]: Experience Event Hour
		///
		/// \property ExpEventHour
		uint8_t ExpEventHour = {};

		/// \brief Column [byExpEvent_Minute]: Experience Event Minute
		///
		/// \property ExpEventMinute
		uint8_t ExpEventMinute = {};

		/// \brief Column [sExpEvent_Duration]: Experience Event Duration
		///
		/// \property ExpEventDuration
		int16_t ExpEventDuration = {};

		/// \brief Column [nTribute]: Tribute TODO Tax Rate?
		///
		/// \property Tribute
		int32_t Tribute = {};

		/// \brief Column [byTerritoryTariff]: Territory tariff
		///
		/// \property TerritoryTariff
		uint8_t TerritoryTariff = {};

		/// \brief Column [nTerritoryTax]: Territory tax
		///
		/// \property TerritoryTax
		int32_t TerritoryTax = {};

		/// \brief Column [nNationalTreasury]: National treasury
		///
		/// \property NationalTreasury
		int32_t NationalTreasury = {};

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
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"byNation", "byType", "sYear", "byMonth", "byDay", "byHour", "byMinute", "byImType", "sImYear", "byImMonth", "byImDay", "byImHour", "byImMinute", "byNoahEvent", "byNoahEvent_Day", "byNoahEvent_Hour", "byNoahEvent_Minute", "sNoahEvent_Duration", "byExpEvent", "byExpEvent_Day", "byExpEvent_Hour", "byExpEvent_Minute", "sExpEvent_Duration", "nTribute", "byTerritoryTariff", "nTerritoryTax", "nNationalTreasury", "strKingName", "strImRequestID"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};
}
