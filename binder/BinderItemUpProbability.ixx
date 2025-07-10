module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:ItemUpProbability;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderItemUpProbability
	export class ItemUpProbabilityBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::ItemUpProbability& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"bType", &ItemUpProbabilityBinder::BindType},
				{"nMaxSuccess", &ItemUpProbabilityBinder::BindMaxSuccess},
				{"nMaxFail", &ItemUpProbabilityBinder::BindMaxFail},
				{"nCurSuccess", &ItemUpProbabilityBinder::BindCurrentSuccess},
				{"nCurFail", &ItemUpProbabilityBinder::BindCurrentFailure}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Type
		static void BindType(model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to MaxSuccess
		static void BindMaxSuccess(model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxSuccess);
		}

		/// \brief Binds a result's column to MaxFail
		static void BindMaxFail(model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxFail);
		}

		/// \brief Binds a result's column to CurrentSuccess
		static void BindCurrentSuccess(model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurrentSuccess);
		}

		/// \brief Binds a result's column to CurrentFailure
		static void BindCurrentFailure(model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurrentFailure);
		}

	};
}
