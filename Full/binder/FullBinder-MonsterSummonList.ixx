module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MonsterSummonList;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MonsterSummonList
	export class MonsterSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sSid", &MonsterSummonList::BindMonsterId},
				{"strName", &MonsterSummonList::BindName},
				{"sLevel", &MonsterSummonList::BindLevel},
				{"sProbability", &MonsterSummonList::BindProbability},
				{"bType", &MonsterSummonList::BindType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Probability
		static void BindProbability(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Probability);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
