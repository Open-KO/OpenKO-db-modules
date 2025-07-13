module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module AIServerBinder:NpcPos;

import AIServerModel;
import BinderUtil;

namespace aiserver_binder
{
	/// \brief generated nanodbc column binder for aiserver_model::NpcPos
	export class NpcPos
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ZoneID", &NpcPos::BindZoneId},
				{"NpcID", &NpcPos::BindNpcId},
				{"ActType", &NpcPos::BindActType},
				{"RegenType", &NpcPos::BindRegenType},
				{"DungeonFamily", &NpcPos::BindDungeonFamily},
				{"SpecialType", &NpcPos::BindSpecialType},
				{"TrapNumber", &NpcPos::BindTrapNumber},
				{"LeftX", &NpcPos::BindLeftX},
				{"TopZ", &NpcPos::BindTopZ},
				{"RightX", &NpcPos::BindRightX},
				{"BottomZ", &NpcPos::BindBottomZ},
				{"LimitMinZ", &NpcPos::BindLimitMinZ},
				{"LimitMinX", &NpcPos::BindLimitMinX},
				{"LimitMaxX", &NpcPos::BindLimitMaxX},
				{"LimitMaxZ", &NpcPos::BindLimitMaxZ},
				{"NumNPC", &NpcPos::BindNumNpc},
				{"RegTime", &NpcPos::BindRespawnTime},
				{"byDirection", &NpcPos::BindDirection},
				{"DotCnt", &NpcPos::BindPathPointCount},
				{"path", &NpcPos::BindPath}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.ActType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RegenType
		static void BindRegenType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.RegenType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to DungeonFamily
		static void BindDungeonFamily(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.DungeonFamily = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SpecialType
		static void BindSpecialType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.SpecialType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to TrapNumber
		static void BindTrapNumber(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.TrapNumber = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to LeftX
		static void BindLeftX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LeftX);
		}

		/// \brief Binds a result's column to TopZ
		static void BindTopZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.TopZ);
		}

		/// \brief Binds a result's column to RightX
		static void BindRightX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RightX);
		}

		/// \brief Binds a result's column to BottomZ
		static void BindBottomZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BottomZ);
		}

		/// \brief Binds a result's column to LimitMinZ
		static void BindLimitMinZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMinZ);
		}

		/// \brief Binds a result's column to LimitMinX
		static void BindLimitMinX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMinX);
		}

		/// \brief Binds a result's column to LimitMaxX
		static void BindLimitMaxX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMaxX);
		}

		/// \brief Binds a result's column to LimitMaxZ
		static void BindLimitMaxZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMaxZ);
		}

		/// \brief Binds a result's column to NumNpc
		static void BindNumNpc(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.NumNpc = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RespawnTime
		static void BindRespawnTime(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RespawnTime);
		}

		/// \brief Binds a result's column to Direction
		static void BindDirection(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Direction);
		}

		/// \brief Binds a result's column to PathPointCount
		static void BindPathPointCount(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.PathPointCount = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Path
		static void BindPath(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Path.reset();
			}
			else
			{
				m.Path = result.get<std::string>(colIndex);
			}
		}

	};
}
