module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:Event;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::Event
	export class Event
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Event& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ZoneNum", &Event::BindZoneNumber},
				{"EventNum", &Event::BindEventNumber},
				{"Type", &Event::BindEventType},
				{"Cond1", &Event::BindCondition1},
				{"Cond2", &Event::BindCondition2},
				{"Cond3", &Event::BindCondition3},
				{"Cond4", &Event::BindCondition4},
				{"Cond5", &Event::BindCondition5},
				{"Exec1", &Event::BindExecute1},
				{"Exec2", &Event::BindExecute2},
				{"Exec3", &Event::BindExecute3},
				{"Exec4", &Event::BindExecute4},
				{"Exec5", &Event::BindExecute5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneNumber
		static void BindZoneNumber(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneNumber);
		}

		/// \brief Binds a result's column to EventNumber
		static void BindEventNumber(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EventNumber);
		}

		/// \brief Binds a result's column to EventType
		static void BindEventType(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EventType);
		}

		/// \brief Binds a result's column to Condition1
		static void BindCondition1(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Condition1 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Condition2
		static void BindCondition2(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Condition2 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Condition3
		static void BindCondition3(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Condition3 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Condition4
		static void BindCondition4(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Condition4 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Condition5
		static void BindCondition5(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Condition5 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Execute1
		static void BindExecute1(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Execute1 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Execute2
		static void BindExecute2(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Execute2 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Execute3
		static void BindExecute3(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Execute3 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Execute4
		static void BindExecute4(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Execute4 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Execute5
		static void BindExecute5(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.Execute5 = result.get<std::string>(colIndex);
		}

	};
}
