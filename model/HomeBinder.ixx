module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:HomeBinder;

import :Home;

namespace model
{
	/// \brief generated column binder for the Home model, using nanodbc
	export class HomeBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(Home& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"Nation", &HomeBinder::BindNation},
				{"ElmoZoneX", &HomeBinder::BindElmoZoneX},
				{"ElmoZoneZ", &HomeBinder::BindElmoZoneZ},
				{"ElmoZoneLX", &HomeBinder::BindElmoZoneLX},
				{"ElmoZoneLZ", &HomeBinder::BindElmoZoneLZ},
				{"KarusZoneX", &HomeBinder::BindKarusZoneX},
				{"KarusZoneZ", &HomeBinder::BindKarusZoneZ},
				{"KarusZoneLX", &HomeBinder::BindKarusZoneLX},
				{"KarusZoneLZ", &HomeBinder::BindKarusZoneLZ},
				{"FreeZoneX", &HomeBinder::BindFreeZoneX},
				{"FreeZoneZ", &HomeBinder::BindFreeZoneZ},
				{"FreeZoneLX", &HomeBinder::BindFreeZoneLX},
				{"FreeZoneLZ", &HomeBinder::BindFreeZoneLZ},
				{"BattleZoneX", &HomeBinder::BindBattleZoneX},
				{"BattleZoneZ", &HomeBinder::BindBattleZoneZ},
				{"BattleZoneLX", &HomeBinder::BindBattleZoneLX},
				{"BattleZoneLZ", &HomeBinder::BindBattleZoneLZ},
				{"BattleZone2X", &HomeBinder::BindBattleZone2X},
				{"BattleZone2Z", &HomeBinder::BindBattleZone2Z},
				{"BattleZone2LX", &HomeBinder::BindBattleZone2LX},
				{"BattleZone2LZ", &HomeBinder::BindBattleZone2LZ}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to ElmoZoneX
		static void BindElmoZoneX(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoZoneX);
		}

		/// \brief Binds a result's column to ElmoZoneZ
		static void BindElmoZoneZ(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoZoneZ);
		}

		/// \brief Binds a result's column to ElmoZoneLX
		static void BindElmoZoneLX(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoZoneLX);
		}

		/// \brief Binds a result's column to ElmoZoneLZ
		static void BindElmoZoneLZ(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoZoneLZ);
		}

		/// \brief Binds a result's column to KarusZoneX
		static void BindKarusZoneX(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusZoneX);
		}

		/// \brief Binds a result's column to KarusZoneZ
		static void BindKarusZoneZ(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusZoneZ);
		}

		/// \brief Binds a result's column to KarusZoneLX
		static void BindKarusZoneLX(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusZoneLX);
		}

		/// \brief Binds a result's column to KarusZoneLZ
		static void BindKarusZoneLZ(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusZoneLZ);
		}

		/// \brief Binds a result's column to FreeZoneX
		static void BindFreeZoneX(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.FreeZoneX);
		}

		/// \brief Binds a result's column to FreeZoneZ
		static void BindFreeZoneZ(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.FreeZoneZ);
		}

		/// \brief Binds a result's column to FreeZoneLX
		static void BindFreeZoneLX(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FreeZoneLX);
		}

		/// \brief Binds a result's column to FreeZoneLZ
		static void BindFreeZoneLZ(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FreeZoneLZ);
		}

		/// \brief Binds a result's column to BattleZoneX
		static void BindBattleZoneX(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZoneX);
		}

		/// \brief Binds a result's column to BattleZoneZ
		static void BindBattleZoneZ(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZoneZ);
		}

		/// \brief Binds a result's column to BattleZoneLX
		static void BindBattleZoneLX(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BattleZoneLX);
		}

		/// \brief Binds a result's column to BattleZoneLZ
		static void BindBattleZoneLZ(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BattleZoneLZ);
		}

		/// \brief Binds a result's column to BattleZone2X
		static void BindBattleZone2X(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZone2X);
		}

		/// \brief Binds a result's column to BattleZone2Z
		static void BindBattleZone2Z(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZone2Z);
		}

		/// \brief Binds a result's column to BattleZone2LX
		static void BindBattleZone2LX(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BattleZone2LX);
		}

		/// \brief Binds a result's column to BattleZone2LZ
		static void BindBattleZone2LZ(Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BattleZone2LZ);
		}

	};
}
