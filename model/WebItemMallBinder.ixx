module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:WebItemMall;

namespace model
{
	class WebItemMall;

	/// \brief generated column binder for the WebItemMall model, using nanodbc
	export class WebItemMallBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(WebItemMall& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &WebItemMallBinder::BindAccountId},
				{"strCharID", &WebItemMallBinder::BindCharId},
				{"ServerNo", &WebItemMallBinder::BindServerId},
				{"ItemID", &WebItemMallBinder::BindItemId},
				{"ItemCount", &WebItemMallBinder::BindItemCount},
				{"BuyTime", &WebItemMallBinder::BindBuyTime},
				{"img_file_name", &WebItemMallBinder::BindImgFileName},
				{"strItemName", &WebItemMallBinder::BindItemName},
				{"price", &WebItemMallBinder::BindPrice},
				{"pay_type", &WebItemMallBinder::BindPayType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(WebItemMall& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(WebItemMall& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(WebItemMall& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to ItemId
		static void BindItemId(WebItemMall& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId);
		}

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(WebItemMall& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemCount);
		}

		/// \brief Binds a result's column to BuyTime
		static void BindBuyTime(WebItemMall& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.BuyTime);
		}

		/// \brief Binds a result's column to ImgFileName
		static void BindImgFileName(WebItemMall& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.ImgFileName);
		}

		/// \brief Binds a result's column to ItemName
		static void BindItemName(WebItemMall& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.ItemName);
		}

		/// \brief Binds a result's column to Price
		static void BindPrice(WebItemMall& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.Price);
		}

		/// \brief Binds a result's column to PayType
		static void BindPayType(WebItemMall& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.PayType);
		}

	};
}
