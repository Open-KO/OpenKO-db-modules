module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:WebpageAddress;

import FullModel;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::WebpageAddress
	export class WebpageAddress
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::WebpageAddress& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &WebpageAddress::BindIndex},
				{"strWebPageAddress", &WebpageAddress::BindWebPageAddress}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to WebPageAddress
		static void BindWebPageAddress(model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
		{
			m.WebPageAddress = result.get<std::string>(colIndex);
		}

	};
}
