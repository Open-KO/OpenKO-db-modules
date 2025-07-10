module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:UserEditorItem;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderUserEditorItem
	export class UserEditorItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserEditorItemBinder::BindCharId},
				{"strAccountID", &UserEditorItemBinder::BindAccountId},
				{"strOpID", &UserEditorItemBinder::BindOpId},
				{"strOpIP", &UserEditorItemBinder::BindOpIP},
				{"sDBIndex", &UserEditorItemBinder::BindDbIndex},
				{"sPos", &UserEditorItemBinder::BindPos},
				{"byType", &UserEditorItemBinder::BindType},
				{"nItemID1", &UserEditorItemBinder::BindItemId1},
				{"nItemID2", &UserEditorItemBinder::BindItemId2},
				{"UpdateTime", &UserEditorItemBinder::BindUpdateTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to OpId
		static void BindOpId(model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpId);
		}

		/// \brief Binds a result's column to OpIP
		static void BindOpIP(model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpIP);
		}

		/// \brief Binds a result's column to DbIndex
		static void BindDbIndex(model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DbIndex);
		}

		/// \brief Binds a result's column to Pos
		static void BindPos(model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Pos);
		}

		/// \brief Binds a result's column to Type
		static void BindType(model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId2);
		}

		/// \brief Binds a result's column to UpdateTime
		static void BindUpdateTime(model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			m.UpdateTime = result.get<std::time_t>(colIndex);
		}

	};
}
