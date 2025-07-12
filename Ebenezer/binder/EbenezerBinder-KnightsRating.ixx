module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:KnightsRating;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::KnightsRating
	export class KnightsRating
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRank", &KnightsRating::BindRank},
				{"shIndex", &KnightsRating::BindIndex},
				{"nPoints", &KnightsRating::BindPoints}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Index.reset();
			}
			else
			{
				m.Index = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Points.reset();
			}
			else
			{
				m.Points = result.get<int32_t>(colIndex);
			}
		}

	};
}
