module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:UserEditor;

namespace model
{
	class UserEditor;

	/// \brief generated column binder for the UserEditor model, using nanodbc
	export class UserEditorBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(UserEditor& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserEditorBinder::BindCharId},
				{"strAccountID", &UserEditorBinder::BindAccountId},
				{"strOpID", &UserEditorBinder::BindOpId},
				{"strOpIP", &UserEditorBinder::BindOpIP},
				{"strOldUserValue", &UserEditorBinder::BindOldUserValue},
				{"strNewUserValue", &UserEditorBinder::BindNewUserValue},
				{"strOldUserSkill", &UserEditorBinder::BindOldUserSkill},
				{"strNewUserSkill", &UserEditorBinder::BindNewUserSkill},
				{"strOldUserItem", &UserEditorBinder::BindOldUserItem},
				{"strNewUserItem", &UserEditorBinder::BindNewUserItem},
				{"strOldWHValue", &UserEditorBinder::BindOldWarehouseValue},
				{"strNewWHValue", &UserEditorBinder::BindNewWarehouseValue},
				{"strOldWHItem", &UserEditorBinder::BindOldWarehouseItem},
				{"strNewWHItem", &UserEditorBinder::BindNewWarehouseItem},
				{"EditorTime", &UserEditorBinder::BindEditorTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to OpId
		static void BindOpId(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpId);
		}

		/// \brief Binds a result's column to OpIP
		static void BindOpIP(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpIP);
		}

		/// \brief Binds a result's column to OldUserValue
		static void BindOldUserValue(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserValue);
		}

		/// \brief Binds a result's column to NewUserValue
		static void BindNewUserValue(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserValue);
		}

		/// \brief Binds a result's column to OldUserSkill
		static void BindOldUserSkill(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserSkill);
		}

		/// \brief Binds a result's column to NewUserSkill
		static void BindNewUserSkill(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserSkill);
		}

		/// \brief Binds a result's column to OldUserItem
		static void BindOldUserItem(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserItem);
		}

		/// \brief Binds a result's column to NewUserItem
		static void BindNewUserItem(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserItem);
		}

		/// \brief Binds a result's column to OldWarehouseValue
		static void BindOldWarehouseValue(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldWarehouseValue);
		}

		/// \brief Binds a result's column to NewWarehouseValue
		static void BindNewWarehouseValue(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewWarehouseValue);
		}

		/// \brief Binds a result's column to OldWarehouseItem
		static void BindOldWarehouseItem(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldWarehouseItem);
		}

		/// \brief Binds a result's column to NewWarehouseItem
		static void BindNewWarehouseItem(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewWarehouseItem);
		}

		/// \brief Binds a result's column to EditorTime
		static void BindEditorTime(UserEditor& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.EditorTime);
		}

	};
}
