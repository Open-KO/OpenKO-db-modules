module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:MagicType2;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderMagicType2
	export class MagicType2Binder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MagicType2& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType2::BindMagicNumber},
				{"Name", &MagicType2::BindName},
				{"Description", &MagicType2::BindDescription},
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
		static void BindMagicNumber(model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.Description = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to HitType
		static void BindHitType(model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitType);
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to RangeMod
		static void BindRangeMod(model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RangeMod);
		}

		/// \brief Binds a result's column to NeedArrow
		static void BindNeedArrow(model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NeedArrow);
		}

		/// \brief Binds a result's column to AddDamagePlus
		static void BindAddDamagePlus(model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.AddDamagePlus = result.get<int16_t>(colIndex);
		}

	};
}
