module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:UserPersonalRank;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::UserPersonalRank
	export class UserPersonalRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

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
		static void BindRank(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Position
		static void BindPosition(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Position);
		}

		/// \brief Binds a result's column to ElmoUp
		static void BindElmoUp(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoUp);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ElmoUserId.reset();
			}
			else
			{
				m.ElmoUserId = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ElmoLoyaltyMonthly
		static void BindElmoLoyaltyMonthly(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ElmoLoyaltyMonthly.reset();
			}
			else
			{
				m.ElmoLoyaltyMonthly = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ElmoCheck
		static void BindElmoCheck(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoCheck);
		}

		/// \brief Binds a result's column to KarusUp
		static void BindKarusUp(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusUp);
		}

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KarusUserId.reset();
			}
			else
			{
				m.KarusUserId = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to KarusLoyaltyMonthly
		static void BindKarusLoyaltyMonthly(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KarusLoyaltyMonthly.reset();
			}
			else
			{
				m.KarusLoyaltyMonthly = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to KarusCheck
		static void BindKarusCheck(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusCheck);
		}

		/// \brief Binds a result's column to Salary
		static void BindSalary(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Salary);
		}

		/// \brief Binds a result's column to UpdateDate
		static void BindUpdateDate(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.UpdateDate);
		}

	};
}
