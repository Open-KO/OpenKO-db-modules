module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:CopySerialItemBinder;

import :CopySerialItem;

namespace model
{
	/// \brief generated column binder for the CopySerialItem model, using nanodbc
	export class CopySerialItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(CopySerialItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserId", &CopySerialItemBinder::BindUserId},
				{"byType", &CopySerialItemBinder::BindType},
				{"nPos", &CopySerialItemBinder::BindPos},
				{"ItemNum", &CopySerialItemBinder::BindItemNum},
				{"ItemSerial", &CopySerialItemBinder::BindItemSerial}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.UserId = result.get<std::vector<uint8_t>>(colIndex);
		}

		/// \brief Binds a result's column to Type
		static void BindType(CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Pos
		static void BindPos(CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.Pos = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to ItemNum
		static void BindItemNum(CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemNum = result.get<std::vector<uint8_t>>(colIndex);
		}

		/// \brief Binds a result's column to ItemSerial
		static void BindItemSerial(CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemSerial = result.get<std::vector<uint8_t>>(colIndex);
		}

	};
}
