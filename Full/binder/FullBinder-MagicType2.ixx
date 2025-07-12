module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MagicType2;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MagicType2
	export class MagicType2
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType2::BindID},
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

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Name.reset();
			}
			else
			{
				m.Name = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Description.reset();
			}
			else
			{
				m.Description = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to HitType
		static void BindHitType(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.HitType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to RangeMod
		static void BindRangeMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RangeMod);
		}

		/// \brief Binds a result's column to NeedArrow
		static void BindNeedArrow(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.NeedArrow = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to AddDamagePlus
		static void BindAddDamagePlus(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamagePlus);
		}

	};
}
