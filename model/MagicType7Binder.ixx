module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MagicType7;

namespace model
{
	class MagicType7;

	/// \brief generated column binder for the MagicType7 model, using nanodbc
	export class MagicType7Binder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MagicType7& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &MagicType7Binder::BindMagicNumber},
				{"strName", &MagicType7Binder::BindName},
				{"strNote", &MagicType7Binder::BindNote},
				{"byValidGroup", &MagicType7Binder::BindValidGroup},
				{"byNatoinChange", &MagicType7Binder::BindNationChange},
				{"shMonsterNum", &MagicType7Binder::BindMonsterNumber},
				{"byTargetChange", &MagicType7Binder::BindTargetChange},
				{"byStateChange", &MagicType7Binder::BindStateChange},
				{"byRadius", &MagicType7Binder::BindRadius},
				{"shHitrate", &MagicType7Binder::BindHitRate},
				{"shDuration", &MagicType7Binder::BindDuration},
				{"shDamage", &MagicType7Binder::BindDamage},
				{"byVisoin", &MagicType7Binder::BindVision},
				{"nNeedItem", &MagicType7Binder::BindNeedItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Note
		static void BindNote(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Note);
		}

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ValidGroup);
		}

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NationChange);
		}

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterNumber);
		}

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TargetChange);
		}

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StateChange);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Vision
		static void BindVision(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Vision);
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(MagicType7& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NeedItem);
		}

	};
}
