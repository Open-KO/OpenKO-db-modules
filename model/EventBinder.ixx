module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:EventBinder;

import :Event;

namespace model
{
	/// \brief generated column binder for the Event model, using nanodbc
	export class EventBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(Event& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ZoneNum", &EventBinder::BindZoneNumber},
				{"EventNum", &EventBinder::BindEventNumber},
				{"Type", &EventBinder::BindEventType},
				{"Cond1", &EventBinder::BindCondition1},
				{"Cond2", &EventBinder::BindCondition2},
				{"Cond3", &EventBinder::BindCondition3},
				{"Cond4", &EventBinder::BindCondition4},
				{"Cond5", &EventBinder::BindCondition5},
				{"Exec1", &EventBinder::BindExecute1},
				{"Exec2", &EventBinder::BindExecute2},
				{"Exec3", &EventBinder::BindExecute3},
				{"Exec4", &EventBinder::BindExecute4},
				{"Exec5", &EventBinder::BindExecute5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneNumber
		static void BindZoneNumber(Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneNumber);
		}

		/// \brief Binds a result's column to EventNumber
		static void BindEventNumber(Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EventNumber);
		}

		/// \brief Binds a result's column to EventType
		static void BindEventType(Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EventType);
		}

		/// \brief Binds a result's column to Condition1
		static void BindCondition1(Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Condition1 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Condition2
		static void BindCondition2(Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Condition2 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Condition3
		static void BindCondition3(Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Condition3 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Condition4
		static void BindCondition4(Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Condition4 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Condition5
		static void BindCondition5(Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Condition5 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Execute1
		static void BindExecute1(Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Execute1 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Execute2
		static void BindExecute2(Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Execute2 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Execute3
		static void BindExecute3(Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Execute3 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Execute4
		static void BindExecute4(Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Execute4 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Execute5
		static void BindExecute5(Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Execute5 = result.get<std::string>(colIndex);
		}

	};
}
