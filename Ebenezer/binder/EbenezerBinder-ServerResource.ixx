module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:ServerResource;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::ServerResource
	export class ServerResource
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nResourceID", &ServerResource::BindResourceId},
				{"strResource", &ServerResource::BindResource}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ResourceId
		static void BindResourceId(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ResourceId);
		}

		/// \brief Binds a result's column to Resource
		static void BindResource(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Resource.reset();
			}
			else
			{
				m.Resource = result.get<std::string>(colIndex);
			}
		}

	};
}
