module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:KingElectionList;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::KingElectionList
	export class KingElectionList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byType", &KingElectionList::BindType},
				{"byNation", &KingElectionList::BindNation},
				{"nKnights", &KingElectionList::BindKnights},
				{"strName", &KingElectionList::BindName},
				{"nMoney", &KingElectionList::BindMoney}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Knights
		static void BindKnights(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Knights);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

	};
}
