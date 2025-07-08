module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MagicType1;

namespace model
{
	/// \brief generated column binder for the MagicType1 model, using nanodbc
	export class MagicType1Binder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MagicType1& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType1Binder::BindMagicNumber},
				{"Name", &MagicType1Binder::BindName},
				{"Description", &MagicType1Binder::BindDescription},
				{"Type", &MagicType1Binder::BindType},
				{"HitRate", &MagicType1Binder::BindHitRateMod},
				{"Hit", &MagicType1Binder::BindDamageMod},
				{"AddDamage", &MagicType1Binder::BindAddDamage},
				{"Delay", &MagicType1Binder::BindDelay},
				{"ComboType", &MagicType1Binder::BindComboType},
				{"ComboCount", &MagicType1Binder::BindComboCount},
				{"ComboDamage", &MagicType1Binder::BindComboDamage},
				{"Range", &MagicType1Binder::BindRange}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Description);
		}

		/// \brief Binds a result's column to Type
		static void BindType(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Delay);
		}

		/// \brief Binds a result's column to ComboType
		static void BindComboType(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ComboType);
		}

		/// \brief Binds a result's column to ComboCount
		static void BindComboCount(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ComboCount);
		}

		/// \brief Binds a result's column to ComboDamage
		static void BindComboDamage(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ComboDamage);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(MagicType1& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

	};
}
