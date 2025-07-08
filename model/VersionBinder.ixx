module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:Version;

namespace model
{
	/// \brief generated column binder for the Version model, using nanodbc
	export class VersionBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(Version& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sVersion", &VersionBinder::BindVersion},
				{"strFileName", &VersionBinder::BindFileName},
				{"strCompressName", &VersionBinder::BindCompressName},
				{"sHistoryVersion", &VersionBinder::BindHistoryVersion}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Version
		static void BindVersion(Version& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Version);
		}

		/// \brief Binds a result's column to FileName
		static void BindFileName(Version& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.FileName);
		}

		/// \brief Binds a result's column to CompressName
		static void BindCompressName(Version& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CompressName);
		}

		/// \brief Binds a result's column to HistoryVersion
		static void BindHistoryVersion(Version& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HistoryVersion);
		}

	};
}
