module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MagicType8;

import FullModel;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::MagicType8
	export class MagicType8
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MagicType8& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType8::BindMagicNumber},
				{"Name", &MagicType8::BindName},
				{"Description", &MagicType8::BindDescription},
				{"Target", &MagicType8::BindTarget},
				{"Radius", &MagicType8::BindRadius},
				{"WarpType", &MagicType8::BindWarpType},
				{"ExpRecover", &MagicType8::BindExpRecover}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			m.Description = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Target
		static void BindTarget(model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Target);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to WarpType
		static void BindWarpType(model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.WarpType);
		}

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpRecover);
		}

	};
}
