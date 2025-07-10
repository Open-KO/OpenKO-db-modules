module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:KnightsUser;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderKnightsUser
	export class KnightsUserBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::KnightsUser& m, const nanodbc::result& result, short colIndex);

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
		static void BindKnightsId(model::KnightsUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KnightsId);
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(model::KnightsUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

	};
}
