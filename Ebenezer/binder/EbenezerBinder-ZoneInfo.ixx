module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:ZoneInfo;

import EbenezerModel;
import BinderUtil;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::ZoneInfo
	export class ZoneInfo
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ServerNo", &ZoneInfo::BindServerId},
				{"ZoneNo", &ZoneInfo::BindZoneId},
				{"strZoneName", &ZoneInfo::BindName},
				{"InitX", &ZoneInfo::BindInitX},
				{"InitZ", &ZoneInfo::BindInitZ},
				{"InitY", &ZoneInfo::BindInitY},
				{"Type", &ZoneInfo::BindType},
				{"RoomEvent", &ZoneInfo::BindRoomEvent}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			m.ServerId = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to InitX
		static void BindInitX(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitX);
		}

		/// \brief Binds a result's column to InitZ
		static void BindInitZ(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitZ);
		}

		/// \brief Binds a result's column to InitY
		static void BindInitY(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitY);
		}

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RoomEvent
		static void BindRoomEvent(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			m.RoomEvent = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
