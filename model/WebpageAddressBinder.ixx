module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:WebpageAddressBinder;

import FullModel:WebpageAddress;

namespace model
{
	/// \brief generated column binder for the WebpageAddress model, using nanodbc
	export class WebpageAddressBinder
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
				{"nIndex", &WebpageAddressBinder::BindIndex},
				{"strWebPageAddress", &WebpageAddressBinder::BindWebPageAddress}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(model::WebpageAddress& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to WebPageAddress
		static void BindWebPageAddress(model::WebpageAddress& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.WebPageAddress);
		}

	};
}
