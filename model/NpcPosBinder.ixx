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
		static void BindZoneId(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.ZoneId = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.NpcId = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.ActType = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to RegenType
		static void BindRegenType(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.RegenType = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to DungeonFamily
		static void BindDungeonFamily(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.DungeonFamily = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to SpecialType
		static void BindSpecialType(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.SpecialType = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to TrapNumber
		static void BindTrapNumber(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.TrapNumber = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to LeftX
		static void BindLeftX(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.LeftX = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to TopZ
		static void BindTopZ(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.TopZ = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to RightX
		static void BindRightX(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.RightX = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to BottomZ
		static void BindBottomZ(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.BottomZ = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to LimitMinZ
		static void BindLimitMinZ(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.LimitMinZ = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to LimitMinX
		static void BindLimitMinX(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.LimitMinX = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to LimitMaxX
		static void BindLimitMaxX(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.LimitMaxX = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to LimitMaxZ
		static void BindLimitMaxZ(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.LimitMaxZ = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to NumNpc
		static void BindNumNpc(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.NumNpc = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to RespawnTime
		static void BindRespawnTime(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.RespawnTime = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Direction
		static void BindDirection(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.Direction = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to DotCount
		static void BindDotCount(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.DotCount = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Path
		static void BindPath(NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			m.Path = result.get<std::string>(colIndex);
		}

	};
}
