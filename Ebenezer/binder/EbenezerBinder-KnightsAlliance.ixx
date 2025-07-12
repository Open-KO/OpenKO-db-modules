module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:KnightsAlliance;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::KnightsAlliance
	export class KnightsAlliance
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sMainAllianceKnights", &KnightsAlliance::BindMainAllianceKnights},
				{"sSubAllianceKnights", &KnightsAlliance::BindSubAllianceKnights},
				{"sMercenaryClan_1", &KnightsAlliance::BindMercenaryClan1},
				{"sMercenaryClan_2", &KnightsAlliance::BindMercenaryClan2}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MainAllianceKnights
		static void BindMainAllianceKnights(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MainAllianceKnights);
		}

		/// \brief Binds a result's column to SubAllianceKnights
		static void BindSubAllianceKnights(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SubAllianceKnights);
		}

		/// \brief Binds a result's column to MercenaryClan1
		static void BindMercenaryClan1(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MercenaryClan1);
		}

		/// \brief Binds a result's column to MercenaryClan2
		static void BindMercenaryClan2(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MercenaryClan2);
		}

	};
}
