module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:MagicType7;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::MagicType7
	export class MagicType7
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &MagicType7::BindMagicNumber},
				{"byValidGroup", &MagicType7::BindValidGroup},
				{"byNatoinChange", &MagicType7::BindNationChange},
				{"shMonsterNum", &MagicType7::BindMonsterNumber},
				{"byTargetChange", &MagicType7::BindTargetChange},
				{"byStateChange", &MagicType7::BindStateChange},
				{"byRadius", &MagicType7::BindRadius},
				{"shHitrate", &MagicType7::BindHitRate},
				{"shDuration", &MagicType7::BindDuration},
				{"shDamage", &MagicType7::BindDamage},
				{"byVisoin", &MagicType7::BindVision},
				{"nNeedItem", &MagicType7::BindNeedItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.ValidGroup = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.NationChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterNumber);
		}

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.TargetChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.StateChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.Radius = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Vision
		static void BindVision(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.Vision = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NeedItem);
		}

	};
}
