module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:Battle;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::Battle
	export class Battle
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Battle& m, const nanodbc::result& result, short colIndex);

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
		static void BindIndex(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to UserName
		static void BindUserName(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.UserName.reset();
			}
			else
			{
				m.UserName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ElmoArea
		static void BindElmoArea(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoArea = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to KarusArea
		static void BindKarusArea(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusArea = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ElmoAdvantage
		static void BindElmoAdvantage(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoAdvantage = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to KarusAdvantage
		static void BindKarusAdvantage(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusAdvantage = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Area1
		static void BindArea1(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Area1 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Area2
		static void BindArea2(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Area2 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Area3
		static void BindArea3(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Area3 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Area4
		static void BindArea4(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Area4 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Area5
		static void BindArea5(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Area5 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Area6
		static void BindArea6(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Area6 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Area7
		static void BindArea7(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Area7 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Area8
		static void BindArea8(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Area8 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Area9
		static void BindArea9(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Area9 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Area10
		static void BindArea10(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Area10 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Area11
		static void BindArea11(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Area11 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
