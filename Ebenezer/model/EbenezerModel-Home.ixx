module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:Home;

import ModelUtil;

namespace ebenezer_binder
{
	export class Home;
}

namespace ebenezer_model
{
	/// \brief [HOME] TODO Doc
	/// \class Home
	/// \xrefitem gamedb "Game Database" "Game Database" HOME TODO Doc
	export class Home 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::Home;

		/// \brief Column [Nation]: Nation Identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [ElmoZoneX]: Elmorad Zone X
		///
		/// \property ElmoZoneX
		int32_t ElmoZoneX = {};

		/// \brief Column [ElmoZoneZ]: Elmorad Zone Z
		///
		/// \property ElmoZoneZ
		int32_t ElmoZoneZ = {};

		/// \brief Column [ElmoZoneLX]: Elmorad Zone LX
		///
		/// \property ElmoZoneLX
		uint8_t ElmoZoneLX = {};

		/// \brief Column [ElmoZoneLZ]: Elmorad Zone LZ
		///
		/// \property ElmoZoneLZ
		uint8_t ElmoZoneLZ = {};

		/// \brief Column [KarusZoneX]: Karus Zone X
		///
		/// \property KarusZoneX
		int32_t KarusZoneX = {};

		/// \brief Column [KarusZoneZ]: Karus Zone Z
		///
		/// \property KarusZoneZ
		int32_t KarusZoneZ = {};

		/// \brief Column [KarusZoneLX]: Karus Zone LX
		///
		/// \property KarusZoneLX
		uint8_t KarusZoneLX = {};

		/// \brief Column [KarusZoneLZ]: Karus Zone LZ
		///
		/// \property KarusZoneLZ
		uint8_t KarusZoneLZ = {};

		/// \brief Column [FreeZoneX]: Free Zone X
		///
		/// \property FreeZoneX
		int32_t FreeZoneX = {};

		/// \brief Column [FreeZoneZ]: Free Zone Z
		///
		/// \property FreeZoneZ
		int32_t FreeZoneZ = {};

		/// \brief Column [FreeZoneLX]: Free Zone LX
		///
		/// \property FreeZoneLX
		uint8_t FreeZoneLX = {};

		/// \brief Column [FreeZoneLZ]: Free Zone LZ
		///
		/// \property FreeZoneLZ
		uint8_t FreeZoneLZ = {};

		/// \brief Column [BattleZoneX]: Battle Zone X
		///
		/// \property BattleZoneX
		int32_t BattleZoneX = {};

		/// \brief Column [BattleZoneZ]: Battle Zone Z
		///
		/// \property BattleZoneZ
		int32_t BattleZoneZ = {};

		/// \brief Column [BattleZoneLX]: Battle Zone LX
		///
		/// \property BattleZoneLX
		uint8_t BattleZoneLX = {};

		/// \brief Column [BattleZoneLZ]: Battle Zone LZ
		///
		/// \property BattleZoneLZ
		uint8_t BattleZoneLZ = {};

		/// \brief Column [BattleZone2X]: Battle Zone 2 X
		///
		/// \property BattleZone2X
		int32_t BattleZone2X = {};

		/// \brief Column [BattleZone2Z]: Battle Zone 2 Z
		///
		/// \property BattleZone2Z
		int32_t BattleZone2Z = {};

		/// \brief Column [BattleZone2LX]: Battle Zone 2 LX
		///
		/// \property BattleZone2LX
		uint8_t BattleZone2LX = {};

		/// \brief Column [BattleZone2LZ]: Battle Zone 2 LZ
		///
		/// \property BattleZone2LZ
		uint8_t BattleZone2LZ = {};

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

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
			};
			return blobColumns;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"Nation"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const
		{
			return Nation;
		}

	};
}
