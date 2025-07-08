module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:FriendListBinder;

import :FriendList;

namespace model
{
	/// \brief generated column binder for the FriendList model, using nanodbc
	export class FriendListBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(FriendList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserID", &FriendListBinder::BindUserId},
				{"strFriend1", &FriendListBinder::BindFriend1},
				{"strFriend2", &FriendListBinder::BindFriend2},
				{"strFriend3", &FriendListBinder::BindFriend3},
				{"strFriend4", &FriendListBinder::BindFriend4},
				{"strFriend5", &FriendListBinder::BindFriend5},
				{"strFriend6", &FriendListBinder::BindFriend6},
				{"strFriend7", &FriendListBinder::BindFriend7},
				{"strFriend8", &FriendListBinder::BindFriend8},
				{"strFriend9", &FriendListBinder::BindFriend9},
				{"strFriend10", &FriendListBinder::BindFriend10},
				{"strFriend11", &FriendListBinder::BindFriend11},
				{"strFriend12", &FriendListBinder::BindFriend12},
				{"strFriend13", &FriendListBinder::BindFriend13},
				{"strFriend14", &FriendListBinder::BindFriend14},
				{"strFriend15", &FriendListBinder::BindFriend15},
				{"strFriend16", &FriendListBinder::BindFriend16},
				{"strFriend17", &FriendListBinder::BindFriend17},
				{"strFriend18", &FriendListBinder::BindFriend18},
				{"strFriend19", &FriendListBinder::BindFriend19},
				{"strFriend20", &FriendListBinder::BindFriend20},
				{"strFriend21", &FriendListBinder::BindFriend21},
				{"strFriend22", &FriendListBinder::BindFriend22},
				{"strFriend23", &FriendListBinder::BindFriend23},
				{"strFriend24", &FriendListBinder::BindFriend24}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to Friend1
		static void BindFriend1(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend1);
		}

		/// \brief Binds a result's column to Friend2
		static void BindFriend2(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend2);
		}

		/// \brief Binds a result's column to Friend3
		static void BindFriend3(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend3);
		}

		/// \brief Binds a result's column to Friend4
		static void BindFriend4(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend4);
		}

		/// \brief Binds a result's column to Friend5
		static void BindFriend5(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend5);
		}

		/// \brief Binds a result's column to Friend6
		static void BindFriend6(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend6);
		}

		/// \brief Binds a result's column to Friend7
		static void BindFriend7(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend7);
		}

		/// \brief Binds a result's column to Friend8
		static void BindFriend8(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend8);
		}

		/// \brief Binds a result's column to Friend9
		static void BindFriend9(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend9);
		}

		/// \brief Binds a result's column to Friend10
		static void BindFriend10(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend10);
		}

		/// \brief Binds a result's column to Friend11
		static void BindFriend11(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend11);
		}

		/// \brief Binds a result's column to Friend12
		static void BindFriend12(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend12);
		}

		/// \brief Binds a result's column to Friend13
		static void BindFriend13(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend13);
		}

		/// \brief Binds a result's column to Friend14
		static void BindFriend14(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend14);
		}

		/// \brief Binds a result's column to Friend15
		static void BindFriend15(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend15);
		}

		/// \brief Binds a result's column to Friend16
		static void BindFriend16(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend16);
		}

		/// \brief Binds a result's column to Friend17
		static void BindFriend17(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend17);
		}

		/// \brief Binds a result's column to Friend18
		static void BindFriend18(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend18);
		}

		/// \brief Binds a result's column to Friend19
		static void BindFriend19(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend19);
		}

		/// \brief Binds a result's column to Friend20
		static void BindFriend20(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend20);
		}

		/// \brief Binds a result's column to Friend21
		static void BindFriend21(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend21);
		}

		/// \brief Binds a result's column to Friend22
		static void BindFriend22(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend22);
		}

		/// \brief Binds a result's column to Friend23
		static void BindFriend23(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend23);
		}

		/// \brief Binds a result's column to Friend24
		static void BindFriend24(FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Friend24);
		}

	};
}
