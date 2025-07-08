module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MagicType3Binder;

import FullModel:MagicType3;

namespace model
{
	/// \brief generated column binder for the MagicType3 model, using nanodbc
	export class MagicType3Binder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MagicType3& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType3Binder::BindMagicNumber},
				{"Name", &MagicType3Binder::BindName},
				{"Description", &MagicType3Binder::BindDescription},
				{"Radius", &MagicType3Binder::BindRadius},
				{"Angle", &MagicType3Binder::BindAngle},
				{"DirectType", &MagicType3Binder::BindDirectType},
				{"FirstDamage", &MagicType3Binder::BindFirstDamage},
				{"EndDamage", &MagicType3Binder::BindEndDamage},
				{"TimeDamage", &MagicType3Binder::BindTimeDamage},
				{"Duration", &MagicType3Binder::BindDuration},
				{"Attribute", &MagicType3Binder::BindAttribute}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(model::MagicType3& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::MagicType3& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(model::MagicType3& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Description);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(model::MagicType3& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to Angle
		static void BindAngle(model::MagicType3& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Angle);
		}

		/// \brief Binds a result's column to DirectType
		static void BindDirectType(model::MagicType3& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DirectType);
		}

		/// \brief Binds a result's column to FirstDamage
		static void BindFirstDamage(model::MagicType3& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FirstDamage);
		}

		/// \brief Binds a result's column to EndDamage
		static void BindEndDamage(model::MagicType3& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EndDamage);
		}

		/// \brief Binds a result's column to TimeDamage
		static void BindTimeDamage(model::MagicType3& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TimeDamage);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(model::MagicType3& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Attribute
		static void BindAttribute(model::MagicType3& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Attribute);
		}

	};
}
