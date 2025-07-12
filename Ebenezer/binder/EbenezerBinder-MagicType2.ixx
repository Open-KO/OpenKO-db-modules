module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:MagicType2;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::MagicType2
	export class MagicType2
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType2::BindMagicNumber},
				{"HitType", &MagicType2::BindHitType},
				{"HitRate", &MagicType2::BindHitRateMod},
				{"AddDamage", &MagicType2::BindDamageMod},
				{"AddRange", &MagicType2::BindRangeMod},
				{"NeedArrow", &MagicType2::BindNeedArrow},
				{"AddDamagePlus", &MagicType2::BindAddDamagePlus}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to HitType
		static void BindHitType(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.HitType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to RangeMod
		static void BindRangeMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RangeMod);
		}

		/// \brief Binds a result's column to NeedArrow
		static void BindNeedArrow(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.NeedArrow = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to AddDamagePlus
		static void BindAddDamagePlus(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.AddDamagePlus.reset();
			}
			else
			{
				m.AddDamagePlus = result.get<int16_t>(colIndex);
			}
		}

	};
}
