module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:EventTrigger;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::EventTrigger
	export class EventTrigger
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &EventTrigger::BindIndex},
				{"bNpcType", &EventTrigger::BindNpcType},
				{"sNpcID", &EventTrigger::BindNpcId},
				{"nTriggerNum", &EventTrigger::BindTriggerNumber}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcType
		static void BindNpcType(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcType);
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to TriggerNumber
		static void BindTriggerNumber(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.TriggerNumber);
		}

	};
}
