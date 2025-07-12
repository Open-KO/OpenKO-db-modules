module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:Battle;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::Battle
	export class Battle
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &Battle::BindIndex},
				{"byNation", &Battle::BindNation}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
