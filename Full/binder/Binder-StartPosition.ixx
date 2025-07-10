module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:StartPosition;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::StartPosition
	export class StartPosition
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::StartPosition& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ZoneID", &StartPosition::BindZoneId},
				{"sKarusX", &StartPosition::BindKarusX},
				{"sKarusZ", &StartPosition::BindKarusZ},
				{"sElmoradX", &StartPosition::BindElmoX},
				{"sElmoradZ", &StartPosition::BindElmoZ},
				{"bRangeX", &StartPosition::BindRangeX},
				{"bRangeZ", &StartPosition::BindRangeZ},
				{"sKarusGateX", &StartPosition::BindKarusGateX},
				{"sKarusGateZ", &StartPosition::BindKarusGateZ},
				{"sElmoGateX", &StartPosition::BindElmoGateX},
				{"sElmoGateZ", &StartPosition::BindElmoGateZ}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to KarusX
		static void BindKarusX(model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusX);
		}

		/// \brief Binds a result's column to KarusZ
		static void BindKarusZ(model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusZ);
		}

		/// \brief Binds a result's column to ElmoX
		static void BindElmoX(model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoX);
		}

		/// \brief Binds a result's column to ElmoZ
		static void BindElmoZ(model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoZ);
		}

		/// \brief Binds a result's column to RangeX
		static void BindRangeX(model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RangeX);
		}

		/// \brief Binds a result's column to RangeZ
		static void BindRangeZ(model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RangeZ);
		}

		/// \brief Binds a result's column to KarusGateX
		static void BindKarusGateX(model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusGateX);
		}

		/// \brief Binds a result's column to KarusGateZ
		static void BindKarusGateZ(model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusGateZ);
		}

		/// \brief Binds a result's column to ElmoGateX
		static void BindElmoGateX(model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoGateX);
		}

		/// \brief Binds a result's column to ElmoGateZ
		static void BindElmoGateZ(model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoGateZ);
		}

	};
}
