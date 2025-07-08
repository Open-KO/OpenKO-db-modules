module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:AccountChar;

namespace model
{
	/// \brief generated column binder for the AccountChar model, using nanodbc
	export class AccountCharBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(AccountChar& m, const nanodbc::result& result, short colIndex);

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
		static void BindAccountId(AccountChar& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(AccountChar& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to CharNum
		static void BindCharNum(AccountChar& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.CharNum);
		}

		/// \brief Binds a result's column to CharId1
		static void BindCharId1(AccountChar& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.CharId1);
		}

		/// \brief Binds a result's column to CharId2
		static void BindCharId2(AccountChar& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.CharId2);
		}

		/// \brief Binds a result's column to CharId3
		static void BindCharId3(AccountChar& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.CharId3);
		}

	};
}
