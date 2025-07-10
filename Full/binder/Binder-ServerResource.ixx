module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:ServerResource;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::ServerResource
	export class ServerResource
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::ServerResource& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nResourceID", &ServerResource::BindResourceId},
				{"strName", &ServerResource::BindName},
				{"strResource", &ServerResource::BindResource}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ResourceId
		static void BindResourceId(model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ResourceId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Resource
		static void BindResource(model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			m.Resource = result.get<std::string>(colIndex);
		}

	};
}
