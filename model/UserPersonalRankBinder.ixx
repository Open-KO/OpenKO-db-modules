module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:UserPersonalRankBinder;

import :UserPersonalRank;

namespace model
{
	/// \brief generated column binder for the UserPersonalRank model, using nanodbc
	export class UserPersonalRankBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRank", &UserPersonalRankBinder::BindRank},
				{"strPosition", &UserPersonalRankBinder::BindPosition},
				{"nElmoUP", &UserPersonalRankBinder::BindElmoUp},
				{"strElmoUserID", &UserPersonalRankBinder::BindElmoUserId},
				{"nElmoLoyaltyMonthly", &UserPersonalRankBinder::BindElmoLoyaltyMonthly},
				{"nElmoCheck", &UserPersonalRankBinder::BindElmoCheck},
				{"nKarusUP", &UserPersonalRankBinder::BindKarusUp},
				{"strKarusUserID", &UserPersonalRankBinder::BindKarusUserId},
				{"nKarusLoyaltyMonthly", &UserPersonalRankBinder::BindKarusLoyaltyMonthly},
				{"nKarusCheck", &UserPersonalRankBinder::BindKarusCheck},
				{"nSalary", &UserPersonalRankBinder::BindSalary},
				{"UpdateDate", &UserPersonalRankBinder::BindUpdateDate}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Position
		static void BindPosition(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Position);
		}

		/// \brief Binds a result's column to ElmoUp
		static void BindElmoUp(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoUp);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoUserId = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ElmoLoyaltyMonthly
		static void BindElmoLoyaltyMonthly(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoLoyaltyMonthly = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to ElmoCheck
		static void BindElmoCheck(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoCheck);
		}

		/// \brief Binds a result's column to KarusUp
		static void BindKarusUp(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusUp);
		}

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusUserId = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to KarusLoyaltyMonthly
		static void BindKarusLoyaltyMonthly(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusLoyaltyMonthly = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to KarusCheck
		static void BindKarusCheck(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusCheck);
		}

		/// \brief Binds a result's column to Salary
		static void BindSalary(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Salary);
		}

		/// \brief Binds a result's column to UpdateDate
		static void BindUpdateDate(UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.UpdateDate);
		}

	};
}
