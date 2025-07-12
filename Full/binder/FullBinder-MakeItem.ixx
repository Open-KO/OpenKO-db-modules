module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MakeItem;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MakeItem
	export class MakeItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MakeItem::BindIndex},
				{"strItemInfo", &MakeItem::BindItemInfo},
				{"iItemCode", &MakeItem::BindItemCode},
				{"byItemLevel", &MakeItem::BindItemLevel}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to ItemInfo
		static void BindItemInfo(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemInfo.reset();
			}
			else
			{
				m.ItemInfo = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemCode
		static void BindItemCode(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemCode);
		}

		/// \brief Binds a result's column to ItemLevel
		static void BindItemLevel(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemLevel = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
