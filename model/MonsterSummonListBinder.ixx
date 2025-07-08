module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MonsterSummonList;

namespace model
{
	/// \brief generated column binder for the MonsterSummonList model, using nanodbc
	export class MonsterSummonListBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sSid", &MonsterSummonListBinder::BindMonsterId},
				{"strName", &MonsterSummonListBinder::BindName},
				{"sLevel", &MonsterSummonListBinder::BindLevel},
				{"sProbability", &MonsterSummonListBinder::BindProbability},
				{"bType", &MonsterSummonListBinder::BindType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(MonsterSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(MonsterSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(MonsterSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Probability
		static void BindProbability(MonsterSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Probability);
		}

		/// \brief Binds a result's column to Type
		static void BindType(MonsterSummonList& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

	};
}
