module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:NpcMoveItemBinder;

import :NpcMoveItem;

namespace model
{
	/// \brief generated column binder for the NpcMoveItem model, using nanodbc
	export class NpcMoveItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(NpcMoveItem& m, const nanodbc::result& result, short colIndex);

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
		static void BindCastleIndex(NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CastleIndex);
		}

		/// \brief Binds a result's column to ChangeItem
		static void BindChangeItem(NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ChangeItem = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to ChangeId
		static void BindChangeId(NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ChangeId = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to MoveItem
		static void BindMoveItem(NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.MoveItem = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to MoveMinX
		static void BindMoveMinX(NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.MoveMinX = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to MoveMinY
		static void BindMoveMinY(NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.MoveMinY = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to MoveMaxX
		static void BindMoveMaxX(NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.MoveMaxX = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to MoveMaxY
		static void BindMoveMaxY(NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			m.MoveMaxY = result.get<int16_t>(colIndex);
		}

	};
}
