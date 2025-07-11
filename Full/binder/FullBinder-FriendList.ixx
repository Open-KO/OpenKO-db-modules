module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:FriendList;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::FriendList
	export class FriendList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

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
		static void BindUserId(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to Friend1
		static void BindFriend1(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend1.reset();
			}
			else
			{
				m.Friend1 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend2
		static void BindFriend2(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend2.reset();
			}
			else
			{
				m.Friend2 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend3
		static void BindFriend3(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend3.reset();
			}
			else
			{
				m.Friend3 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend4
		static void BindFriend4(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend4.reset();
			}
			else
			{
				m.Friend4 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend5
		static void BindFriend5(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend5.reset();
			}
			else
			{
				m.Friend5 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend6
		static void BindFriend6(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend6.reset();
			}
			else
			{
				m.Friend6 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend7
		static void BindFriend7(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend7.reset();
			}
			else
			{
				m.Friend7 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend8
		static void BindFriend8(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend8.reset();
			}
			else
			{
				m.Friend8 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend9
		static void BindFriend9(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend9.reset();
			}
			else
			{
				m.Friend9 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend10
		static void BindFriend10(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend10.reset();
			}
			else
			{
				m.Friend10 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend11
		static void BindFriend11(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend11.reset();
			}
			else
			{
				m.Friend11 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend12
		static void BindFriend12(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend12.reset();
			}
			else
			{
				m.Friend12 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend13
		static void BindFriend13(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend13.reset();
			}
			else
			{
				m.Friend13 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend14
		static void BindFriend14(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend14.reset();
			}
			else
			{
				m.Friend14 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend15
		static void BindFriend15(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend15.reset();
			}
			else
			{
				m.Friend15 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend16
		static void BindFriend16(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend16.reset();
			}
			else
			{
				m.Friend16 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend17
		static void BindFriend17(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend17.reset();
			}
			else
			{
				m.Friend17 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend18
		static void BindFriend18(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend18.reset();
			}
			else
			{
				m.Friend18 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend19
		static void BindFriend19(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend19.reset();
			}
			else
			{
				m.Friend19 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend20
		static void BindFriend20(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend20.reset();
			}
			else
			{
				m.Friend20 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend21
		static void BindFriend21(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend21.reset();
			}
			else
			{
				m.Friend21 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend22
		static void BindFriend22(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend22.reset();
			}
			else
			{
				m.Friend22 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend23
		static void BindFriend23(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend23.reset();
			}
			else
			{
				m.Friend23 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend24
		static void BindFriend24(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend24.reset();
			}
			else
			{
				m.Friend24 = result.get<std::string>(colIndex);
			}
		}

	};
}
