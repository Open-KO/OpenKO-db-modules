module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:FriendList;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderFriendList
	export class FriendListBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::FriendList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserID", &FriendList::BindUserId},
				{"strFriend1", &FriendList::BindFriend1},
				{"strFriend2", &FriendList::BindFriend2},
				{"strFriend3", &FriendList::BindFriend3},
				{"strFriend4", &FriendList::BindFriend4},
				{"strFriend5", &FriendList::BindFriend5},
				{"strFriend6", &FriendList::BindFriend6},
				{"strFriend7", &FriendList::BindFriend7},
				{"strFriend8", &FriendList::BindFriend8},
				{"strFriend9", &FriendList::BindFriend9},
				{"strFriend10", &FriendList::BindFriend10},
				{"strFriend11", &FriendList::BindFriend11},
				{"strFriend12", &FriendList::BindFriend12},
				{"strFriend13", &FriendList::BindFriend13},
				{"strFriend14", &FriendList::BindFriend14},
				{"strFriend15", &FriendList::BindFriend15},
				{"strFriend16", &FriendList::BindFriend16},
				{"strFriend17", &FriendList::BindFriend17},
				{"strFriend18", &FriendList::BindFriend18},
				{"strFriend19", &FriendList::BindFriend19},
				{"strFriend20", &FriendList::BindFriend20},
				{"strFriend21", &FriendList::BindFriend21},
				{"strFriend22", &FriendList::BindFriend22},
				{"strFriend23", &FriendList::BindFriend23},
				{"strFriend24", &FriendList::BindFriend24}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to Friend1
		static void BindFriend1(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend1 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend2
		static void BindFriend2(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend2 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend3
		static void BindFriend3(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend3 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend4
		static void BindFriend4(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend4 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend5
		static void BindFriend5(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend5 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend6
		static void BindFriend6(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend6 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend7
		static void BindFriend7(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend7 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend8
		static void BindFriend8(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend8 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend9
		static void BindFriend9(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend9 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend10
		static void BindFriend10(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend10 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend11
		static void BindFriend11(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend11 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend12
		static void BindFriend12(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend12 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend13
		static void BindFriend13(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend13 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend14
		static void BindFriend14(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend14 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend15
		static void BindFriend15(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend15 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend16
		static void BindFriend16(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend16 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend17
		static void BindFriend17(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend17 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend18
		static void BindFriend18(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend18 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend19
		static void BindFriend19(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend19 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend20
		static void BindFriend20(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend20 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend21
		static void BindFriend21(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend21 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend22
		static void BindFriend22(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend22 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend23
		static void BindFriend23(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend23 = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Friend24
		static void BindFriend24(model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			m.Friend24 = result.get<std::string>(colIndex);
		}

	};
}
