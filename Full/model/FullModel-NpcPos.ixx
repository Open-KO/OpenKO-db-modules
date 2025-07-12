module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:NpcPos;

import ModelUtil;

namespace full_binder
{
	export class NpcPos;
}

namespace full_model
{
	/// \brief [K_NPCPOS] NPC Spawn Positions
	/// \class NpcPos
	/// \xrefitem gamedb "Game Database" "Game Database" K_NPCPOS NPC Spawn Positions
	export class NpcPos 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::NpcPos;

		/// \brief Column [ZoneID]: Zone Identifier
		///
		/// \property ZoneId
		int16_t ZoneId = 0;

		/// \brief Column [NpcID]: NPC Identifier (K_NPC.sSid)
		///
		/// \property NpcId
		int32_t NpcId = 0;

		/// \brief Column [ActType]: Act type TODO
		///
		/// \property ActType
		uint8_t ActType = 0;

		/// \brief Column [RegenType]: Regen type TODO
		///
		/// \property RegenType
		uint8_t RegenType = 0;

		/// \brief Column [DungeonFamily]: Dungeon family TODO
		///
		/// \property DungeonFamily
		uint8_t DungeonFamily = 0;

		/// \brief Column [SpecialType]: Special type TODO
		///
		/// \property SpecialType
		uint8_t SpecialType = 0;

		/// \brief Column [TrapNumber]: Trap number
		///
		/// \property TrapNumber
		uint8_t TrapNumber = 0;

		/// \brief Column [LeftX]: X-coordinate representing the left side of the spawn area
		///
		/// \property LeftX
		int32_t LeftX = 0;

		/// \brief Column [TopZ]: Z-coordinate representing the top side of the spawn area
		///
		/// \property TopZ
		int32_t TopZ = 0;

		/// \brief Column [RightX]: X-coordinate representing the right side of the spawn area
		///
		/// \property RightX
		int32_t RightX = 0;

		/// \brief Column [BottomZ]: Z-coordinate representing the bottom side of the spawn area
		///
		/// \property BottomZ
		int32_t BottomZ = 0;

		/// \brief Column [LimitMinZ]: Minimum z-coordinate value for valid roaming
		///
		/// \property LimitMinZ
		int32_t LimitMinZ = 0;

		/// \brief Column [LimitMinX]: Minimum x-coordinate value for valid roaming
		///
		/// \property LimitMinX
		int32_t LimitMinX = 0;

		/// \brief Column [LimitMaxX]: Maximum x-coordinate value for valid roaming
		///
		/// \property LimitMaxX
		int32_t LimitMaxX = 0;

		/// \brief Column [LimitMaxZ]: Maximum z-coordinate value for valid roaming
		///
		/// \property LimitMaxZ
		int32_t LimitMaxZ = 0;

		/// \brief Column [NumNPC]: Target number of NPCs for the spawn area
		///
		/// \property NumNpc
		uint8_t NumNpc = 0;

		/// \brief Column [RegTime]: How long it takes for a dead NPC to respawn
		///
		/// \property RespawnTime
		int16_t RespawnTime = 0;

		/// \brief Column [byDirection]: Direction TODO
		///
		/// \property Direction
		int32_t Direction = 0;

		/// \brief Column [DotCnt]: Dot count TODO
		///
		/// \property DotCount
		uint8_t DotCount = 0;

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
