module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module AIServerModel:NpcPos;

import ModelUtil;

namespace aiserver_binder
{
	export class NpcPos;
}

namespace aiserver_model
{
	/// \brief [K_NPCPOS] NPC Spawn Positions
	/// \class NpcPos
	/// \xrefitem gamedb "Game Database" "Game Database" K_NPCPOS NPC Spawn Positions
	export class NpcPos 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::NpcPos;

		/// \brief Column [ZoneID]: Zone Identifier
		///
		/// \property ZoneId
		std::optional<int16_t> ZoneId;

		/// \brief Column [NpcID]: NPC Identifier (K_NPC.sSid)
		///
		/// \property NpcId
		std::optional<int32_t> NpcId;

		/// \brief Column [ActType]: Act type TODO
		///
		/// \property ActType
		std::optional<uint8_t> ActType;

		/// \brief Column [RegenType]: Regen type TODO
		///
		/// \property RegenType
		std::optional<uint8_t> RegenType;

		/// \brief Column [DungeonFamily]: Dungeon family TODO
		///
		/// \property DungeonFamily
		std::optional<uint8_t> DungeonFamily;

		/// \brief Column [SpecialType]: Special type TODO
		///
		/// \property SpecialType
		std::optional<uint8_t> SpecialType;

		/// \brief Column [TrapNumber]: Trap number
		///
		/// \property TrapNumber
		std::optional<uint8_t> TrapNumber;

		/// \brief Column [LeftX]: X-coordinate representing the left side of the spawn area
		///
		/// \property LeftX
		std::optional<int32_t> LeftX;

		/// \brief Column [TopZ]: Z-coordinate representing the top side of the spawn area
		///
		/// \property TopZ
		std::optional<int32_t> TopZ;

		/// \brief Column [RightX]: X-coordinate representing the right side of the spawn area
		///
		/// \property RightX
		std::optional<int32_t> RightX;

		/// \brief Column [BottomZ]: Z-coordinate representing the bottom side of the spawn area
		///
		/// \property BottomZ
		std::optional<int32_t> BottomZ;

		/// \brief Column [LimitMinZ]: Minimum z-coordinate value for valid roaming
		///
		/// \property LimitMinZ
		std::optional<int32_t> LimitMinZ;

		/// \brief Column [LimitMinX]: Minimum x-coordinate value for valid roaming
		///
		/// \property LimitMinX
		std::optional<int32_t> LimitMinX;

		/// \brief Column [LimitMaxX]: Maximum x-coordinate value for valid roaming
		///
		/// \property LimitMaxX
		std::optional<int32_t> LimitMaxX;

		/// \brief Column [LimitMaxZ]: Maximum z-coordinate value for valid roaming
		///
		/// \property LimitMaxZ
		std::optional<int32_t> LimitMaxZ;

		/// \brief Column [NumNPC]: Target number of NPCs for the spawn area
		///
		/// \property NumNpc
		std::optional<uint8_t> NumNpc;

		/// \brief Column [RegTime]: How long it takes for a dead NPC to respawn
		///
		/// \property RespawnTime
		std::optional<int16_t> RespawnTime;

		/// \brief Column [byDirection]: Direction TODO
		///
		/// \property Direction
		std::optional<int32_t> Direction;

		/// \brief Column [DotCnt]: Dot count TODO
		///
		/// \property DotCount
		std::optional<uint8_t> DotCount;

		/// \brief Column [path]: Pathfinding data TODO
		///
		/// \property Path
		std::optional<std::string> Path;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "K_NPCPOS";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"ZoneID", "NpcID", "ActType", "RegenType", "DungeonFamily", "SpecialType", "TrapNumber", "LeftX", "TopZ", "RightX", "BottomZ", "LimitMinZ", "LimitMinX", "LimitMaxX", "LimitMaxZ", "NumNPC", "RegTime", "byDirection", "DotCnt", "path"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};
}
