module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:KnightsAlliance;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::KnightsAlliance
	export class KnightsAlliance
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

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
		static void BindMainAllianceKnights(model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MainAllianceKnights);
		}

		/// \brief Binds a result's column to SubAllianceKnights
		static void BindSubAllianceKnights(model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SubAllianceKnights);
		}

		/// \brief Binds a result's column to MercenaryClan1
		static void BindMercenaryClan1(model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MercenaryClan1);
		}

		/// \brief Binds a result's column to MercenaryClan2
		static void BindMercenaryClan2(model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MercenaryClan2);
		}

	};
}
