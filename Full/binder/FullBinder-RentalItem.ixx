module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:RentalItem;

import FullModel;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::RentalItem
	export class RentalItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::RentalItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRentalIndex", &RentalItem::BindRentalIndex},
				{"nItemIndex", &RentalItem::BindItemIndex},
				{"sDurability", &RentalItem::BindDurability},
				{"nSerialNumber", &RentalItem::BindSerialNumber},
				{"byRegType", &RentalItem::BindRegType},
				{"byItemType", &RentalItem::BindItemType},
				{"byClass", &RentalItem::BindClass},
				{"sRentalTime", &RentalItem::BindRentalTime},
				{"nRentalMoney", &RentalItem::BindRentalMoney},
				{"strLenderCharID", &RentalItem::BindLenderCharId},
				{"strLenderAcID", &RentalItem::BindLenderAccountId},
				{"strBorrowerCharID", &RentalItem::BindBorrowerCharId},
				{"strBorrowerAcID", &RentalItem::BindBorrowerAccountId},
				{"timeLender", &RentalItem::BindLendTime},
				{"timeRegister", &RentalItem::BindRegisterTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalIndex);
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.SerialNumber);
		}

		/// \brief Binds a result's column to RegType
		static void BindRegType(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RegType);
		}

		/// \brief Binds a result's column to ItemType
		static void BindItemType(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemType);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RentalTime);
		}

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalMoney);
		}

		/// \brief Binds a result's column to LenderCharId
		static void BindLenderCharId(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderCharId);
		}

		/// \brief Binds a result's column to LenderAccountId
		static void BindLenderAccountId(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderAccountId);
		}

		/// \brief Binds a result's column to BorrowerCharId
		static void BindBorrowerCharId(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			m.BorrowerCharId = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to BorrowerAccountId
		static void BindBorrowerAccountId(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			m.BorrowerAccountId = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to LendTime
		static void BindLendTime(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			m.LendTime = result.get<std::time_t>(colIndex);
		}

		/// \brief Binds a result's column to RegisterTime
		static void BindRegisterTime(model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.RegisterTime);
		}

	};
}
