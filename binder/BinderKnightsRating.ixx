module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:KnightsRating;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderKnightsRating
	export class KnightsRatingBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRank", &KnightsRatingBinder::BindRank},
				{"shIndex", &KnightsRatingBinder::BindIndex},
				{"strName", &KnightsRatingBinder::BindName},
				{"nPoints", &KnightsRatingBinder::BindPoints}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			m.Index = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			m.Points = result.get<int32_t>(colIndex);
		}

	};
}
