module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module EbenezerModel:WebpageAddress;

import ModelUtil;

namespace ebenezer_binder
{
	export class WebpageAddress;
}

namespace ebenezer_model
{
	/// \brief [WEBPAGE_ADDRESS] Webpage URL list
	/// \class WebpageAddress
	/// \xrefitem gamedb "Game Database" "Game Database" WEBPAGE_ADDRESS Webpage URL list
	export class WebpageAddress 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::WebpageAddress;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = 0;

		/// \brief Column [strWebPageAddress]: Webpage address
		///
		/// \property WebPageAddress
		std::optional<std::string> WebPageAddress;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "WEBPAGE_ADDRESS";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "strWebPageAddress"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType& DbType()
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
		const int32_t& MapKey()
		{
			return Index;
		}

	};
}
