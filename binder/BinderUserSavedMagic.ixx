module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:UserSavedMagic;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::UserSavedMagic
	export class UserSavedMagic
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserSavedMagic::BindCharId},
				{"nSkill1", &UserSavedMagic::BindSkill1},
				{"nDuring1", &UserSavedMagic::BindDuring1},
				{"nSkill2", &UserSavedMagic::BindSkill2},
				{"nDuring2", &UserSavedMagic::BindDuring2},
				{"nSkill3", &UserSavedMagic::BindSkill3},
				{"nDuring3", &UserSavedMagic::BindDuring3},
				{"nSkill4", &UserSavedMagic::BindSkill4},
				{"nDuring4", &UserSavedMagic::BindDuring4},
				{"nSkill5", &UserSavedMagic::BindSkill5},
				{"nDuring5", &UserSavedMagic::BindDuring5},
				{"nSkill6", &UserSavedMagic::BindSkill6},
				{"nDuring6", &UserSavedMagic::BindDuring6},
				{"nSkill7", &UserSavedMagic::BindSkill7},
				{"nDuring7", &UserSavedMagic::BindDuring7},
				{"nSkill8", &UserSavedMagic::BindSkill8},
				{"nDuring8", &UserSavedMagic::BindDuring8},
				{"nSkill9", &UserSavedMagic::BindSkill9},
				{"nDuring9", &UserSavedMagic::BindDuring9},
				{"nSkill10", &UserSavedMagic::BindSkill10},
				{"nDuring10", &UserSavedMagic::BindDuring10}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to Skill1
		static void BindSkill1(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill1);
		}

		/// \brief Binds a result's column to During1
		static void BindDuring1(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During1);
		}

		/// \brief Binds a result's column to Skill2
		static void BindSkill2(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill2);
		}

		/// \brief Binds a result's column to During2
		static void BindDuring2(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During2);
		}

		/// \brief Binds a result's column to Skill3
		static void BindSkill3(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill3);
		}

		/// \brief Binds a result's column to During3
		static void BindDuring3(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During3);
		}

		/// \brief Binds a result's column to Skill4
		static void BindSkill4(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill4);
		}

		/// \brief Binds a result's column to During4
		static void BindDuring4(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During4);
		}

		/// \brief Binds a result's column to Skill5
		static void BindSkill5(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill5);
		}

		/// \brief Binds a result's column to During5
		static void BindDuring5(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During5);
		}

		/// \brief Binds a result's column to Skill6
		static void BindSkill6(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill6);
		}

		/// \brief Binds a result's column to During6
		static void BindDuring6(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During6);
		}

		/// \brief Binds a result's column to Skill7
		static void BindSkill7(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill7);
		}

		/// \brief Binds a result's column to During7
		static void BindDuring7(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During7);
		}

		/// \brief Binds a result's column to Skill8
		static void BindSkill8(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill8);
		}

		/// \brief Binds a result's column to During8
		static void BindDuring8(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During8);
		}

		/// \brief Binds a result's column to Skill9
		static void BindSkill9(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill9);
		}

		/// \brief Binds a result's column to During9
		static void BindDuring9(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During9);
		}

		/// \brief Binds a result's column to Skill10
		static void BindSkill10(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill10);
		}

		/// \brief Binds a result's column to During10
		static void BindDuring10(model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During10);
		}

	};
}
