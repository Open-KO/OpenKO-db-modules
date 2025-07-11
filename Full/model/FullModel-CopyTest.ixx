module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module FullModel:CopyTest;

import ModelUtil;

namespace full_binder
{
	export class CopyTest;
}

namespace full_model
{
	/// \brief [COPY_TEST] TODO: Doc
	/// \class CopyTest
	/// \xrefitem gamedb "Game Database" "Game Database" COPY_TEST TODO: Doc
	export class CopyTest 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::CopyTest;

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
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

	};
}
