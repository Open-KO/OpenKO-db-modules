module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MonsterChallengeBinder;

import :MonsterChallenge;

namespace model
{
	/// \brief generated column binder for the MonsterChallenge model, using nanodbc
	export class MonsterChallengeBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterChallengeBinder::BindIndex},
				{"bStartTime1", &MonsterChallengeBinder::BindStartTime1},
				{"bStartTime2", &MonsterChallengeBinder::BindStartTime2},
				{"bStartTime3", &MonsterChallengeBinder::BindStartTime3},
				{"bLevelMin", &MonsterChallengeBinder::BindLevelMin},
				{"bLevelMax", &MonsterChallengeBinder::BindLevelMax}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(MonsterChallenge& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to StartTime1
		static void BindStartTime1(MonsterChallenge& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StartTime1);
		}

		/// \brief Binds a result's column to StartTime2
		static void BindStartTime2(MonsterChallenge& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StartTime2);
		}

		/// \brief Binds a result's column to StartTime3
		static void BindStartTime3(MonsterChallenge& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StartTime3);
		}

		/// \brief Binds a result's column to LevelMin
		static void BindLevelMin(MonsterChallenge& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LevelMin);
		}

		/// \brief Binds a result's column to LevelMax
		static void BindLevelMax(MonsterChallenge& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LevelMax);
		}

	};
}
