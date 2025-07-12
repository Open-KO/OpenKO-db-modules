module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MagicType7;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MagicType7
	export class MagicType7
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &MagicType7::BindID},
				{"strName", &MagicType7::BindName},
				{"strNote", &MagicType7::BindNote},
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

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Note
		static void BindNote(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Note.reset();
			}
			else
			{
				m.Note = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.ValidGroup = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.NationChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterNumber);
		}

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.TargetChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.StateChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.Radius = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Vision
		static void BindVision(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.Vision = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NeedItem);
		}

	};
}
