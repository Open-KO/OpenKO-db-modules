module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:UserKnightsRank;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::UserKnightsRank
	export class UserKnightsRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"shIndex", &UserKnightsRank::BindIndex},
				{"strElmoUserID", &UserKnightsRank::BindElmoUserId},
				{"strKarusUserID", &UserKnightsRank::BindKarusUserId},
				{"nMoney", &UserKnightsRank::BindMoney}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
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
		static void BindKarusUserId(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Money
		static void BindMoney(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

	};
}
