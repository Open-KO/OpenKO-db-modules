module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:CopySerialItem;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::CopySerialItem
	export class CopySerialItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserId", &CopySerialItem::BindUserId},
				{"byType", &CopySerialItem::BindType},
				{"nPos", &CopySerialItem::BindPos},
				{"ItemNum", &CopySerialItem::BindItemNum},
				{"ItemSerial", &CopySerialItem::BindItemSerial}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.UserId = result.get<std::vector<uint8_t>>(colIndex);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Pos
		static void BindPos(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.Pos = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to ItemNum
		static void BindItemNum(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemNum = result.get<std::vector<uint8_t>>(colIndex);
		}

		/// \brief Binds a result's column to ItemSerial
		static void BindItemSerial(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemSerial = result.get<std::vector<uint8_t>>(colIndex);
		}

	};
}
