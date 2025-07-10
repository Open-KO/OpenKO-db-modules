module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MagicType1;

import FullModel;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::MagicType1
	export class MagicType1
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MagicType1& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType1::BindMagicNumber},
				{"Name", &MagicType1::BindName},
				{"Description", &MagicType1::BindDescription},
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
		static void BindMagicNumber(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			m.Description = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Type
		static void BindType(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Delay);
		}

		/// \brief Binds a result's column to ComboType
		static void BindComboType(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ComboType);
		}

		/// \brief Binds a result's column to ComboCount
		static void BindComboCount(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ComboCount);
		}

		/// \brief Binds a result's column to ComboDamage
		static void BindComboDamage(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ComboDamage);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

	};
}
