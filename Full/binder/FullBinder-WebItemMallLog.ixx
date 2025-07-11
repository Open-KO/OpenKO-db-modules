module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:WebItemMallLog;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::WebItemMallLog
	export class WebItemMallLog
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &WebItemMallLog::BindAccountId},
				{"strCharID", &WebItemMallLog::BindCharId},
				{"ServerNo", &WebItemMallLog::BindServerId},
				{"ItemID", &WebItemMallLog::BindItemId},
				{"ItemCount", &WebItemMallLog::BindItemCount},
				{"BuyTime", &WebItemMallLog::BindBuyTime},
				{"img_file_name", &WebItemMallLog::BindImgFileName},
				{"strItemName", &WebItemMallLog::BindItemName},
				{"price", &WebItemMallLog::BindPrice},
				{"pay_type", &WebItemMallLog::BindPayType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to ItemId
		static void BindItemId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId);
		}

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemCount);
		}

		/// \brief Binds a result's column to BuyTime
		static void BindBuyTime(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.BuyTime);
		}

		/// \brief Binds a result's column to ImgFileName
		static void BindImgFileName(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ImgFileName.reset();
			}
			else
			{
				m.ImgFileName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemName
		static void BindItemName(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemName.reset();
			}
			else
			{
				m.ItemName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Price
		static void BindPrice(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Price.reset();
			}
			else
			{
				m.Price = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to PayType
		static void BindPayType(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.PayType.reset();
			}
			else
			{
				m.PayType = result.get<int32_t>(colIndex);
			}
		}

	};
}
