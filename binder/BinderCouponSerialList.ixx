module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:CouponSerialList;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderCouponSerialList
	export class CouponSerialListBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &CouponSerialListBinder::BindIndex},
				{"strSerialNum", &CouponSerialListBinder::BindSerialNum},
				{"nItemNum", &CouponSerialListBinder::BindItemNumber},
				{"sItemCount", &CouponSerialListBinder::BindItemCount}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to SerialNum
		static void BindSerialNum(model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.SerialNum);
		}

		/// \brief Binds a result's column to ItemNumber
		static void BindItemNumber(model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemNumber);
		}

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemCount);
		}

	};
}
