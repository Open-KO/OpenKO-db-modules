module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MagicType5Binder;

import :MagicType5;

namespace model
{
	/// \brief generated column binder for the MagicType5 model, using nanodbc
	export class MagicType5Binder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MagicType5& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType5Binder::BindMagicNumber},
				{"Name", &MagicType5Binder::BindName},
				{"Description", &MagicType5Binder::BindDescription},
				{"Type", &MagicType5Binder::BindType},
				{"ExpRecover", &MagicType5Binder::BindExpRecover},
				{"NeedStone", &MagicType5Binder::BindNeedStone}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MagicNumber
		static void BindMagicNumber(MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			m.Description = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Type
		static void BindType(MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpRecover);
		}

		/// \brief Binds a result's column to NeedStone
		static void BindNeedStone(MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NeedStone);
		}

	};
}
