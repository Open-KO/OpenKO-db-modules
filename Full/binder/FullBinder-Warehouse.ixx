module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:Warehouse;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::Warehouse
	export class Warehouse
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Warehouse& m, const nanodbc::result& result, short colIndex);

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
		static void BindAccountId(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DwTime);
		}

		/// \brief Binds a result's column to ItemData
		static void BindItemData(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemData.reset();
			}
			else
			{
				m.ItemData = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to Serial
		static void BindSerial(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Serial.reset();
			}
			else
			{
				m.Serial = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

	};
}
