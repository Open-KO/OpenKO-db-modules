module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:Battle;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::Battle
	export class Battle
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::Battle& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &Battle::BindIndex},
				{"byNation", &Battle::BindNation},
				{"strUserName", &Battle::BindUserName},
				{"byElmoArea", &Battle::BindElmoArea},
				{"byKarusArea", &Battle::BindKarusArea},
				{"byElmoAdvantage", &Battle::BindElmoAdvantage},
				{"byKarusAdvantage", &Battle::BindKarusAdvantage},
				{"byArea_1", &Battle::BindArea1},
				{"byArea_2", &Battle::BindArea2},
				{"byArea_3", &Battle::BindArea3},
				{"byArea_4", &Battle::BindArea4},
				{"byArea_5", &Battle::BindArea5},
				{"byArea_6", &Battle::BindArea6},
				{"byArea_7", &Battle::BindArea7},
				{"byArea_8", &Battle::BindArea8},
				{"byArea_9", &Battle::BindArea9},
				{"byArea_10", &Battle::BindArea10},
				{"byArea_11", &Battle::BindArea11}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to UserName
		static void BindUserName(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.UserName = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ElmoArea
		static void BindElmoArea(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoArea);
		}

		/// \brief Binds a result's column to KarusArea
		static void BindKarusArea(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusArea);
		}

		/// \brief Binds a result's column to ElmoAdvantage
		static void BindElmoAdvantage(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoAdvantage);
		}

		/// \brief Binds a result's column to KarusAdvantage
		static void BindKarusAdvantage(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusAdvantage);
		}

		/// \brief Binds a result's column to Area1
		static void BindArea1(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Area1);
		}

		/// \brief Binds a result's column to Area2
		static void BindArea2(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Area2);
		}

		/// \brief Binds a result's column to Area3
		static void BindArea3(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Area3);
		}

		/// \brief Binds a result's column to Area4
		static void BindArea4(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Area4);
		}

		/// \brief Binds a result's column to Area5
		static void BindArea5(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Area5);
		}

		/// \brief Binds a result's column to Area6
		static void BindArea6(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Area6);
		}

		/// \brief Binds a result's column to Area7
		static void BindArea7(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Area7);
		}

		/// \brief Binds a result's column to Area8
		static void BindArea8(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Area8);
		}

		/// \brief Binds a result's column to Area9
		static void BindArea9(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Area9);
		}

		/// \brief Binds a result's column to Area10
		static void BindArea10(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Area10);
		}

		/// \brief Binds a result's column to Area11
		static void BindArea11(model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Area11);
		}

	};
}
