module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:UserEditor;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::UserEditor
	export class UserEditor
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::UserEditor& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserEditor::BindCharId},
				{"strAccountID", &UserEditor::BindAccountId},
				{"strOpID", &UserEditor::BindOpId},
				{"strOpIP", &UserEditor::BindOpIP},
				{"strOldUserValue", &UserEditor::BindOldUserValue},
				{"strNewUserValue", &UserEditor::BindNewUserValue},
				{"strOldUserSkill", &UserEditor::BindOldUserSkill},
				{"strNewUserSkill", &UserEditor::BindNewUserSkill},
				{"strOldUserItem", &UserEditor::BindOldUserItem},
				{"strNewUserItem", &UserEditor::BindNewUserItem},
				{"strOldWHValue", &UserEditor::BindOldWarehouseValue},
				{"strNewWHValue", &UserEditor::BindNewWarehouseValue},
				{"strOldWHItem", &UserEditor::BindOldWarehouseItem},
				{"strNewWHItem", &UserEditor::BindNewWarehouseItem},
				{"EditorTime", &UserEditor::BindEditorTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to OpId
		static void BindOpId(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpId);
		}

		/// \brief Binds a result's column to OpIP
		static void BindOpIP(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpIP);
		}

		/// \brief Binds a result's column to OldUserValue
		static void BindOldUserValue(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserValue);
		}

		/// \brief Binds a result's column to NewUserValue
		static void BindNewUserValue(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserValue);
		}

		/// \brief Binds a result's column to OldUserSkill
		static void BindOldUserSkill(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserSkill);
		}

		/// \brief Binds a result's column to NewUserSkill
		static void BindNewUserSkill(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserSkill);
		}

		/// \brief Binds a result's column to OldUserItem
		static void BindOldUserItem(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserItem);
		}

		/// \brief Binds a result's column to NewUserItem
		static void BindNewUserItem(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserItem);
		}

		/// \brief Binds a result's column to OldWarehouseValue
		static void BindOldWarehouseValue(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldWarehouseValue);
		}

		/// \brief Binds a result's column to NewWarehouseValue
		static void BindNewWarehouseValue(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewWarehouseValue);
		}

		/// \brief Binds a result's column to OldWarehouseItem
		static void BindOldWarehouseItem(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldWarehouseItem);
		}

		/// \brief Binds a result's column to NewWarehouseItem
		static void BindNewWarehouseItem(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewWarehouseItem);
		}

		/// \brief Binds a result's column to EditorTime
		static void BindEditorTime(model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.EditorTime);
		}

	};
}
