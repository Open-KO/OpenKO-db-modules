module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MagicType3;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MagicType3
	export class MagicType3
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType3::BindMagicNumber},
				{"Name", &MagicType3::BindName},
				{"Description", &MagicType3::BindDescription},
				{"Radius", &MagicType3::BindRadius},
				{"Angle", &MagicType3::BindAngle},
				{"DirectType", &MagicType3::BindDirectType},
				{"FirstDamage", &MagicType3::BindFirstDamage},
				{"EndDamage", &MagicType3::BindEndDamage},
				{"TimeDamage", &MagicType3::BindTimeDamage},
				{"Duration", &MagicType3::BindDuration},
				{"Attribute", &MagicType3::BindAttribute}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
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
		static void BindDescription(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			m.Radius = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Angle
		static void BindAngle(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Angle);
		}

		/// \brief Binds a result's column to DirectType
		static void BindDirectType(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			m.DirectType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to FirstDamage
		static void BindFirstDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FirstDamage);
		}

		/// \brief Binds a result's column to EndDamage
		static void BindEndDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EndDamage);
		}

		/// \brief Binds a result's column to TimeDamage
		static void BindTimeDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TimeDamage);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			m.Duration = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Attribute
		static void BindAttribute(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			m.Attribute = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
