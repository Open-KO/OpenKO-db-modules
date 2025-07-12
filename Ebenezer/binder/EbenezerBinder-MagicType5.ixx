module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:MagicType5;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::MagicType5
	export class MagicType5
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType5::BindMagicNumber},
				{"Type", &MagicType5::BindType},
				{"ExpRecover", &MagicType5::BindExpRecover},
				{"NeedStone", &MagicType5::BindNeedStone}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			m.ExpRecover = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NeedStone
		static void BindNeedStone(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NeedStone);
		}

	};
}
