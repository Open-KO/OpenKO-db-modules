module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:ServerResource;

import ModelUtil;

namespace full_binder
{
	export class ServerResource;
}

namespace full_model
{
	/// \brief [SERVER_RESOURCE] Server resource
	/// \class ServerResource
	/// \xrefitem gamedb "Game Database" "Game Database" SERVER_RESOURCE Server resource
	export class ServerResource 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::ServerResource;

		/// \brief Column [nResourceID]: Resource Identifier
		///
		/// \property ResourceId
		int32_t ResourceId = 0;

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [strResource]: Sprintf supported string
		///
		/// \property Resource
		std::optional<std::string> Resource;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "SERVER_RESOURCE";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nResourceID", "strName", "strResource"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey()
		{
			static const std::vector<std::string> primaryKey =
			{
				"nResourceID"
			};
			return primaryKey;
		}

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const
		{
			return ResourceId;
		}

	};
}
