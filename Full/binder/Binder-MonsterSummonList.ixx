module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:MonsterSummonList;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::MonsterSummonList
	export class MonsterSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

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
		static void BindMonsterId(model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Probability
		static void BindProbability(model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Probability);
		}

		/// \brief Binds a result's column to Type
		static void BindType(model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

	};
}
