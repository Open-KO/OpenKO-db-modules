module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module AIServerBinder:MakeItem;

import AIServerModel;
import BinderUtil;

namespace aiserver_binder
{
	/// \brief generated nanodbc column binder for aiserver_model::MakeItem
	export class MakeItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MakeItem::BindIndex},
				{"iItemCode", &MakeItem::BindItemCode},
				{"byItemLevel", &MakeItem::BindItemLevel}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to ItemCode
		static void BindItemCode(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemCode);
		}

		/// \brief Binds a result's column to ItemLevel
		static void BindItemLevel(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemLevel = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
