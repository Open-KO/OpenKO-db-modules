module;

#include <cstdint>
#include <string>
#include <unordered_set>

export module EbenezerModel:EventTrigger;

import ModelUtil;

namespace ebenezer_binder
{
	export class EventTrigger;
}

namespace ebenezer_model
{
	/// \brief [EVENT_TRIGGER] NPC Event Triggers
	/// \class EventTrigger
	/// \xrefitem gamedb "Game Database" "Game Database" EVENT_TRIGGER NPC Event Triggers
	export class EventTrigger 
	{
	/// \publicsection
	public:
		using BinderType = ebenezer_binder::EventTrigger;

		/// \brief Column [nIndex]: Index
		///
		/// \property Index
		int32_t Index = 0;

		/// \brief Column [bNpcType]: NPC type
		///
		/// \property NpcType
		uint8_t NpcType = 0;

		/// \brief Column [sNpcID]: NPC identifer
		///
		/// \property NpcId
		int16_t NpcId = 0;

		/// \brief Column [nTriggerNum]: Trigger number
		///
		/// \property TriggerNumber
		int32_t TriggerNumber = 0;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "EVENT_TRIGGER";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"nIndex", "bNpcType", "sNpcID", "nTriggerNum"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType() const
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
		const int32_t& MapKey() const
		{
			return Index;
		}

	};
}
