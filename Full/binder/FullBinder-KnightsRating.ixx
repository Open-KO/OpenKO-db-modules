module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:KnightsRating;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::KnightsRating
	export class KnightsRating
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRank", &KnightsRating::BindRank},
				{"shIndex", &KnightsRating::BindIndex},
				{"strName", &KnightsRating::BindName},
				{"nPoints", &KnightsRating::BindPoints}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			m.Index = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			m.Points = result.get<int32_t>(colIndex);
		}

	};
}
