module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:HeroUserBinder;

import :HeroUser;

namespace model
{
	/// \brief generated column binder for the HeroUser model, using nanodbc
	export class HeroUserBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(HeroUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"shIndex", &HeroUserBinder::BindIndex},
				{"strUserID", &HeroUserBinder::BindUserId},
				{"strNation", &HeroUserBinder::BindNation},
				{"strClass", &HeroUserBinder::BindClassName},
				{"strAchievement", &HeroUserBinder::BindAchievement}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(HeroUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(HeroUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(HeroUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to ClassName
		static void BindClassName(HeroUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.ClassName);
		}

		/// \brief Binds a result's column to Achievement
		static void BindAchievement(HeroUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Achievement);
		}

	};
}
