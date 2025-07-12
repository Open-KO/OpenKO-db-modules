module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:MagicType1;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::MagicType1
	export class MagicType1
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType1::BindMagicNumber},
				{"Type", &MagicType1::BindType},
				{"HitRate", &MagicType1::BindHitRateMod},
				{"Hit", &MagicType1::BindDamageMod},
				{"AddDamage", &MagicType1::BindAddDamage},
				{"Delay", &MagicType1::BindDelay},
				{"ComboType", &MagicType1::BindComboType},
				{"ComboCount", &MagicType1::BindComboCount},
				{"ComboDamage", &MagicType1::BindComboDamage},
				{"Range", &MagicType1::BindRange}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			m.Delay = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ComboType
		static void BindComboType(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			m.ComboType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ComboCount
		static void BindComboCount(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			m.ComboCount = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ComboDamage
		static void BindComboDamage(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ComboDamage);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

	};
}
