module;

#include <cstdint>
#include <ctime>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:RentalItemList;

namespace model
{
	export class RentalItemListBinder;
	
	/// \brief [RENTAL_ITEM_LIST] Rental item list
	/// \class RentalItemList
	/// \xrefitem gamedb "Game Database" "Game Database" RENTAL_ITEM_LIST
	export class RentalItemList 
	{
	/// \publicsection
	public:
		using BinderType = RentalItemListBinder;

		/// \brief Column [nRentalIndex]: Rental index
		///
		/// \property RentalIndex
		int32_t RentalIndex = 0;

		/// \brief Column [nItemIndex]: Item index
		///
		/// \property ItemIndex
		int32_t ItemIndex = 0;

		/// \brief Column [sDurability]: Durability
		///
		/// \property Durability
		int16_t Durability = 0;

		/// \brief Column [nSerialNumber]: Serial number
		///
		/// \property SerialNumber
		int64_t SerialNumber = 0;

		/// \brief Column [byRegType]: Reg type
		///
		/// \property RegType
		int16_t RegType = 0;

		/// \brief Column [byItemType]: Item type
		///
		/// \property ItemType
		int16_t ItemType = 0;

		/// \brief Column [byClass]: Class
		///
		/// \property Class
		int16_t Class = 0;

		/// \brief Column [sRentalTime]: Rental time
		///
		/// \property RentalTime
		int16_t RentalTime = 0;

		/// \brief Column [nRentalMoney]: Rental money
		///
		/// \property RentalMoney
		int32_t RentalMoney = 0;

		/// \brief Column [strLenderCharID]: Lender character identifier
		///
		/// \property LenderCharId
		std::string LenderCharId;

		/// \brief Column [strLenderAcID]: Lender account identifier
		///
		/// \property LenderAccountId
		std::string LenderAccountId;

		/// \brief Column [strBorrowerCharID]: Borrower character identifier
		///
		/// \property BorrowerCharId
		std::optional<std::string> BorrowerCharId;

		/// \brief Column [strBorrowerAcID]: Borrower account identifier
		///
		/// \property BorrowerAccountId
		std::optional<std::string> BorrowerAccountId;

		/// \brief Column [timeLender]: Lend time
		///
		/// \property LendTime
		std::optional<std::time_t> LendTime;

		/// \brief Column [timeRegister]: Register time
		///
		/// \property RegisterTime
		std::time_t RegisterTime;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "RENTAL_ITEM_LIST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "byRegType", "byItemType", "byClass", "sRentalTime", "nRentalMoney", "strLenderCharID", "strLenderAcID", "strBorrowerCharID", "strBorrowerAcID", "timeLender", "timeRegister"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
