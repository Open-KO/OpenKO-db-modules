module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module EbenezerModel:RentalItem;

import ModelUtil;

namespace ebenezer_binder
{
	export class RentalItem;
}

namespace ebenezer_model
{
	/// \brief [RENTAL_ITEM] Rental item
	/// \class RentalItem
	/// \xrefitem gamedb "Game Database" "Game Database" RENTAL_ITEM Rental item
	export class RentalItem 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::RentalItem;

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
		uint8_t RegType = 0;

		/// \brief Column [byItemType]: Item type
		///
		/// \property ItemType
		uint8_t ItemType = 0;

		/// \brief Column [byClass]: Class
		///
		/// \property Class
		uint8_t Class = 0;

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

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "RENTAL_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "byRegType", "byItemType", "byClass", "sRentalTime", "nRentalMoney", "strLenderCharID", "strLenderAcID", "strBorrowerCharID", "strBorrowerAcID"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"nRentalIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return RentalIndex;
		}

	};
}
