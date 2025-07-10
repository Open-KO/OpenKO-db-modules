module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:NpcMoveItem;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderNpcMoveItem
	export class NpcMoveItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

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
		static void BindCastleIndex(model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CastleIndex);
		}

		/// \brief Binds a result's column to ChangeItem
		static void BindChangeItem(model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ChangeItem = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to ChangeId
		static void BindChangeId(model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ChangeId = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to MoveItem
		static void BindMoveItem(model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.MoveItem = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to MoveMinX
		static void BindMoveMinX(model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.MoveMinX = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to MoveMinY
		static void BindMoveMinY(model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.MoveMinY = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to MoveMaxX
		static void BindMoveMaxX(model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.MoveMaxX = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to MoveMaxY
		static void BindMoveMaxY(model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.MoveMaxY = result.get<int16_t>(colIndex);
		}

	};
}
