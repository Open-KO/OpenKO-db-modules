module;

#include <cstdint>
#include <ctime>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:WebItemMall;

namespace model
{
	class WebItemMallBinder;
	
	/// \brief [WEB_ITEMMALL] Power-up store purchases
	/// \class WebItemMall
	/// \xrefitem gamedb "Game Database" "Game Database" WEB_ITEMMALL
	export class WebItemMall 
	{
	/// \publicsection
	public:
		using BinderType = WebItemMallBinder;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: Character identifier
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [ServerNo]: Server identifier
		///
		/// \property ServerId
		int16_t ServerId = 0;

		/// \brief Column [ItemID]: Item identifier
		///
		/// \property ItemId
		int32_t ItemId = 0;

		/// \brief Column [ItemCount]: Number of items granted on purchase
		///
		/// \property ItemCount
		int16_t ItemCount = 0;

		/// \brief Column [BuyTime]: Time of purchase
		///
		/// \property BuyTime
		std::time_t BuyTime;

		/// \brief Column [img_file_name]: Item image file name
		///
		/// \property ImgFileName
		std::optional<std::string> ImgFileName;

		/// \brief Column [strItemName]: Item name
		///
		/// \property ItemName
		std::optional<std::string> ItemName;

		/// \brief Column [price]: Price
		///
		/// \property Price
		std::optional<int32_t> Price;

		/// \brief Column [pay_type]: Pay type
		///
		/// \property PayType
		std::optional<int32_t> PayType;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "WEB_ITEMMALL";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strAccountID", "strCharID", "ServerNo", "ItemID", "ItemCount", "BuyTime", "img_file_name", "strItemName", "price", "pay_type"
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
