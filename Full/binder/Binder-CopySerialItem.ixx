module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:CopySerialItem;

import Model;

namespace model_binder
{
	/// \brief generated nanodbc column binder for model::CopySerialItem
	export class CopySerialItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::CopySerialItem& m, const nanodbc::result& result, short colIndex);

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
		static void BindUserId(model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.UserId = result.get<std::vector<uint8_t>>(colIndex);
		}

		/// \brief Binds a result's column to Type
		static void BindType(model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Pos
		static void BindPos(model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.Pos = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to ItemNum
		static void BindItemNum(model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemNum = result.get<std::vector<uint8_t>>(colIndex);
		}

		/// \brief Binds a result's column to ItemSerial
		static void BindItemSerial(model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemSerial = result.get<std::vector<uint8_t>>(colIndex);
		}

	};
}
