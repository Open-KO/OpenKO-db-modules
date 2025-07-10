module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:HeroUser;

namespace model_binder
{
	export class HeroUser;
}

namespace model
{
	/// \brief [HERO_USER] TODO Doc
	/// \class HeroUser
	/// \xrefitem gamedb "Game Database" "Game Database" HERO_USER TODO Doc
	export class HeroUser 
	{
	/// \publicsection
	public:
		using BinderType = model_binder::HeroUser;

		/// \brief Column [shIndex]: Index
		///
		/// \property Index
		int16_t Index = 0;

		/// \brief Column [strUserID]: User identifier
		///
		/// \property UserId
		std::optional<std::string> UserId;

		/// \brief Column [strNation]: Nation text
		///
		/// \property Nation
		std::optional<std::string> Nation;

		/// \brief Column [strClass]: Class name
		///
		/// \property ClassName
		std::optional<std::string> ClassName;

		/// \brief Column [strAchievement]: Achievement text
		///
		/// \property Achievement
		std::optional<std::string> Achievement;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "HERO_USER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"shIndex", "strUserID", "strNation", "strClass", "strAchievement"
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
