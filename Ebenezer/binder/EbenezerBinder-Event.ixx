module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:Event;

import EbenezerModel;
import BinderUtil;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::Event
	export class Event
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ZoneNum", &Event::BindZoneNumber},
				{"EventNum", &Event::BindEventNumber},
				{"Type", &Event::BindEventType},
				{"Exec1", &Event::BindExecute1},
				{"Exec2", &Event::BindExecute2},
				{"Exec3", &Event::BindExecute3},
				{"Exec4", &Event::BindExecute4},
				{"Exec5", &Event::BindExecute5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneNumber
		static void BindZoneNumber(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.ZoneNumber = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to EventNumber
		static void BindEventNumber(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EventNumber);
		}

		/// \brief Binds a result's column to EventType
		static void BindEventType(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.EventType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Execute1
		static void BindExecute1(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute1);
		}

		/// \brief Binds a result's column to Execute2
		static void BindExecute2(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute2);
		}

		/// \brief Binds a result's column to Execute3
		static void BindExecute3(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute3);
		}

		/// \brief Binds a result's column to Execute4
		static void BindExecute4(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute4);
		}

		/// \brief Binds a result's column to Execute5
		static void BindExecute5(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute5);
		}

	};
}
