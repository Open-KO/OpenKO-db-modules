module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:UserKnightsRankBinder;

import :UserKnightsRank;

namespace model
{
	/// \brief generated column binder for the UserKnightsRank model, using nanodbc
	export class UserKnightsRankBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"shIndex", &UserKnightsRankBinder::BindIndex},
				{"strName", &UserKnightsRankBinder::BindName},
				{"strElmoUserID", &UserKnightsRankBinder::BindElmoUserId},
				{"strElmoKnightsName", &UserKnightsRankBinder::BindElmoKnightsName},
				{"nElmoLoyalty", &UserKnightsRankBinder::BindElmoLoyalty},
				{"strKarusUserID", &UserKnightsRankBinder::BindKarusUserId},
				{"strKarusKnightsName", &UserKnightsRankBinder::BindKarusKnightsName},
				{"nKarusLoyalty", &UserKnightsRankBinder::BindKarusLoyalty},
				{"nMoney", &UserKnightsRankBinder::BindMoney}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(UserKnightsRank& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Name
		static void BindName(UserKnightsRank& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(UserKnightsRank& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.ElmoUserId);
		}

		/// \brief Binds a result's column to ElmoKnightsName
		static void BindElmoKnightsName(UserKnightsRank& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.ElmoKnightsName);
		}

		/// \brief Binds a result's column to ElmoLoyalty
		static void BindElmoLoyalty(UserKnightsRank& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ElmoLoyalty);
		}

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(UserKnightsRank& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.KarusUserId);
		}

		/// \brief Binds a result's column to KarusKnightsName
		static void BindKarusKnightsName(UserKnightsRank& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.KarusKnightsName);
		}

		/// \brief Binds a result's column to KarusLoyalty
		static void BindKarusLoyalty(UserKnightsRank& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.KarusLoyalty);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(UserKnightsRank& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

	};
}
