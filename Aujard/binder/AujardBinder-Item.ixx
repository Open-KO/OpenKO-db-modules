module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module AujardBinder:Item;

import AujardModel;

namespace aujard_binder
{
	/// \brief generated nanodbc column binder for aujard_model::Item
	export class Item
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::Item& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"Num", &Item::BindID},
				{"Countable", &Item::BindCountable}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(aujard_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Countable
		static void BindCountable(aujard_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.Countable = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
