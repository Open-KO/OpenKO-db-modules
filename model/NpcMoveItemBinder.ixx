module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:NpcMoveItemBinder;

import FullModel:NpcMoveItem;

namespace model
{
	/// \brief generated column binder for the NpcMoveItem model, using nanodbc
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
				{"sCastleIndex", &NpcMoveItemBinder::BindCastleIndex},
				{"byChangeItem", &NpcMoveItemBinder::BindChangeItem},
				{"sChangeSid", &NpcMoveItemBinder::BindChangeId},
				{"byMoveItem", &NpcMoveItemBinder::BindMoveItem},
				{"sMoveMinX", &NpcMoveItemBinder::BindMoveMinX},
				{"sMoveMinY", &NpcMoveItemBinder::BindMoveMinY},
				{"sMoveMaxX", &NpcMoveItemBinder::BindMoveMaxX},
				{"sMoveMaxY", &NpcMoveItemBinder::BindMoveMaxY}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CastleIndex
		static void BindCastleIndex(model::NpcMoveItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CastleIndex);
		}

		/// \brief Binds a result's column to ChangeItem
		static void BindChangeItem(model::NpcMoveItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeItem);
		}

		/// \brief Binds a result's column to ChangeId
		static void BindChangeId(model::NpcMoveItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeId);
		}

		/// \brief Binds a result's column to MoveItem
		static void BindMoveItem(model::NpcMoveItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.MoveItem);
		}

		/// \brief Binds a result's column to MoveMinX
		static void BindMoveMinX(model::NpcMoveItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinX);
		}

		/// \brief Binds a result's column to MoveMinY
		static void BindMoveMinY(model::NpcMoveItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinY);
		}

		/// \brief Binds a result's column to MoveMaxX
		static void BindMoveMaxX(model::NpcMoveItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMaxX);
		}

		/// \brief Binds a result's column to MoveMaxY
		static void BindMoveMaxY(model::NpcMoveItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMaxY);
		}

	};
}
