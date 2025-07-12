module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MagicType8;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MagicType8
	export class MagicType8
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType8::BindID},
				{"Name", &MagicType8::BindName},
				{"Description", &MagicType8::BindDescription},
				{"Target", &MagicType8::BindTarget},
				{"Radius", &MagicType8::BindRadius},
				{"WarpType", &MagicType8::BindWarpType},
				{"ExpRecover", &MagicType8::BindExpRecover}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
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
		static void BindDescription(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Target
		static void BindTarget(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			m.Target = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to WarpType
		static void BindWarpType(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			m.WarpType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpRecover);
		}

	};
}
