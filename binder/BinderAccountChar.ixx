module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:AccountChar;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderAccountChar
	export class AccountCharBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::AccountChar& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &AccountCharBinder::BindAccountId},
				{"bNation", &AccountCharBinder::BindNation},
				{"bCharNum", &AccountCharBinder::BindCharNum},
				{"strCharID1", &AccountCharBinder::BindCharId1},
				{"strCharID2", &AccountCharBinder::BindCharId2},
				{"strCharID3", &AccountCharBinder::BindCharId3}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to CharNum
		static void BindCharNum(model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CharNum);
		}

		/// \brief Binds a result's column to CharId1
		static void BindCharId1(model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			m.CharId1 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to CharId2
		static void BindCharId2(model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			m.CharId2 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to CharId3
		static void BindCharId3(model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			m.CharId3 = result.get<std::string>(colIndex);
		}

	};
}
