module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module AIServerBinder:NpcMoveItem;

import AIServerModel;

namespace aiserver_binder
{
	/// \brief generated nanodbc column binder for aiserver_model::NpcMoveItem
	export class NpcMoveItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sCastleIndex", &NpcMoveItem::BindCastleIndex},
				{"byChangeItem", &NpcMoveItem::BindChangeItem},
				{"sChangeSid", &NpcMoveItem::BindChangeId},
				{"byMoveItem", &NpcMoveItem::BindMoveItem},
				{"sMoveMinX", &NpcMoveItem::BindMoveMinX},
				{"sMoveMinY", &NpcMoveItem::BindMoveMinY},
				{"sMoveMaxX", &NpcMoveItem::BindMoveMaxX},
				{"sMoveMaxY", &NpcMoveItem::BindMoveMaxY}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CastleIndex
		static void BindCastleIndex(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CastleIndex);
		}

		/// \brief Binds a result's column to ChangeItem
		static void BindChangeItem(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ChangeItem.reset();
			}
			else
			{
				m.ChangeItem = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ChangeId
		static void BindChangeId(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ChangeId.reset();
			}
			else
			{
				m.ChangeId = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoveItem
		static void BindMoveItem(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.MoveItem.reset();
			}
			else
			{
				m.MoveItem = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoveMinX
		static void BindMoveMinX(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.MoveMinX.reset();
			}
			else
			{
				m.MoveMinX = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoveMinY
		static void BindMoveMinY(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.MoveMinY.reset();
			}
			else
			{
				m.MoveMinY = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoveMaxX
		static void BindMoveMaxX(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.MoveMaxX.reset();
			}
			else
			{
				m.MoveMaxX = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoveMaxY
		static void BindMoveMaxY(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.MoveMaxY.reset();
			}
			else
			{
				m.MoveMaxY = result.get<int16_t>(colIndex);
			}
		}

	};
}
