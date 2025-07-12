module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:ItemUpProbability;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::ItemUpProbability
	export class ItemUpProbability
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"bType", &ItemUpProbability::BindType},
				{"nMaxSuccess", &ItemUpProbability::BindMaxSuccess},
				{"nMaxFail", &ItemUpProbability::BindMaxFail},
				{"nCurSuccess", &ItemUpProbability::BindCurrentSuccess},
				{"nCurFail", &ItemUpProbability::BindCurrentFailure}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MaxSuccess
		static void BindMaxSuccess(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxSuccess);
		}

		/// \brief Binds a result's column to MaxFail
		static void BindMaxFail(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxFail);
		}

		/// \brief Binds a result's column to CurrentSuccess
		static void BindCurrentSuccess(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurrentSuccess);
		}

		/// \brief Binds a result's column to CurrentFailure
		static void BindCurrentFailure(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurrentFailure);
		}

	};
}
