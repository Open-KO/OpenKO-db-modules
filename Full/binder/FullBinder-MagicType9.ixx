module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MagicType9;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MagicType9
	export class MagicType9
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType9::BindMagicNumber},
				{"Name", &MagicType9::BindName},
				{"Description", &MagicType9::BindDescription},
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

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			m.Description = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ValidGroup);
		}

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NationChange);
		}

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterNumber);
		}

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TargetChange);
		}

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StateChange);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamage);
		}

		/// \brief Binds a result's column to Vision
		static void BindVision(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Vision);
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NeedItem);
		}

	};
}
