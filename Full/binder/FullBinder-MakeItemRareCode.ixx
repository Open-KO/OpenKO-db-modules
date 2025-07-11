module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MakeItemRareCode;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MakeItemRareCode
	export class MakeItemRareCode
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byLevelGrade", &MakeItemRareCode::BindLevelGrade},
				{"sUpgradeItem", &MakeItemRareCode::BindUpgradeItem},
				{"sLareItem", &MakeItemRareCode::BindRareItem},
				{"sMagicItem", &MakeItemRareCode::BindMagicItem},
				{"sGereralItem", &MakeItemRareCode::BindGeneralItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to LevelGrade
		static void BindLevelGrade(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			m.LevelGrade = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to UpgradeItem
		static void BindUpgradeItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.UpgradeItem);
		}

		/// \brief Binds a result's column to RareItem
		static void BindRareItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RareItem);
		}

		/// \brief Binds a result's column to MagicItem
		static void BindMagicItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicItem);
		}

		/// \brief Binds a result's column to GeneralItem
		static void BindGeneralItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GeneralItem);
		}

	};
}
