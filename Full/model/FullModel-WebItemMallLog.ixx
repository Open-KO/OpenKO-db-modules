module;

#include <cstdint>
#include <ctime>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:WebItemMallLog;

import ModelUtil;

namespace full_binder
{
	export class WebItemMallLog;
}

namespace full_model
{
	/// \brief [WEB_ITEMMALL_LOG] Power-up store purchase log
	/// \class WebItemMallLog
	/// \xrefitem gamedb "Game Database" "Game Database" WEB_ITEMMALL_LOG Power-up store purchase log
	export class WebItemMallLog 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::WebItemMallLog;

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
		int16_t ServerId = {};

		/// \brief Column [ItemID]: Item identifier
		///
		/// \property ItemId
		int32_t ItemId = {};

		/// \brief Column [ItemCount]: Number of items granted on purchase
		///
		/// \property ItemCount
		int16_t ItemCount = {};

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
			static const std::string tableName = "WEB_ITEMMALL_LOG";
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
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};
}
