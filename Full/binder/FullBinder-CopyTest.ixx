module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:CopyTest;

import FullModel;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::CopyTest
	export class CopyTest
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
				{"ITEMSERIAL", &CopyTest::BindItemSerial}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ItemSerial
		static void BindItemSerial(model::CopyTest& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.ItemSerial);
		}

	};
}
