module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:EventTrigger;

namespace model
{
	class EventTrigger;

	/// \brief generated column binder for the EventTrigger model, using nanodbc
	export class EventTriggerBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(EventTrigger& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &EventTriggerBinder::BindIndex},
				{"bNpcType", &EventTriggerBinder::BindNpcType},
				{"sNpcID", &EventTriggerBinder::BindNpcId},
				{"nTriggerNum", &EventTriggerBinder::BindTriggerNumber}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(EventTrigger& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcType
		static void BindNpcType(EventTrigger& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NpcType);
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(EventTrigger& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to TriggerNumber
		static void BindTriggerNumber(EventTrigger& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.TriggerNumber);
		}

	};
}
