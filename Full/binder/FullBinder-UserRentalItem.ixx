module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:UserRentalItem;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::UserRentalItem
	export class UserRentalItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserID", &UserRentalItem::BindUserId},
				{"strAccountID", &UserRentalItem::BindAccountId},
				{"byRentalType", &UserRentalItem::BindRentalType},
				{"byRegType", &UserRentalItem::BindRegTime},
				{"nRentalIndex", &UserRentalItem::BindRentalIndex},
				{"nItemIndex", &UserRentalItem::BindItemIndex},
				{"sDurability", &UserRentalItem::BindDurability},
				{"nSerialNumber", &UserRentalItem::BindSerialNumber},
				{"nRentalMoney", &UserRentalItem::BindRentalMoney},
				{"sRentalTime", &UserRentalItem::BindRentalTime},
				{"sDuringTime", &UserRentalItem::BindDuringTime},
				{"timeRental", &UserRentalItem::BindRentalTimestamp},
				{"timeRegister", &UserRentalItem::BindRegisterTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to RentalType
		static void BindRentalType(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RentalType);
		}

		/// \brief Binds a result's column to RegTime
		static void BindRegTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RegTime);
		}

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalIndex);
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.SerialNumber);
		}

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalMoney);
		}

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RentalTime);
		}

		/// \brief Binds a result's column to DuringTime
		static void BindDuringTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DuringTime);
		}

		/// \brief Binds a result's column to RentalTimestamp
		static void BindRentalTimestamp(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			m.RentalTimestamp = result.get<std::time_t>(colIndex);
		}

		/// \brief Binds a result's column to RegisterTime
		static void BindRegisterTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			m.RegisterTime = result.get<std::time_t>(colIndex);
		}

	};
}
