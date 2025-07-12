module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module EbenezerModel:Event;

import ModelUtil;

namespace ebenezer_binder
{
	export class Event;
}

namespace ebenezer_model
{
	/// \brief [EVENT] Event Information
	/// \class Event
	/// \xrefitem gamedb "Game Database" "Game Database" EVENT Event Information
	export class Event 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::Event;

		/// \brief Column [ZoneNum]: Zone Number
		///
		/// \property ZoneNumber
		uint8_t ZoneNumber = 0;

		/// \brief Column [EventNum]: Event Number
		///
		/// \property EventNumber
		int16_t EventNumber = 0;

		/// \brief Column [Type]: Event Type
		///
		/// \property EventType
		uint8_t EventType = 0;

		/// \brief Column [Exec1]: Execute 1
		///
		/// \property Execute1
		std::optional<std::string> Execute1;

		/// \brief Column [Exec2]: Execute 2
		///
		/// \property Execute2
		std::optional<std::string> Execute2;

		/// \brief Column [Exec3]: Execute 3
		///
		/// \property Execute3
		std::optional<std::string> Execute3;

		/// \brief Column [Exec4]: Execute 4
		///
		/// \property Execute4
		std::optional<std::string> Execute4;

		/// \brief Column [Exec5]: Execute 5
		///
		/// \property Execute5
		std::optional<std::string> Execute5;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "EVENT";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"ZoneNum", "EventNum", "Type", "Exec1", "Exec2", "Exec3", "Exec4", "Exec5"
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
