module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:RentalItem;

import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::RentalItem
	export class RentalItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRentalIndex", &RentalItem::BindRentalIndex},
				{"nItemIndex", &RentalItem::BindItemIndex},
				{"sDurability", &RentalItem::BindDurability},
				{"nSerialNumber", &RentalItem::BindSerialNumber},
				{"byRegType", &RentalItem::BindRegType},
				{"byItemType", &RentalItem::BindItemType},
				{"byClass", &RentalItem::BindClass},
				{"sRentalTime", &RentalItem::BindRentalTime},
				{"nRentalMoney", &RentalItem::BindRentalMoney},
				{"strLenderCharID", &RentalItem::BindLenderCharId},
				{"strLenderAcID", &RentalItem::BindLenderAccountId},
				{"strBorrowerCharID", &RentalItem::BindBorrowerCharId},
				{"strBorrowerAcID", &RentalItem::BindBorrowerAccountId}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalIndex);
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.SerialNumber);
		}

		/// \brief Binds a result's column to RegType
		static void BindRegType(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			m.RegType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ItemType
		static void BindItemType(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Class
		static void BindClass(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			m.Class = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RentalTime);
		}

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalMoney);
		}

		/// \brief Binds a result's column to LenderCharId
		static void BindLenderCharId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderCharId);
		}

		/// \brief Binds a result's column to LenderAccountId
		static void BindLenderAccountId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderAccountId);
		}

		/// \brief Binds a result's column to BorrowerCharId
		static void BindBorrowerCharId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.BorrowerCharId.reset();
			}
			else
			{
				m.BorrowerCharId = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to BorrowerAccountId
		static void BindBorrowerAccountId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.BorrowerAccountId.reset();
			}
			else
			{
				m.BorrowerAccountId = result.get<std::string>(colIndex);
			}
		}

	};
}
