module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:UserRentalItemBinder;

import :UserRentalItem;

namespace model
{
	/// \brief generated column binder for the UserRentalItem model, using nanodbc
	export class UserRentalItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(UserRentalItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserID", &UserRentalItemBinder::BindUserId},
				{"strAccountID", &UserRentalItemBinder::BindAccountId},
				{"byRentalType", &UserRentalItemBinder::BindRentalType},
				{"byRegType", &UserRentalItemBinder::BindRegTime},
				{"nRentalIndex", &UserRentalItemBinder::BindRentalIndex},
				{"nItemIndex", &UserRentalItemBinder::BindItemIndex},
				{"sDurability", &UserRentalItemBinder::BindDurability},
				{"nSerialNumber", &UserRentalItemBinder::BindSerialNumber},
				{"nRentalMoney", &UserRentalItemBinder::BindRentalMoney},
				{"sRentalTime", &UserRentalItemBinder::BindRentalTime},
				{"sDuringTime", &UserRentalItemBinder::BindDuringTime},
				{"timeRental", &UserRentalItemBinder::BindRentalTimestamp},
				{"timeRegister", &UserRentalItemBinder::BindRegisterTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to RentalType
		static void BindRentalType(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RentalType);
		}

		/// \brief Binds a result's column to RegTime
		static void BindRegTime(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RegTime);
		}

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalIndex);
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.SerialNumber);
		}

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalMoney);
		}

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RentalTime);
		}

		/// \brief Binds a result's column to DuringTime
		static void BindDuringTime(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DuringTime);
		}

		/// \brief Binds a result's column to RentalTimestamp
		static void BindRentalTimestamp(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::time_t>>(colIndex, m.RentalTimestamp);
		}

		/// \brief Binds a result's column to RegisterTime
		static void BindRegisterTime(UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::time_t>>(colIndex, m.RegisterTime);
		}

	};
}
