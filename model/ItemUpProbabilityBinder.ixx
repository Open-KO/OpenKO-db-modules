module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:ItemUpProbabilityBinder;

import :ItemUpProbability;

namespace model
{
	/// \brief generated column binder for the ItemUpProbability model, using nanodbc
	export class ItemUpProbabilityBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ItemUpProbability& m, const nanodbc::result& result, short colIndex);

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
		static void BindType(ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to MaxSuccess
		static void BindMaxSuccess(ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxSuccess);
		}

		/// \brief Binds a result's column to MaxFail
		static void BindMaxFail(ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxFail);
		}

		/// \brief Binds a result's column to CurrentSuccess
		static void BindCurrentSuccess(ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurrentSuccess);
		}

		/// \brief Binds a result's column to CurrentFailure
		static void BindCurrentFailure(ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurrentFailure);
		}

	};
}
