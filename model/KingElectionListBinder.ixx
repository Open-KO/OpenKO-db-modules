module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:KingElectionListBinder;

import :KingElectionList;

namespace model
{
	/// \brief generated column binder for the KingElectionList model, using nanodbc
	export class KingElectionListBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(KingElectionList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byType", &KingElectionListBinder::BindType},
				{"byNation", &KingElectionListBinder::BindNation},
				{"nKnights", &KingElectionListBinder::BindKnights},
				{"strName", &KingElectionListBinder::BindName},
				{"nMoney", &KingElectionListBinder::BindMoney}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Type
		static void BindType(KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Knights
		static void BindKnights(KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.Knights);
		}

		/// \brief Binds a result's column to Name
		static void BindName(KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

	};
}
