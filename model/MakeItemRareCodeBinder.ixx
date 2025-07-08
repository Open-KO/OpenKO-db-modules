module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MakeItemRareCodeBinder;

import FullModel:MakeItemRareCode;

namespace model
{
	/// \brief generated column binder for the MakeItemRareCode model, using nanodbc
	export class MakeItemRareCodeBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byLevelGrade", &MakeItemRareCodeBinder::BindLevelGrade},
				{"sUpgradeItem", &MakeItemRareCodeBinder::BindUpgradeItem},
				{"sLareItem", &MakeItemRareCodeBinder::BindRareItem},
				{"sMagicItem", &MakeItemRareCodeBinder::BindMagicItem},
				{"sGereralItem", &MakeItemRareCodeBinder::BindGeneralItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to LevelGrade
		static void BindLevelGrade(model::MakeItemRareCode& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LevelGrade);
		}

		/// \brief Binds a result's column to UpgradeItem
		static void BindUpgradeItem(model::MakeItemRareCode& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.UpgradeItem);
		}

		/// \brief Binds a result's column to RareItem
		static void BindRareItem(model::MakeItemRareCode& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RareItem);
		}

		/// \brief Binds a result's column to MagicItem
		static void BindMagicItem(model::MakeItemRareCode& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicItem);
		}

		/// \brief Binds a result's column to GeneralItem
		static void BindGeneralItem(model::MakeItemRareCode& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GeneralItem);
		}

	};
}
