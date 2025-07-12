module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MagicType5;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MagicType5
	export class MagicType5
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType5::BindID},
				{"Name", &MagicType5::BindName},
				{"Description", &MagicType5::BindDescription},
				{"Type", &MagicType5::BindType},
				{"ExpRecover", &MagicType5::BindExpRecover},
				{"NeedStone", &MagicType5::BindNeedStone}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
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
		static void BindDescription(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Type
		static void BindType(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			m.ExpRecover = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NeedStone
		static void BindNeedStone(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NeedStone);
		}

	};
}
