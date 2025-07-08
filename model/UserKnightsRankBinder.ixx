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
		static void BindIndex(UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Name
		static void BindName(UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoUserId = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ElmoKnightsName
		static void BindElmoKnightsName(UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoKnightsName = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ElmoLoyalty
		static void BindElmoLoyalty(UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoLoyalty = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusUserId = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to KarusKnightsName
		static void BindKarusKnightsName(UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusKnightsName = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to KarusLoyalty
		static void BindKarusLoyalty(UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusLoyalty = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

	};
}
