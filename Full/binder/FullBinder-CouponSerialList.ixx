module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:CouponSerialList;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::CouponSerialList
	export class CouponSerialList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &CouponSerialList::BindIndex},
				{"strSerialNum", &CouponSerialList::BindSerialNum},
				{"nItemNum", &CouponSerialList::BindItemNumber},
				{"sItemCount", &CouponSerialList::BindItemCount}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to SerialNum
		static void BindSerialNum(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.SerialNum);
		}

		/// \brief Binds a result's column to ItemNumber
		static void BindItemNumber(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemNumber);
		}

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemCount);
		}

	};
}
