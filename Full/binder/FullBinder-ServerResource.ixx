module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:ServerResource;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::ServerResource
	export class ServerResource
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ServerResource& m, const nanodbc::result& result, short colIndex);

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
		static void BindResourceId(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ResourceId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Resource
		static void BindResource(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Resource);
		}

	};
}
