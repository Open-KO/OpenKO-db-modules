module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:KnightsAllianceBinder;

import :KnightsAlliance;

namespace model
{
	/// \brief generated column binder for the KnightsAlliance model, using nanodbc
	export class KnightsAllianceBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(KnightsAlliance& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sMainAllianceKnights", &KnightsAllianceBinder::BindMainAllianceKnights},
				{"sSubAllianceKnights", &KnightsAllianceBinder::BindSubAllianceKnights},
				{"sMercenaryClan_1", &KnightsAllianceBinder::BindMercenaryClan1},
				{"sMercenaryClan_2", &KnightsAllianceBinder::BindMercenaryClan2}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MainAllianceKnights
		static void BindMainAllianceKnights(KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MainAllianceKnights);
		}

		/// \brief Binds a result's column to SubAllianceKnights
		static void BindSubAllianceKnights(KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SubAllianceKnights);
		}

		/// \brief Binds a result's column to MercenaryClan1
		static void BindMercenaryClan1(KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MercenaryClan1);
		}

		/// \brief Binds a result's column to MercenaryClan2
		static void BindMercenaryClan2(KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MercenaryClan2);
		}

	};
}
