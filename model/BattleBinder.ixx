module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:BattleBinder;

import :Battle;

namespace model
{
	/// \brief generated column binder for the Battle model, using nanodbc
	export class BattleBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(Battle& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &BattleBinder::BindIndex},
				{"byNation", &BattleBinder::BindNation},
				{"strUserName", &BattleBinder::BindUserName},
				{"byElmoArea", &BattleBinder::BindElmoArea},
				{"byKarusArea", &BattleBinder::BindKarusArea},
				{"byElmoAdvantage", &BattleBinder::BindElmoAdvantage},
				{"byKarusAdvantage", &BattleBinder::BindKarusAdvantage},
				{"byArea_1", &BattleBinder::BindArea1},
				{"byArea_2", &BattleBinder::BindArea2},
				{"byArea_3", &BattleBinder::BindArea3},
				{"byArea_4", &BattleBinder::BindArea4},
				{"byArea_5", &BattleBinder::BindArea5},
				{"byArea_6", &BattleBinder::BindArea6},
				{"byArea_7", &BattleBinder::BindArea7},
				{"byArea_8", &BattleBinder::BindArea8},
				{"byArea_9", &BattleBinder::BindArea9},
				{"byArea_10", &BattleBinder::BindArea10},
				{"byArea_11", &BattleBinder::BindArea11}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to UserName
		static void BindUserName(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.UserName);
		}

		/// \brief Binds a result's column to ElmoArea
		static void BindElmoArea(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ElmoArea);
		}

		/// \brief Binds a result's column to KarusArea
		static void BindKarusArea(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.KarusArea);
		}

		/// \brief Binds a result's column to ElmoAdvantage
		static void BindElmoAdvantage(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ElmoAdvantage);
		}

		/// \brief Binds a result's column to KarusAdvantage
		static void BindKarusAdvantage(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.KarusAdvantage);
		}

		/// \brief Binds a result's column to Area1
		static void BindArea1(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area1);
		}

		/// \brief Binds a result's column to Area2
		static void BindArea2(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area2);
		}

		/// \brief Binds a result's column to Area3
		static void BindArea3(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area3);
		}

		/// \brief Binds a result's column to Area4
		static void BindArea4(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area4);
		}

		/// \brief Binds a result's column to Area5
		static void BindArea5(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area5);
		}

		/// \brief Binds a result's column to Area6
		static void BindArea6(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area6);
		}

		/// \brief Binds a result's column to Area7
		static void BindArea7(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area7);
		}

		/// \brief Binds a result's column to Area8
		static void BindArea8(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area8);
		}

		/// \brief Binds a result's column to Area9
		static void BindArea9(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area9);
		}

		/// \brief Binds a result's column to Area10
		static void BindArea10(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area10);
		}

		/// \brief Binds a result's column to Area11
		static void BindArea11(Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area11);
		}

	};
}
