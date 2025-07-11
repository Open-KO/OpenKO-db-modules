module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:KingSystem;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::KingSystem
	export class KingSystem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byNation", &KingSystem::BindNation},
				{"byType", &KingSystem::BindType},
				{"sYear", &KingSystem::BindYear},
				{"byMonth", &KingSystem::BindMonth},
				{"byDay", &KingSystem::BindDay},
				{"byHour", &KingSystem::BindHour},
				{"byMinute", &KingSystem::BindMinute},
				{"byImType", &KingSystem::BindImType},
				{"sImYear", &KingSystem::BindImYear},
				{"byImMonth", &KingSystem::BindImMonth},
				{"byImDay", &KingSystem::BindImDay},
				{"byImHour", &KingSystem::BindImHour},
				{"byImMinute", &KingSystem::BindImMinute},
				{"byNoahEvent", &KingSystem::BindNoahEvent},
				{"byNoahEvent_Day", &KingSystem::BindNoahEventDay},
				{"byNoahEvent_Hour", &KingSystem::BindNoahEventHour},
				{"byNoahEvent_Minute", &KingSystem::BindNoahEventMinute},
				{"sNoahEvent_Duration", &KingSystem::BindNoahEventDuration},
				{"byExpEvent", &KingSystem::BindExpEvent},
				{"byExpEvent_Day", &KingSystem::BindExpEventDay},
				{"byExpEvent_Hour", &KingSystem::BindExpEventHour},
				{"byExpEvent_Minute", &KingSystem::BindExpEventMinute},
				{"sExpEvent_Duration", &KingSystem::BindExpEventDuration},
				{"nTribute", &KingSystem::BindTribute},
				{"byTerritoryTariff", &KingSystem::BindTerritoryTariff},
				{"nTerritoryTax", &KingSystem::BindTerritoryTax},
				{"nNationalTreasury", &KingSystem::BindNationalTreasury},
				{"strKingName", &KingSystem::BindKingName},
				{"strImRequestID", &KingSystem::BindImRequestId}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Year
		static void BindYear(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Year);
		}

		/// \brief Binds a result's column to Month
		static void BindMonth(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Month);
		}

		/// \brief Binds a result's column to Day
		static void BindDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Day);
		}

		/// \brief Binds a result's column to Hour
		static void BindHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Hour);
		}

		/// \brief Binds a result's column to Minute
		static void BindMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Minute);
		}

		/// \brief Binds a result's column to ImType
		static void BindImType(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImType);
		}

		/// \brief Binds a result's column to ImYear
		static void BindImYear(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImYear);
		}

		/// \brief Binds a result's column to ImMonth
		static void BindImMonth(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImMonth);
		}

		/// \brief Binds a result's column to ImDay
		static void BindImDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImDay);
		}

		/// \brief Binds a result's column to ImHour
		static void BindImHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImHour);
		}

		/// \brief Binds a result's column to ImMinute
		static void BindImMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImMinute);
		}

		/// \brief Binds a result's column to NoahEvent
		static void BindNoahEvent(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoahEvent);
		}

		/// \brief Binds a result's column to NoahEventDay
		static void BindNoahEventDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoahEventDay);
		}

		/// \brief Binds a result's column to NoahEventHour
		static void BindNoahEventHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoahEventHour);
		}

		/// \brief Binds a result's column to NoahEventMinute
		static void BindNoahEventMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoahEventMinute);
		}

		/// \brief Binds a result's column to NoahEventDuration
		static void BindNoahEventDuration(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoahEventDuration);
		}

		/// \brief Binds a result's column to ExpEvent
		static void BindExpEvent(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpEvent);
		}

		/// \brief Binds a result's column to ExpEventDay
		static void BindExpEventDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpEventDay);
		}

		/// \brief Binds a result's column to ExpEventHour
		static void BindExpEventHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpEventHour);
		}

		/// \brief Binds a result's column to ExpEventMinute
		static void BindExpEventMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpEventMinute);
		}

		/// \brief Binds a result's column to ExpEventDuration
		static void BindExpEventDuration(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpEventDuration);
		}

		/// \brief Binds a result's column to Tribute
		static void BindTribute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Tribute);
		}

		/// \brief Binds a result's column to TerritoryTariff
		static void BindTerritoryTariff(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TerritoryTariff);
		}

		/// \brief Binds a result's column to TerritoryTax
		static void BindTerritoryTax(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.TerritoryTax);
		}

		/// \brief Binds a result's column to NationalTreasury
		static void BindNationalTreasury(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NationalTreasury);
		}

		/// \brief Binds a result's column to KingName
		static void BindKingName(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			m.KingName = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ImRequestId
		static void BindImRequestId(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			m.ImRequestId = result.get<std::string>(colIndex);
		}

	};
}
