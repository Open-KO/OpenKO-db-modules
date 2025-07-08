module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:KnightsCapeBinder;

import :KnightsCape;

namespace model
{
	/// \brief generated column binder for the KnightsCape model, using nanodbc
	export class KnightsCapeBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(KnightsCape& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sCapeIndex", &KnightsCapeBinder::BindCapeIndex},
				{"strName", &KnightsCapeBinder::BindName},
				{"nBuyPrice", &KnightsCapeBinder::BindBuyPrice},
				{"nDuration", &KnightsCapeBinder::BindDuration},
				{"byGrade", &KnightsCapeBinder::BindGrade}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CapeIndex
		static void BindCapeIndex(KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CapeIndex);
		}

		/// \brief Binds a result's column to Name
		static void BindName(KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BuyPrice);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Grade
		static void BindGrade(KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Grade);
		}

	};
}
