module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:StartPositionBinder;

import :StartPosition;

namespace model
{
	/// \brief generated column binder for the StartPosition model, using nanodbc
	export class StartPositionBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(StartPosition& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ZoneID", &StartPositionBinder::BindZoneId},
				{"sKarusX", &StartPositionBinder::BindKarusX},
				{"sKarusZ", &StartPositionBinder::BindKarusZ},
				{"sElmoradX", &StartPositionBinder::BindElmoX},
				{"sElmoradZ", &StartPositionBinder::BindElmoZ},
				{"bRangeX", &StartPositionBinder::BindRangeX},
				{"bRangeZ", &StartPositionBinder::BindRangeZ},
				{"sKarusGateX", &StartPositionBinder::BindKarusGateX},
				{"sKarusGateZ", &StartPositionBinder::BindKarusGateZ},
				{"sElmoGateX", &StartPositionBinder::BindElmoGateX},
				{"sElmoGateZ", &StartPositionBinder::BindElmoGateZ}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to KarusX
		static void BindKarusX(StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusX);
		}

		/// \brief Binds a result's column to KarusZ
		static void BindKarusZ(StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusZ);
		}

		/// \brief Binds a result's column to ElmoX
		static void BindElmoX(StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoX);
		}

		/// \brief Binds a result's column to ElmoZ
		static void BindElmoZ(StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoZ);
		}

		/// \brief Binds a result's column to RangeX
		static void BindRangeX(StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RangeX);
		}

		/// \brief Binds a result's column to RangeZ
		static void BindRangeZ(StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RangeZ);
		}

		/// \brief Binds a result's column to KarusGateX
		static void BindKarusGateX(StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusGateX);
		}

		/// \brief Binds a result's column to KarusGateZ
		static void BindKarusGateZ(StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusGateZ);
		}

		/// \brief Binds a result's column to ElmoGateX
		static void BindElmoGateX(StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoGateX);
		}

		/// \brief Binds a result's column to ElmoGateZ
		static void BindElmoGateZ(StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoGateZ);
		}

	};
}
