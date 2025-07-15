module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module VersionManagerBinder;

import BinderUtil;
import VersionManagerModel;

namespace versionmanager_binder
{
	/// \brief generated nanodbc column binder for versionmanager_model::TbUser
	export class TbUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &TbUser::BindAccountId},
				{"strPasswd", &TbUser::BindPassword},
				{"strAuthority", &TbUser::BindAuthority}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Password
		static void BindPassword(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Password);
		}

		/// \brief Binds a result's column to Authority
		static void BindAuthority(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			m.Authority = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for versionmanager_model::Version
	export class Version
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex);

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
		static void BindNumber(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Number);
		}

		/// \brief Binds a result's column to FileName
		static void BindFileName(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.FileName);
		}

		/// \brief Binds a result's column to CompressName
		static void BindCompressName(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CompressName);
		}

		/// \brief Binds a result's column to HistoryVersion
		static void BindHistoryVersion(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HistoryVersion);
		}

	};
}