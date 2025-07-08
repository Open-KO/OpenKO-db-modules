module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:NpcPosBinder;

import :NpcPos;

namespace model
{
	/// \brief generated column binder for the NpcPos model, using nanodbc
	export class NpcPosBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(NpcPos& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ZoneID", &NpcPosBinder::BindZoneId},
				{"NpcID", &NpcPosBinder::BindNpcId},
				{"ActType", &NpcPosBinder::BindActType},
				{"RegenType", &NpcPosBinder::BindRegenType},
				{"DungeonFamily", &NpcPosBinder::BindDungeonFamily},
				{"SpecialType", &NpcPosBinder::BindSpecialType},
				{"TrapNumber", &NpcPosBinder::BindTrapNumber},
				{"LeftX", &NpcPosBinder::BindLeftX},
				{"TopZ", &NpcPosBinder::BindTopZ},
				{"RightX", &NpcPosBinder::BindRightX},
				{"BottomZ", &NpcPosBinder::BindBottomZ},
				{"LimitMinZ", &NpcPosBinder::BindLimitMinZ},
				{"LimitMinX", &NpcPosBinder::BindLimitMinX},
				{"LimitMaxX", &NpcPosBinder::BindLimitMaxX},
				{"LimitMaxZ", &NpcPosBinder::BindLimitMaxZ},
				{"NumNPC", &NpcPosBinder::BindNumNpc},
				{"RegTime", &NpcPosBinder::BindRespawnTime},
				{"byDirection", &NpcPosBinder::BindDirection},
				{"DotCnt", &NpcPosBinder::BindDotCount},
				{"path", &NpcPosBinder::BindPath}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<uint8_t>>(colIndex, m.ActType);
		}

		/// \brief Binds a result's column to RegenType
		static void BindRegenType(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<uint8_t>>(colIndex, m.RegenType);
		}

		/// \brief Binds a result's column to DungeonFamily
		static void BindDungeonFamily(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<uint8_t>>(colIndex, m.DungeonFamily);
		}

		/// \brief Binds a result's column to SpecialType
		static void BindSpecialType(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<uint8_t>>(colIndex, m.SpecialType);
		}

		/// \brief Binds a result's column to TrapNumber
		static void BindTrapNumber(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<uint8_t>>(colIndex, m.TrapNumber);
		}

		/// \brief Binds a result's column to LeftX
		static void BindLeftX(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.LeftX);
		}

		/// \brief Binds a result's column to TopZ
		static void BindTopZ(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.TopZ);
		}

		/// \brief Binds a result's column to RightX
		static void BindRightX(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.RightX);
		}

		/// \brief Binds a result's column to BottomZ
		static void BindBottomZ(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.BottomZ);
		}

		/// \brief Binds a result's column to LimitMinZ
		static void BindLimitMinZ(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.LimitMinZ);
		}

		/// \brief Binds a result's column to LimitMinX
		static void BindLimitMinX(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.LimitMinX);
		}

		/// \brief Binds a result's column to LimitMaxX
		static void BindLimitMaxX(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.LimitMaxX);
		}

		/// \brief Binds a result's column to LimitMaxZ
		static void BindLimitMaxZ(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.LimitMaxZ);
		}

		/// \brief Binds a result's column to NumNpc
		static void BindNumNpc(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<uint8_t>>(colIndex, m.NumNpc);
		}

		/// \brief Binds a result's column to RespawnTime
		static void BindRespawnTime(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.RespawnTime);
		}

		/// \brief Binds a result's column to Direction
		static void BindDirection(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.Direction);
		}

		/// \brief Binds a result's column to DotCount
		static void BindDotCount(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<uint8_t>>(colIndex, m.DotCount);
		}

		/// \brief Binds a result's column to Path
		static void BindPath(NpcPos& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Path);
		}

	};
}
