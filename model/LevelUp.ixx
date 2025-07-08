module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:LevelUp;

namespace model
{
	class LevelUpBinder;
	
	/// \brief [LEVEL_UP] Level experience requirements
	/// \class LevelUp
	/// \xrefitem gamedb "Game Database" "Game Database" LEVEL_UP
	export class LevelUp 
	{
	/// \publicsection
	public:
		using BinderType = LevelUpBinder;

		/// \brief Column [level]: Level
		///
		/// \property Level
		uint8_t Level = 0;

		/// \brief Column [Exp]: Required experience to advance to the next level
		///
		/// \property RequiredExp
		int32_t RequiredExp = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "LEVEL_UP";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"level", "Exp"
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
