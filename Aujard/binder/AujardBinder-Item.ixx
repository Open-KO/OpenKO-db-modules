module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module AujardBinder:Item;

import AujardModel;

namespace aujard_binder
{
	/// \brief generated nanodbc column binder for aujard::Item
	export class Item
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard::Item& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"Num", &Item::BindNumber},
				{"Countable", &Item::BindCountable}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Number
		static void BindNumber(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Number);
		}

		/// \brief Binds a result's column to Countable
		static void BindCountable(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Countable);
		}

	};
}
