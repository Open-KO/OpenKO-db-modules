module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module Model:WebpageAddress;

namespace model_binder
{
	export class WebpageAddress;
}

namespace model
{
	/// \brief [WEBPAGE_ADDRESS] Webpage URL list
	/// \class WebpageAddress
	/// \xrefitem gamedb "Game Database" "Game Database" WEBPAGE_ADDRESS Webpage URL list
	export class WebpageAddress 
	{
	/// \publicsection
	public:
		using BinderType = model_binder::WebpageAddress;

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
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
