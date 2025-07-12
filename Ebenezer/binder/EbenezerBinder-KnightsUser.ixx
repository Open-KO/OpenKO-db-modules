module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:KnightsUser;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::KnightsUser
	export class KnightsUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIDNum", &KnightsUser::BindKnightsId},
				{"strUserID", &KnightsUser::BindUserId}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to KnightsId
		static void BindKnightsId(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KnightsId);
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

	};
}
