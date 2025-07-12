module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:UserEditorItem;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::UserEditorItem
	export class UserEditorItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserEditorItem::BindCharId},
				{"strAccountID", &UserEditorItem::BindAccountId},
				{"strOpID", &UserEditorItem::BindOpId},
				{"strOpIP", &UserEditorItem::BindOpIP},
				{"sDBIndex", &UserEditorItem::BindDbIndex},
				{"sPos", &UserEditorItem::BindPos},
				{"byType", &UserEditorItem::BindType},
				{"nItemID1", &UserEditorItem::BindItemId1},
				{"nItemID2", &UserEditorItem::BindItemId2},
				{"UpdateTime", &UserEditorItem::BindUpdateTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to OpId
		static void BindOpId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpId);
		}

		/// \brief Binds a result's column to OpIP
		static void BindOpIP(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpIP);
		}

		/// \brief Binds a result's column to DbIndex
		static void BindDbIndex(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DbIndex);
		}

		/// \brief Binds a result's column to Pos
		static void BindPos(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Pos);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId2);
		}

		/// \brief Binds a result's column to UpdateTime
		static void BindUpdateTime(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.UpdateTime.reset();
			}
			else
			{
			m.UpdateTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
			}
		}

	};
}
