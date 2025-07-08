module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:UserEditorItemBinder;

import :UserEditorItem;

namespace model
{
	/// \brief generated column binder for the UserEditorItem model, using nanodbc
	export class UserEditorItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(UserEditorItem& m, const nanodbc::result& result, short colIndex);

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
		static void BindCharId(UserEditorItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(UserEditorItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to OpId
		static void BindOpId(UserEditorItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpId);
		}

		/// \brief Binds a result's column to OpIP
		static void BindOpIP(UserEditorItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpIP);
		}

		/// \brief Binds a result's column to DbIndex
		static void BindDbIndex(UserEditorItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DbIndex);
		}

		/// \brief Binds a result's column to Pos
		static void BindPos(UserEditorItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Pos);
		}

		/// \brief Binds a result's column to Type
		static void BindType(UserEditorItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(UserEditorItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(UserEditorItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId2);
		}

		/// \brief Binds a result's column to UpdateTime
		static void BindUpdateTime(UserEditorItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::time_t>>(colIndex, m.UpdateTime);
		}

	};
}
