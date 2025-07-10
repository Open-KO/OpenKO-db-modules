module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:Warehouse;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::Warehouse
	export class Warehouse
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::Warehouse& m, const nanodbc::result& result, short colIndex);

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
		static void BindAccountId(model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DwTime);
		}

		/// \brief Binds a result's column to ItemData
		static void BindItemData(model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemData = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Serial
		static void BindSerial(model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			m.Serial = result.get<std::string>(colIndex);
		}

	};
}
