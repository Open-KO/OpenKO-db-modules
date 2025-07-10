module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:HeroUser;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderHeroUser
	export class HeroUserBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::HeroUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"shIndex", &HeroUser::BindIndex},
				{"strUserID", &HeroUser::BindUserId},
				{"strNation", &HeroUser::BindNation},
				{"strClass", &HeroUser::BindClassName},
				{"strAchievement", &HeroUser::BindAchievement}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(model::HeroUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(model::HeroUser& m, const nanodbc::result& result, short colIndex)
		{
			m.UserId = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(model::HeroUser& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ClassName
		static void BindClassName(model::HeroUser& m, const nanodbc::result& result, short colIndex)
		{
			m.ClassName = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Achievement
		static void BindAchievement(model::HeroUser& m, const nanodbc::result& result, short colIndex)
		{
			m.Achievement = result.get<std::string>(colIndex);
		}

	};
}
