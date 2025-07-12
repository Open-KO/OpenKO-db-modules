module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:RentalItemList;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::RentalItemList
	export class RentalItemList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRentalIndex", &RentalItemList::BindRentalIndex},
				{"nItemIndex", &RentalItemList::BindItemIndex},
				{"sDurability", &RentalItemList::BindDurability},
				{"nSerialNumber", &RentalItemList::BindSerialNumber},
				{"byRegType", &RentalItemList::BindRegType},
				{"byItemType", &RentalItemList::BindItemType},
				{"byClass", &RentalItemList::BindClass},
				{"sRentalTime", &RentalItemList::BindRentalTime},
				{"nRentalMoney", &RentalItemList::BindRentalMoney},
				{"strLenderCharID", &RentalItemList::BindLenderCharId},
				{"strLenderAcID", &RentalItemList::BindLenderAccountId},
				{"strBorrowerCharID", &RentalItemList::BindBorrowerCharId},
				{"strBorrowerAcID", &RentalItemList::BindBorrowerAccountId},
				{"timeLender", &RentalItemList::BindLendTime},
				{"timeRegister", &RentalItemList::BindRegisterTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalIndex);
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.SerialNumber);
		}

		/// \brief Binds a result's column to RegType
		static void BindRegType(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			m.RegType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ItemType
		static void BindItemType(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Class
		static void BindClass(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			m.Class = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RentalTime);
		}

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalMoney);
		}

		/// \brief Binds a result's column to LenderCharId
		static void BindLenderCharId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderCharId);
		}

		/// \brief Binds a result's column to LenderAccountId
		static void BindLenderAccountId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderAccountId);
		}

		/// \brief Binds a result's column to BorrowerCharId
		static void BindBorrowerCharId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
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
		static void BindBorrowerAccountId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to LendTime
		static void BindLendTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.LendTime.reset();
			}
			else
			{
			m.LendTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
			}
		}

		/// \brief Binds a result's column to RegisterTime
		static void BindRegisterTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			m.RegisterTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

	};
}
