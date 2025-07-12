module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:Home;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::Home
	export class Home
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

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
		static void BindNation(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ElmoZoneX
		static void BindElmoZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoZoneX);
		}

		/// \brief Binds a result's column to ElmoZoneZ
		static void BindElmoZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoZoneZ);
		}

		/// \brief Binds a result's column to ElmoZoneLX
		static void BindElmoZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoZoneLX = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ElmoZoneLZ
		static void BindElmoZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoZoneLZ = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to KarusZoneX
		static void BindKarusZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusZoneX);
		}

		/// \brief Binds a result's column to KarusZoneZ
		static void BindKarusZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusZoneZ);
		}

		/// \brief Binds a result's column to KarusZoneLX
		static void BindKarusZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusZoneLX = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to KarusZoneLZ
		static void BindKarusZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusZoneLZ = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to FreeZoneX
		static void BindFreeZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.FreeZoneX);
		}

		/// \brief Binds a result's column to FreeZoneZ
		static void BindFreeZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.FreeZoneZ);
		}

		/// \brief Binds a result's column to FreeZoneLX
		static void BindFreeZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.FreeZoneLX = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to FreeZoneLZ
		static void BindFreeZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.FreeZoneLZ = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to BattleZoneX
		static void BindBattleZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZoneX);
		}

		/// \brief Binds a result's column to BattleZoneZ
		static void BindBattleZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZoneZ);
		}

		/// \brief Binds a result's column to BattleZoneLX
		static void BindBattleZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.BattleZoneLX = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to BattleZoneLZ
		static void BindBattleZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.BattleZoneLZ = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to BattleZone2X
		static void BindBattleZone2X(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZone2X);
		}

		/// \brief Binds a result's column to BattleZone2Z
		static void BindBattleZone2Z(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZone2Z);
		}

		/// \brief Binds a result's column to BattleZone2LX
		static void BindBattleZone2LX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.BattleZone2LX = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to BattleZone2LZ
		static void BindBattleZone2LZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.BattleZone2LZ = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
