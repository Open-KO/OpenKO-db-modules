module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:CouponSerialList;

import ModelUtil;

namespace full_binder
{
	export class CouponSerialList;
}

namespace full_model
{
	/// \brief [COUPON_SERIAL_LIST] Coupon Serial List
	/// \class CouponSerialList
	/// \xrefitem gamedb "Game Database" "Game Database" COUPON_SERIAL_LIST Coupon Serial List
	export class CouponSerialList 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::CouponSerialList;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = {};

		/// \brief Column [strSerialNum]: Serial Number
		///
		/// \property SerialNum
		std::string SerialNum;

		/// \brief Column [nItemNum]: Item Number
		///
		/// \property ItemNumber
		int32_t ItemNumber = {};

		/// \brief Column [sItemCount]: Item Count
		///
		/// \property ItemCount
		int16_t ItemCount = {};

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "COUPON_SERIAL_LIST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "strSerialNum", "nItemNum", "sItemCount"
			};
			return columnNames;
		}

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns()
		{
			static const std::unordered_set<std::string> blobColumns =
			{
				
			};
			return blobColumns;
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
				"nIndex"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return Index;
		}

	};
}
