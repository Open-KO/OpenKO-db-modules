module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module Model:CouponSerialList;

namespace binder
{
	export class CouponSerialList;
}

namespace model
{
	/// \brief [COUPON_SERIAL_LIST] Coupon Serial List
	/// \class CouponSerialList
	/// \xrefitem gamedb "Game Database" "Game Database" COUPON_SERIAL_LIST
	export class CouponSerialList 
	{
	/// \publicsection
	public:
		using BinderType = binder::CouponSerialList;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = 0;

		/// \brief Column [strSerialNum]: Serial Number
		///
		/// \property SerialNum
		std::string SerialNum;

		/// \brief Column [nItemNum]: Item Number
		///
		/// \property ItemNumber
		int32_t ItemNumber = 0;

		/// \brief Column [sItemCount]: Item Count
		///
		/// \property ItemCount
		int16_t ItemCount = 0;

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

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
