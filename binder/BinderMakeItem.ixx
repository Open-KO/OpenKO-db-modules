module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:MakeItem;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderMakeItem
	export class MakeItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MakeItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MakeItemBinder::BindIndex},
				{"strItemInfo", &MakeItemBinder::BindItemInfo},
				{"iItemCode", &MakeItemBinder::BindItemCode},
				{"byItemLevel", &MakeItemBinder::BindItemLevel}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to ItemInfo
		static void BindItemInfo(model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemInfo = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ItemCode
		static void BindItemCode(model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemCode);
		}

		/// \brief Binds a result's column to ItemLevel
		static void BindItemLevel(model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemLevel);
		}

	};
}
