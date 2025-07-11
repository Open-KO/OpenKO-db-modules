module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:NpcPos;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::NpcPos
	export class NpcPos
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

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
				{"DotCnt", &NpcPos::BindDotCount},
				{"path", &NpcPos::BindPath}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ZoneId.reset();
			}
			else
			{
				m.ZoneId = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.NpcId.reset();
			}
			else
			{
				m.NpcId = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ActType.reset();
			}
			else
			{
			m.ActType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
			}
		}

		/// \brief Binds a result's column to RegenType
		static void BindRegenType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.RegenType.reset();
			}
			else
			{
			m.RegenType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
			}
		}

		/// \brief Binds a result's column to DungeonFamily
		static void BindDungeonFamily(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DungeonFamily.reset();
			}
			else
			{
			m.DungeonFamily = static_cast<uint8_t>(result.get<int16_t>(colIndex));
			}
		}

		/// \brief Binds a result's column to SpecialType
		static void BindSpecialType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.SpecialType.reset();
			}
			else
			{
			m.SpecialType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
			}
		}

		/// \brief Binds a result's column to TrapNumber
		static void BindTrapNumber(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.TrapNumber.reset();
			}
			else
			{
			m.TrapNumber = static_cast<uint8_t>(result.get<int16_t>(colIndex));
			}
		}

		/// \brief Binds a result's column to LeftX
		static void BindLeftX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.LeftX.reset();
			}
			else
			{
				m.LeftX = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to TopZ
		static void BindTopZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.TopZ.reset();
			}
			else
			{
				m.TopZ = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to RightX
		static void BindRightX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.RightX.reset();
			}
			else
			{
				m.RightX = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to BottomZ
		static void BindBottomZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.BottomZ.reset();
			}
			else
			{
				m.BottomZ = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to LimitMinZ
		static void BindLimitMinZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.LimitMinZ.reset();
			}
			else
			{
				m.LimitMinZ = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to LimitMinX
		static void BindLimitMinX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.LimitMinX.reset();
			}
			else
			{
				m.LimitMinX = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to LimitMaxX
		static void BindLimitMaxX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.LimitMaxX.reset();
			}
			else
			{
				m.LimitMaxX = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to LimitMaxZ
		static void BindLimitMaxZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.LimitMaxZ.reset();
			}
			else
			{
				m.LimitMaxZ = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to NumNpc
		static void BindNumNpc(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.NumNpc.reset();
			}
			else
			{
			m.NumNpc = static_cast<uint8_t>(result.get<int16_t>(colIndex));
			}
		}

		/// \brief Binds a result's column to RespawnTime
		static void BindRespawnTime(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.RespawnTime.reset();
			}
			else
			{
				m.RespawnTime = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Direction
		static void BindDirection(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Direction.reset();
			}
			else
			{
				m.Direction = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to DotCount
		static void BindDotCount(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DotCount.reset();
			}
			else
			{
			m.DotCount = static_cast<uint8_t>(result.get<int16_t>(colIndex));
			}
		}

		/// \brief Binds a result's column to Path
		static void BindPath(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
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
