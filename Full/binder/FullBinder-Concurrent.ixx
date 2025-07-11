module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:Concurrent;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::Concurrent
	export class Concurrent
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Concurrent& m, const nanodbc::result& result, short colIndex);

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
		static void BindServerId(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			m.ServerId = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Zone1Count
		static void BindZone1Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Zone1Count);
		}

		/// \brief Binds a result's column to Zone2Count
		static void BindZone2Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Zone2Count);
		}

		/// \brief Binds a result's column to Zone3Count
		static void BindZone3Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Zone3Count);
		}

		/// \brief Binds a result's column to Bz
		static void BindBz(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Bz.reset();
			}
			else
			{
				m.Bz = result.get<std::string>(colIndex);
			}
		}

	};
}
