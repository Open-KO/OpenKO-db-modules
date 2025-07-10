module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:WebItemMallLog;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderWebItemMallLog
	export class WebItemMallLogBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &WebItemMallLogBinder::BindAccountId},
				{"strCharID", &WebItemMallLogBinder::BindCharId},
				{"ServerNo", &WebItemMallLogBinder::BindServerId},
				{"ItemID", &WebItemMallLogBinder::BindItemId},
				{"ItemCount", &WebItemMallLogBinder::BindItemCount},
				{"BuyTime", &WebItemMallLogBinder::BindBuyTime},
				{"img_file_name", &WebItemMallLogBinder::BindImgFileName},
				{"strItemName", &WebItemMallLogBinder::BindItemName},
				{"price", &WebItemMallLogBinder::BindPrice},
				{"pay_type", &WebItemMallLogBinder::BindPayType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to ItemId
		static void BindItemId(model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId);
		}

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemCount);
		}

		/// \brief Binds a result's column to BuyTime
		static void BindBuyTime(model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.BuyTime);
		}

		/// \brief Binds a result's column to ImgFileName
		static void BindImgFileName(model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			m.ImgFileName = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ItemName
		static void BindItemName(model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemName = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Price
		static void BindPrice(model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			m.Price = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to PayType
		static void BindPayType(model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			m.PayType = result.get<int32_t>(colIndex);
		}

	};
}
