module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MagicType2Binder;

import :MagicType2;

namespace model
{
	/// \brief generated column binder for the MagicType2 model, using nanodbc
	export class MagicType2Binder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MagicType2& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType2Binder::BindMagicNumber},
				{"Name", &MagicType2Binder::BindName},
				{"Description", &MagicType2Binder::BindDescription},
				{"HitType", &MagicType2Binder::BindHitType},
				{"HitRate", &MagicType2Binder::BindHitRateMod},
				{"AddDamage", &MagicType2Binder::BindDamageMod},
				{"AddRange", &MagicType2Binder::BindRangeMod},
				{"NeedArrow", &MagicType2Binder::BindNeedArrow},
				{"AddDamagePlus", &MagicType2Binder::BindAddDamagePlus}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.Description = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to HitType
		static void BindHitType(MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitType);
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to RangeMod
		static void BindRangeMod(MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RangeMod);
		}

		/// \brief Binds a result's column to NeedArrow
		static void BindNeedArrow(MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NeedArrow);
		}

		/// \brief Binds a result's column to AddDamagePlus
		static void BindAddDamagePlus(MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.AddDamagePlus = result.get<int16_t>(colIndex);
		}

	};
}
