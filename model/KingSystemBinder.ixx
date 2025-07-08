module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:KingSystemBinder;

import :KingSystem;

namespace model
{
	/// \brief generated column binder for the KingSystem model, using nanodbc
	export class KingSystemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(KingSystem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byNation", &KingSystemBinder::BindNation},
				{"byType", &KingSystemBinder::BindType},
				{"sYear", &KingSystemBinder::BindYear},
				{"byMonth", &KingSystemBinder::BindMonth},
				{"byDay", &KingSystemBinder::BindDay},
				{"byHour", &KingSystemBinder::BindHour},
				{"byMinute", &KingSystemBinder::BindMinute},
				{"byImType", &KingSystemBinder::BindImType},
				{"sImYear", &KingSystemBinder::BindImYear},
				{"byImMonth", &KingSystemBinder::BindImMonth},
				{"byImDay", &KingSystemBinder::BindImDay},
				{"byImHour", &KingSystemBinder::BindImHour},
				{"byImMinute", &KingSystemBinder::BindImMinute},
				{"byNoahEvent", &KingSystemBinder::BindNoahEvent},
				{"byNoahEvent_Day", &KingSystemBinder::BindNoahEventDay},
				{"byNoahEvent_Hour", &KingSystemBinder::BindNoahEventHour},
				{"byNoahEvent_Minute", &KingSystemBinder::BindNoahEventMinute},
				{"sNoahEvent_Duration", &KingSystemBinder::BindNoahEventDuration},
				{"byExpEvent", &KingSystemBinder::BindExpEvent},
				{"byExpEvent_Day", &KingSystemBinder::BindExpEventDay},
				{"byExpEvent_Hour", &KingSystemBinder::BindExpEventHour},
				{"byExpEvent_Minute", &KingSystemBinder::BindExpEventMinute},
				{"sExpEvent_Duration", &KingSystemBinder::BindExpEventDuration},
				{"nTribute", &KingSystemBinder::BindTribute},
				{"byTerritoryTariff", &KingSystemBinder::BindTerritoryTariff},
				{"nTerritoryTax", &KingSystemBinder::BindTerritoryTax},
				{"nNationalTreasury", &KingSystemBinder::BindNationalTreasury},
				{"strKingName", &KingSystemBinder::BindKingName},
				{"strImRequestID", &KingSystemBinder::BindImRequestId}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Type
		static void BindType(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Year
		static void BindYear(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Year);
		}

		/// \brief Binds a result's column to Month
		static void BindMonth(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Month);
		}

		/// \brief Binds a result's column to Day
		static void BindDay(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Day);
		}

		/// \brief Binds a result's column to Hour
		static void BindHour(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Hour);
		}

		/// \brief Binds a result's column to Minute
		static void BindMinute(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Minute);
		}

		/// \brief Binds a result's column to ImType
		static void BindImType(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImType);
		}

		/// \brief Binds a result's column to ImYear
		static void BindImYear(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImYear);
		}

		/// \brief Binds a result's column to ImMonth
		static void BindImMonth(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImMonth);
		}

		/// \brief Binds a result's column to ImDay
		static void BindImDay(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImDay);
		}

		/// \brief Binds a result's column to ImHour
		static void BindImHour(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImHour);
		}

		/// \brief Binds a result's column to ImMinute
		static void BindImMinute(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImMinute);
		}

		/// \brief Binds a result's column to NoahEvent
		static void BindNoahEvent(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoahEvent);
		}

		/// \brief Binds a result's column to NoahEventDay
		static void BindNoahEventDay(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoahEventDay);
		}

		/// \brief Binds a result's column to NoahEventHour
		static void BindNoahEventHour(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoahEventHour);
		}

		/// \brief Binds a result's column to NoahEventMinute
		static void BindNoahEventMinute(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoahEventMinute);
		}

		/// \brief Binds a result's column to NoahEventDuration
		static void BindNoahEventDuration(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoahEventDuration);
		}

		/// \brief Binds a result's column to ExpEvent
		static void BindExpEvent(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpEvent);
		}

		/// \brief Binds a result's column to ExpEventDay
		static void BindExpEventDay(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpEventDay);
		}

		/// \brief Binds a result's column to ExpEventHour
		static void BindExpEventHour(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpEventHour);
		}

		/// \brief Binds a result's column to ExpEventMinute
		static void BindExpEventMinute(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpEventMinute);
		}

		/// \brief Binds a result's column to ExpEventDuration
		static void BindExpEventDuration(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpEventDuration);
		}

		/// \brief Binds a result's column to Tribute
		static void BindTribute(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Tribute);
		}

		/// \brief Binds a result's column to TerritoryTariff
		static void BindTerritoryTariff(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TerritoryTariff);
		}

		/// \brief Binds a result's column to TerritoryTax
		static void BindTerritoryTax(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.TerritoryTax);
		}

		/// \brief Binds a result's column to NationalTreasury
		static void BindNationalTreasury(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NationalTreasury);
		}

		/// \brief Binds a result's column to KingName
		static void BindKingName(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.KingName);
		}

		/// \brief Binds a result's column to ImRequestId
		static void BindImRequestId(KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.ImRequestId);
		}

	};
}
