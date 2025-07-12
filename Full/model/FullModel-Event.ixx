module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:Event;

import ModelUtil;

namespace full_binder
{
	export class Event;
}

namespace full_model
{
	/// \brief [EVENT] Event Information
	/// \class Event
	/// \xrefitem gamedb "Game Database" "Game Database" EVENT Event Information
	export class Event 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::Event;

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

		/// \brief Column [Cond1]: Condition 1
		///
		/// \property Condition1
		std::optional<std::string> Condition1;

		/// \brief Column [Cond2]: Condition 2
		///
		/// \property Condition2
		std::optional<std::string> Condition2;

		/// \brief Column [Cond3]: Condition 3
		///
		/// \property Condition3
		std::optional<std::string> Condition3;

		/// \brief Column [Cond4]: Condition 4
		///
		/// \property Condition4
		std::optional<std::string> Condition4;

		/// \brief Column [Cond5]: Condition 5
		///
		/// \property Condition5
		std::optional<std::string> Condition5;

		/// \brief Column [Exec1]: Execute 1
		///
		/// \property Execute1
		std::string Execute1;

		/// \brief Column [Exec2]: Execute 2
		///
		/// \property Execute2
		std::string Execute2;

		/// \brief Column [Exec3]: Execute 3
		///
		/// \property Execute3
		std::string Execute3;

		/// \brief Column [Exec4]: Execute 4
		///
		/// \property Execute4
		std::string Execute4;

		/// \brief Column [Exec5]: Execute 5
		///
		/// \property Execute5
		std::string Execute5;

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
				"ZoneNum", "EventNum", "Type", "Cond1", "Cond2", "Cond3", "Cond4", "Cond5", "Exec1", "Exec2", "Exec3", "Exec4", "Exec5"
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
