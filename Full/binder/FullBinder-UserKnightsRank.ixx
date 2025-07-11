module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:UserKnightsRank;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::UserKnightsRank
	export class UserKnightsRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"shIndex", &UserKnightsRank::BindIndex},
				{"strName", &UserKnightsRank::BindName},
				{"strElmoUserID", &UserKnightsRank::BindElmoUserId},
				{"strElmoKnightsName", &UserKnightsRank::BindElmoKnightsName},
				{"nElmoLoyalty", &UserKnightsRank::BindElmoLoyalty},
				{"strKarusUserID", &UserKnightsRank::BindKarusUserId},
				{"strKarusKnightsName", &UserKnightsRank::BindKarusKnightsName},
				{"nKarusLoyalty", &UserKnightsRank::BindKarusLoyalty},
				{"nMoney", &UserKnightsRank::BindMoney}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to ElmoKnightsName
		static void BindElmoKnightsName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ElmoKnightsName.reset();
			}
			else
			{
				m.ElmoKnightsName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ElmoLoyalty
		static void BindElmoLoyalty(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ElmoLoyalty.reset();
			}
			else
			{
				m.ElmoLoyalty = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to KarusKnightsName
		static void BindKarusKnightsName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KarusKnightsName.reset();
			}
			else
			{
				m.KarusKnightsName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to KarusLoyalty
		static void BindKarusLoyalty(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KarusLoyalty.reset();
			}
			else
			{
				m.KarusLoyalty = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

	};
}
