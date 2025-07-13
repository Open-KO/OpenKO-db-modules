module;

#include <cstdint>
#include <ctime>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:UserRentalItem;

import ModelUtil;

namespace full_binder
{
	export class UserRentalItem;
}

namespace full_model
{
	/// \brief [USER_RENTAL_ITEM] User rental item
	/// \class UserRentalItem
	/// \xrefitem gamedb "Game Database" "Game Database" USER_RENTAL_ITEM User rental item
	export class UserRentalItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::UserRentalItem;

		/// \brief Column [strUserID]: User identifier
		///
		/// \property UserId
		std::string UserId;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [byRentalType]: Rental type
		///
		/// \property RentalType
		uint8_t RentalType = {};

		/// \brief Column [byRegType]: Reg time
		///
		/// \property RegTime
		uint8_t RegTime = {};

		/// \brief Column [nRentalIndex]: Rental index
		///
		/// \property RentalIndex
		int32_t RentalIndex = {};

		/// \brief Column [nItemIndex]: Item index
		///
		/// \property ItemIndex
		int32_t ItemIndex = {};

		/// \brief Column [sDurability]: Durability
		///
		/// \property Durability
		int16_t Durability = {};

		/// \brief Column [nSerialNumber]: Serial number
		///
		/// \property SerialNumber
		int64_t SerialNumber = {};

		/// \brief Column [nRentalMoney]: Rental money
		///
		/// \property RentalMoney
		int32_t RentalMoney = {};

		/// \brief Column [sRentalTime]: Rental time
		///
		/// \property RentalTime
		int16_t RentalTime = {};

		/// \brief Column [sDuringTime]: During time
		///
		/// \property DuringTime
		int16_t DuringTime = {};

		/// \brief Column [timeRental]: Rental time
		///
		/// \property RentalTimestamp
		std::optional<std::time_t> RentalTimestamp;

		/// \brief Column [timeRegister]: Registration time
		///
		/// \property RegisterTime
		std::optional<std::time_t> RegisterTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "USER_RENTAL_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strUserID", "strAccountID", "byRentalType", "byRegType", "nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "nRentalMoney", "sRentalTime", "sDuringTime", "timeRental", "timeRegister"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};
}
