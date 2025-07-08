module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:KnightsRatingBinder;

import :KnightsRating;

namespace model
{
	/// \brief generated column binder for the KnightsRating model, using nanodbc
	export class KnightsRatingBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(KnightsRating& m, const nanodbc::result& result, short colIndex);

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
		static void BindRank(KnightsRating& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(KnightsRating& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Name
		static void BindName(KnightsRating& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(KnightsRating& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.Points);
		}

	};
}
