module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module AujardBinder;

import AujardModel;
import BinderUtil;

namespace aujard_binder
{
	/// \brief generated nanodbc column binder for aujard_model::Battle
	export class Battle
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::Battle& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &Battle::BindIndex},
				{"byNation", &Battle::BindNation},
				{"strUserName", &Battle::BindUserName}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(aujard_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(aujard_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to UserName
		static void BindUserName(aujard_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.UserName);
		}

	};

	/// \brief generated nanodbc column binder for aujard_model::CurrentUser
	export class CurrentUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nServerNo", &CurrentUser::BindServerId},
				{"strServerIP", &CurrentUser::BindServerIP},
				{"strAccountID", &CurrentUser::BindAccountId},
				{"strCharID", &CurrentUser::BindCharId},
				{"strClientIP", &CurrentUser::BindClientIP}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to ServerIP
		static void BindServerIP(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.ServerIP);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to ClientIP
		static void BindClientIP(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.ClientIP);
		}

	};

	/// \brief generated nanodbc column binder for aujard_model::Item
	export class Item
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::Item& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"Num", &Item::BindID},
				{"Countable", &Item::BindCountable}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(aujard_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Countable
		static void BindCountable(aujard_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Countable);
		}

	};

	/// \brief generated nanodbc column binder for aujard_model::Knights
	export class Knights
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::Knights& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"IDNum", &Knights::BindID},
				{"Nation", &Knights::BindNation},
				{"Ranking", &Knights::BindRanking},
				{"IDName", &Knights::BindName},
				{"Members", &Knights::BindMembers},
				{"Points", &Knights::BindPoints}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Ranking
		static void BindRanking(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Ranking);
		}

		/// \brief Binds a result's column to Name
		static void BindName(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Members
		static void BindMembers(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Members);
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Points);
		}

	};

	/// \brief generated nanodbc column binder for aujard_model::UserData
	export class UserData
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::UserData& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserId", &UserData::BindUserId},
				{"Exp", &UserData::BindExp},
				{"dwTime", &UserData::BindDwTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(aujard_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(aujard_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(aujard_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DwTime);
		}

	};

	/// \brief generated nanodbc column binder for aujard_model::Warehouse
	export class Warehouse
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &Warehouse::BindAccountId},
				{"nMoney", &Warehouse::BindMoney},
				{"dwTime", &Warehouse::BindDwTime},
				{"WarehouseData", &Warehouse::BindItemData},
				{"strSerial", &Warehouse::BindSerial}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DwTime);
		}

		/// \brief Binds a result's column to ItemData
		static void BindItemData(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ItemData);
		}

		/// \brief Binds a result's column to Serial
		static void BindSerial(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Serial);
		}

	};
}