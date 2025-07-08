module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:RentalItemListBinder;

import :RentalItemList;

namespace model
{
	/// \brief generated column binder for the RentalItemList model, using nanodbc
	export class RentalItemListBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(RentalItemList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRentalIndex", &RentalItemListBinder::BindRentalIndex},
				{"nItemIndex", &RentalItemListBinder::BindItemIndex},
				{"sDurability", &RentalItemListBinder::BindDurability},
				{"nSerialNumber", &RentalItemListBinder::BindSerialNumber},
				{"byRegType", &RentalItemListBinder::BindRegType},
				{"byItemType", &RentalItemListBinder::BindItemType},
				{"byClass", &RentalItemListBinder::BindClass},
				{"sRentalTime", &RentalItemListBinder::BindRentalTime},
				{"nRentalMoney", &RentalItemListBinder::BindRentalMoney},
				{"strLenderCharID", &RentalItemListBinder::BindLenderCharId},
				{"strLenderAcID", &RentalItemListBinder::BindLenderAccountId},
				{"strBorrowerCharID", &RentalItemListBinder::BindBorrowerCharId},
				{"strBorrowerAcID", &RentalItemListBinder::BindBorrowerAccountId},
				{"timeLender", &RentalItemListBinder::BindLendTime},
				{"timeRegister", &RentalItemListBinder::BindRegisterTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalIndex);
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.SerialNumber);
		}

		/// \brief Binds a result's column to RegType
		static void BindRegType(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RegType);
		}

		/// \brief Binds a result's column to ItemType
		static void BindItemType(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemType);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RentalTime);
		}

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalMoney);
		}

		/// \brief Binds a result's column to LenderCharId
		static void BindLenderCharId(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderCharId);
		}

		/// \brief Binds a result's column to LenderAccountId
		static void BindLenderAccountId(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderAccountId);
		}

		/// \brief Binds a result's column to BorrowerCharId
		static void BindBorrowerCharId(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerCharId);
		}

		/// \brief Binds a result's column to BorrowerAccountId
		static void BindBorrowerAccountId(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerAccountId);
		}

		/// \brief Binds a result's column to LendTime
		static void BindLendTime(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::time_t>>(colIndex, m.LendTime);
		}

		/// \brief Binds a result's column to RegisterTime
		static void BindRegisterTime(RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.RegisterTime);
		}

	};
}
