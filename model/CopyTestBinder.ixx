module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:CopyTestBinder;

import FullModel:CopyTest;

namespace model
{
	/// \brief generated column binder for the CopyTest model, using nanodbc
	export class CopyTestBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::CopyTest& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ITEMSERIAL", &CopyTestBinder::BindItemSerial}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ItemSerial
		static void BindItemSerial(model::CopyTest& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.ItemSerial);
		}

	};
}
