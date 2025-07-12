module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MonsterChallenge;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MonsterChallenge
	export class MonsterChallenge
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterChallenge::BindIndex},
				{"bStartTime1", &MonsterChallenge::BindStartTime1},
				{"bStartTime2", &MonsterChallenge::BindStartTime2},
				{"bStartTime3", &MonsterChallenge::BindStartTime3},
				{"bLevelMin", &MonsterChallenge::BindLevelMin},
				{"bLevelMax", &MonsterChallenge::BindLevelMax}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to StartTime1
		static void BindStartTime1(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			m.StartTime1 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StartTime2
		static void BindStartTime2(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			m.StartTime2 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StartTime3
		static void BindStartTime3(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			m.StartTime3 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to LevelMin
		static void BindLevelMin(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			m.LevelMin = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to LevelMax
		static void BindLevelMax(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			m.LevelMax = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
