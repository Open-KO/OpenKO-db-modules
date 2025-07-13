module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:NpcMoveItem;

import ModelUtil;

namespace full_binder
{
	export class NpcMoveItem;
}

namespace full_model
{
	/// \brief [K_NPC_MOVE_ITEM] NPC Move Item: TODO
	/// \class NpcMoveItem
	/// \xrefitem gamedb "Game Database" "Game Database" K_NPC_MOVE_ITEM NPC Move Item: TODO
	export class NpcMoveItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::NpcMoveItem;

		/// \brief Column [sCastleIndex]: Castle identifier TODO mostly lines up with k_npc.ssid
		///
		/// \property CastleIndex
		int16_t CastleIndex = {};

		/// \brief Column [byChangeItem]: Change Item TODO
		///
		/// \property ChangeItem
		std::optional<int32_t> ChangeItem;

		/// \brief Column [sChangeSid]: Change identifier TODO
		///
		/// \property ChangeId
		std::optional<int32_t> ChangeId;

		/// \brief Column [byMoveItem]: Move item to do
		///
		/// \property MoveItem
		std::optional<int32_t> MoveItem;

		/// \brief Column [sMoveMinX]: Minimum x-axis movement
		///
		/// \property MoveMinX
		std::optional<int16_t> MoveMinX;

		/// \brief Column [sMoveMinY]: Minimum y-axis movement
		///
		/// \property MoveMinY
		std::optional<int16_t> MoveMinY;

		/// \brief Column [sMoveMaxX]: Maximum x-axis movement
		///
		/// \property MoveMaxX
		std::optional<int16_t> MoveMaxX;

		/// \brief Column [sMoveMaxY]: Maximum y-axis movement
		///
		/// \property MoveMaxY
		std::optional<int16_t> MoveMaxY;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "K_NPC_MOVE_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"sCastleIndex", "byChangeItem", "sChangeSid", "byMoveItem", "sMoveMinX", "sMoveMinY", "sMoveMaxX", "sMoveMaxY"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"sCastleIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const
		{
			return CastleIndex;
		}

	};
}
