module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:Version;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::Version
	export class Version
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Version& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sVersion", &Version::BindNumber},
				{"strFileName", &Version::BindFileName},
				{"strCompressName", &Version::BindCompressName},
				{"sHistoryVersion", &Version::BindHistoryVersion}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Number
		static void BindNumber(full_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Number);
		}

		/// \brief Binds a result's column to FileName
		static void BindFileName(full_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.FileName);
		}

		/// \brief Binds a result's column to CompressName
		static void BindCompressName(full_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CompressName);
		}

		/// \brief Binds a result's column to HistoryVersion
		static void BindHistoryVersion(full_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HistoryVersion);
		}

	};
}
