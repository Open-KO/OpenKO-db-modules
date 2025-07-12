module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:UserPersonalRank;

import EbenezerModel;
import BinderUtil;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::UserPersonalRank
	export class UserPersonalRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRank", &UserPersonalRank::BindRank},
				{"strElmoUserID", &UserPersonalRank::BindElmoUserId},
				{"strKarusUserID", &UserPersonalRank::BindKarusUserId},
				{"nSalary", &UserPersonalRank::BindSalary}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Salary
		static void BindSalary(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Salary);
		}

	};
}
