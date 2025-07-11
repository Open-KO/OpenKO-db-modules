module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:Home;

namespace full_binder
{
	export class Home;
}

namespace full_model
{
	/// \brief [HOME] TODO Doc
	/// \class Home
	/// \xrefitem gamedb "Game Database" "Game Database" HOME TODO Doc
	export class Home 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Home;

		/// \brief Column [Nation]: Nation Identifier
		///
		/// \property Nation
		int16_t Nation = 0;

		/// \brief Column [ElmoZoneX]: Elmorad Zone X
		///
		/// \property ElmoZoneX
		int32_t ElmoZoneX = 0;

		/// \brief Column [ElmoZoneZ]: Elmorad Zone Z
		///
		/// \property ElmoZoneZ
		int32_t ElmoZoneZ = 0;

		/// \brief Column [ElmoZoneLX]: Elmorad Zone LX
		///
		/// \property ElmoZoneLX
		int16_t ElmoZoneLX = 0;

		/// \brief Column [ElmoZoneLZ]: Elmorad Zone LZ
		///
		/// \property ElmoZoneLZ
		int16_t ElmoZoneLZ = 0;

		/// \brief Column [KarusZoneX]: Karus Zone X
		///
		/// \property KarusZoneX
		int32_t KarusZoneX = 0;

		/// \brief Column [KarusZoneZ]: Karus Zone Z
		///
		/// \property KarusZoneZ
		int32_t KarusZoneZ = 0;

		/// \brief Column [KarusZoneLX]: Karus Zone LX
		///
		/// \property KarusZoneLX
		int16_t KarusZoneLX = 0;

		/// \brief Column [KarusZoneLZ]: Karus Zone LZ
		///
		/// \property KarusZoneLZ
		int16_t KarusZoneLZ = 0;

		/// \brief Column [FreeZoneX]: Free Zone X
		///
		/// \property FreeZoneX
		int32_t FreeZoneX = 0;

		/// \brief Column [FreeZoneZ]: Free Zone Z
		///
		/// \property FreeZoneZ
		int32_t FreeZoneZ = 0;

		/// \brief Column [FreeZoneLX]: Free Zone LX
		///
		/// \property FreeZoneLX
		int16_t FreeZoneLX = 0;

		/// \brief Column [FreeZoneLZ]: Free Zone LZ
		///
		/// \property FreeZoneLZ
		int16_t FreeZoneLZ = 0;

		/// \brief Column [BattleZoneX]: Battle Zone X
		///
		/// \property BattleZoneX
		int32_t BattleZoneX = 0;

		/// \brief Column [BattleZoneZ]: Battle Zone Z
		///
		/// \property BattleZoneZ
		int32_t BattleZoneZ = 0;

		/// \brief Column [BattleZoneLX]: Battle Zone LX
		///
		/// \property BattleZoneLX
		int16_t BattleZoneLX = 0;

		/// \brief Column [BattleZoneLZ]: Battle Zone LZ
		///
		/// \property BattleZoneLZ
		int16_t BattleZoneLZ = 0;

		/// \brief Column [BattleZone2X]: Battle Zone 2 X
		///
		/// \property BattleZone2X
		int32_t BattleZone2X = 0;

		/// \brief Column [BattleZone2Z]: Battle Zone 2 Z
		///
		/// \property BattleZone2Z
		int32_t BattleZone2Z = 0;

		/// \brief Column [BattleZone2LX]: Battle Zone 2 LX
		///
		/// \property BattleZone2LX
		int16_t BattleZone2LX = 0;

		/// \brief Column [BattleZone2LZ]: Battle Zone 2 LZ
		///
		/// \property BattleZone2LZ
		int16_t BattleZone2LZ = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "HOME";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"Nation", "ElmoZoneX", "ElmoZoneZ", "ElmoZoneLX", "ElmoZoneLZ", "KarusZoneX", "KarusZoneZ", "KarusZoneLX", "KarusZoneLZ", "FreeZoneX", "FreeZoneZ", "FreeZoneLX", "FreeZoneLZ", "BattleZoneX", "BattleZoneZ", "BattleZoneLX", "BattleZoneLZ", "BattleZone2X", "BattleZone2Z", "BattleZone2LX", "BattleZone2LZ"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
