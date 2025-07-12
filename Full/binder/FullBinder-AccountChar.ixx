module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:AccountChar;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::AccountChar
	export class AccountChar
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::AccountChar& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &AccountChar::BindAccountId},
				{"bNation", &AccountChar::BindNation},
				{"bCharNum", &AccountChar::BindCharNum},
				{"strCharID1", &AccountChar::BindCharId1},
				{"strCharID2", &AccountChar::BindCharId2},
				{"strCharID3", &AccountChar::BindCharId3}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to CharNum
		static void BindCharNum(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			m.CharNum = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to CharId1
		static void BindCharId1(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.CharId1.reset();
			}
			else
			{
				m.CharId1 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to CharId2
		static void BindCharId2(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.CharId2.reset();
			}
			else
			{
				m.CharId2 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to CharId3
		static void BindCharId3(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.CharId3.reset();
			}
			else
			{
				m.CharId3 = result.get<std::string>(colIndex);
			}
		}

	};
}
