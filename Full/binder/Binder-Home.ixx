module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:Home;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::Home
	export class Home
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::Home& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"Nation", &Home::BindNation},
				{"ElmoZoneX", &Home::BindElmoZoneX},
				{"ElmoZoneZ", &Home::BindElmoZoneZ},
				{"ElmoZoneLX", &Home::BindElmoZoneLX},
				{"ElmoZoneLZ", &Home::BindElmoZoneLZ},
				{"KarusZoneX", &Home::BindKarusZoneX},
				{"KarusZoneZ", &Home::BindKarusZoneZ},
				{"KarusZoneLX", &Home::BindKarusZoneLX},
				{"KarusZoneLZ", &Home::BindKarusZoneLZ},
				{"FreeZoneX", &Home::BindFreeZoneX},
				{"FreeZoneZ", &Home::BindFreeZoneZ},
				{"FreeZoneLX", &Home::BindFreeZoneLX},
				{"FreeZoneLZ", &Home::BindFreeZoneLZ},
				{"BattleZoneX", &Home::BindBattleZoneX},
				{"BattleZoneZ", &Home::BindBattleZoneZ},
				{"BattleZoneLX", &Home::BindBattleZoneLX},
				{"BattleZoneLZ", &Home::BindBattleZoneLZ},
				{"BattleZone2X", &Home::BindBattleZone2X},
				{"BattleZone2Z", &Home::BindBattleZone2Z},
				{"BattleZone2LX", &Home::BindBattleZone2LX},
				{"BattleZone2LZ", &Home::BindBattleZone2LZ}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to ElmoZoneX
		static void BindElmoZoneX(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoZoneX);
		}

		/// \brief Binds a result's column to ElmoZoneZ
		static void BindElmoZoneZ(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoZoneZ);
		}

		/// \brief Binds a result's column to ElmoZoneLX
		static void BindElmoZoneLX(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoZoneLX);
		}

		/// \brief Binds a result's column to ElmoZoneLZ
		static void BindElmoZoneLZ(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoZoneLZ);
		}

		/// \brief Binds a result's column to KarusZoneX
		static void BindKarusZoneX(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusZoneX);
		}

		/// \brief Binds a result's column to KarusZoneZ
		static void BindKarusZoneZ(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusZoneZ);
		}

		/// \brief Binds a result's column to KarusZoneLX
		static void BindKarusZoneLX(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusZoneLX);
		}

		/// \brief Binds a result's column to KarusZoneLZ
		static void BindKarusZoneLZ(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusZoneLZ);
		}

		/// \brief Binds a result's column to FreeZoneX
		static void BindFreeZoneX(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.FreeZoneX);
		}

		/// \brief Binds a result's column to FreeZoneZ
		static void BindFreeZoneZ(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.FreeZoneZ);
		}

		/// \brief Binds a result's column to FreeZoneLX
		static void BindFreeZoneLX(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FreeZoneLX);
		}

		/// \brief Binds a result's column to FreeZoneLZ
		static void BindFreeZoneLZ(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FreeZoneLZ);
		}

		/// \brief Binds a result's column to BattleZoneX
		static void BindBattleZoneX(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZoneX);
		}

		/// \brief Binds a result's column to BattleZoneZ
		static void BindBattleZoneZ(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZoneZ);
		}

		/// \brief Binds a result's column to BattleZoneLX
		static void BindBattleZoneLX(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BattleZoneLX);
		}

		/// \brief Binds a result's column to BattleZoneLZ
		static void BindBattleZoneLZ(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BattleZoneLZ);
		}

		/// \brief Binds a result's column to BattleZone2X
		static void BindBattleZone2X(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZone2X);
		}

		/// \brief Binds a result's column to BattleZone2Z
		static void BindBattleZone2Z(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZone2Z);
		}

		/// \brief Binds a result's column to BattleZone2LX
		static void BindBattleZone2LX(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BattleZone2LX);
		}

		/// \brief Binds a result's column to BattleZone2LZ
		static void BindBattleZone2LZ(model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BattleZone2LZ);
		}

	};
}
