module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:ConcurrentBinder;

import FullModel:Concurrent;

namespace model
{
	/// \brief generated column binder for the Concurrent model, using nanodbc
	export class ConcurrentBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::Concurrent& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"serverid", &ConcurrentBinder::BindServerId},
				{"zone1_count", &ConcurrentBinder::BindZone1Count},
				{"zone2_count", &ConcurrentBinder::BindZone2Count},
				{"zone3_count", &ConcurrentBinder::BindZone3Count},
				{"bz", &ConcurrentBinder::BindBz}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(model::Concurrent& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to Zone1Count
		static void BindZone1Count(model::Concurrent& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Zone1Count);
		}

		/// \brief Binds a result's column to Zone2Count
		static void BindZone2Count(model::Concurrent& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Zone2Count);
		}

		/// \brief Binds a result's column to Zone3Count
		static void BindZone3Count(model::Concurrent& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Zone3Count);
		}

		/// \brief Binds a result's column to Bz
		static void BindBz(model::Concurrent& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Bz);
		}

	};
}
