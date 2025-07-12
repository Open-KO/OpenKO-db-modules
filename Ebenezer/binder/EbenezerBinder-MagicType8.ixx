module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:MagicType8;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::MagicType8
	export class MagicType8
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType8::BindMagicNumber},
				{"Target", &MagicType8::BindTarget},
				{"Radius", &MagicType8::BindRadius},
				{"WarpType", &MagicType8::BindWarpType},
				{"ExpRecover", &MagicType8::BindExpRecover}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Target
		static void BindTarget(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			m.Target = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to WarpType
		static void BindWarpType(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			m.WarpType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpRecover);
		}

	};
}
