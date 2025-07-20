module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder;

import BinderUtil;
import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::AccountChar
	export class AccountChar
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::AccountChar& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &AccountChar::BindAccountId},
				{"bNation", &AccountChar::BindNation},
				{"bCharNum", &AccountChar::BindCharNum},
				{"strCharID1", &AccountChar::BindCharId1},
				{"strCharID2", &AccountChar::BindCharId2},
				{"strCharID3", &AccountChar::BindCharId3}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to CharNum
		static void BindCharNum(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.CharNum);
		}

		/// \brief Binds a result's column to CharId1
		static void BindCharId1(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.CharId1.reset();
			}
			else
			{
				m.CharId1 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to CharId2
		static void BindCharId2(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.CharId2.reset();
			}
			else
			{
				m.CharId2 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to CharId3
		static void BindCharId3(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.CharId3.reset();
			}
			else
			{
				m.CharId3 = result.get<std::string>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::Battle
	export class Battle
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &Battle::BindIndex},
				{"byNation", &Battle::BindNation},
				{"strUserName", &Battle::BindUserName},
				{"byElmoArea", &Battle::BindElmoArea},
				{"byKarusArea", &Battle::BindKarusArea},
				{"byElmoAdvantage", &Battle::BindElmoAdvantage},
				{"byKarusAdvantage", &Battle::BindKarusAdvantage},
				{"byArea_1", &Battle::BindArea1},
				{"byArea_2", &Battle::BindArea2},
				{"byArea_3", &Battle::BindArea3},
				{"byArea_4", &Battle::BindArea4},
				{"byArea_5", &Battle::BindArea5},
				{"byArea_6", &Battle::BindArea6},
				{"byArea_7", &Battle::BindArea7},
				{"byArea_8", &Battle::BindArea8},
				{"byArea_9", &Battle::BindArea9},
				{"byArea_10", &Battle::BindArea10},
				{"byArea_11", &Battle::BindArea11}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to UserName
		static void BindUserName(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.UserName.reset();
			}
			else
			{
				m.UserName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ElmoArea
		static void BindElmoArea(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ElmoArea);
		}

		/// \brief Binds a result's column to KarusArea
		static void BindKarusArea(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.KarusArea);
		}

		/// \brief Binds a result's column to ElmoAdvantage
		static void BindElmoAdvantage(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ElmoAdvantage);
		}

		/// \brief Binds a result's column to KarusAdvantage
		static void BindKarusAdvantage(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.KarusAdvantage);
		}

		/// \brief Binds a result's column to Area1
		static void BindArea1(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area1);
		}

		/// \brief Binds a result's column to Area2
		static void BindArea2(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area2);
		}

		/// \brief Binds a result's column to Area3
		static void BindArea3(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area3);
		}

		/// \brief Binds a result's column to Area4
		static void BindArea4(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area4);
		}

		/// \brief Binds a result's column to Area5
		static void BindArea5(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area5);
		}

		/// \brief Binds a result's column to Area6
		static void BindArea6(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area6);
		}

		/// \brief Binds a result's column to Area7
		static void BindArea7(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area7);
		}

		/// \brief Binds a result's column to Area8
		static void BindArea8(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area8);
		}

		/// \brief Binds a result's column to Area9
		static void BindArea9(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area9);
		}

		/// \brief Binds a result's column to Area10
		static void BindArea10(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area10);
		}

		/// \brief Binds a result's column to Area11
		static void BindArea11(full_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Area11);
		}

	};

	/// \brief generated nanodbc column binder for full_model::Coefficient
	export class Coefficient
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sClass", &Coefficient::BindClassId},
				{"ShortSword", &Coefficient::BindShortSword},
				{"Sword", &Coefficient::BindSword},
				{"Axe", &Coefficient::BindAxe},
				{"Club", &Coefficient::BindClub},
				{"Spear", &Coefficient::BindSpear},
				{"Pole", &Coefficient::BindPole},
				{"Staff", &Coefficient::BindStaff},
				{"Bow", &Coefficient::BindBow},
				{"Hp", &Coefficient::BindHitPoint},
				{"Mp", &Coefficient::BindManaPoint},
				{"Sp", &Coefficient::BindSp},
				{"Ac", &Coefficient::BindArmor},
				{"Hitrate", &Coefficient::BindHitRate},
				{"Evasionrate", &Coefficient::BindEvasionrate}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ClassId);
		}

		/// \brief Binds a result's column to ShortSword
		static void BindShortSword(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.ShortSword);
		}

		/// \brief Binds a result's column to Sword
		static void BindSword(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Sword);
		}

		/// \brief Binds a result's column to Axe
		static void BindAxe(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Axe);
		}

		/// \brief Binds a result's column to Club
		static void BindClub(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Club);
		}

		/// \brief Binds a result's column to Spear
		static void BindSpear(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Spear);
		}

		/// \brief Binds a result's column to Pole
		static void BindPole(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Pole);
		}

		/// \brief Binds a result's column to Staff
		static void BindStaff(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Staff);
		}

		/// \brief Binds a result's column to Bow
		static void BindBow(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Bow);
		}

		/// \brief Binds a result's column to HitPoint
		static void BindHitPoint(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.HitPoint);
		}

		/// \brief Binds a result's column to ManaPoint
		static void BindManaPoint(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.ManaPoint);
		}

		/// \brief Binds a result's column to Sp
		static void BindSp(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Sp);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Evasionrate
		static void BindEvasionrate(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Evasionrate);
		}

	};

	/// \brief generated nanodbc column binder for full_model::Concurrent
	export class Concurrent
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Concurrent& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"serverid", &Concurrent::BindServerId},
				{"zone1_count", &Concurrent::BindZone1Count},
				{"zone2_count", &Concurrent::BindZone2Count},
				{"zone3_count", &Concurrent::BindZone3Count},
				{"bz", &Concurrent::BindBz}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to Zone1Count
		static void BindZone1Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Zone1Count);
		}

		/// \brief Binds a result's column to Zone2Count
		static void BindZone2Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Zone2Count);
		}

		/// \brief Binds a result's column to Zone3Count
		static void BindZone3Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Zone3Count);
		}

		/// \brief Binds a result's column to Bz
		static void BindBz(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Bz.reset();
			}
			else
			{
				m.Bz = result.get<std::string>(colIndex);
			}
		}

	};

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
			if (result.is_null(colIndex))
			{
				m.UserId.reset();
			}
			else
			{
				m.UserId = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Type.reset();
			}
			else
			{
				m.Type = result.get<uint8_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Pos
		static void BindPos(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Pos.reset();
			}
			else
			{
				m.Pos = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemNum
		static void BindItemNum(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemNum.reset();
			}
			else
			{
				m.ItemNum = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemSerial
		static void BindItemSerial(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemSerial.reset();
			}
			else
			{
				m.ItemSerial = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::CopyTest
	export class CopyTest
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::CopyTest& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ITEMSERIAL", &CopyTest::BindItemSerial}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ItemSerial
		static void BindItemSerial(full_model::CopyTest& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.ItemSerial);
		}

	};

	/// \brief generated nanodbc column binder for full_model::CouponSerialList
	export class CouponSerialList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &CouponSerialList::BindIndex},
				{"strSerialNum", &CouponSerialList::BindSerialNum},
				{"nItemNum", &CouponSerialList::BindItemNumber},
				{"sItemCount", &CouponSerialList::BindItemCount}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to SerialNum
		static void BindSerialNum(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.SerialNum);
		}

		/// \brief Binds a result's column to ItemNumber
		static void BindItemNumber(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemNumber);
		}

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemCount);
		}

	};

	/// \brief generated nanodbc column binder for full_model::CurrentUser
	export class CurrentUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nServerNo", &CurrentUser::BindServerId},
				{"strServerIP", &CurrentUser::BindServerIP},
				{"strAccountID", &CurrentUser::BindAccountId},
				{"strCharID", &CurrentUser::BindCharId},
				{"strClientIP", &CurrentUser::BindClientIP}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to ServerIP
		static void BindServerIP(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.ServerIP);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to ClientIP
		static void BindClientIP(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.ClientIP);
		}

	};

	/// \brief generated nanodbc column binder for full_model::Event
	export class Event
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Event& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ZoneNum", &Event::BindZoneNumber},
				{"EventNum", &Event::BindEventNumber},
				{"Type", &Event::BindEventType},
				{"Cond1", &Event::BindCondition1},
				{"Cond2", &Event::BindCondition2},
				{"Cond3", &Event::BindCondition3},
				{"Cond4", &Event::BindCondition4},
				{"Cond5", &Event::BindCondition5},
				{"Exec1", &Event::BindExecute1},
				{"Exec2", &Event::BindExecute2},
				{"Exec3", &Event::BindExecute3},
				{"Exec4", &Event::BindExecute4},
				{"Exec5", &Event::BindExecute5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneNumber
		static void BindZoneNumber(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ZoneNumber);
		}

		/// \brief Binds a result's column to EventNumber
		static void BindEventNumber(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EventNumber);
		}

		/// \brief Binds a result's column to EventType
		static void BindEventType(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.EventType);
		}

		/// \brief Binds a result's column to Condition1
		static void BindCondition1(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Condition1.reset();
			}
			else
			{
				m.Condition1 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Condition2
		static void BindCondition2(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Condition2.reset();
			}
			else
			{
				m.Condition2 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Condition3
		static void BindCondition3(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Condition3.reset();
			}
			else
			{
				m.Condition3 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Condition4
		static void BindCondition4(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Condition4.reset();
			}
			else
			{
				m.Condition4 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Condition5
		static void BindCondition5(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Condition5.reset();
			}
			else
			{
				m.Condition5 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Execute1
		static void BindExecute1(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute1);
		}

		/// \brief Binds a result's column to Execute2
		static void BindExecute2(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute2);
		}

		/// \brief Binds a result's column to Execute3
		static void BindExecute3(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute3);
		}

		/// \brief Binds a result's column to Execute4
		static void BindExecute4(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute4);
		}

		/// \brief Binds a result's column to Execute5
		static void BindExecute5(full_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute5);
		}

	};

	/// \brief generated nanodbc column binder for full_model::EventTrigger
	export class EventTrigger
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &EventTrigger::BindIndex},
				{"bNpcType", &EventTrigger::BindNpcType},
				{"sNpcID", &EventTrigger::BindNpcId},
				{"nTriggerNum", &EventTrigger::BindTriggerNumber}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcType
		static void BindNpcType(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NpcType);
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to TriggerNumber
		static void BindTriggerNumber(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.TriggerNumber);
		}

	};

	/// \brief generated nanodbc column binder for full_model::FriendList
	export class FriendList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserID", &FriendList::BindUserId},
				{"strFriend1", &FriendList::BindFriend1},
				{"strFriend2", &FriendList::BindFriend2},
				{"strFriend3", &FriendList::BindFriend3},
				{"strFriend4", &FriendList::BindFriend4},
				{"strFriend5", &FriendList::BindFriend5},
				{"strFriend6", &FriendList::BindFriend6},
				{"strFriend7", &FriendList::BindFriend7},
				{"strFriend8", &FriendList::BindFriend8},
				{"strFriend9", &FriendList::BindFriend9},
				{"strFriend10", &FriendList::BindFriend10},
				{"strFriend11", &FriendList::BindFriend11},
				{"strFriend12", &FriendList::BindFriend12},
				{"strFriend13", &FriendList::BindFriend13},
				{"strFriend14", &FriendList::BindFriend14},
				{"strFriend15", &FriendList::BindFriend15},
				{"strFriend16", &FriendList::BindFriend16},
				{"strFriend17", &FriendList::BindFriend17},
				{"strFriend18", &FriendList::BindFriend18},
				{"strFriend19", &FriendList::BindFriend19},
				{"strFriend20", &FriendList::BindFriend20},
				{"strFriend21", &FriendList::BindFriend21},
				{"strFriend22", &FriendList::BindFriend22},
				{"strFriend23", &FriendList::BindFriend23},
				{"strFriend24", &FriendList::BindFriend24}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to Friend1
		static void BindFriend1(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend1.reset();
			}
			else
			{
				m.Friend1 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend2
		static void BindFriend2(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend2.reset();
			}
			else
			{
				m.Friend2 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend3
		static void BindFriend3(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend3.reset();
			}
			else
			{
				m.Friend3 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend4
		static void BindFriend4(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend4.reset();
			}
			else
			{
				m.Friend4 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend5
		static void BindFriend5(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend5.reset();
			}
			else
			{
				m.Friend5 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend6
		static void BindFriend6(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend6.reset();
			}
			else
			{
				m.Friend6 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend7
		static void BindFriend7(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend7.reset();
			}
			else
			{
				m.Friend7 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend8
		static void BindFriend8(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend8.reset();
			}
			else
			{
				m.Friend8 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend9
		static void BindFriend9(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend9.reset();
			}
			else
			{
				m.Friend9 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend10
		static void BindFriend10(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend10.reset();
			}
			else
			{
				m.Friend10 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend11
		static void BindFriend11(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend11.reset();
			}
			else
			{
				m.Friend11 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend12
		static void BindFriend12(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend12.reset();
			}
			else
			{
				m.Friend12 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend13
		static void BindFriend13(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend13.reset();
			}
			else
			{
				m.Friend13 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend14
		static void BindFriend14(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend14.reset();
			}
			else
			{
				m.Friend14 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend15
		static void BindFriend15(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend15.reset();
			}
			else
			{
				m.Friend15 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend16
		static void BindFriend16(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend16.reset();
			}
			else
			{
				m.Friend16 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend17
		static void BindFriend17(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend17.reset();
			}
			else
			{
				m.Friend17 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend18
		static void BindFriend18(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend18.reset();
			}
			else
			{
				m.Friend18 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend19
		static void BindFriend19(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend19.reset();
			}
			else
			{
				m.Friend19 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend20
		static void BindFriend20(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend20.reset();
			}
			else
			{
				m.Friend20 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend21
		static void BindFriend21(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend21.reset();
			}
			else
			{
				m.Friend21 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend22
		static void BindFriend22(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend22.reset();
			}
			else
			{
				m.Friend22 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend23
		static void BindFriend23(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend23.reset();
			}
			else
			{
				m.Friend23 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Friend24
		static void BindFriend24(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Friend24.reset();
			}
			else
			{
				m.Friend24 = result.get<std::string>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::HacktoolUserLog
	export class HacktoolUserLog
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &HacktoolUserLog::BindAccountId},
				{"strCharID", &HacktoolUserLog::BindCharId},
				{"strHackToolName", &HacktoolUserLog::BindHackToolName},
				{"tWriteTime", &HacktoolUserLog::BindWriteTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to HackToolName
		static void BindHackToolName(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.HackToolName);
		}

		/// \brief Binds a result's column to WriteTime
		static void BindWriteTime(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
		{
			m.WriteTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for full_model::HeroUser
	export class HeroUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::HeroUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"shIndex", &HeroUser::BindIndex},
				{"strUserID", &HeroUser::BindUserId},
				{"strNation", &HeroUser::BindNation},
				{"strClass", &HeroUser::BindClassName},
				{"strAchievement", &HeroUser::BindAchievement}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.UserId.reset();
			}
			else
			{
				m.UserId = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Nation.reset();
			}
			else
			{
				m.Nation = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ClassName
		static void BindClassName(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ClassName.reset();
			}
			else
			{
				m.ClassName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Achievement
		static void BindAchievement(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Achievement.reset();
			}
			else
			{
				m.Achievement = result.get<std::string>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::Home
	export class Home
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Home& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"Nation", &Home::BindNation},
				{"ElmoZoneX", &Home::BindElmoZoneX},
				{"ElmoZoneZ", &Home::BindElmoZoneZ},
				{"ElmoZoneLX", &Home::BindElmoZoneLX},
				{"ElmoZoneLZ", &Home::BindElmoZoneLZ},
				{"KarusZoneX", &Home::BindKarusZoneX},
				{"KarusZoneZ", &Home::BindKarusZoneZ},
				{"KarusZoneLX", &Home::BindKarusZoneLX},
				{"KarusZoneLZ", &Home::BindKarusZoneLZ},
				{"FreeZoneX", &Home::BindFreeZoneX},
				{"FreeZoneZ", &Home::BindFreeZoneZ},
				{"FreeZoneLX", &Home::BindFreeZoneLX},
				{"FreeZoneLZ", &Home::BindFreeZoneLZ},
				{"BattleZoneX", &Home::BindBattleZoneX},
				{"BattleZoneZ", &Home::BindBattleZoneZ},
				{"BattleZoneLX", &Home::BindBattleZoneLX},
				{"BattleZoneLZ", &Home::BindBattleZoneLZ},
				{"BattleZone2X", &Home::BindBattleZone2X},
				{"BattleZone2Z", &Home::BindBattleZone2Z},
				{"BattleZone2LX", &Home::BindBattleZone2LX},
				{"BattleZone2LZ", &Home::BindBattleZone2LZ}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to ElmoZoneX
		static void BindElmoZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoZoneX);
		}

		/// \brief Binds a result's column to ElmoZoneZ
		static void BindElmoZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoZoneZ);
		}

		/// \brief Binds a result's column to ElmoZoneLX
		static void BindElmoZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ElmoZoneLX);
		}

		/// \brief Binds a result's column to ElmoZoneLZ
		static void BindElmoZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ElmoZoneLZ);
		}

		/// \brief Binds a result's column to KarusZoneX
		static void BindKarusZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusZoneX);
		}

		/// \brief Binds a result's column to KarusZoneZ
		static void BindKarusZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusZoneZ);
		}

		/// \brief Binds a result's column to KarusZoneLX
		static void BindKarusZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.KarusZoneLX);
		}

		/// \brief Binds a result's column to KarusZoneLZ
		static void BindKarusZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.KarusZoneLZ);
		}

		/// \brief Binds a result's column to FreeZoneX
		static void BindFreeZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.FreeZoneX);
		}

		/// \brief Binds a result's column to FreeZoneZ
		static void BindFreeZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.FreeZoneZ);
		}

		/// \brief Binds a result's column to FreeZoneLX
		static void BindFreeZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.FreeZoneLX);
		}

		/// \brief Binds a result's column to FreeZoneLZ
		static void BindFreeZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.FreeZoneLZ);
		}

		/// \brief Binds a result's column to BattleZoneX
		static void BindBattleZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZoneX);
		}

		/// \brief Binds a result's column to BattleZoneZ
		static void BindBattleZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZoneZ);
		}

		/// \brief Binds a result's column to BattleZoneLX
		static void BindBattleZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.BattleZoneLX);
		}

		/// \brief Binds a result's column to BattleZoneLZ
		static void BindBattleZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.BattleZoneLZ);
		}

		/// \brief Binds a result's column to BattleZone2X
		static void BindBattleZone2X(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZone2X);
		}

		/// \brief Binds a result's column to BattleZone2Z
		static void BindBattleZone2Z(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZone2Z);
		}

		/// \brief Binds a result's column to BattleZone2LX
		static void BindBattleZone2LX(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.BattleZone2LX);
		}

		/// \brief Binds a result's column to BattleZone2LZ
		static void BindBattleZone2LZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.BattleZone2LZ);
		}

	};

	/// \brief generated nanodbc column binder for full_model::Item
	export class Item
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Item& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"Num", &Item::BindID},
				{"strName", &Item::BindName},
				{"Kind", &Item::BindKind},
				{"Slot", &Item::BindSlot},
				{"Race", &Item::BindRace},
				{"Class", &Item::BindClassId},
				{"Damage", &Item::BindDamage},
				{"Delay", &Item::BindDelay},
				{"Range", &Item::BindRange},
				{"Weight", &Item::BindWeight},
				{"Duration", &Item::BindDurability},
				{"BuyPrice", &Item::BindBuyPrice},
				{"SellPrice", &Item::BindSellPrice},
				{"Ac", &Item::BindArmor},
				{"Countable", &Item::BindCountable},
				{"Effect1", &Item::BindMagicEffect},
				{"Effect2", &Item::BindSpecialEffect},
				{"ReqLevel", &Item::BindMinLevel},
				{"ReqLevelMax", &Item::BindMaxLevel},
				{"ReqRank", &Item::BindRequiredRank},
				{"ReqTitle", &Item::BindRequiredTitle},
				{"ReqStr", &Item::BindRequiredStrength},
				{"ReqSta", &Item::BindRequiredStamina},
				{"ReqDex", &Item::BindRequiredDexterity},
				{"ReqIntel", &Item::BindRequiredIntelligence},
				{"ReqCha", &Item::BindRequiredCharisma},
				{"SellingGroup", &Item::BindSellingGroup},
				{"ItemType", &Item::BindType},
				{"Hitrate", &Item::BindHitRate},
				{"Evasionrate", &Item::BindEvasionRate},
				{"DaggerAc", &Item::BindDaggerArmor},
				{"SwordAc", &Item::BindSwordArmor},
				{"MaceAc", &Item::BindMaceArmor},
				{"AxeAc", &Item::BindAxeArmor},
				{"SpearAc", &Item::BindSpearArmor},
				{"BowAc", &Item::BindBowArmor},
				{"FireDamage", &Item::BindFireDamage},
				{"IceDamage", &Item::BindIceDamage},
				{"LightningDamage", &Item::BindLightningDamage},
				{"PoisonDamage", &Item::BindPoisonDamage},
				{"HPDrain", &Item::BindHpDrain},
				{"MPDamage", &Item::BindMpDamage},
				{"MPDrain", &Item::BindMpDrain},
				{"MirrorDamage", &Item::BindMirrorDamage},
				{"Droprate", &Item::BindDropRate},
				{"StrB", &Item::BindStrengthBonus},
				{"StaB", &Item::BindStaminaBonus},
				{"DexB", &Item::BindDexterityBonus},
				{"IntelB", &Item::BindIntelligenceBonus},
				{"ChaB", &Item::BindCharismaBonus},
				{"MaxHpB", &Item::BindMaxHpBonus},
				{"MaxMpB", &Item::BindMaxMpBonus},
				{"FireR", &Item::BindFireResist},
				{"ColdR", &Item::BindColdResist},
				{"LightningR", &Item::BindLightningResist},
				{"MagicR", &Item::BindMagicResist},
				{"PoisonR", &Item::BindPoisonResist},
				{"CurseR", &Item::BindCurseResist}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Kind
		static void BindKind(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Kind);
		}

		/// \brief Binds a result's column to Slot
		static void BindSlot(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Slot);
		}

		/// \brief Binds a result's column to Race
		static void BindRace(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Race);
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ClassId);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Delay);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Weight
		static void BindWeight(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Weight);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BuyPrice);
		}

		/// \brief Binds a result's column to SellPrice
		static void BindSellPrice(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellPrice);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to Countable
		static void BindCountable(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Countable);
		}

		/// \brief Binds a result's column to MagicEffect
		static void BindMagicEffect(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicEffect);
		}

		/// \brief Binds a result's column to SpecialEffect
		static void BindSpecialEffect(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SpecialEffect);
		}

		/// \brief Binds a result's column to MinLevel
		static void BindMinLevel(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MinLevel);
		}

		/// \brief Binds a result's column to MaxLevel
		static void BindMaxLevel(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MaxLevel);
		}

		/// \brief Binds a result's column to RequiredRank
		static void BindRequiredRank(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequiredRank);
		}

		/// \brief Binds a result's column to RequiredTitle
		static void BindRequiredTitle(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequiredTitle);
		}

		/// \brief Binds a result's column to RequiredStrength
		static void BindRequiredStrength(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequiredStrength);
		}

		/// \brief Binds a result's column to RequiredStamina
		static void BindRequiredStamina(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequiredStamina);
		}

		/// \brief Binds a result's column to RequiredDexterity
		static void BindRequiredDexterity(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequiredDexterity);
		}

		/// \brief Binds a result's column to RequiredIntelligence
		static void BindRequiredIntelligence(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequiredIntelligence);
		}

		/// \brief Binds a result's column to RequiredCharisma
		static void BindRequiredCharisma(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequiredCharisma);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvasionRate
		static void BindEvasionRate(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvasionRate);
		}

		/// \brief Binds a result's column to DaggerArmor
		static void BindDaggerArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DaggerArmor);
		}

		/// \brief Binds a result's column to SwordArmor
		static void BindSwordArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SwordArmor);
		}

		/// \brief Binds a result's column to MaceArmor
		static void BindMaceArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaceArmor);
		}

		/// \brief Binds a result's column to AxeArmor
		static void BindAxeArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AxeArmor);
		}

		/// \brief Binds a result's column to SpearArmor
		static void BindSpearArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SpearArmor);
		}

		/// \brief Binds a result's column to BowArmor
		static void BindBowArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BowArmor);
		}

		/// \brief Binds a result's column to FireDamage
		static void BindFireDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.FireDamage);
		}

		/// \brief Binds a result's column to IceDamage
		static void BindIceDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.IceDamage);
		}

		/// \brief Binds a result's column to LightningDamage
		static void BindLightningDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LightningDamage);
		}

		/// \brief Binds a result's column to PoisonDamage
		static void BindPoisonDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.PoisonDamage);
		}

		/// \brief Binds a result's column to HpDrain
		static void BindHpDrain(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.HpDrain);
		}

		/// \brief Binds a result's column to MpDamage
		static void BindMpDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MpDamage);
		}

		/// \brief Binds a result's column to MpDrain
		static void BindMpDrain(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MpDrain);
		}

		/// \brief Binds a result's column to MirrorDamage
		static void BindMirrorDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MirrorDamage);
		}

		/// \brief Binds a result's column to DropRate
		static void BindDropRate(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DropRate);
		}

		/// \brief Binds a result's column to StrengthBonus
		static void BindStrengthBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StrengthBonus);
		}

		/// \brief Binds a result's column to StaminaBonus
		static void BindStaminaBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StaminaBonus);
		}

		/// \brief Binds a result's column to DexterityBonus
		static void BindDexterityBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DexterityBonus);
		}

		/// \brief Binds a result's column to IntelligenceBonus
		static void BindIntelligenceBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IntelligenceBonus);
		}

		/// \brief Binds a result's column to CharismaBonus
		static void BindCharismaBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CharismaBonus);
		}

		/// \brief Binds a result's column to MaxHpBonus
		static void BindMaxHpBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpBonus);
		}

		/// \brief Binds a result's column to MaxMpBonus
		static void BindMaxMpBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpBonus);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResist);
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResist);
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResist);
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResist);
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResist);
		}

		/// \brief Binds a result's column to CurseResist
		static void BindCurseResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurseResist);
		}

	};

	/// \brief generated nanodbc column binder for full_model::ItemExchange
	export class ItemExchange
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &ItemExchange::BindIndex},
				{"nNpcNum", &ItemExchange::BindNpcNumber},
				{"strNpcName", &ItemExchange::BindNpcName},
				{"strNote", &ItemExchange::BindNote},
				{"bRandomFlag", &ItemExchange::BindRandomFlag},
				{"nOriginItemNum1", &ItemExchange::BindOriginItemNumber1},
				{"nOriginItemCount1", &ItemExchange::BindOriginItemCount1},
				{"nOriginItemNum2", &ItemExchange::BindOriginItemNumber2},
				{"nOriginItemCount2", &ItemExchange::BindOriginItemCount2},
				{"nOriginItemNum3", &ItemExchange::BindOriginItemNumber3},
				{"nOriginItemCount3", &ItemExchange::BindOriginItemCount3},
				{"nOriginItemNum4", &ItemExchange::BindOriginItemNumber4},
				{"nOriginItemCount4", &ItemExchange::BindOriginItemCount4},
				{"nOriginItemNum5", &ItemExchange::BindOriginItemNumber5},
				{"nOriginItemCount5", &ItemExchange::BindOriginItemCount5},
				{"nExchangeItemNum1", &ItemExchange::BindExchangeItemNumber1},
				{"nExchangeItemCount1", &ItemExchange::BindExchangeItemCount1},
				{"nExchangeItemNum2", &ItemExchange::BindExchangeItemNumber2},
				{"nExchangeItemCount2", &ItemExchange::BindExchangeItemCount2},
				{"nExchangeItemNum3", &ItemExchange::BindExchangeItemNumber3},
				{"nExchangeItemCount3", &ItemExchange::BindExchangeItemCount3},
				{"nExchangeItemNum4", &ItemExchange::BindExchangeItemNumber4},
				{"nExchangeItemCount4", &ItemExchange::BindExchangeItemCount4},
				{"nExchangeItemNum5", &ItemExchange::BindExchangeItemNumber5},
				{"nExchangeItemCount5", &ItemExchange::BindExchangeItemCount5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcNumber);
		}

		/// \brief Binds a result's column to NpcName
		static void BindNpcName(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.NpcName);
		}

		/// \brief Binds a result's column to Note
		static void BindNote(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Note);
		}

		/// \brief Binds a result's column to RandomFlag
		static void BindRandomFlag(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RandomFlag);
		}

		/// \brief Binds a result's column to OriginItemNumber1
		static void BindOriginItemNumber1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber1);
		}

		/// \brief Binds a result's column to OriginItemCount1
		static void BindOriginItemCount1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount1);
		}

		/// \brief Binds a result's column to OriginItemNumber2
		static void BindOriginItemNumber2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber2);
		}

		/// \brief Binds a result's column to OriginItemCount2
		static void BindOriginItemCount2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount2);
		}

		/// \brief Binds a result's column to OriginItemNumber3
		static void BindOriginItemNumber3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber3);
		}

		/// \brief Binds a result's column to OriginItemCount3
		static void BindOriginItemCount3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount3);
		}

		/// \brief Binds a result's column to OriginItemNumber4
		static void BindOriginItemNumber4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber4);
		}

		/// \brief Binds a result's column to OriginItemCount4
		static void BindOriginItemCount4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount4);
		}

		/// \brief Binds a result's column to OriginItemNumber5
		static void BindOriginItemNumber5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber5);
		}

		/// \brief Binds a result's column to OriginItemCount5
		static void BindOriginItemCount5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount5);
		}

		/// \brief Binds a result's column to ExchangeItemNumber1
		static void BindExchangeItemNumber1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber1);
		}

		/// \brief Binds a result's column to ExchangeItemCount1
		static void BindExchangeItemCount1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount1);
		}

		/// \brief Binds a result's column to ExchangeItemNumber2
		static void BindExchangeItemNumber2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber2);
		}

		/// \brief Binds a result's column to ExchangeItemCount2
		static void BindExchangeItemCount2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount2);
		}

		/// \brief Binds a result's column to ExchangeItemNumber3
		static void BindExchangeItemNumber3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber3);
		}

		/// \brief Binds a result's column to ExchangeItemCount3
		static void BindExchangeItemCount3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount3);
		}

		/// \brief Binds a result's column to ExchangeItemNumber4
		static void BindExchangeItemNumber4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber4);
		}

		/// \brief Binds a result's column to ExchangeItemCount4
		static void BindExchangeItemCount4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount4);
		}

		/// \brief Binds a result's column to ExchangeItemNumber5
		static void BindExchangeItemNumber5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber5);
		}

		/// \brief Binds a result's column to ExchangeItemCount5
		static void BindExchangeItemCount5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount5);
		}

	};

	/// \brief generated nanodbc column binder for full_model::ItemGroup
	export class ItemGroup
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"group", &ItemGroup::BindGroup},
				{"name", &ItemGroup::BindName},
				{"item1", &ItemGroup::BindItem1},
				{"item2", &ItemGroup::BindItem2},
				{"item3", &ItemGroup::BindItem3},
				{"item4", &ItemGroup::BindItem4},
				{"item5", &ItemGroup::BindItem5},
				{"item6", &ItemGroup::BindItem6},
				{"item7", &ItemGroup::BindItem7},
				{"item8", &ItemGroup::BindItem8},
				{"item9", &ItemGroup::BindItem9},
				{"item10", &ItemGroup::BindItem10},
				{"item11", &ItemGroup::BindItem11},
				{"item12", &ItemGroup::BindItem12},
				{"item13", &ItemGroup::BindItem13},
				{"item14", &ItemGroup::BindItem14},
				{"item15", &ItemGroup::BindItem15},
				{"item16", &ItemGroup::BindItem16},
				{"item17", &ItemGroup::BindItem17},
				{"item18", &ItemGroup::BindItem18},
				{"item19", &ItemGroup::BindItem19},
				{"item20", &ItemGroup::BindItem20},
				{"item21", &ItemGroup::BindItem21},
				{"item22", &ItemGroup::BindItem22},
				{"item23", &ItemGroup::BindItem23},
				{"item24", &ItemGroup::BindItem24},
				{"item25", &ItemGroup::BindItem25},
				{"item26", &ItemGroup::BindItem26},
				{"item27", &ItemGroup::BindItem27},
				{"item28", &ItemGroup::BindItem28},
				{"item29", &ItemGroup::BindItem29},
				{"item30", &ItemGroup::BindItem30}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Group);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Item1
		static void BindItem1(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item1);
		}

		/// \brief Binds a result's column to Item2
		static void BindItem2(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item2);
		}

		/// \brief Binds a result's column to Item3
		static void BindItem3(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item3);
		}

		/// \brief Binds a result's column to Item4
		static void BindItem4(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item4);
		}

		/// \brief Binds a result's column to Item5
		static void BindItem5(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item5);
		}

		/// \brief Binds a result's column to Item6
		static void BindItem6(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item6);
		}

		/// \brief Binds a result's column to Item7
		static void BindItem7(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item7);
		}

		/// \brief Binds a result's column to Item8
		static void BindItem8(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item8);
		}

		/// \brief Binds a result's column to Item9
		static void BindItem9(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item9);
		}

		/// \brief Binds a result's column to Item10
		static void BindItem10(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item10);
		}

		/// \brief Binds a result's column to Item11
		static void BindItem11(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item11);
		}

		/// \brief Binds a result's column to Item12
		static void BindItem12(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item12);
		}

		/// \brief Binds a result's column to Item13
		static void BindItem13(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item13);
		}

		/// \brief Binds a result's column to Item14
		static void BindItem14(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item14);
		}

		/// \brief Binds a result's column to Item15
		static void BindItem15(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item15);
		}

		/// \brief Binds a result's column to Item16
		static void BindItem16(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item16);
		}

		/// \brief Binds a result's column to Item17
		static void BindItem17(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item17);
		}

		/// \brief Binds a result's column to Item18
		static void BindItem18(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item18);
		}

		/// \brief Binds a result's column to Item19
		static void BindItem19(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item19);
		}

		/// \brief Binds a result's column to Item20
		static void BindItem20(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item20);
		}

		/// \brief Binds a result's column to Item21
		static void BindItem21(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item21);
		}

		/// \brief Binds a result's column to Item22
		static void BindItem22(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item22);
		}

		/// \brief Binds a result's column to Item23
		static void BindItem23(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item23);
		}

		/// \brief Binds a result's column to Item24
		static void BindItem24(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item24);
		}

		/// \brief Binds a result's column to Item25
		static void BindItem25(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item25);
		}

		/// \brief Binds a result's column to Item26
		static void BindItem26(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item26);
		}

		/// \brief Binds a result's column to Item27
		static void BindItem27(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item27);
		}

		/// \brief Binds a result's column to Item28
		static void BindItem28(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item28);
		}

		/// \brief Binds a result's column to Item29
		static void BindItem29(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item29);
		}

		/// \brief Binds a result's column to Item30
		static void BindItem30(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item30);
		}

	};

	/// \brief generated nanodbc column binder for full_model::ItemUpgrade
	export class ItemUpgrade
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &ItemUpgrade::BindIndex},
				{"nNPCNum", &ItemUpgrade::BindNpcNumber},
				{"strName", &ItemUpgrade::BindName},
				{"strNote", &ItemUpgrade::BindNote},
				{"nOriginType", &ItemUpgrade::BindOriginType},
				{"nOriginItem", &ItemUpgrade::BindOriginItem},
				{"nReqItem1", &ItemUpgrade::BindRequiredItem1},
				{"nReqItem2", &ItemUpgrade::BindRequiredItem2},
				{"nReqItem3", &ItemUpgrade::BindRequiredItem3},
				{"nReqItem4", &ItemUpgrade::BindRequiredItem4},
				{"nReqItem5", &ItemUpgrade::BindRequiredItem5},
				{"nReqItem6", &ItemUpgrade::BindRequiredItem6},
				{"nReqItem7", &ItemUpgrade::BindRequiredItem7},
				{"nReqItem8", &ItemUpgrade::BindRequiredItem8},
				{"nReqNoah", &ItemUpgrade::BindRequiredCoins},
				{"bRateType", &ItemUpgrade::BindRateType},
				{"nGenRate", &ItemUpgrade::BindGenRate},
				{"nGiveItem", &ItemUpgrade::BindGiveItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcNumber);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Note
		static void BindNote(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Note);
		}

		/// \brief Binds a result's column to OriginType
		static void BindOriginType(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginType);
		}

		/// \brief Binds a result's column to OriginItem
		static void BindOriginItem(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItem);
		}

		/// \brief Binds a result's column to RequiredItem1
		static void BindRequiredItem1(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem1);
		}

		/// \brief Binds a result's column to RequiredItem2
		static void BindRequiredItem2(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem2);
		}

		/// \brief Binds a result's column to RequiredItem3
		static void BindRequiredItem3(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem3);
		}

		/// \brief Binds a result's column to RequiredItem4
		static void BindRequiredItem4(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem4);
		}

		/// \brief Binds a result's column to RequiredItem5
		static void BindRequiredItem5(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem5);
		}

		/// \brief Binds a result's column to RequiredItem6
		static void BindRequiredItem6(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem6);
		}

		/// \brief Binds a result's column to RequiredItem7
		static void BindRequiredItem7(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem7);
		}

		/// \brief Binds a result's column to RequiredItem8
		static void BindRequiredItem8(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem8);
		}

		/// \brief Binds a result's column to RequiredCoins
		static void BindRequiredCoins(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredCoins);
		}

		/// \brief Binds a result's column to RateType
		static void BindRateType(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RateType);
		}

		/// \brief Binds a result's column to GenRate
		static void BindGenRate(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GenRate);
		}

		/// \brief Binds a result's column to GiveItem
		static void BindGiveItem(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GiveItem);
		}

	};

	/// \brief generated nanodbc column binder for full_model::ItemUpProbability
	export class ItemUpProbability
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"bType", &ItemUpProbability::BindType},
				{"nMaxSuccess", &ItemUpProbability::BindMaxSuccess},
				{"nMaxFail", &ItemUpProbability::BindMaxFail},
				{"nCurSuccess", &ItemUpProbability::BindCurrentSuccess},
				{"nCurFail", &ItemUpProbability::BindCurrentFailure}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to MaxSuccess
		static void BindMaxSuccess(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxSuccess);
		}

		/// \brief Binds a result's column to MaxFail
		static void BindMaxFail(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxFail);
		}

		/// \brief Binds a result's column to CurrentSuccess
		static void BindCurrentSuccess(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurrentSuccess);
		}

		/// \brief Binds a result's column to CurrentFailure
		static void BindCurrentFailure(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurrentFailure);
		}

	};

	/// \brief generated nanodbc column binder for full_model::Monster
	export class Monster
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sSid", &Monster::BindMonsterId},
				{"strName", &Monster::BindName},
				{"sPid", &Monster::BindPictureId},
				{"sSize", &Monster::BindSize},
				{"iWeapon1", &Monster::BindWeapon1},
				{"iWeapon2", &Monster::BindWeapon2},
				{"byGroup", &Monster::BindGroup},
				{"byActType", &Monster::BindActType},
				{"byType", &Monster::BindType},
				{"byFamily", &Monster::BindFamily},
				{"byRank", &Monster::BindRank},
				{"byTitle", &Monster::BindTitle},
				{"iSellingGroup", &Monster::BindSellingGroup},
				{"sLevel", &Monster::BindLevel},
				{"iExp", &Monster::BindExp},
				{"iLoyalty", &Monster::BindLoyalty},
				{"iHpPoint", &Monster::BindHitPoints},
				{"sMpPoint", &Monster::BindManaPoints},
				{"sAtk", &Monster::BindAttack},
				{"sAc", &Monster::BindArmor},
				{"sHitRate", &Monster::BindHitRate},
				{"sEvadeRate", &Monster::BindEvadeRate},
				{"sDamage", &Monster::BindDamage},
				{"sAttackDelay", &Monster::BindAttackDelay},
				{"bySpeed1", &Monster::BindWalkSpeed},
				{"bySpeed2", &Monster::BindRunSpeed},
				{"sStandtime", &Monster::BindStandTime},
				{"iMagic1", &Monster::BindMagic1},
				{"iMagic2", &Monster::BindMagic2},
				{"iMagic3", &Monster::BindMagic3},
				{"sFireR", &Monster::BindFireResist},
				{"sColdR", &Monster::BindColdResist},
				{"sLightningR", &Monster::BindLightningResist},
				{"sMagicR", &Monster::BindMagicResist},
				{"sDiseaseR", &Monster::BindDiseaseResist},
				{"sPoisonR", &Monster::BindPoisonResist},
				{"sLightR", &Monster::BindLightResist},
				{"sBulk", &Monster::BindBulk},
				{"byAttackRange", &Monster::BindAttackRange},
				{"bySearchRange", &Monster::BindSearchRange},
				{"byTracingRange", &Monster::BindTracingRange},
				{"iMoney", &Monster::BindMoney},
				{"sItem", &Monster::BindItem},
				{"byDirectAttack", &Monster::BindDirectAttack},
				{"byMagicAttack", &Monster::BindMagicAttack},
				{"byMoneyType", &Monster::BindMoneyType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::Monster& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PictureId);
		}

		/// \brief Binds a result's column to Size
		static void BindSize(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon1);
		}

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon2);
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Group);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ActType);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Family
		static void BindFamily(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Family);
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Title);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.HitPoints);
		}

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaPoints);
		}

		/// \brief Binds a result's column to Attack
		static void BindAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Attack);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvadeRate);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackDelay);
		}

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
		}

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RunSpeed);
		}

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StandTime);
		}

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic1);
		}

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic2);
		}

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic3);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResist);
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResist);
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResist);
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResist);
		}

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DiseaseResist);
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResist);
		}

		/// \brief Binds a result's column to LightResist
		static void BindLightResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightResist);
		}

		/// \brief Binds a result's column to Bulk
		static void BindBulk(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Bulk);
		}

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.AttackRange);
		}

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SearchRange);
		}

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TracingRange);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to Item
		static void BindItem(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Item);
		}

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DirectAttack);
		}

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MagicAttack);
		}

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(full_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MoneyType);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MonsterItem
	export class MonsterItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterItem::BindMonsterId},
				{"iItem01", &MonsterItem::BindItemId1},
				{"sPersent01", &MonsterItem::BindDropChance1},
				{"iItem02", &MonsterItem::BindItemId2},
				{"sPersent02", &MonsterItem::BindDropChance2},
				{"iItem03", &MonsterItem::BindItemId3},
				{"sPersent03", &MonsterItem::BindDropChance3},
				{"iItem04", &MonsterItem::BindItemId4},
				{"sPersent04", &MonsterItem::BindDropChance4},
				{"iItem05", &MonsterItem::BindItemId5},
				{"sPersent05", &MonsterItem::BindDropChance5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance1);
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId2);
		}

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance2);
		}

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId3);
		}

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance3);
		}

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId4);
		}

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance4);
		}

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId5);
		}

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance5);
		}

	};

	/// \brief generated nanodbc column binder for full_model::Npc
	export class Npc
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sSid", &Npc::BindNpcId},
				{"strName", &Npc::BindName},
				{"sPid", &Npc::BindPictureId},
				{"sSize", &Npc::BindSize},
				{"iWeapon1", &Npc::BindWeapon1},
				{"iWeapon2", &Npc::BindWeapon2},
				{"byGroup", &Npc::BindGroup},
				{"byActType", &Npc::BindActType},
				{"byType", &Npc::BindType},
				{"byFamily", &Npc::BindFamily},
				{"byRank", &Npc::BindRank},
				{"byTitle", &Npc::BindTitle},
				{"iSellingGroup", &Npc::BindSellingGroup},
				{"sLevel", &Npc::BindLevel},
				{"iExp", &Npc::BindExp},
				{"iLoyalty", &Npc::BindLoyalty},
				{"iHpPoint", &Npc::BindHitPoints},
				{"sMpPoint", &Npc::BindManaPoints},
				{"sAtk", &Npc::BindAttack},
				{"sAc", &Npc::BindArmor},
				{"sHitRate", &Npc::BindHitRate},
				{"sEvadeRate", &Npc::BindEvadeRate},
				{"sDamage", &Npc::BindDamage},
				{"sAttackDelay", &Npc::BindAttackDelay},
				{"bySpeed1", &Npc::BindWalkSpeed},
				{"bySpeed2", &Npc::BindRunSpeed},
				{"sStandtime", &Npc::BindStandTime},
				{"iMagic1", &Npc::BindMagic1},
				{"iMagic2", &Npc::BindMagic2},
				{"iMagic3", &Npc::BindMagic3},
				{"sFireR", &Npc::BindFireResist},
				{"sColdR", &Npc::BindColdResist},
				{"sLightningR", &Npc::BindLightningResist},
				{"sMagicR", &Npc::BindMagicResist},
				{"sDiseaseR", &Npc::BindDiseaseResist},
				{"sPoisonR", &Npc::BindPoisonResist},
				{"sLightR", &Npc::BindLightResist},
				{"sBulk", &Npc::BindBulk},
				{"byAttackRange", &Npc::BindAttackRange},
				{"bySearchRange", &Npc::BindSearchRange},
				{"byTracingRange", &Npc::BindTracingRange},
				{"iMoney", &Npc::BindMoney},
				{"sItem", &Npc::BindItem},
				{"byDirectAttack", &Npc::BindDirectAttack},
				{"byMagicAttack", &Npc::BindMagicAttack},
				{"byMoneyType", &Npc::BindMoneyType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::Npc& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PictureId);
		}

		/// \brief Binds a result's column to Size
		static void BindSize(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon1);
		}

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon2);
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Group);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ActType);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Family
		static void BindFamily(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Family);
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Title);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.HitPoints);
		}

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaPoints);
		}

		/// \brief Binds a result's column to Attack
		static void BindAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Attack);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvadeRate);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackDelay);
		}

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
		}

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RunSpeed);
		}

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StandTime);
		}

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic1);
		}

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic2);
		}

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic3);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResist);
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResist);
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResist);
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResist);
		}

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DiseaseResist);
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResist);
		}

		/// \brief Binds a result's column to LightResist
		static void BindLightResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightResist);
		}

		/// \brief Binds a result's column to Bulk
		static void BindBulk(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Bulk);
		}

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.AttackRange);
		}

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SearchRange);
		}

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TracingRange);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to Item
		static void BindItem(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Item);
		}

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DirectAttack);
		}

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MagicAttack);
		}

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MoneyType);
		}

	};

	/// \brief generated nanodbc column binder for full_model::NpcItem
	export class NpcItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &NpcItem::BindNpcId},
				{"iItem01", &NpcItem::BindItemId1},
				{"sPersent01", &NpcItem::BindDropChance1},
				{"iItem02", &NpcItem::BindItemId2},
				{"sPersent02", &NpcItem::BindDropChance2},
				{"iItem03", &NpcItem::BindItemId3},
				{"sPersent03", &NpcItem::BindDropChance3},
				{"iItem04", &NpcItem::BindItemId4},
				{"sPersent04", &NpcItem::BindDropChance4},
				{"iItem05", &NpcItem::BindItemId5},
				{"sPersent05", &NpcItem::BindDropChance5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DropChance1.reset();
			}
			else
			{
				m.DropChance1 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemId2.reset();
			}
			else
			{
				m.ItemId2 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DropChance2.reset();
			}
			else
			{
				m.DropChance2 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemId3.reset();
			}
			else
			{
				m.ItemId3 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DropChance3.reset();
			}
			else
			{
				m.DropChance3 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemId4.reset();
			}
			else
			{
				m.ItemId4 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DropChance4.reset();
			}
			else
			{
				m.DropChance4 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemId5.reset();
			}
			else
			{
				m.ItemId5 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.DropChance5.reset();
			}
			else
			{
				m.DropChance5 = result.get<int16_t>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::NpcMoveItem
	export class NpcMoveItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sCastleIndex", &NpcMoveItem::BindCastleIndex},
				{"byChangeItem", &NpcMoveItem::BindChangeItem},
				{"sChangeSid", &NpcMoveItem::BindChangeId},
				{"byMoveItem", &NpcMoveItem::BindMoveItem},
				{"sMoveMinX", &NpcMoveItem::BindMoveMinX},
				{"sMoveMinY", &NpcMoveItem::BindMoveMinY},
				{"sMoveMaxX", &NpcMoveItem::BindMoveMaxX},
				{"sMoveMaxY", &NpcMoveItem::BindMoveMaxY}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CastleIndex
		static void BindCastleIndex(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CastleIndex);
		}

		/// \brief Binds a result's column to ChangeItem
		static void BindChangeItem(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ChangeItem.reset();
			}
			else
			{
				m.ChangeItem = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ChangeId
		static void BindChangeId(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ChangeId.reset();
			}
			else
			{
				m.ChangeId = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoveItem
		static void BindMoveItem(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.MoveItem.reset();
			}
			else
			{
				m.MoveItem = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoveMinX
		static void BindMoveMinX(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.MoveMinX.reset();
			}
			else
			{
				m.MoveMinX = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoveMinY
		static void BindMoveMinY(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.MoveMinY.reset();
			}
			else
			{
				m.MoveMinY = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoveMaxX
		static void BindMoveMaxX(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.MoveMaxX.reset();
			}
			else
			{
				m.MoveMaxX = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoveMaxY
		static void BindMoveMaxY(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.MoveMaxY.reset();
			}
			else
			{
				m.MoveMaxY = result.get<int16_t>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::NpcPos
	export class NpcPos
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ZoneID", &NpcPos::BindZoneId},
				{"NpcID", &NpcPos::BindNpcId},
				{"ActType", &NpcPos::BindActType},
				{"RegenType", &NpcPos::BindRegenType},
				{"DungeonFamily", &NpcPos::BindDungeonFamily},
				{"SpecialType", &NpcPos::BindSpecialType},
				{"TrapNumber", &NpcPos::BindTrapNumber},
				{"LeftX", &NpcPos::BindLeftX},
				{"TopZ", &NpcPos::BindTopZ},
				{"RightX", &NpcPos::BindRightX},
				{"BottomZ", &NpcPos::BindBottomZ},
				{"LimitMinZ", &NpcPos::BindLimitMinZ},
				{"LimitMinX", &NpcPos::BindLimitMinX},
				{"LimitMaxX", &NpcPos::BindLimitMaxX},
				{"LimitMaxZ", &NpcPos::BindLimitMaxZ},
				{"NumNPC", &NpcPos::BindNumNpc},
				{"RegTime", &NpcPos::BindRespawnTime},
				{"byDirection", &NpcPos::BindDirection},
				{"DotCnt", &NpcPos::BindPathPointCount},
				{"path", &NpcPos::BindPath}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ActType);
		}

		/// \brief Binds a result's column to RegenType
		static void BindRegenType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RegenType);
		}

		/// \brief Binds a result's column to DungeonFamily
		static void BindDungeonFamily(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DungeonFamily);
		}

		/// \brief Binds a result's column to SpecialType
		static void BindSpecialType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SpecialType);
		}

		/// \brief Binds a result's column to TrapNumber
		static void BindTrapNumber(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TrapNumber);
		}

		/// \brief Binds a result's column to LeftX
		static void BindLeftX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LeftX);
		}

		/// \brief Binds a result's column to TopZ
		static void BindTopZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.TopZ);
		}

		/// \brief Binds a result's column to RightX
		static void BindRightX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RightX);
		}

		/// \brief Binds a result's column to BottomZ
		static void BindBottomZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BottomZ);
		}

		/// \brief Binds a result's column to LimitMinZ
		static void BindLimitMinZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMinZ);
		}

		/// \brief Binds a result's column to LimitMinX
		static void BindLimitMinX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMinX);
		}

		/// \brief Binds a result's column to LimitMaxX
		static void BindLimitMaxX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMaxX);
		}

		/// \brief Binds a result's column to LimitMaxZ
		static void BindLimitMaxZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMaxZ);
		}

		/// \brief Binds a result's column to NumNpc
		static void BindNumNpc(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NumNpc);
		}

		/// \brief Binds a result's column to RespawnTime
		static void BindRespawnTime(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RespawnTime);
		}

		/// \brief Binds a result's column to Direction
		static void BindDirection(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Direction);
		}

		/// \brief Binds a result's column to PathPointCount
		static void BindPathPointCount(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.PathPointCount);
		}

		/// \brief Binds a result's column to Path
		static void BindPath(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Path.reset();
			}
			else
			{
				m.Path = result.get<std::string>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::KingBallotBox
	export class KingBallotBox
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &KingBallotBox::BindAccountId},
				{"strCharID", &KingBallotBox::BindCharId},
				{"byNation", &KingBallotBox::BindNation},
				{"strCandidacyID", &KingBallotBox::BindCandidateId}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to CandidateId
		static void BindCandidateId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CandidateId);
		}

	};

	/// \brief generated nanodbc column binder for full_model::KingCandidacyNoticeBoard
	export class KingCandidacyNoticeBoard
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserID", &KingCandidacyNoticeBoard::BindCandidateId},
				{"byNation", &KingCandidacyNoticeBoard::BindNation},
				{"sNoticeLen", &KingCandidacyNoticeBoard::BindNoticeLength},
				{"strNotice", &KingCandidacyNoticeBoard::BindNotice}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CandidateId
		static void BindCandidateId(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CandidateId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to NoticeLength
		static void BindNoticeLength(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoticeLength);
		}

		/// \brief Binds a result's column to Notice
		static void BindNotice(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.Notice);
		}

	};

	/// \brief generated nanodbc column binder for full_model::KingElectionList
	export class KingElectionList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byType", &KingElectionList::BindType},
				{"byNation", &KingElectionList::BindNation},
				{"nKnights", &KingElectionList::BindKnights},
				{"strName", &KingElectionList::BindName},
				{"nMoney", &KingElectionList::BindMoney}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Knights
		static void BindKnights(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Knights);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

	};

	/// \brief generated nanodbc column binder for full_model::KingSystem
	export class KingSystem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byNation", &KingSystem::BindNation},
				{"byType", &KingSystem::BindType},
				{"sYear", &KingSystem::BindYear},
				{"byMonth", &KingSystem::BindMonth},
				{"byDay", &KingSystem::BindDay},
				{"byHour", &KingSystem::BindHour},
				{"byMinute", &KingSystem::BindMinute},
				{"byImType", &KingSystem::BindImType},
				{"sImYear", &KingSystem::BindImYear},
				{"byImMonth", &KingSystem::BindImMonth},
				{"byImDay", &KingSystem::BindImDay},
				{"byImHour", &KingSystem::BindImHour},
				{"byImMinute", &KingSystem::BindImMinute},
				{"byNoahEvent", &KingSystem::BindNoahEvent},
				{"byNoahEvent_Day", &KingSystem::BindNoahEventDay},
				{"byNoahEvent_Hour", &KingSystem::BindNoahEventHour},
				{"byNoahEvent_Minute", &KingSystem::BindNoahEventMinute},
				{"sNoahEvent_Duration", &KingSystem::BindNoahEventDuration},
				{"byExpEvent", &KingSystem::BindExpEvent},
				{"byExpEvent_Day", &KingSystem::BindExpEventDay},
				{"byExpEvent_Hour", &KingSystem::BindExpEventHour},
				{"byExpEvent_Minute", &KingSystem::BindExpEventMinute},
				{"sExpEvent_Duration", &KingSystem::BindExpEventDuration},
				{"nTribute", &KingSystem::BindTribute},
				{"byTerritoryTariff", &KingSystem::BindTerritoryTariff},
				{"nTerritoryTax", &KingSystem::BindTerritoryTax},
				{"nNationalTreasury", &KingSystem::BindNationalTreasury},
				{"strKingName", &KingSystem::BindKingName},
				{"strImRequestID", &KingSystem::BindImRequestId}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Year
		static void BindYear(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Year);
		}

		/// \brief Binds a result's column to Month
		static void BindMonth(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Month);
		}

		/// \brief Binds a result's column to Day
		static void BindDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Day);
		}

		/// \brief Binds a result's column to Hour
		static void BindHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Hour);
		}

		/// \brief Binds a result's column to Minute
		static void BindMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Minute);
		}

		/// \brief Binds a result's column to ImType
		static void BindImType(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ImType);
		}

		/// \brief Binds a result's column to ImYear
		static void BindImYear(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ImYear);
		}

		/// \brief Binds a result's column to ImMonth
		static void BindImMonth(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ImMonth);
		}

		/// \brief Binds a result's column to ImDay
		static void BindImDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ImDay);
		}

		/// \brief Binds a result's column to ImHour
		static void BindImHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ImHour);
		}

		/// \brief Binds a result's column to ImMinute
		static void BindImMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ImMinute);
		}

		/// \brief Binds a result's column to NoahEvent
		static void BindNoahEvent(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NoahEvent);
		}

		/// \brief Binds a result's column to NoahEventDay
		static void BindNoahEventDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NoahEventDay);
		}

		/// \brief Binds a result's column to NoahEventHour
		static void BindNoahEventHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NoahEventHour);
		}

		/// \brief Binds a result's column to NoahEventMinute
		static void BindNoahEventMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NoahEventMinute);
		}

		/// \brief Binds a result's column to NoahEventDuration
		static void BindNoahEventDuration(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NoahEventDuration);
		}

		/// \brief Binds a result's column to ExpEvent
		static void BindExpEvent(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ExpEvent);
		}

		/// \brief Binds a result's column to ExpEventDay
		static void BindExpEventDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ExpEventDay);
		}

		/// \brief Binds a result's column to ExpEventHour
		static void BindExpEventHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ExpEventHour);
		}

		/// \brief Binds a result's column to ExpEventMinute
		static void BindExpEventMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ExpEventMinute);
		}

		/// \brief Binds a result's column to ExpEventDuration
		static void BindExpEventDuration(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpEventDuration);
		}

		/// \brief Binds a result's column to Tribute
		static void BindTribute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Tribute);
		}

		/// \brief Binds a result's column to TerritoryTariff
		static void BindTerritoryTariff(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TerritoryTariff);
		}

		/// \brief Binds a result's column to TerritoryTax
		static void BindTerritoryTax(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.TerritoryTax);
		}

		/// \brief Binds a result's column to NationalTreasury
		static void BindNationalTreasury(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NationalTreasury);
		}

		/// \brief Binds a result's column to KingName
		static void BindKingName(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KingName.reset();
			}
			else
			{
				m.KingName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ImRequestId
		static void BindImRequestId(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ImRequestId.reset();
			}
			else
			{
				m.ImRequestId = result.get<std::string>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::Knights
	export class Knights
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"IDNum", &Knights::BindID},
				{"Flag", &Knights::BindFlag},
				{"Nation", &Knights::BindNation},
				{"Ranking", &Knights::BindRanking},
				{"IDName", &Knights::BindName},
				{"Members", &Knights::BindMembers},
				{"Chief", &Knights::BindChief},
				{"ViceChief_1", &Knights::BindViceChief1},
				{"ViceChief_2", &Knights::BindViceChief2},
				{"ViceChief_3", &Knights::BindViceChief3},
				{"strEnemyName", &Knights::BindEnemyName},
				{"byOldWarResult", &Knights::BindOldWarResult},
				{"nWarEnemyID", &Knights::BindWarEnemyId},
				{"nVictory", &Knights::BindVictory},
				{"nLose", &Knights::BindLose},
				{"Gold", &Knights::BindGold},
				{"Domination", &Knights::BindDomination},
				{"Points", &Knights::BindPoints},
				{"CreateTime", &Knights::BindCreateTime},
				{"sMarkVersion", &Knights::BindMarkVersion},
				{"sMarkLen", &Knights::BindMarkLength},
				{"Mark", &Knights::BindMark},
				{"Stash", &Knights::BindStash},
				{"bySiegeFlag", &Knights::BindSiegeFlag},
				{"sAllianceKnights", &Knights::BindAllianceKnights},
				{"sCape", &Knights::BindCape}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Flag
		static void BindFlag(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Flag);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Ranking
		static void BindRanking(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Ranking);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Members
		static void BindMembers(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Members);
		}

		/// \brief Binds a result's column to Chief
		static void BindChief(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Chief);
		}

		/// \brief Binds a result's column to ViceChief1
		static void BindViceChief1(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ViceChief1.reset();
			}
			else
			{
				m.ViceChief1 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ViceChief2
		static void BindViceChief2(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ViceChief2.reset();
			}
			else
			{
				m.ViceChief2 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ViceChief3
		static void BindViceChief3(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ViceChief3.reset();
			}
			else
			{
				m.ViceChief3 = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to EnemyName
		static void BindEnemyName(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.EnemyName.reset();
			}
			else
			{
				m.EnemyName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to OldWarResult
		static void BindOldWarResult(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.OldWarResult);
		}

		/// \brief Binds a result's column to WarEnemyId
		static void BindWarEnemyId(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.WarEnemyId);
		}

		/// \brief Binds a result's column to Victory
		static void BindVictory(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Victory);
		}

		/// \brief Binds a result's column to Lose
		static void BindLose(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Lose);
		}

		/// \brief Binds a result's column to Gold
		static void BindGold(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.Gold);
		}

		/// \brief Binds a result's column to Domination
		static void BindDomination(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Domination);
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Points);
		}

		/// \brief Binds a result's column to CreateTime
		static void BindCreateTime(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.CreateTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

		/// \brief Binds a result's column to MarkVersion
		static void BindMarkVersion(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MarkVersion);
		}

		/// \brief Binds a result's column to MarkLength
		static void BindMarkLength(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MarkLength);
		}

		/// \brief Binds a result's column to Mark
		static void BindMark(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Mark.reset();
			}
			else
			{
				m.Mark = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to Stash
		static void BindStash(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Stash.reset();
			}
			else
			{
				m.Stash = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to SiegeFlag
		static void BindSiegeFlag(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SiegeFlag);
		}

		/// \brief Binds a result's column to AllianceKnights
		static void BindAllianceKnights(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AllianceKnights);
		}

		/// \brief Binds a result's column to Cape
		static void BindCape(full_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Cape);
		}

	};

	/// \brief generated nanodbc column binder for full_model::KnightsAlliance
	export class KnightsAlliance
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sMainAllianceKnights", &KnightsAlliance::BindMainAllianceKnights},
				{"sSubAllianceKnights", &KnightsAlliance::BindSubAllianceKnights},
				{"sMercenaryClan_1", &KnightsAlliance::BindMercenaryClan1},
				{"sMercenaryClan_2", &KnightsAlliance::BindMercenaryClan2}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MainAllianceKnights
		static void BindMainAllianceKnights(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MainAllianceKnights);
		}

		/// \brief Binds a result's column to SubAllianceKnights
		static void BindSubAllianceKnights(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SubAllianceKnights);
		}

		/// \brief Binds a result's column to MercenaryClan1
		static void BindMercenaryClan1(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MercenaryClan1);
		}

		/// \brief Binds a result's column to MercenaryClan2
		static void BindMercenaryClan2(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MercenaryClan2);
		}

	};

	/// \brief generated nanodbc column binder for full_model::KnightsCape
	export class KnightsCape
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sCapeIndex", &KnightsCape::BindCapeIndex},
				{"strName", &KnightsCape::BindName},
				{"nBuyPrice", &KnightsCape::BindBuyPrice},
				{"nDuration", &KnightsCape::BindDuration},
				{"byGrade", &KnightsCape::BindGrade}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CapeIndex
		static void BindCapeIndex(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CapeIndex);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BuyPrice);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Grade
		static void BindGrade(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Grade);
		}

	};

	/// \brief generated nanodbc column binder for full_model::KnightsRating
	export class KnightsRating
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRank", &KnightsRating::BindRank},
				{"shIndex", &KnightsRating::BindIndex},
				{"strName", &KnightsRating::BindName},
				{"nPoints", &KnightsRating::BindPoints}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Points);
		}

	};

	/// \brief generated nanodbc column binder for full_model::KnightsSiegeWarfare
	export class KnightsSiegeWarfare
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sCastleIndex", &KnightsSiegeWarfare::BindCastleIndex},
				{"sMasterKnights", &KnightsSiegeWarfare::BindMasterKnights},
				{"bySiegeType", &KnightsSiegeWarfare::BindSiegeType},
				{"byWarDay", &KnightsSiegeWarfare::BindWarDay},
				{"byWarTime", &KnightsSiegeWarfare::BindWarHour},
				{"byWarMinute", &KnightsSiegeWarfare::BindWarMinute},
				{"sChallengeList_1", &KnightsSiegeWarfare::BindChallengeList1},
				{"sChallengeList_2", &KnightsSiegeWarfare::BindChallengeList2},
				{"sChallengeList_3", &KnightsSiegeWarfare::BindChallengeList3},
				{"sChallengeList_4", &KnightsSiegeWarfare::BindChallengeList4},
				{"sChallengeList_5", &KnightsSiegeWarfare::BindChallengeList5},
				{"sChallengeList_6", &KnightsSiegeWarfare::BindChallengeList6},
				{"sChallengeList_7", &KnightsSiegeWarfare::BindChallengeList7},
				{"sChallengeList_8", &KnightsSiegeWarfare::BindChallengeList8},
				{"sChallengeList_9", &KnightsSiegeWarfare::BindChallengeList9},
				{"sChallengeList_10", &KnightsSiegeWarfare::BindChallengeList10},
				{"byWarRequestDay", &KnightsSiegeWarfare::BindWarRequestDay},
				{"byWarRequestTime", &KnightsSiegeWarfare::BindWarRequestTime},
				{"byWarRequestMinute", &KnightsSiegeWarfare::BindWarRequestMinute},
				{"byGuerrillaWarDay", &KnightsSiegeWarfare::BindGuerrillaWarDay},
				{"byGuerrillaWarTime", &KnightsSiegeWarfare::BindGuerrillaWarTime},
				{"byGuerrillaWarMinute", &KnightsSiegeWarfare::BindGuerrillaWarMinute},
				{"strChallengeList", &KnightsSiegeWarfare::BindChallengeList},
				{"sMoradonTariff", &KnightsSiegeWarfare::BindMoradonTariff},
				{"sDellosTariff", &KnightsSiegeWarfare::BindDelosTariff},
				{"nDungeonCharge", &KnightsSiegeWarfare::BindDungeonCharge},
				{"nMoradonTax", &KnightsSiegeWarfare::BindMoradonTax},
				{"nDellosTax", &KnightsSiegeWarfare::BindDelosTax},
				{"sRequestList_1", &KnightsSiegeWarfare::BindRequestList1},
				{"sRequestList_2", &KnightsSiegeWarfare::BindRequestList2},
				{"sRequestList_3", &KnightsSiegeWarfare::BindRequestList3},
				{"sRequestList_4", &KnightsSiegeWarfare::BindRequestList4},
				{"sRequestList_5", &KnightsSiegeWarfare::BindRequestList5},
				{"sRequestList_6", &KnightsSiegeWarfare::BindRequestList6},
				{"sRequestList_7", &KnightsSiegeWarfare::BindRequestList7},
				{"sRequestList_8", &KnightsSiegeWarfare::BindRequestList8},
				{"sRequestList_9", &KnightsSiegeWarfare::BindRequestList9},
				{"sRequestList_10", &KnightsSiegeWarfare::BindRequestList10}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CastleIndex
		static void BindCastleIndex(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CastleIndex);
		}

		/// \brief Binds a result's column to MasterKnights
		static void BindMasterKnights(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MasterKnights);
		}

		/// \brief Binds a result's column to SiegeType
		static void BindSiegeType(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SiegeType);
		}

		/// \brief Binds a result's column to WarDay
		static void BindWarDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WarDay);
		}

		/// \brief Binds a result's column to WarHour
		static void BindWarHour(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WarHour);
		}

		/// \brief Binds a result's column to WarMinute
		static void BindWarMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WarMinute);
		}

		/// \brief Binds a result's column to ChallengeList1
		static void BindChallengeList1(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList1);
		}

		/// \brief Binds a result's column to ChallengeList2
		static void BindChallengeList2(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList2);
		}

		/// \brief Binds a result's column to ChallengeList3
		static void BindChallengeList3(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList3);
		}

		/// \brief Binds a result's column to ChallengeList4
		static void BindChallengeList4(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList4);
		}

		/// \brief Binds a result's column to ChallengeList5
		static void BindChallengeList5(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList5);
		}

		/// \brief Binds a result's column to ChallengeList6
		static void BindChallengeList6(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList6);
		}

		/// \brief Binds a result's column to ChallengeList7
		static void BindChallengeList7(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList7);
		}

		/// \brief Binds a result's column to ChallengeList8
		static void BindChallengeList8(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList8);
		}

		/// \brief Binds a result's column to ChallengeList9
		static void BindChallengeList9(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList9);
		}

		/// \brief Binds a result's column to ChallengeList10
		static void BindChallengeList10(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList10);
		}

		/// \brief Binds a result's column to WarRequestDay
		static void BindWarRequestDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WarRequestDay);
		}

		/// \brief Binds a result's column to WarRequestTime
		static void BindWarRequestTime(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WarRequestTime);
		}

		/// \brief Binds a result's column to WarRequestMinute
		static void BindWarRequestMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WarRequestMinute);
		}

		/// \brief Binds a result's column to GuerrillaWarDay
		static void BindGuerrillaWarDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.GuerrillaWarDay);
		}

		/// \brief Binds a result's column to GuerrillaWarTime
		static void BindGuerrillaWarTime(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.GuerrillaWarTime);
		}

		/// \brief Binds a result's column to GuerrillaWarMinute
		static void BindGuerrillaWarMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.GuerrillaWarMinute);
		}

		/// \brief Binds a result's column to ChallengeList
		static void BindChallengeList(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ChallengeList.reset();
			}
			else
			{
				m.ChallengeList = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to MoradonTariff
		static void BindMoradonTariff(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MoradonTariff);
		}

		/// \brief Binds a result's column to DelosTariff
		static void BindDelosTariff(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DelosTariff);
		}

		/// \brief Binds a result's column to DungeonCharge
		static void BindDungeonCharge(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DungeonCharge);
		}

		/// \brief Binds a result's column to MoradonTax
		static void BindMoradonTax(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MoradonTax);
		}

		/// \brief Binds a result's column to DelosTax
		static void BindDelosTax(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DelosTax);
		}

		/// \brief Binds a result's column to RequestList1
		static void BindRequestList1(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList1);
		}

		/// \brief Binds a result's column to RequestList2
		static void BindRequestList2(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList2);
		}

		/// \brief Binds a result's column to RequestList3
		static void BindRequestList3(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList3);
		}

		/// \brief Binds a result's column to RequestList4
		static void BindRequestList4(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList4);
		}

		/// \brief Binds a result's column to RequestList5
		static void BindRequestList5(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList5);
		}

		/// \brief Binds a result's column to RequestList6
		static void BindRequestList6(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList6);
		}

		/// \brief Binds a result's column to RequestList7
		static void BindRequestList7(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList7);
		}

		/// \brief Binds a result's column to RequestList8
		static void BindRequestList8(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList8);
		}

		/// \brief Binds a result's column to RequestList9
		static void BindRequestList9(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList9);
		}

		/// \brief Binds a result's column to RequestList10
		static void BindRequestList10(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList10);
		}

	};

	/// \brief generated nanodbc column binder for full_model::KnightsUser
	export class KnightsUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIDNum", &KnightsUser::BindKnightsId},
				{"strUserID", &KnightsUser::BindUserId}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to KnightsId
		static void BindKnightsId(full_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KnightsId);
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

	};

	/// \brief generated nanodbc column binder for full_model::LevelUp
	export class LevelUp
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::LevelUp& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"level", &LevelUp::BindLevel},
				{"Exp", &LevelUp::BindRequiredExp}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to RequiredExp
		static void BindRequiredExp(full_model::LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredExp);
		}

	};

	/// \brief generated nanodbc column binder for full_model::Magic
	export class Magic
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"MagicNum", &Magic::BindID},
				{"EnName", &Magic::BindEnglishName},
				{"KrName", &Magic::BindKoreanName},
				{"Description", &Magic::BindDescription},
				{"BeforeAction", &Magic::BindBeforeAction},
				{"TargetAction", &Magic::BindTargetAction},
				{"SelfEffect", &Magic::BindSelfEffect},
				{"FlyingEffect", &Magic::BindFlyingEffect},
				{"TargetEffect", &Magic::BindTargetEffect},
				{"Moral", &Magic::BindMoral},
				{"SkillLevel", &Magic::BindSkillLevel},
				{"Skill", &Magic::BindSkill},
				{"Msp", &Magic::BindManaCost},
				{"HP", &Magic::BindHpCost},
				{"ItemGroup", &Magic::BindItemGroup},
				{"UseItem", &Magic::BindUseItem},
				{"CastTime", &Magic::BindCastTime},
				{"ReCastTime", &Magic::BindRecastTime},
				{"SuccessRate", &Magic::BindSuccessRate},
				{"Type1", &Magic::BindType1},
				{"Type2", &Magic::BindType2},
				{"Range", &Magic::BindRange},
				{"Etc", &Magic::BindEtc},
				{"Event", &Magic::BindEvent}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to EnglishName
		static void BindEnglishName(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.EnglishName.reset();
			}
			else
			{
				m.EnglishName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to KoreanName
		static void BindKoreanName(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KoreanName.reset();
			}
			else
			{
				m.KoreanName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::Magic& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to BeforeAction
		static void BindBeforeAction(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.BeforeAction);
		}

		/// \brief Binds a result's column to TargetAction
		static void BindTargetAction(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TargetAction);
		}

		/// \brief Binds a result's column to SelfEffect
		static void BindSelfEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SelfEffect);
		}

		/// \brief Binds a result's column to FlyingEffect
		static void BindFlyingEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.FlyingEffect);
		}

		/// \brief Binds a result's column to TargetEffect
		static void BindTargetEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TargetEffect);
		}

		/// \brief Binds a result's column to Moral
		static void BindMoral(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Moral);
		}

		/// \brief Binds a result's column to SkillLevel
		static void BindSkillLevel(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SkillLevel);
		}

		/// \brief Binds a result's column to Skill
		static void BindSkill(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Skill);
		}

		/// \brief Binds a result's column to ManaCost
		static void BindManaCost(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaCost);
		}

		/// \brief Binds a result's column to HpCost
		static void BindHpCost(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HpCost);
		}

		/// \brief Binds a result's column to ItemGroup
		static void BindItemGroup(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemGroup);
		}

		/// \brief Binds a result's column to UseItem
		static void BindUseItem(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.UseItem);
		}

		/// \brief Binds a result's column to CastTime
		static void BindCastTime(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.CastTime);
		}

		/// \brief Binds a result's column to RecastTime
		static void BindRecastTime(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RecastTime);
		}

		/// \brief Binds a result's column to SuccessRate
		static void BindSuccessRate(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SuccessRate);
		}

		/// \brief Binds a result's column to Type1
		static void BindType1(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type1);
		}

		/// \brief Binds a result's column to Type2
		static void BindType2(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type2);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Etc
		static void BindEtc(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Etc);
		}

		/// \brief Binds a result's column to Event
		static void BindEvent(full_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Event);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MagicType1
	export class MagicType1
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType1::BindID},
				{"Name", &MagicType1::BindName},
				{"Description", &MagicType1::BindDescription},
				{"Type", &MagicType1::BindType},
				{"HitRate", &MagicType1::BindHitRateMod},
				{"Hit", &MagicType1::BindDamageMod},
				{"AddDamage", &MagicType1::BindAddDamage},
				{"Delay", &MagicType1::BindDelay},
				{"ComboType", &MagicType1::BindComboType},
				{"ComboCount", &MagicType1::BindComboCount},
				{"ComboDamage", &MagicType1::BindComboDamage},
				{"Range", &MagicType1::BindRange}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
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
		static void BindDescription(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
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
		static void BindType(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Delay);
		}

		/// \brief Binds a result's column to ComboType
		static void BindComboType(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ComboType);
		}

		/// \brief Binds a result's column to ComboCount
		static void BindComboCount(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ComboCount);
		}

		/// \brief Binds a result's column to ComboDamage
		static void BindComboDamage(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ComboDamage);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MagicType2
	export class MagicType2
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType2::BindID},
				{"Name", &MagicType2::BindName},
				{"Description", &MagicType2::BindDescription},
				{"HitType", &MagicType2::BindHitType},
				{"HitRate", &MagicType2::BindHitRateMod},
				{"AddDamage", &MagicType2::BindDamageMod},
				{"AddRange", &MagicType2::BindRangeMod},
				{"NeedArrow", &MagicType2::BindNeedArrow},
				{"AddDamagePlus", &MagicType2::BindAddDamagePlus}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
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
		static void BindDescription(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to HitType
		static void BindHitType(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.HitType);
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to RangeMod
		static void BindRangeMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RangeMod);
		}

		/// \brief Binds a result's column to NeedArrow
		static void BindNeedArrow(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NeedArrow);
		}

		/// \brief Binds a result's column to AddDamagePlus
		static void BindAddDamagePlus(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamagePlus);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MagicType3
	export class MagicType3
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType3::BindID},
				{"Name", &MagicType3::BindName},
				{"Description", &MagicType3::BindDescription},
				{"Radius", &MagicType3::BindRadius},
				{"Angle", &MagicType3::BindAngle},
				{"DirectType", &MagicType3::BindDirectType},
				{"FirstDamage", &MagicType3::BindFirstDamage},
				{"EndDamage", &MagicType3::BindEndDamage},
				{"TimeDamage", &MagicType3::BindTimeDamage},
				{"Duration", &MagicType3::BindDuration},
				{"Attribute", &MagicType3::BindAttribute}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
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
		static void BindDescription(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to Angle
		static void BindAngle(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Angle);
		}

		/// \brief Binds a result's column to DirectType
		static void BindDirectType(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DirectType);
		}

		/// \brief Binds a result's column to FirstDamage
		static void BindFirstDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FirstDamage);
		}

		/// \brief Binds a result's column to EndDamage
		static void BindEndDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EndDamage);
		}

		/// \brief Binds a result's column to TimeDamage
		static void BindTimeDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TimeDamage);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Attribute
		static void BindAttribute(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Attribute);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MagicType4
	export class MagicType4
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType4::BindID},
				{"Name", &MagicType4::BindName},
				{"Description", &MagicType4::BindDescription},
				{"BuffType", &MagicType4::BindBuffType},
				{"Radius", &MagicType4::BindRadius},
				{"Duration", &MagicType4::BindDuration},
				{"AttackSpeed", &MagicType4::BindAttackSpeed},
				{"Speed", &MagicType4::BindSpeed},
				{"AC", &MagicType4::BindArmor},
				{"ACPct", &MagicType4::BindArmorPercent},
				{"Attack", &MagicType4::BindAttackPower},
				{"MagicAttack", &MagicType4::BindMagicPower},
				{"MaxHP", &MagicType4::BindMaxHp},
				{"MaxHpPct", &MagicType4::BindMaxHpPercent},
				{"MaxMP", &MagicType4::BindMaxMp},
				{"MaxMpPct", &MagicType4::BindMaxMpPercent},
				{"HitRate", &MagicType4::BindHitRate},
				{"AvoidRate", &MagicType4::BindAvoidRate},
				{"Str", &MagicType4::BindStrength},
				{"Sta", &MagicType4::BindStamina},
				{"Dex", &MagicType4::BindDexterity},
				{"Intel", &MagicType4::BindIntelligence},
				{"Cha", &MagicType4::BindCharisma},
				{"FireR", &MagicType4::BindFireResist},
				{"ColdR", &MagicType4::BindColdResist},
				{"LightningR", &MagicType4::BindLightningResist},
				{"MagicR", &MagicType4::BindMagicResist},
				{"DiseaseR", &MagicType4::BindDiseaseResist},
				{"PoisonR", &MagicType4::BindPoisonResist},
				{"ExpPct", &MagicType4::BindExpPercent}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
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
		static void BindDescription(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to BuffType
		static void BindBuffType(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.BuffType);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.AttackSpeed);
		}

		/// \brief Binds a result's column to Speed
		static void BindSpeed(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Speed);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to ArmorPercent
		static void BindArmorPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ArmorPercent);
		}

		/// \brief Binds a result's column to AttackPower
		static void BindAttackPower(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.AttackPower);
		}

		/// \brief Binds a result's column to MagicPower
		static void BindMagicPower(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MagicPower);
		}

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHp);
		}

		/// \brief Binds a result's column to MaxHpPercent
		static void BindMaxHpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpPercent);
		}

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMp);
		}

		/// \brief Binds a result's column to MaxMpPercent
		static void BindMaxMpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpPercent);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to AvoidRate
		static void BindAvoidRate(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AvoidRate);
		}

		/// \brief Binds a result's column to Strength
		static void BindStrength(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Strength);
		}

		/// \brief Binds a result's column to Stamina
		static void BindStamina(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Stamina);
		}

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Dexterity);
		}

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Intelligence);
		}

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Charisma);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.FireResist);
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ColdResist);
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LightningResist);
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MagicResist);
		}

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DiseaseResist);
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.PoisonResist);
		}

		/// \brief Binds a result's column to ExpPercent
		static void BindExpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ExpPercent);
		}

	};

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
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ExpRecover);
		}

		/// \brief Binds a result's column to NeedStone
		static void BindNeedStone(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NeedStone);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MagicType6
	export class MagicType6
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType6::BindID},
				{"Name", &MagicType6::BindName},
				{"Description", &MagicType6::BindDescription},
				{"Size", &MagicType6::BindSize},
				{"TransformID", &MagicType6::BindTransformId},
				{"Duration", &MagicType6::BindDuration},
				{"MaxHp", &MagicType6::BindMaxHp},
				{"MaxMp", &MagicType6::BindMaxMp},
				{"Speed", &MagicType6::BindSpeed},
				{"AttackSpeed", &MagicType6::BindAttackSpeed},
				{"TotalHit", &MagicType6::BindTotalHit},
				{"TotalAc", &MagicType6::BindTotalArmor},
				{"TotalHitRate", &MagicType6::BindTotalHitRate},
				{"TotalEvasionRate", &MagicType6::BindTotalEvasionRate},
				{"TotalFireR", &MagicType6::BindTotalFireResist},
				{"TotalColdR", &MagicType6::BindTotalColdResist},
				{"TotalLightningR", &MagicType6::BindTotalLightningResist},
				{"TotalMagicR", &MagicType6::BindTotalMagicResist},
				{"TotalDiseaseR", &MagicType6::BindTotalDiseaseResist},
				{"TotalPoisonR", &MagicType6::BindTotalPoisonResist},
				{"Class", &MagicType6::BindClass},
				{"UserSkillUse", &MagicType6::BindUserSkillUse},
				{"NeedItem", &MagicType6::BindNeedItem},
				{"SkillSuccessRate", &MagicType6::BindSkillSuccessRate},
				{"MonsterFriendly", &MagicType6::BindMonsterFriendly}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Size
		static void BindSize(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to TransformId
		static void BindTransformId(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TransformId);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHp);
		}

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMp);
		}

		/// \brief Binds a result's column to Speed
		static void BindSpeed(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Speed);
		}

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackSpeed);
		}

		/// \brief Binds a result's column to TotalHit
		static void BindTotalHit(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalHit);
		}

		/// \brief Binds a result's column to TotalArmor
		static void BindTotalArmor(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalArmor);
		}

		/// \brief Binds a result's column to TotalHitRate
		static void BindTotalHitRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalHitRate);
		}

		/// \brief Binds a result's column to TotalEvasionRate
		static void BindTotalEvasionRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalEvasionRate);
		}

		/// \brief Binds a result's column to TotalFireResist
		static void BindTotalFireResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalFireResist);
		}

		/// \brief Binds a result's column to TotalColdResist
		static void BindTotalColdResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalColdResist);
		}

		/// \brief Binds a result's column to TotalLightningResist
		static void BindTotalLightningResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalLightningResist);
		}

		/// \brief Binds a result's column to TotalMagicResist
		static void BindTotalMagicResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalMagicResist);
		}

		/// \brief Binds a result's column to TotalDiseaseResist
		static void BindTotalDiseaseResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalDiseaseResist);
		}

		/// \brief Binds a result's column to TotalPoisonResist
		static void BindTotalPoisonResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalPoisonResist);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to UserSkillUse
		static void BindUserSkillUse(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.UserSkillUse);
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NeedItem);
		}

		/// \brief Binds a result's column to SkillSuccessRate
		static void BindSkillSuccessRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SkillSuccessRate);
		}

		/// \brief Binds a result's column to MonsterFriendly
		static void BindMonsterFriendly(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MonsterFriendly);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MagicType7
	export class MagicType7
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &MagicType7::BindID},
				{"strName", &MagicType7::BindName},
				{"strNote", &MagicType7::BindNote},
				{"byValidGroup", &MagicType7::BindValidGroup},
				{"byNatoinChange", &MagicType7::BindNationChange},
				{"shMonsterNum", &MagicType7::BindMonsterNumber},
				{"byTargetChange", &MagicType7::BindTargetChange},
				{"byStateChange", &MagicType7::BindStateChange},
				{"byRadius", &MagicType7::BindRadius},
				{"shHitrate", &MagicType7::BindHitRate},
				{"shDuration", &MagicType7::BindDuration},
				{"shDamage", &MagicType7::BindDamage},
				{"byVisoin", &MagicType7::BindVision},
				{"nNeedItem", &MagicType7::BindNeedItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Note
		static void BindNote(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Note.reset();
			}
			else
			{
				m.Note = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ValidGroup);
		}

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NationChange);
		}

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterNumber);
		}

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TargetChange);
		}

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StateChange);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Vision
		static void BindVision(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Vision);
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NeedItem);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MagicType8
	export class MagicType8
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType8::BindID},
				{"Name", &MagicType8::BindName},
				{"Description", &MagicType8::BindDescription},
				{"Target", &MagicType8::BindTarget},
				{"Radius", &MagicType8::BindRadius},
				{"WarpType", &MagicType8::BindWarpType},
				{"ExpRecover", &MagicType8::BindExpRecover}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
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
		static void BindDescription(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Target
		static void BindTarget(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Target);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to WarpType
		static void BindWarpType(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WarpType);
		}

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpRecover);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MagicType9
	export class MagicType9
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType9::BindID},
				{"Name", &MagicType9::BindName},
				{"Description", &MagicType9::BindDescription},
				{"ValidGroup", &MagicType9::BindValidGroup},
				{"NationChange", &MagicType9::BindNationChange},
				{"MonsterNum", &MagicType9::BindMonsterNumber},
				{"TargetChange", &MagicType9::BindTargetChange},
				{"StateChange", &MagicType9::BindStateChange},
				{"Radius", &MagicType9::BindRadius},
				{"Hitrate", &MagicType9::BindHitRate},
				{"Duration", &MagicType9::BindDuration},
				{"AddDamage", &MagicType9::BindAddDamage},
				{"Vision", &MagicType9::BindVision},
				{"NeedItem", &MagicType9::BindNeedItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
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
		static void BindDescription(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ValidGroup);
		}

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NationChange);
		}

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterNumber);
		}

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TargetChange);
		}

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StateChange);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamage);
		}

		/// \brief Binds a result's column to Vision
		static void BindVision(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Vision);
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NeedItem);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MakeDefensive
	export class MakeDefensive
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byLevel", &MakeDefensive::BindLevel},
				{"sClass_1", &MakeDefensive::BindClass1},
				{"sClass_2", &MakeDefensive::BindClass2},
				{"sClass_3", &MakeDefensive::BindClass3},
				{"sClass_4", &MakeDefensive::BindClass4},
				{"sClass_5", &MakeDefensive::BindClass5},
				{"sClass_6", &MakeDefensive::BindClass6},
				{"sClass_7", &MakeDefensive::BindClass7}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Class1
		static void BindClass1(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class1);
		}

		/// \brief Binds a result's column to Class2
		static void BindClass2(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class2);
		}

		/// \brief Binds a result's column to Class3
		static void BindClass3(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class3);
		}

		/// \brief Binds a result's column to Class4
		static void BindClass4(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class4);
		}

		/// \brief Binds a result's column to Class5
		static void BindClass5(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class5);
		}

		/// \brief Binds a result's column to Class6
		static void BindClass6(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class6);
		}

		/// \brief Binds a result's column to Class7
		static void BindClass7(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class7);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MakeItem
	export class MakeItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MakeItem::BindIndex},
				{"strItemInfo", &MakeItem::BindItemInfo},
				{"iItemCode", &MakeItem::BindItemCode},
				{"byItemLevel", &MakeItem::BindItemLevel}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to ItemInfo
		static void BindItemInfo(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemInfo.reset();
			}
			else
			{
				m.ItemInfo = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemCode
		static void BindItemCode(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemCode);
		}

		/// \brief Binds a result's column to ItemLevel
		static void BindItemLevel(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemLevel);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MakeItemGradeCode
	export class MakeItemGradeCode
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byItemIndex", &MakeItemGradeCode::BindItemIndex},
				{"byGrade_1", &MakeItemGradeCode::BindGrade1},
				{"byGrade_2", &MakeItemGradeCode::BindGrade2},
				{"byGrade_3", &MakeItemGradeCode::BindGrade3},
				{"byGrade_4", &MakeItemGradeCode::BindGrade4},
				{"byGrade_5", &MakeItemGradeCode::BindGrade5},
				{"byGrade_6", &MakeItemGradeCode::BindGrade6},
				{"byGrade_7", &MakeItemGradeCode::BindGrade7},
				{"byGrade_8", &MakeItemGradeCode::BindGrade8},
				{"byGrade_9", &MakeItemGradeCode::BindGrade9}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Grade1
		static void BindGrade1(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade1);
		}

		/// \brief Binds a result's column to Grade2
		static void BindGrade2(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade2);
		}

		/// \brief Binds a result's column to Grade3
		static void BindGrade3(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade3);
		}

		/// \brief Binds a result's column to Grade4
		static void BindGrade4(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade4);
		}

		/// \brief Binds a result's column to Grade5
		static void BindGrade5(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade5);
		}

		/// \brief Binds a result's column to Grade6
		static void BindGrade6(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade6);
		}

		/// \brief Binds a result's column to Grade7
		static void BindGrade7(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade7);
		}

		/// \brief Binds a result's column to Grade8
		static void BindGrade8(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade8);
		}

		/// \brief Binds a result's column to Grade9
		static void BindGrade9(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade9);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MakeItemGroup
	export class MakeItemGroup
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iItemGroupNum", &MakeItemGroup::BindItemGroupNumber},
				{"iItem_1", &MakeItemGroup::BindItem1},
				{"iItem_2", &MakeItemGroup::BindItem2},
				{"iItem_3", &MakeItemGroup::BindItem3},
				{"iItem_4", &MakeItemGroup::BindItem4},
				{"iItem_5", &MakeItemGroup::BindItem5},
				{"iItem_6", &MakeItemGroup::BindItem6},
				{"iItem_7", &MakeItemGroup::BindItem7},
				{"iItem_8", &MakeItemGroup::BindItem8},
				{"iItem_9", &MakeItemGroup::BindItem9},
				{"iItem_10", &MakeItemGroup::BindItem10},
				{"iItem_11", &MakeItemGroup::BindItem11},
				{"iItem_12", &MakeItemGroup::BindItem12},
				{"iItem_13", &MakeItemGroup::BindItem13},
				{"iItem_14", &MakeItemGroup::BindItem14},
				{"iItem_15", &MakeItemGroup::BindItem15},
				{"iItem_16", &MakeItemGroup::BindItem16},
				{"iItem_17", &MakeItemGroup::BindItem17},
				{"iItem_18", &MakeItemGroup::BindItem18},
				{"iItem_19", &MakeItemGroup::BindItem19},
				{"iItem_20", &MakeItemGroup::BindItem20},
				{"iItem_21", &MakeItemGroup::BindItem21},
				{"iItem_22", &MakeItemGroup::BindItem22},
				{"iItem_23", &MakeItemGroup::BindItem23},
				{"iItem_24", &MakeItemGroup::BindItem24},
				{"iItem_25", &MakeItemGroup::BindItem25},
				{"iItem_26", &MakeItemGroup::BindItem26},
				{"iItem_27", &MakeItemGroup::BindItem27},
				{"iItem_28", &MakeItemGroup::BindItem28},
				{"iItem_29", &MakeItemGroup::BindItem29},
				{"iItem_30", &MakeItemGroup::BindItem30}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ItemGroupNumber
		static void BindItemGroupNumber(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemGroupNumber);
		}

		/// \brief Binds a result's column to Item1
		static void BindItem1(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item1);
		}

		/// \brief Binds a result's column to Item2
		static void BindItem2(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item2);
		}

		/// \brief Binds a result's column to Item3
		static void BindItem3(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item3);
		}

		/// \brief Binds a result's column to Item4
		static void BindItem4(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item4);
		}

		/// \brief Binds a result's column to Item5
		static void BindItem5(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item5);
		}

		/// \brief Binds a result's column to Item6
		static void BindItem6(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item6);
		}

		/// \brief Binds a result's column to Item7
		static void BindItem7(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item7);
		}

		/// \brief Binds a result's column to Item8
		static void BindItem8(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item8);
		}

		/// \brief Binds a result's column to Item9
		static void BindItem9(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item9);
		}

		/// \brief Binds a result's column to Item10
		static void BindItem10(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item10);
		}

		/// \brief Binds a result's column to Item11
		static void BindItem11(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item11);
		}

		/// \brief Binds a result's column to Item12
		static void BindItem12(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item12);
		}

		/// \brief Binds a result's column to Item13
		static void BindItem13(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item13);
		}

		/// \brief Binds a result's column to Item14
		static void BindItem14(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item14);
		}

		/// \brief Binds a result's column to Item15
		static void BindItem15(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item15);
		}

		/// \brief Binds a result's column to Item16
		static void BindItem16(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item16);
		}

		/// \brief Binds a result's column to Item17
		static void BindItem17(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item17);
		}

		/// \brief Binds a result's column to Item18
		static void BindItem18(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item18);
		}

		/// \brief Binds a result's column to Item19
		static void BindItem19(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item19);
		}

		/// \brief Binds a result's column to Item20
		static void BindItem20(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item20);
		}

		/// \brief Binds a result's column to Item21
		static void BindItem21(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item21);
		}

		/// \brief Binds a result's column to Item22
		static void BindItem22(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item22);
		}

		/// \brief Binds a result's column to Item23
		static void BindItem23(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item23);
		}

		/// \brief Binds a result's column to Item24
		static void BindItem24(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item24);
		}

		/// \brief Binds a result's column to Item25
		static void BindItem25(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item25);
		}

		/// \brief Binds a result's column to Item26
		static void BindItem26(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item26);
		}

		/// \brief Binds a result's column to Item27
		static void BindItem27(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item27);
		}

		/// \brief Binds a result's column to Item28
		static void BindItem28(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item28);
		}

		/// \brief Binds a result's column to Item29
		static void BindItem29(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item29);
		}

		/// \brief Binds a result's column to Item30
		static void BindItem30(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item30);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MakeItemRareCode
	export class MakeItemRareCode
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byLevelGrade", &MakeItemRareCode::BindLevelGrade},
				{"sUpgradeItem", &MakeItemRareCode::BindUpgradeItem},
				{"sLareItem", &MakeItemRareCode::BindRareItem},
				{"sMagicItem", &MakeItemRareCode::BindMagicItem},
				{"sGereralItem", &MakeItemRareCode::BindGeneralItem}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to LevelGrade
		static void BindLevelGrade(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LevelGrade);
		}

		/// \brief Binds a result's column to UpgradeItem
		static void BindUpgradeItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.UpgradeItem);
		}

		/// \brief Binds a result's column to RareItem
		static void BindRareItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RareItem);
		}

		/// \brief Binds a result's column to MagicItem
		static void BindMagicItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicItem);
		}

		/// \brief Binds a result's column to GeneralItem
		static void BindGeneralItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GeneralItem);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MakeWeapon
	export class MakeWeapon
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"byLevel", &MakeWeapon::BindLevel},
				{"sClass_1", &MakeWeapon::BindClass1},
				{"sClass_2", &MakeWeapon::BindClass2},
				{"sClass_3", &MakeWeapon::BindClass3},
				{"sClass_4", &MakeWeapon::BindClass4},
				{"sClass_5", &MakeWeapon::BindClass5},
				{"sClass_6", &MakeWeapon::BindClass6},
				{"sClass_7", &MakeWeapon::BindClass7},
				{"sClass_8", &MakeWeapon::BindClass8},
				{"sClass_9", &MakeWeapon::BindClass9},
				{"sClass_10", &MakeWeapon::BindClass10},
				{"sClass_11", &MakeWeapon::BindClass11},
				{"sClass_12", &MakeWeapon::BindClass12}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Class1
		static void BindClass1(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class1);
		}

		/// \brief Binds a result's column to Class2
		static void BindClass2(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class2);
		}

		/// \brief Binds a result's column to Class3
		static void BindClass3(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class3);
		}

		/// \brief Binds a result's column to Class4
		static void BindClass4(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class4);
		}

		/// \brief Binds a result's column to Class5
		static void BindClass5(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class5);
		}

		/// \brief Binds a result's column to Class6
		static void BindClass6(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class6);
		}

		/// \brief Binds a result's column to Class7
		static void BindClass7(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class7);
		}

		/// \brief Binds a result's column to Class8
		static void BindClass8(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class8);
		}

		/// \brief Binds a result's column to Class9
		static void BindClass9(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class9);
		}

		/// \brief Binds a result's column to Class10
		static void BindClass10(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class10);
		}

		/// \brief Binds a result's column to Class11
		static void BindClass11(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class11);
		}

		/// \brief Binds a result's column to Class12
		static void BindClass12(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class12);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MonsterChallenge
	export class MonsterChallenge
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterChallenge::BindIndex},
				{"bStartTime1", &MonsterChallenge::BindStartTime1},
				{"bStartTime2", &MonsterChallenge::BindStartTime2},
				{"bStartTime3", &MonsterChallenge::BindStartTime3},
				{"bLevelMin", &MonsterChallenge::BindLevelMin},
				{"bLevelMax", &MonsterChallenge::BindLevelMax}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to StartTime1
		static void BindStartTime1(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StartTime1);
		}

		/// \brief Binds a result's column to StartTime2
		static void BindStartTime2(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StartTime2);
		}

		/// \brief Binds a result's column to StartTime3
		static void BindStartTime3(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StartTime3);
		}

		/// \brief Binds a result's column to LevelMin
		static void BindLevelMin(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LevelMin);
		}

		/// \brief Binds a result's column to LevelMax
		static void BindLevelMax(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LevelMax);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MonsterChallengeSummonList
	export class MonsterChallengeSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterChallengeSummonList::BindIndex},
				{"bLevel", &MonsterChallengeSummonList::BindLevel},
				{"bStage", &MonsterChallengeSummonList::BindStage},
				{"bStageLevel", &MonsterChallengeSummonList::BindStageLevel},
				{"sTime", &MonsterChallengeSummonList::BindTime},
				{"sSid", &MonsterChallengeSummonList::BindMonsterId},
				{"sCount", &MonsterChallengeSummonList::BindCount},
				{"sPosX", &MonsterChallengeSummonList::BindPosX},
				{"sPosZ", &MonsterChallengeSummonList::BindPosZ},
				{"bRange", &MonsterChallengeSummonList::BindRange}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Stage
		static void BindStage(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Stage);
		}

		/// \brief Binds a result's column to StageLevel
		static void BindStageLevel(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StageLevel);
		}

		/// \brief Binds a result's column to Time
		static void BindTime(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Time);
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Count
		static void BindCount(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Count);
		}

		/// \brief Binds a result's column to PosX
		static void BindPosX(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PosX);
		}

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PosZ);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Range);
		}

	};

	/// \brief generated nanodbc column binder for full_model::MonsterItemTest
	export class MonsterItemTest
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterItemTest::BindIndex},
				{"iItem01", &MonsterItemTest::BindItem1},
				{"sPersent01", &MonsterItemTest::BindPercent1},
				{"iItem02", &MonsterItemTest::BindItem2},
				{"sPersent02", &MonsterItemTest::BindPercent2},
				{"iItem03", &MonsterItemTest::BindItem3},
				{"sPersent03", &MonsterItemTest::BindPercent3},
				{"iItem04", &MonsterItemTest::BindItem4},
				{"sPersent04", &MonsterItemTest::BindPercent4},
				{"iItem05", &MonsterItemTest::BindItem5},
				{"sPersent05", &MonsterItemTest::BindPercent5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Item1
		static void BindItem1(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Item1.reset();
			}
			else
			{
				m.Item1 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Percent1
		static void BindPercent1(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Percent1.reset();
			}
			else
			{
				m.Percent1 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Item2
		static void BindItem2(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Item2.reset();
			}
			else
			{
				m.Item2 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Percent2
		static void BindPercent2(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Percent2.reset();
			}
			else
			{
				m.Percent2 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Item3
		static void BindItem3(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Item3.reset();
			}
			else
			{
				m.Item3 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Percent3
		static void BindPercent3(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Percent3.reset();
			}
			else
			{
				m.Percent3 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Item4
		static void BindItem4(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Item4.reset();
			}
			else
			{
				m.Item4 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Percent4
		static void BindPercent4(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Percent4.reset();
			}
			else
			{
				m.Percent4 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Item5
		static void BindItem5(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Item5.reset();
			}
			else
			{
				m.Item5 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Percent5
		static void BindPercent5(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Percent5.reset();
			}
			else
			{
				m.Percent5 = result.get<int16_t>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::MonsterSummonList
	export class MonsterSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sSid", &MonsterSummonList::BindMonsterId},
				{"strName", &MonsterSummonList::BindName},
				{"sLevel", &MonsterSummonList::BindLevel},
				{"sProbability", &MonsterSummonList::BindProbability},
				{"bType", &MonsterSummonList::BindType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Probability
		static void BindProbability(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Probability);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

	};

	/// \brief generated nanodbc column binder for full_model::ProgramListLog
	export class ProgramListLog
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"id", &ProgramListLog::BindId},
				{"strAccountID", &ProgramListLog::BindAccountId},
				{"strCharID", &ProgramListLog::BindCharId},
				{"strHackToolName", &ProgramListLog::BindHackToolName},
				{"tWriteTime", &ProgramListLog::BindWriteTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Id
		static void BindId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Id);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to HackToolName
		static void BindHackToolName(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.HackToolName);
		}

		/// \brief Binds a result's column to WriteTime
		static void BindWriteTime(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
		{
			m.WriteTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for full_model::RentalItem
	export class RentalItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

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
				{"strBorrowerAcID", &RentalItem::BindBorrowerAccountId},
				{"timeLender", &RentalItem::BindLendTime},
				{"timeRegister", &RentalItem::BindRegisterTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalIndex);
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.SerialNumber);
		}

		/// \brief Binds a result's column to RegType
		static void BindRegType(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RegType);
		}

		/// \brief Binds a result's column to ItemType
		static void BindItemType(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemType);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RentalTime);
		}

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalMoney);
		}

		/// \brief Binds a result's column to LenderCharId
		static void BindLenderCharId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderCharId);
		}

		/// \brief Binds a result's column to LenderAccountId
		static void BindLenderAccountId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.LenderAccountId);
		}

		/// \brief Binds a result's column to BorrowerCharId
		static void BindBorrowerCharId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
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
		static void BindBorrowerAccountId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
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
		static void BindLendTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
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
		static void BindRegisterTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
		{
			m.RegisterTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

	};

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
			result.get_ref<uint8_t>(colIndex, m.RegType);
		}

		/// \brief Binds a result's column to ItemType
		static void BindItemType(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemType);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Class);
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

	/// \brief generated nanodbc column binder for full_model::ServerResource
	export class ServerResource
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ServerResource& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nResourceID", &ServerResource::BindResourceId},
				{"strName", &ServerResource::BindName},
				{"strResource", &ServerResource::BindResource}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ResourceId
		static void BindResourceId(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ResourceId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Resource
		static void BindResource(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Resource);
		}

	};

	/// \brief generated nanodbc column binder for full_model::StartPosition
	export class StartPosition
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ZoneID", &StartPosition::BindZoneId},
				{"sKarusX", &StartPosition::BindKarusX},
				{"sKarusZ", &StartPosition::BindKarusZ},
				{"sElmoradX", &StartPosition::BindElmoX},
				{"sElmoradZ", &StartPosition::BindElmoZ},
				{"bRangeX", &StartPosition::BindRangeX},
				{"bRangeZ", &StartPosition::BindRangeZ},
				{"sKarusGateX", &StartPosition::BindKarusGateX},
				{"sKarusGateZ", &StartPosition::BindKarusGateZ},
				{"sElmoGateX", &StartPosition::BindElmoGateX},
				{"sElmoGateZ", &StartPosition::BindElmoGateZ}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to KarusX
		static void BindKarusX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusX);
		}

		/// \brief Binds a result's column to KarusZ
		static void BindKarusZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusZ);
		}

		/// \brief Binds a result's column to ElmoX
		static void BindElmoX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoX);
		}

		/// \brief Binds a result's column to ElmoZ
		static void BindElmoZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoZ);
		}

		/// \brief Binds a result's column to RangeX
		static void BindRangeX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RangeX);
		}

		/// \brief Binds a result's column to RangeZ
		static void BindRangeZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RangeZ);
		}

		/// \brief Binds a result's column to KarusGateX
		static void BindKarusGateX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusGateX);
		}

		/// \brief Binds a result's column to KarusGateZ
		static void BindKarusGateZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusGateZ);
		}

		/// \brief Binds a result's column to ElmoGateX
		static void BindElmoGateX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoGateX);
		}

		/// \brief Binds a result's column to ElmoGateZ
		static void BindElmoGateZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoGateZ);
		}

	};

	/// \brief generated nanodbc column binder for full_model::TbUser
	export class TbUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::TbUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &TbUser::BindAccountId},
				{"strPasswd", &TbUser::BindPassword},
				{"strSocNo", &TbUser::BindSocNo},
				{"strEmail", &TbUser::BindEmail},
				{"strAuthority", &TbUser::BindAuthority},
				{"PremiumExpire", &TbUser::BindPremiumExpire}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Password
		static void BindPassword(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Password);
		}

		/// \brief Binds a result's column to SocNo
		static void BindSocNo(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.SocNo);
		}

		/// \brief Binds a result's column to Email
		static void BindEmail(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Email);
		}

		/// \brief Binds a result's column to Authority
		static void BindAuthority(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Authority);
		}

		/// \brief Binds a result's column to PremiumExpire
		static void BindPremiumExpire(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
		{
			m.PremiumExpire = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for full_model::UserEditor
	export class UserEditor
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserEditor::BindCharId},
				{"strAccountID", &UserEditor::BindAccountId},
				{"strOpID", &UserEditor::BindOpId},
				{"strOpIP", &UserEditor::BindOpIP},
				{"strOldUserValue", &UserEditor::BindOldUserValue},
				{"strNewUserValue", &UserEditor::BindNewUserValue},
				{"strOldUserSkill", &UserEditor::BindOldUserSkill},
				{"strNewUserSkill", &UserEditor::BindNewUserSkill},
				{"strOldUserItem", &UserEditor::BindOldUserItem},
				{"strNewUserItem", &UserEditor::BindNewUserItem},
				{"strOldWHValue", &UserEditor::BindOldWarehouseValue},
				{"strNewWHValue", &UserEditor::BindNewWarehouseValue},
				{"strOldWHItem", &UserEditor::BindOldWarehouseItem},
				{"strNewWHItem", &UserEditor::BindNewWarehouseItem},
				{"EditorTime", &UserEditor::BindEditorTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to OpId
		static void BindOpId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpId);
		}

		/// \brief Binds a result's column to OpIP
		static void BindOpIP(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpIP);
		}

		/// \brief Binds a result's column to OldUserValue
		static void BindOldUserValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserValue);
		}

		/// \brief Binds a result's column to NewUserValue
		static void BindNewUserValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserValue);
		}

		/// \brief Binds a result's column to OldUserSkill
		static void BindOldUserSkill(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserSkill);
		}

		/// \brief Binds a result's column to NewUserSkill
		static void BindNewUserSkill(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserSkill);
		}

		/// \brief Binds a result's column to OldUserItem
		static void BindOldUserItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserItem);
		}

		/// \brief Binds a result's column to NewUserItem
		static void BindNewUserItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserItem);
		}

		/// \brief Binds a result's column to OldWarehouseValue
		static void BindOldWarehouseValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldWarehouseValue);
		}

		/// \brief Binds a result's column to NewWarehouseValue
		static void BindNewWarehouseValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewWarehouseValue);
		}

		/// \brief Binds a result's column to OldWarehouseItem
		static void BindOldWarehouseItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.OldWarehouseItem);
		}

		/// \brief Binds a result's column to NewWarehouseItem
		static void BindNewWarehouseItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.NewWarehouseItem);
		}

		/// \brief Binds a result's column to EditorTime
		static void BindEditorTime(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
		{
			m.EditorTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for full_model::UserEditorItem
	export class UserEditorItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserEditorItem::BindCharId},
				{"strAccountID", &UserEditorItem::BindAccountId},
				{"strOpID", &UserEditorItem::BindOpId},
				{"strOpIP", &UserEditorItem::BindOpIP},
				{"sDBIndex", &UserEditorItem::BindDbIndex},
				{"sPos", &UserEditorItem::BindPos},
				{"byType", &UserEditorItem::BindType},
				{"nItemID1", &UserEditorItem::BindItemId1},
				{"nItemID2", &UserEditorItem::BindItemId2},
				{"UpdateTime", &UserEditorItem::BindUpdateTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to OpId
		static void BindOpId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpId);
		}

		/// \brief Binds a result's column to OpIP
		static void BindOpIP(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.OpIP);
		}

		/// \brief Binds a result's column to DbIndex
		static void BindDbIndex(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DbIndex);
		}

		/// \brief Binds a result's column to Pos
		static void BindPos(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Pos);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId2);
		}

		/// \brief Binds a result's column to UpdateTime
		static void BindUpdateTime(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.UpdateTime.reset();
			}
			else
			{
			m.UpdateTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::UserKnightsRank
	export class UserKnightsRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"shIndex", &UserKnightsRank::BindIndex},
				{"strName", &UserKnightsRank::BindName},
				{"strElmoUserID", &UserKnightsRank::BindElmoUserId},
				{"strElmoKnightsName", &UserKnightsRank::BindElmoKnightsName},
				{"nElmoLoyalty", &UserKnightsRank::BindElmoLoyalty},
				{"strKarusUserID", &UserKnightsRank::BindKarusUserId},
				{"strKarusKnightsName", &UserKnightsRank::BindKarusKnightsName},
				{"nKarusLoyalty", &UserKnightsRank::BindKarusLoyalty},
				{"nMoney", &UserKnightsRank::BindMoney}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ElmoUserId.reset();
			}
			else
			{
				m.ElmoUserId = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ElmoKnightsName
		static void BindElmoKnightsName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ElmoKnightsName.reset();
			}
			else
			{
				m.ElmoKnightsName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ElmoLoyalty
		static void BindElmoLoyalty(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ElmoLoyalty.reset();
			}
			else
			{
				m.ElmoLoyalty = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KarusUserId.reset();
			}
			else
			{
				m.KarusUserId = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to KarusKnightsName
		static void BindKarusKnightsName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KarusKnightsName.reset();
			}
			else
			{
				m.KarusKnightsName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to KarusLoyalty
		static void BindKarusLoyalty(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KarusLoyalty.reset();
			}
			else
			{
				m.KarusLoyalty = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

	};

	/// \brief generated nanodbc column binder for full_model::UserPersonalRank
	export class UserPersonalRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRank", &UserPersonalRank::BindRank},
				{"strPosition", &UserPersonalRank::BindPosition},
				{"nElmoUP", &UserPersonalRank::BindElmoUp},
				{"strElmoUserID", &UserPersonalRank::BindElmoUserId},
				{"nElmoLoyaltyMonthly", &UserPersonalRank::BindElmoLoyaltyMonthly},
				{"nElmoCheck", &UserPersonalRank::BindElmoCheck},
				{"nKarusUP", &UserPersonalRank::BindKarusUp},
				{"strKarusUserID", &UserPersonalRank::BindKarusUserId},
				{"nKarusLoyaltyMonthly", &UserPersonalRank::BindKarusLoyaltyMonthly},
				{"nKarusCheck", &UserPersonalRank::BindKarusCheck},
				{"nSalary", &UserPersonalRank::BindSalary},
				{"UpdateDate", &UserPersonalRank::BindUpdateDate}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Position
		static void BindPosition(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Position);
		}

		/// \brief Binds a result's column to ElmoUp
		static void BindElmoUp(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoUp);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ElmoUserId.reset();
			}
			else
			{
				m.ElmoUserId = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ElmoLoyaltyMonthly
		static void BindElmoLoyaltyMonthly(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ElmoLoyaltyMonthly.reset();
			}
			else
			{
				m.ElmoLoyaltyMonthly = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to ElmoCheck
		static void BindElmoCheck(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoCheck);
		}

		/// \brief Binds a result's column to KarusUp
		static void BindKarusUp(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusUp);
		}

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KarusUserId.reset();
			}
			else
			{
				m.KarusUserId = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to KarusLoyaltyMonthly
		static void BindKarusLoyaltyMonthly(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.KarusLoyaltyMonthly.reset();
			}
			else
			{
				m.KarusLoyaltyMonthly = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to KarusCheck
		static void BindKarusCheck(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusCheck);
		}

		/// \brief Binds a result's column to Salary
		static void BindSalary(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Salary);
		}

		/// \brief Binds a result's column to UpdateDate
		static void BindUpdateDate(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			m.UpdateDate = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for full_model::UserRentalItem
	export class UserRentalItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserID", &UserRentalItem::BindUserId},
				{"strAccountID", &UserRentalItem::BindAccountId},
				{"byRentalType", &UserRentalItem::BindRentalType},
				{"byRegType", &UserRentalItem::BindRegTime},
				{"nRentalIndex", &UserRentalItem::BindRentalIndex},
				{"nItemIndex", &UserRentalItem::BindItemIndex},
				{"sDurability", &UserRentalItem::BindDurability},
				{"nSerialNumber", &UserRentalItem::BindSerialNumber},
				{"nRentalMoney", &UserRentalItem::BindRentalMoney},
				{"sRentalTime", &UserRentalItem::BindRentalTime},
				{"sDuringTime", &UserRentalItem::BindDuringTime},
				{"timeRental", &UserRentalItem::BindRentalTimestamp},
				{"timeRegister", &UserRentalItem::BindRegisterTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to RentalType
		static void BindRentalType(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RentalType);
		}

		/// \brief Binds a result's column to RegTime
		static void BindRegTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RegTime);
		}

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalIndex);
		}

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.SerialNumber);
		}

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RentalMoney);
		}

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RentalTime);
		}

		/// \brief Binds a result's column to DuringTime
		static void BindDuringTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DuringTime);
		}

		/// \brief Binds a result's column to RentalTimestamp
		static void BindRentalTimestamp(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.RentalTimestamp.reset();
			}
			else
			{
			m.RentalTimestamp = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
			}
		}

		/// \brief Binds a result's column to RegisterTime
		static void BindRegisterTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.RegisterTime.reset();
			}
			else
			{
			m.RegisterTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::UserSavedMagic
	export class UserSavedMagic
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserSavedMagic::BindCharId},
				{"nSkill1", &UserSavedMagic::BindSkill1},
				{"nDuring1", &UserSavedMagic::BindDuring1},
				{"nSkill2", &UserSavedMagic::BindSkill2},
				{"nDuring2", &UserSavedMagic::BindDuring2},
				{"nSkill3", &UserSavedMagic::BindSkill3},
				{"nDuring3", &UserSavedMagic::BindDuring3},
				{"nSkill4", &UserSavedMagic::BindSkill4},
				{"nDuring4", &UserSavedMagic::BindDuring4},
				{"nSkill5", &UserSavedMagic::BindSkill5},
				{"nDuring5", &UserSavedMagic::BindDuring5},
				{"nSkill6", &UserSavedMagic::BindSkill6},
				{"nDuring6", &UserSavedMagic::BindDuring6},
				{"nSkill7", &UserSavedMagic::BindSkill7},
				{"nDuring7", &UserSavedMagic::BindDuring7},
				{"nSkill8", &UserSavedMagic::BindSkill8},
				{"nDuring8", &UserSavedMagic::BindDuring8},
				{"nSkill9", &UserSavedMagic::BindSkill9},
				{"nDuring9", &UserSavedMagic::BindDuring9},
				{"nSkill10", &UserSavedMagic::BindSkill10},
				{"nDuring10", &UserSavedMagic::BindDuring10}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to Skill1
		static void BindSkill1(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill1);
		}

		/// \brief Binds a result's column to During1
		static void BindDuring1(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During1);
		}

		/// \brief Binds a result's column to Skill2
		static void BindSkill2(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill2);
		}

		/// \brief Binds a result's column to During2
		static void BindDuring2(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During2);
		}

		/// \brief Binds a result's column to Skill3
		static void BindSkill3(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill3);
		}

		/// \brief Binds a result's column to During3
		static void BindDuring3(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During3);
		}

		/// \brief Binds a result's column to Skill4
		static void BindSkill4(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill4);
		}

		/// \brief Binds a result's column to During4
		static void BindDuring4(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During4);
		}

		/// \brief Binds a result's column to Skill5
		static void BindSkill5(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill5);
		}

		/// \brief Binds a result's column to During5
		static void BindDuring5(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During5);
		}

		/// \brief Binds a result's column to Skill6
		static void BindSkill6(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill6);
		}

		/// \brief Binds a result's column to During6
		static void BindDuring6(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During6);
		}

		/// \brief Binds a result's column to Skill7
		static void BindSkill7(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill7);
		}

		/// \brief Binds a result's column to During7
		static void BindDuring7(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During7);
		}

		/// \brief Binds a result's column to Skill8
		static void BindSkill8(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill8);
		}

		/// \brief Binds a result's column to During8
		static void BindDuring8(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During8);
		}

		/// \brief Binds a result's column to Skill9
		static void BindSkill9(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill9);
		}

		/// \brief Binds a result's column to During9
		static void BindDuring9(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During9);
		}

		/// \brief Binds a result's column to Skill10
		static void BindSkill10(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Skill10);
		}

		/// \brief Binds a result's column to During10
		static void BindDuring10(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.During10);
		}

	};

	/// \brief generated nanodbc column binder for full_model::UserData
	export class UserData
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserId", &UserData::BindUserId},
				{"Nation", &UserData::BindNation},
				{"Race", &UserData::BindRace},
				{"Class", &UserData::BindClass},
				{"HairColor", &UserData::BindHairColor},
				{"Rank", &UserData::BindRank},
				{"Title", &UserData::BindTitle},
				{"Level", &UserData::BindLevel},
				{"Exp", &UserData::BindExp},
				{"Loyalty", &UserData::BindLoyalty},
				{"Face", &UserData::BindFace},
				{"City", &UserData::BindCity},
				{"Knights", &UserData::BindKnightsId},
				{"Fame", &UserData::BindFame},
				{"Hp", &UserData::BindHp},
				{"Mp", &UserData::BindMp},
				{"Sp", &UserData::BindSp},
				{"Strong", &UserData::BindStrength},
				{"Sta", &UserData::BindStamina},
				{"Dex", &UserData::BindDexterity},
				{"Intel", &UserData::BindIntelligence},
				{"Cha", &UserData::BindCharisma},
				{"Authority", &UserData::BindAuthority},
				{"Points", &UserData::BindStatPoints},
				{"Gold", &UserData::BindGold},
				{"Zone", &UserData::BindZone},
				{"Bind", &UserData::BindBind},
				{"PX", &UserData::BindPosX},
				{"PZ", &UserData::BindPosZ},
				{"PY", &UserData::BindPosY},
				{"dwTime", &UserData::BindDwTime},
				{"strSkill", &UserData::BindSkillData},
				{"strItem", &UserData::BindItemData},
				{"strSerial", &UserData::BindSerial},
				{"sQuestCount", &UserData::BindQuestCount},
				{"strQuest", &UserData::BindQuestData},
				{"MannerPoint", &UserData::BindMannerPoint},
				{"LoyaltyMonthly", &UserData::BindLoyaltyMonthly},
				{"CreateTime", &UserData::BindCreateTime},
				{"UpdateTime", &UserData::BindUpdateTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Race
		static void BindRace(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Race);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to HairColor
		static void BindHairColor(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.HairColor);
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Title);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to Face
		static void BindFace(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Face);
		}

		/// \brief Binds a result's column to City
		static void BindCity(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.City);
		}

		/// \brief Binds a result's column to KnightsId
		static void BindKnightsId(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KnightsId);
		}

		/// \brief Binds a result's column to Fame
		static void BindFame(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Fame);
		}

		/// \brief Binds a result's column to Hp
		static void BindHp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Hp);
		}

		/// \brief Binds a result's column to Mp
		static void BindMp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Mp);
		}

		/// \brief Binds a result's column to Sp
		static void BindSp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Sp);
		}

		/// \brief Binds a result's column to Strength
		static void BindStrength(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Strength);
		}

		/// \brief Binds a result's column to Stamina
		static void BindStamina(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Stamina);
		}

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Dexterity);
		}

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Intelligence);
		}

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Charisma);
		}

		/// \brief Binds a result's column to Authority
		static void BindAuthority(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Authority);
		}

		/// \brief Binds a result's column to StatPoints
		static void BindStatPoints(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StatPoints);
		}

		/// \brief Binds a result's column to Gold
		static void BindGold(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Gold);
		}

		/// \brief Binds a result's column to Zone
		static void BindZone(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Zone);
		}

		/// \brief Binds a result's column to Bind
		static void BindBind(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Bind.reset();
			}
			else
			{
				m.Bind = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to PosX
		static void BindPosX(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosX);
		}

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosZ);
		}

		/// \brief Binds a result's column to PosY
		static void BindPosY(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosY);
		}

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DwTime);
		}

		/// \brief Binds a result's column to SkillData
		static void BindSkillData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.SkillData.reset();
			}
			else
			{
				m.SkillData = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemData
		static void BindItemData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemData.reset();
			}
			else
			{
				m.ItemData = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to Serial
		static void BindSerial(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Serial.reset();
			}
			else
			{
				m.Serial = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to QuestCount
		static void BindQuestCount(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.QuestCount);
		}

		/// \brief Binds a result's column to QuestData
		static void BindQuestData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.QuestData.reset();
			}
			else
			{
				m.QuestData = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to MannerPoint
		static void BindMannerPoint(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MannerPoint);
		}

		/// \brief Binds a result's column to LoyaltyMonthly
		static void BindLoyaltyMonthly(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LoyaltyMonthly);
		}

		/// \brief Binds a result's column to CreateTime
		static void BindCreateTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.CreateTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

		/// \brief Binds a result's column to UpdateTime
		static void BindUpdateTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.UpdateTime.reset();
			}
			else
			{
			m.UpdateTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::UserDataSkillShortcut
	export class UserDataSkillShortcut
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strCharID", &UserDataSkillShortcut::BindCharId},
				{"nCount", &UserDataSkillShortcut::BindCount},
				{"strSkillData", &UserDataSkillShortcut::BindSkillData}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to Count
		static void BindCount(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Count);
		}

		/// \brief Binds a result's column to SkillData
		static void BindSkillData(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::vector<uint8_t>>(colIndex, m.SkillData);
		}

	};

	/// \brief generated nanodbc column binder for full_model::Version
	export class Version
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Version& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sVersion", &Version::BindNumber},
				{"strFileName", &Version::BindFileName},
				{"strCompressName", &Version::BindCompressName},
				{"sHistoryVersion", &Version::BindHistoryVersion}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Number
		static void BindNumber(full_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Number);
		}

		/// \brief Binds a result's column to FileName
		static void BindFileName(full_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.FileName);
		}

		/// \brief Binds a result's column to CompressName
		static void BindCompressName(full_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CompressName);
		}

		/// \brief Binds a result's column to HistoryVersion
		static void BindHistoryVersion(full_model::Version& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HistoryVersion);
		}

	};

	/// \brief generated nanodbc column binder for full_model::Warehouse
	export class Warehouse
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &Warehouse::BindAccountId},
				{"nMoney", &Warehouse::BindMoney},
				{"dwTime", &Warehouse::BindDwTime},
				{"WarehouseData", &Warehouse::BindItemData},
				{"strSerial", &Warehouse::BindSerial}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DwTime);
		}

		/// \brief Binds a result's column to ItemData
		static void BindItemData(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemData.reset();
			}
			else
			{
				m.ItemData = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

		/// \brief Binds a result's column to Serial
		static void BindSerial(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Serial.reset();
			}
			else
			{
				m.Serial = result.get<std::vector<uint8_t>>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::WebItemMall
	export class WebItemMall
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &WebItemMall::BindAccountId},
				{"strCharID", &WebItemMall::BindCharId},
				{"ServerNo", &WebItemMall::BindServerId},
				{"ItemID", &WebItemMall::BindItemId},
				{"ItemCount", &WebItemMall::BindItemCount},
				{"BuyTime", &WebItemMall::BindBuyTime},
				{"img_file_name", &WebItemMall::BindImgFileName},
				{"strItemName", &WebItemMall::BindItemName},
				{"price", &WebItemMall::BindPrice},
				{"pay_type", &WebItemMall::BindPayType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to ItemId
		static void BindItemId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId);
		}

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemCount);
		}

		/// \brief Binds a result's column to BuyTime
		static void BindBuyTime(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			m.BuyTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

		/// \brief Binds a result's column to ImgFileName
		static void BindImgFileName(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ImgFileName.reset();
			}
			else
			{
				m.ImgFileName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemName
		static void BindItemName(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemName.reset();
			}
			else
			{
				m.ItemName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Price
		static void BindPrice(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Price.reset();
			}
			else
			{
				m.Price = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to PayType
		static void BindPayType(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.PayType.reset();
			}
			else
			{
				m.PayType = result.get<int32_t>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::WebItemMallLog
	export class WebItemMallLog
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strAccountID", &WebItemMallLog::BindAccountId},
				{"strCharID", &WebItemMallLog::BindCharId},
				{"ServerNo", &WebItemMallLog::BindServerId},
				{"ItemID", &WebItemMallLog::BindItemId},
				{"ItemCount", &WebItemMallLog::BindItemCount},
				{"BuyTime", &WebItemMallLog::BindBuyTime},
				{"img_file_name", &WebItemMallLog::BindImgFileName},
				{"strItemName", &WebItemMallLog::BindItemName},
				{"price", &WebItemMallLog::BindPrice},
				{"pay_type", &WebItemMallLog::BindPayType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.AccountId);
		}

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.CharId);
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to ItemId
		static void BindItemId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId);
		}

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemCount);
		}

		/// \brief Binds a result's column to BuyTime
		static void BindBuyTime(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			m.BuyTime = binderUtil::CTimeFromDbTime(result.get<nanodbc::timestamp>(colIndex));
		}

		/// \brief Binds a result's column to ImgFileName
		static void BindImgFileName(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ImgFileName.reset();
			}
			else
			{
				m.ImgFileName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemName
		static void BindItemName(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemName.reset();
			}
			else
			{
				m.ItemName = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Price
		static void BindPrice(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Price.reset();
			}
			else
			{
				m.Price = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to PayType
		static void BindPayType(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.PayType.reset();
			}
			else
			{
				m.PayType = result.get<int32_t>(colIndex);
			}
		}

	};

	/// \brief generated nanodbc column binder for full_model::WebpageAddress
	export class WebpageAddress
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::WebpageAddress& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &WebpageAddress::BindIndex},
				{"strWebPageAddress", &WebpageAddress::BindWebPageAddress}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to WebPageAddress
		static void BindWebPageAddress(full_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.WebPageAddress);
		}

	};

	/// \brief generated nanodbc column binder for full_model::ZoneInfo
	export class ZoneInfo
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ServerNo", &ZoneInfo::BindServerId},
				{"ZoneNo", &ZoneInfo::BindZoneId},
				{"strZoneName", &ZoneInfo::BindName},
				{"InitX", &ZoneInfo::BindInitX},
				{"InitZ", &ZoneInfo::BindInitZ},
				{"InitY", &ZoneInfo::BindInitY},
				{"Type", &ZoneInfo::BindType},
				{"RoomEvent", &ZoneInfo::BindRoomEvent},
				{"bz", &ZoneInfo::BindBz}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to InitX
		static void BindInitX(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitX);
		}

		/// \brief Binds a result's column to InitZ
		static void BindInitZ(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitZ);
		}

		/// \brief Binds a result's column to InitY
		static void BindInitY(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitY);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to RoomEvent
		static void BindRoomEvent(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RoomEvent);
		}

		/// \brief Binds a result's column to Bz
		static void BindBz(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Bz.reset();
			}
			else
			{
				m.Bz = result.get<std::string>(colIndex);
			}
		}

	};
}