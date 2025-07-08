module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:KnightsUserBinder;

import :KnightsUser;

namespace model
{
	/// \brief generated column binder for the KnightsUser model, using nanodbc
	export class KnightsUserBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(KnightsUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIDNum", &KnightsUserBinder::BindKnightsId},
				{"strUserID", &KnightsUserBinder::BindUserId}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to KnightsId
		static void BindKnightsId(KnightsUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KnightsId);
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(KnightsUser& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

	};
}
