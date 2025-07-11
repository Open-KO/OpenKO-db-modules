module;

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>

export module FullModel:CopySerialItem;

namespace full_binder
{
	export class CopySerialItem;
}

namespace full_model
{
	/// \brief [COPY_SERIAL_ITEM] TODO: Doc
	/// \class CopySerialItem
	/// \xrefitem gamedb "Game Database" "Game Database" COPY_SERIAL_ITEM TODO: Doc
	export class CopySerialItem 
	{
	/// \publicsection
	public:
		using BinderType = full_binder::CopySerialItem;

		/// \brief Column [strUserId]: User Identifier
		///
		/// \property UserId
		std::optional<std::vector<uint8_t>> UserId;

		/// \brief Column [byType]: Type
		///
		/// \property Type
		std::optional<int16_t> Type;

		/// \brief Column [nPos]: nPos: TODO
		///
		/// \property Pos
		std::optional<int16_t> Pos;

		/// \brief Column [ItemNum]: Item Number
		///
		/// \property ItemNum
		std::optional<std::vector<uint8_t>> ItemNum;

		/// \brief Column [ItemSerial]: Item Serial
		///
		/// \property ItemSerial
		std::optional<std::vector<uint8_t>> ItemSerial;

		/// \brief Returns the table name
		static const std::string& TableName()
		{
			static const std::string tableName = "COPY_SERIAL_ITEM";
			return tableName;
		}

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames()
		{
			static const std::unordered_set<std::string> columnNames =
			{
				"strUserId", "byType", "nPos", "ItemNum", "ItemSerial"
			};
			return columnNames;
		}

		/// \brief Returns the associated database type for the table
		static const std::string& DbType()
		{
			static const std::string dbType = "GAME";
			return dbType;
		}

	};
}
