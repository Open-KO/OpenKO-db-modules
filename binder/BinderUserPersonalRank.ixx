module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:UserPersonalRank;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderUserPersonalRank
	export class UserPersonalRankBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRank", &UserPersonalRank::BindRank},
				{"strPosition", &UserPersonalRank::BindPosition},
				{"nElmoUP", &UserPersonalRank::BindElmoUp},
				{"strElmoUserID", &UserPersonalRank::BindElmoUserId},
				{"nElmoLoyaltyMonthly", &UserPersonalRank::BindElmoLoyaltyMonthly},
				{"nElmoCheck", &UserPersonalRank::BindElmoCheck},
				{"nKarusUP", &UserPersonalRank::BindKarusUp},
				{"strKarusUserID", &UserPersonalRank::BindKarusUserId},
				{"nKarusLoyaltyMonthly", &UserPersonalRank::BindKarusLoyaltyMonthly},
				{"nKarusCheck", &UserPersonalRank::BindKarusCheck},
				{"nSalary", &UserPersonalRank::BindSalary},
				{"UpdateDate", &UserPersonalRank::BindUpdateDate}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Position
		static void BindPosition(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Position);
		}

		/// \brief Binds a result's column to ElmoUp
		static void BindElmoUp(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoUp);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoUserId = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ElmoLoyaltyMonthly
		static void BindElmoLoyaltyMonthly(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoLoyaltyMonthly = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to ElmoCheck
		static void BindElmoCheck(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoCheck);
		}

		/// \brief Binds a result's column to KarusUp
		static void BindKarusUp(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusUp);
		}

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusUserId = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to KarusLoyaltyMonthly
		static void BindKarusLoyaltyMonthly(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusLoyaltyMonthly = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to KarusCheck
		static void BindKarusCheck(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusCheck);
		}

		/// \brief Binds a result's column to Salary
		static void BindSalary(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Salary);
		}

		/// \brief Binds a result's column to UpdateDate
		static void BindUpdateDate(model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.UpdateDate);
		}

	};
}
