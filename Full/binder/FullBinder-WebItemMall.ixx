module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:WebItemMall;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::WebItemMall
	export class WebItemMall
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &WebItemMall::BindAccountId},
				{"strCharID", &WebItemMall::BindCharId},
				{"ServerNo", &WebItemMall::BindServerId},
				{"ItemID", &WebItemMall::BindItemId},
				{"ItemCount", &WebItemMall::BindItemCount},
				{"BuyTime", &WebItemMall::BindBuyTime},
				{"img_file_name", &WebItemMall::BindImgFileName},
				{"strItemName", &WebItemMall::BindItemName},
				{"price", &WebItemMall::BindPrice},
				{"pay_type", &WebItemMall::BindPayType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to ItemId
		static void BindItemId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId);
		}

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemCount);
		}

		/// \brief Binds a result's column to BuyTime
		static void BindBuyTime(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			m.BuyTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

		/// \brief Binds a result's column to ImgFileName
		static void BindImgFileName(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
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
		static void BindItemName(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
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
		static void BindPrice(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
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
		static void BindPayType(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
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
