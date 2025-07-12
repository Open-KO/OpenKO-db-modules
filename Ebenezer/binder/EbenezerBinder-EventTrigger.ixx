module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:EventTrigger;

import EbenezerModel;
import BinderUtil;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::EventTrigger
	export class EventTrigger
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

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
		static void BindIndex(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcType
		static void BindNpcType(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			m.NpcType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to TriggerNumber
		static void BindTriggerNumber(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.TriggerNumber);
		}

	};
}
