module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:ZoneInfoBinder;

import :ZoneInfo;

namespace model
{
	/// \brief generated column binder for the ZoneInfo model, using nanodbc
	export class ZoneInfoBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ZoneInfo& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ServerNo", &ZoneInfoBinder::BindServerId},
				{"ZoneNo", &ZoneInfoBinder::BindZoneId},
				{"strZoneName", &ZoneInfoBinder::BindName},
				{"InitX", &ZoneInfoBinder::BindInitX},
				{"InitZ", &ZoneInfoBinder::BindInitZ},
				{"InitY", &ZoneInfoBinder::BindInitY},
				{"Type", &ZoneInfoBinder::BindType},
				{"RoomEvent", &ZoneInfoBinder::BindRoomEvent},
				{"bz", &ZoneInfoBinder::BindBz}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to InitX
		static void BindInitX(ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitX);
		}

		/// \brief Binds a result's column to InitZ
		static void BindInitZ(ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitZ);
		}

		/// \brief Binds a result's column to InitY
		static void BindInitY(ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitY);
		}

		/// \brief Binds a result's column to Type
		static void BindType(ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to RoomEvent
		static void BindRoomEvent(ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RoomEvent);
		}

		/// \brief Binds a result's column to Bz
		static void BindBz(ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			m.Bz = result.get<std::string>(colIndex);
		}

	};
}
