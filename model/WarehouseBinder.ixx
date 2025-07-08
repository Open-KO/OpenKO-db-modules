module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:Warehouse;

namespace model
{
	/// \brief generated column binder for the Warehouse model, using nanodbc
	export class WarehouseBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(Warehouse& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &WarehouseBinder::BindAccountId},
				{"nMoney", &WarehouseBinder::BindMoney},
				{"dwTime", &WarehouseBinder::BindDwTime},
				{"WarehouseData", &WarehouseBinder::BindItemData},
				{"strSerial", &WarehouseBinder::BindSerial}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(Warehouse& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(Warehouse& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(Warehouse& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DwTime);
		}

		/// \brief Binds a result's column to ItemData
		static void BindItemData(Warehouse& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.ItemData);
		}

		/// \brief Binds a result's column to Serial
		static void BindSerial(Warehouse& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Serial);
		}

	};
}
