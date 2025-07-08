module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:ServerResourceBinder;

import :ServerResource;

namespace model
{
	/// \brief generated column binder for the ServerResource model, using nanodbc
	export class ServerResourceBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ServerResource& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nResourceID", &ServerResourceBinder::BindResourceId},
				{"strName", &ServerResourceBinder::BindName},
				{"strResource", &ServerResourceBinder::BindResource}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ResourceId
		static void BindResourceId(ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ResourceId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Resource
		static void BindResource(ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Resource);
		}

	};
}
