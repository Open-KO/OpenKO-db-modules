module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:KnightsCape;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::KnightsCape
	export class KnightsCape
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sCapeIndex", &KnightsCape::BindCapeIndex},
				{"strName", &KnightsCape::BindName},
				{"nBuyPrice", &KnightsCape::BindBuyPrice},
				{"nDuration", &KnightsCape::BindDuration},
				{"byGrade", &KnightsCape::BindGrade}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CapeIndex
		static void BindCapeIndex(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CapeIndex);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BuyPrice);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Grade
		static void BindGrade(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade);
		}

	};
}
