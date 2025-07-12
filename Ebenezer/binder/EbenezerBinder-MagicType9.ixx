module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:MagicType9;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::MagicType9
	export class MagicType9
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType9::BindID},
				{"ValidGroup", &MagicType9::BindValidGroup},
				{"NationChange", &MagicType9::BindNationChange},
				{"MonsterNum", &MagicType9::BindMonsterNumber},
				{"TargetChange", &MagicType9::BindTargetChange},
				{"StateChange", &MagicType9::BindStateChange},
				{"Radius", &MagicType9::BindRadius},
				{"Hitrate", &MagicType9::BindHitRate},
				{"Duration", &MagicType9::BindDuration},
				{"AddDamage", &MagicType9::BindAddDamage},
				{"Vision", &MagicType9::BindVision},
				{"NeedItem", &MagicType9::BindNeedItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			m.ValidGroup = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			m.NationChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterNumber);
		}

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			m.TargetChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			m.StateChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamage);
		}

		/// \brief Binds a result's column to Vision
		static void BindVision(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Vision);
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NeedItem);
		}

	};
}
