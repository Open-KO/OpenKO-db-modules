module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:Concurrent;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderConcurrent
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
				{"serverid", &Concurrent::BindServerId},
				{"zone1_count", &Concurrent::BindZone1Count},
				{"zone2_count", &Concurrent::BindZone2Count},
				{"zone3_count", &Concurrent::BindZone3Count},
				{"bz", &Concurrent::BindBz}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to Zone1Count
		static void BindZone1Count(model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			m.Zone1Count = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Zone2Count
		static void BindZone2Count(model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			m.Zone2Count = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Zone3Count
		static void BindZone3Count(model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			m.Zone3Count = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Bz
		static void BindBz(model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			m.Bz = result.get<std::string>(colIndex);
		}

	};
}
