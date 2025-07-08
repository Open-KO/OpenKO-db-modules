module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MagicType9Binder;

import FullModel:MagicType9;

namespace model
{
	/// \brief generated column binder for the MagicType9 model, using nanodbc
	export class MagicType9Binder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MagicType9& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType9Binder::BindMagicNumber},
				{"Name", &MagicType9Binder::BindName},
				{"Description", &MagicType9Binder::BindDescription},
				{"ValidGroup", &MagicType9Binder::BindValidGroup},
				{"NationChange", &MagicType9Binder::BindNationChange},
				{"MonsterNum", &MagicType9Binder::BindMonsterNumber},
				{"TargetChange", &MagicType9Binder::BindTargetChange},
				{"StateChange", &MagicType9Binder::BindStateChange},
				{"Radius", &MagicType9Binder::BindRadius},
				{"Hitrate", &MagicType9Binder::BindHitRate},
				{"Duration", &MagicType9Binder::BindDuration},
				{"AddDamage", &MagicType9Binder::BindAddDamage},
				{"Vision", &MagicType9Binder::BindVision},
				{"NeedItem", &MagicType9Binder::BindNeedItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Description);
		}

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ValidGroup);
		}

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NationChange);
		}

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterNumber);
		}

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TargetChange);
		}

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StateChange);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamage);
		}

		/// \brief Binds a result's column to Vision
		static void BindVision(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Vision);
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(model::MagicType9& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NeedItem);
		}

	};
}
