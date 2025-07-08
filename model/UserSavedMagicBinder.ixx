module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:UserSavedMagic;

namespace model
{
	/// \brief generated column binder for the UserSavedMagic model, using nanodbc
	export class UserSavedMagicBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserSavedMagicBinder::BindCharId},
				{"nSkill1", &UserSavedMagicBinder::BindSkill1},
				{"nDuring1", &UserSavedMagicBinder::BindDuring1},
				{"nSkill2", &UserSavedMagicBinder::BindSkill2},
				{"nDuring2", &UserSavedMagicBinder::BindDuring2},
				{"nSkill3", &UserSavedMagicBinder::BindSkill3},
				{"nDuring3", &UserSavedMagicBinder::BindDuring3},
				{"nSkill4", &UserSavedMagicBinder::BindSkill4},
				{"nDuring4", &UserSavedMagicBinder::BindDuring4},
				{"nSkill5", &UserSavedMagicBinder::BindSkill5},
				{"nDuring5", &UserSavedMagicBinder::BindDuring5},
				{"nSkill6", &UserSavedMagicBinder::BindSkill6},
				{"nDuring6", &UserSavedMagicBinder::BindDuring6},
				{"nSkill7", &UserSavedMagicBinder::BindSkill7},
				{"nDuring7", &UserSavedMagicBinder::BindDuring7},
				{"nSkill8", &UserSavedMagicBinder::BindSkill8},
				{"nDuring8", &UserSavedMagicBinder::BindDuring8},
				{"nSkill9", &UserSavedMagicBinder::BindSkill9},
				{"nDuring9", &UserSavedMagicBinder::BindDuring9},
				{"nSkill10", &UserSavedMagicBinder::BindSkill10},
				{"nDuring10", &UserSavedMagicBinder::BindDuring10}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to Skill1
		static void BindSkill1(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill1);
		}

		/// \brief Binds a result's column to During1
		static void BindDuring1(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During1);
		}

		/// \brief Binds a result's column to Skill2
		static void BindSkill2(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill2);
		}

		/// \brief Binds a result's column to During2
		static void BindDuring2(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During2);
		}

		/// \brief Binds a result's column to Skill3
		static void BindSkill3(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill3);
		}

		/// \brief Binds a result's column to During3
		static void BindDuring3(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During3);
		}

		/// \brief Binds a result's column to Skill4
		static void BindSkill4(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill4);
		}

		/// \brief Binds a result's column to During4
		static void BindDuring4(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During4);
		}

		/// \brief Binds a result's column to Skill5
		static void BindSkill5(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill5);
		}

		/// \brief Binds a result's column to During5
		static void BindDuring5(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During5);
		}

		/// \brief Binds a result's column to Skill6
		static void BindSkill6(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill6);
		}

		/// \brief Binds a result's column to During6
		static void BindDuring6(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During6);
		}

		/// \brief Binds a result's column to Skill7
		static void BindSkill7(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill7);
		}

		/// \brief Binds a result's column to During7
		static void BindDuring7(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During7);
		}

		/// \brief Binds a result's column to Skill8
		static void BindSkill8(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill8);
		}

		/// \brief Binds a result's column to During8
		static void BindDuring8(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During8);
		}

		/// \brief Binds a result's column to Skill9
		static void BindSkill9(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill9);
		}

		/// \brief Binds a result's column to During9
		static void BindDuring9(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During9);
		}

		/// \brief Binds a result's column to Skill10
		static void BindSkill10(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill10);
		}

		/// \brief Binds a result's column to During10
		static void BindDuring10(UserSavedMagic& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During10);
		}

	};
}
