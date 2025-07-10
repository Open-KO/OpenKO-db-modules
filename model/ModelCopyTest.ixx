module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module Model:CopyTest;

namespace binder
{
	export class CopyTestBinder;
}

namespace model
{

	export class CopyTest 
	{
	/// \publicsection
	public:
		using BinderType = binder::CopyTestBinder;

		/// \brief Column [ITEMSERIAL]: Item Serial
		///
		/// \property ItemSerial
		int64_t ItemSerial = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "COPY_TEST";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"ITEMSERIAL"
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
