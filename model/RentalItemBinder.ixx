module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:RentalItem;

namespace model
{
	/// \brief generated column binder for the RentalItem model, using nanodbc
	export class RentalItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(RentalItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRentalIndex", &RentalItemBinder::BindRentalIndex},
				{"nItemIndex", &RentalItemBinder::BindItemIndex},
				{"sDurability", &RentalItemBinder::BindDurability},
				{"nSerialNumber", &RentalItemBinder::BindSerialNumber},
				{"byRegType", &RentalItemBinder::BindRegType},
				{"byItemType", &RentalItemBinder::BindItemType},
				{"byClass", &RentalItemBinder::BindClass},
				{"sRentalTime", &RentalItemBinder::BindRentalTime},
				{"nRentalMoney", &RentalItemBinder::BindRentalMoney},
				{"strLenderCharID", &RentalItemBinder::BindLenderCharId},
				{"strLenderAcID", &RentalItemBinder::BindLenderAccountId},
				{"strBorrowerCharID", &RentalItemBinder::BindBorrowerCharId},
				{"strBorrowerAcID", &RentalItemBinder::BindBorrowerAccountId},
				{"timeLender", &RentalItemBinder::BindLendTime},
				{"timeRegister", &RentalItemBinder::BindRegisterTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalIndex);
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.SerialNumber);
		}

		/// \brief Binds a result's column to RegType
		static void BindRegType(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RegType);
		}

		/// \brief Binds a result's column to ItemType
		static void BindItemType(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemType);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RentalTime);
		}

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalMoney);
		}

		/// \brief Binds a result's column to LenderCharId
		static void BindLenderCharId(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderCharId);
		}

		/// \brief Binds a result's column to LenderAccountId
		static void BindLenderAccountId(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderAccountId);
		}

		/// \brief Binds a result's column to BorrowerCharId
		static void BindBorrowerCharId(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerCharId);
		}

		/// \brief Binds a result's column to BorrowerAccountId
		static void BindBorrowerAccountId(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerAccountId);
		}

		/// \brief Binds a result's column to LendTime
		static void BindLendTime(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::time_t>>(colIndex, m.LendTime);
		}

		/// \brief Binds a result's column to RegisterTime
		static void BindRegisterTime(RentalItem& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.RegisterTime);
		}

	};
}
