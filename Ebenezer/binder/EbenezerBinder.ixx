module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder;

import BinderUtil;
import EbenezerModel;

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::Battle
	export class Battle
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &Battle::BindIndex},
				{"byNation", &Battle::BindNation}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Coefficient
	export class Coefficient
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

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
		static void BindClassId(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ClassId);
		}

		/// \brief Binds a result's column to ShortSword
		static void BindShortSword(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.ShortSword);
		}

		/// \brief Binds a result's column to Sword
		static void BindSword(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Sword);
		}

		/// \brief Binds a result's column to Axe
		static void BindAxe(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Axe);
		}

		/// \brief Binds a result's column to Club
		static void BindClub(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Club);
		}

		/// \brief Binds a result's column to Spear
		static void BindSpear(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Spear);
		}

		/// \brief Binds a result's column to Pole
		static void BindPole(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Pole);
		}

		/// \brief Binds a result's column to Staff
		static void BindStaff(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Staff);
		}

		/// \brief Binds a result's column to Bow
		static void BindBow(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Bow);
		}

		/// \brief Binds a result's column to HitPoint
		static void BindHitPoint(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.HitPoint);
		}

		/// \brief Binds a result's column to ManaPoint
		static void BindManaPoint(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.ManaPoint);
		}

		/// \brief Binds a result's column to Sp
		static void BindSp(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Sp);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Evasionrate
		static void BindEvasionrate(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<double>(colIndex, m.Evasionrate);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::CouponSerialList
	export class CouponSerialList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

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
		static void BindIndex(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to SerialNum
		static void BindSerialNum(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.SerialNum);
		}

		/// \brief Binds a result's column to ItemNumber
		static void BindItemNumber(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemNumber);
		}

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ItemCount);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Event
	export class Event
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"ZoneNum", &Event::BindZoneNumber},
				{"EventNum", &Event::BindEventNumber},
				{"Type", &Event::BindEventType},
				{"Exec1", &Event::BindExecute1},
				{"Exec2", &Event::BindExecute2},
				{"Exec3", &Event::BindExecute3},
				{"Exec4", &Event::BindExecute4},
				{"Exec5", &Event::BindExecute5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ZoneNumber
		static void BindZoneNumber(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.ZoneNumber = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to EventNumber
		static void BindEventNumber(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EventNumber);
		}

		/// \brief Binds a result's column to EventType
		static void BindEventType(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			m.EventType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Execute1
		static void BindExecute1(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute1);
		}

		/// \brief Binds a result's column to Execute2
		static void BindExecute2(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute2);
		}

		/// \brief Binds a result's column to Execute3
		static void BindExecute3(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute3);
		}

		/// \brief Binds a result's column to Execute4
		static void BindExecute4(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute4);
		}

		/// \brief Binds a result's column to Execute5
		static void BindExecute5(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Execute5);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::EventTrigger
	export class EventTrigger
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

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
		static void BindIndex(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcType
		static void BindNpcType(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			m.NpcType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to TriggerNumber
		static void BindTriggerNumber(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.TriggerNumber);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Home
	export class Home
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

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
		static void BindNation(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ElmoZoneX
		static void BindElmoZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoZoneX);
		}

		/// \brief Binds a result's column to ElmoZoneZ
		static void BindElmoZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ElmoZoneZ);
		}

		/// \brief Binds a result's column to ElmoZoneLX
		static void BindElmoZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoZoneLX = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ElmoZoneLZ
		static void BindElmoZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.ElmoZoneLZ = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to KarusZoneX
		static void BindKarusZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusZoneX);
		}

		/// \brief Binds a result's column to KarusZoneZ
		static void BindKarusZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.KarusZoneZ);
		}

		/// \brief Binds a result's column to KarusZoneLX
		static void BindKarusZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusZoneLX = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to KarusZoneLZ
		static void BindKarusZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.KarusZoneLZ = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to FreeZoneX
		static void BindFreeZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.FreeZoneX);
		}

		/// \brief Binds a result's column to FreeZoneZ
		static void BindFreeZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.FreeZoneZ);
		}

		/// \brief Binds a result's column to FreeZoneLX
		static void BindFreeZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.FreeZoneLX = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to FreeZoneLZ
		static void BindFreeZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.FreeZoneLZ = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to BattleZoneX
		static void BindBattleZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZoneX);
		}

		/// \brief Binds a result's column to BattleZoneZ
		static void BindBattleZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZoneZ);
		}

		/// \brief Binds a result's column to BattleZoneLX
		static void BindBattleZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.BattleZoneLX = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to BattleZoneLZ
		static void BindBattleZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.BattleZoneLZ = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to BattleZone2X
		static void BindBattleZone2X(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZone2X);
		}

		/// \brief Binds a result's column to BattleZone2Z
		static void BindBattleZone2Z(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BattleZone2Z);
		}

		/// \brief Binds a result's column to BattleZone2LX
		static void BindBattleZone2LX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.BattleZone2LX = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to BattleZone2LZ
		static void BindBattleZone2LZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
		{
			m.BattleZone2LZ = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Item
	export class Item
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

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
		static void BindID(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Name
		static void BindName(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Kind
		static void BindKind(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.Kind = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Slot
		static void BindSlot(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.Slot = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Race
		static void BindRace(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.Race = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.ClassId = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Delay);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Weight
		static void BindWeight(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Weight);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BuyPrice);
		}

		/// \brief Binds a result's column to SellPrice
		static void BindSellPrice(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellPrice);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to Countable
		static void BindCountable(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.Countable = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MagicEffect
		static void BindMagicEffect(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicEffect);
		}

		/// \brief Binds a result's column to SpecialEffect
		static void BindSpecialEffect(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SpecialEffect);
		}

		/// \brief Binds a result's column to MinLevel
		static void BindMinLevel(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.MinLevel = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RequiredRank
		static void BindRequiredRank(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.RequiredRank = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RequiredTitle
		static void BindRequiredTitle(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.RequiredTitle = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RequiredStrength
		static void BindRequiredStrength(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.RequiredStrength = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RequiredStamina
		static void BindRequiredStamina(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.RequiredStamina = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RequiredDexterity
		static void BindRequiredDexterity(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.RequiredDexterity = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RequiredIntelligence
		static void BindRequiredIntelligence(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.RequiredIntelligence = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RequiredCharisma
		static void BindRequiredCharisma(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.RequiredCharisma = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.SellingGroup = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvasionRate
		static void BindEvasionRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvasionRate);
		}

		/// \brief Binds a result's column to DaggerArmor
		static void BindDaggerArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DaggerArmor);
		}

		/// \brief Binds a result's column to SwordArmor
		static void BindSwordArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SwordArmor);
		}

		/// \brief Binds a result's column to MaceArmor
		static void BindMaceArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaceArmor);
		}

		/// \brief Binds a result's column to AxeArmor
		static void BindAxeArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AxeArmor);
		}

		/// \brief Binds a result's column to SpearArmor
		static void BindSpearArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SpearArmor);
		}

		/// \brief Binds a result's column to BowArmor
		static void BindBowArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BowArmor);
		}

		/// \brief Binds a result's column to FireDamage
		static void BindFireDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.FireDamage = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to IceDamage
		static void BindIceDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.IceDamage = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to LightningDamage
		static void BindLightningDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.LightningDamage = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to PoisonDamage
		static void BindPoisonDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.PoisonDamage = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to HpDrain
		static void BindHpDrain(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.HpDrain = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MpDamage
		static void BindMpDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.MpDamage = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MpDrain
		static void BindMpDrain(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.MpDrain = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MirrorDamage
		static void BindMirrorDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.MirrorDamage = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to DropRate
		static void BindDropRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			m.DropRate = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StrengthBonus
		static void BindStrengthBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StrengthBonus);
		}

		/// \brief Binds a result's column to StaminaBonus
		static void BindStaminaBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StaminaBonus);
		}

		/// \brief Binds a result's column to DexterityBonus
		static void BindDexterityBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DexterityBonus);
		}

		/// \brief Binds a result's column to IntelligenceBonus
		static void BindIntelligenceBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IntelligenceBonus);
		}

		/// \brief Binds a result's column to CharismaBonus
		static void BindCharismaBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CharismaBonus);
		}

		/// \brief Binds a result's column to MaxHpBonus
		static void BindMaxHpBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpBonus);
		}

		/// \brief Binds a result's column to MaxMpBonus
		static void BindMaxMpBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpBonus);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResist);
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResist);
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResist);
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResist);
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResist);
		}

		/// \brief Binds a result's column to CurseResist
		static void BindCurseResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurseResist);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::ItemExchange
	export class ItemExchange
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &ItemExchange::BindIndex},
				{"nNpcNum", &ItemExchange::BindNpcNumber},
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
		static void BindIndex(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcNumber);
		}

		/// \brief Binds a result's column to RandomFlag
		static void BindRandomFlag(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			m.RandomFlag = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to OriginItemNumber1
		static void BindOriginItemNumber1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber1);
		}

		/// \brief Binds a result's column to OriginItemCount1
		static void BindOriginItemCount1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount1);
		}

		/// \brief Binds a result's column to OriginItemNumber2
		static void BindOriginItemNumber2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber2);
		}

		/// \brief Binds a result's column to OriginItemCount2
		static void BindOriginItemCount2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount2);
		}

		/// \brief Binds a result's column to OriginItemNumber3
		static void BindOriginItemNumber3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber3);
		}

		/// \brief Binds a result's column to OriginItemCount3
		static void BindOriginItemCount3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount3);
		}

		/// \brief Binds a result's column to OriginItemNumber4
		static void BindOriginItemNumber4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber4);
		}

		/// \brief Binds a result's column to OriginItemCount4
		static void BindOriginItemCount4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount4);
		}

		/// \brief Binds a result's column to OriginItemNumber5
		static void BindOriginItemNumber5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.OriginItemNumber5);
		}

		/// \brief Binds a result's column to OriginItemCount5
		static void BindOriginItemCount5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItemCount5);
		}

		/// \brief Binds a result's column to ExchangeItemNumber1
		static void BindExchangeItemNumber1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber1);
		}

		/// \brief Binds a result's column to ExchangeItemCount1
		static void BindExchangeItemCount1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount1);
		}

		/// \brief Binds a result's column to ExchangeItemNumber2
		static void BindExchangeItemNumber2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber2);
		}

		/// \brief Binds a result's column to ExchangeItemCount2
		static void BindExchangeItemCount2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount2);
		}

		/// \brief Binds a result's column to ExchangeItemNumber3
		static void BindExchangeItemNumber3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber3);
		}

		/// \brief Binds a result's column to ExchangeItemCount3
		static void BindExchangeItemCount3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount3);
		}

		/// \brief Binds a result's column to ExchangeItemNumber4
		static void BindExchangeItemNumber4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber4);
		}

		/// \brief Binds a result's column to ExchangeItemCount4
		static void BindExchangeItemCount4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount4);
		}

		/// \brief Binds a result's column to ExchangeItemNumber5
		static void BindExchangeItemNumber5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber5);
		}

		/// \brief Binds a result's column to ExchangeItemCount5
		static void BindExchangeItemCount5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExchangeItemCount5);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::ItemUpgrade
	export class ItemUpgrade
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &ItemUpgrade::BindIndex},
				{"nNPCNum", &ItemUpgrade::BindNpcNumber},
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
		static void BindIndex(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcNumber);
		}

		/// \brief Binds a result's column to OriginType
		static void BindOriginType(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginType);
		}

		/// \brief Binds a result's column to OriginItem
		static void BindOriginItem(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.OriginItem);
		}

		/// \brief Binds a result's column to RequiredItem1
		static void BindRequiredItem1(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem1);
		}

		/// \brief Binds a result's column to RequiredItem2
		static void BindRequiredItem2(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem2);
		}

		/// \brief Binds a result's column to RequiredItem3
		static void BindRequiredItem3(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem3);
		}

		/// \brief Binds a result's column to RequiredItem4
		static void BindRequiredItem4(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem4);
		}

		/// \brief Binds a result's column to RequiredItem5
		static void BindRequiredItem5(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem5);
		}

		/// \brief Binds a result's column to RequiredItem6
		static void BindRequiredItem6(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem6);
		}

		/// \brief Binds a result's column to RequiredItem7
		static void BindRequiredItem7(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem7);
		}

		/// \brief Binds a result's column to RequiredItem8
		static void BindRequiredItem8(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredItem8);
		}

		/// \brief Binds a result's column to RequiredCoins
		static void BindRequiredCoins(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredCoins);
		}

		/// \brief Binds a result's column to RateType
		static void BindRateType(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			m.RateType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to GenRate
		static void BindGenRate(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GenRate);
		}

		/// \brief Binds a result's column to GiveItem
		static void BindGiveItem(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GiveItem);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Knights
	export class Knights
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

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
				{"sMarkVersion", &Knights::BindMarkVersion},
				{"sMarkLen", &Knights::BindMarkLength},
				{"Mark", &Knights::BindMark},
				{"bySiegeFlag", &Knights::BindSiegeFlag},
				{"sAllianceKnights", &Knights::BindAllianceKnights},
				{"sCape", &Knights::BindCape}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Flag
		static void BindFlag(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.Flag = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Ranking
		static void BindRanking(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.Ranking = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Name
		static void BindName(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Members
		static void BindMembers(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Members);
		}

		/// \brief Binds a result's column to Chief
		static void BindChief(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Chief);
		}

		/// \brief Binds a result's column to ViceChief1
		static void BindViceChief1(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
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
		static void BindViceChief2(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
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
		static void BindViceChief3(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
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
		static void BindEnemyName(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
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
		static void BindOldWarResult(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.OldWarResult = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarEnemyId
		static void BindWarEnemyId(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.WarEnemyId);
		}

		/// \brief Binds a result's column to Victory
		static void BindVictory(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Victory);
		}

		/// \brief Binds a result's column to Lose
		static void BindLose(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Lose);
		}

		/// \brief Binds a result's column to Gold
		static void BindGold(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int64_t>(colIndex, m.Gold);
		}

		/// \brief Binds a result's column to Domination
		static void BindDomination(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Domination);
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Points);
		}

		/// \brief Binds a result's column to MarkVersion
		static void BindMarkVersion(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MarkVersion);
		}

		/// \brief Binds a result's column to MarkLength
		static void BindMarkLength(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MarkLength);
		}

		/// \brief Binds a result's column to Mark
		static void BindMark(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to SiegeFlag
		static void BindSiegeFlag(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			m.SiegeFlag = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to AllianceKnights
		static void BindAllianceKnights(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AllianceKnights);
		}

		/// \brief Binds a result's column to Cape
		static void BindCape(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Cape);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::KnightsAlliance
	export class KnightsAlliance
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

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
		static void BindMainAllianceKnights(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MainAllianceKnights);
		}

		/// \brief Binds a result's column to SubAllianceKnights
		static void BindSubAllianceKnights(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SubAllianceKnights);
		}

		/// \brief Binds a result's column to MercenaryClan1
		static void BindMercenaryClan1(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MercenaryClan1);
		}

		/// \brief Binds a result's column to MercenaryClan2
		static void BindMercenaryClan2(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MercenaryClan2);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::KnightsCape
	export class KnightsCape
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sCapeIndex", &KnightsCape::BindCapeIndex},
				{"nBuyPrice", &KnightsCape::BindBuyPrice},
				{"nDuration", &KnightsCape::BindDuration},
				{"byGrade", &KnightsCape::BindGrade}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to CapeIndex
		static void BindCapeIndex(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CapeIndex);
		}

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BuyPrice);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Grade
		static void BindGrade(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
		{
			m.Grade = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::KnightsRating
	export class KnightsRating
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

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
		static void BindRank(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Name
		static void BindName(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Points
		static void BindPoints(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Points);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::KnightsSiegeWarfare
	export class KnightsSiegeWarfare
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

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
		static void BindCastleIndex(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CastleIndex);
		}

		/// \brief Binds a result's column to MasterKnights
		static void BindMasterKnights(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MasterKnights);
		}

		/// \brief Binds a result's column to SiegeType
		static void BindSiegeType(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.SiegeType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarDay
		static void BindWarDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarDay = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarHour
		static void BindWarHour(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarHour = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarMinute
		static void BindWarMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarMinute = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ChallengeList1
		static void BindChallengeList1(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList1);
		}

		/// \brief Binds a result's column to ChallengeList2
		static void BindChallengeList2(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList2);
		}

		/// \brief Binds a result's column to ChallengeList3
		static void BindChallengeList3(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList3);
		}

		/// \brief Binds a result's column to ChallengeList4
		static void BindChallengeList4(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList4);
		}

		/// \brief Binds a result's column to ChallengeList5
		static void BindChallengeList5(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList5);
		}

		/// \brief Binds a result's column to ChallengeList6
		static void BindChallengeList6(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList6);
		}

		/// \brief Binds a result's column to ChallengeList7
		static void BindChallengeList7(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList7);
		}

		/// \brief Binds a result's column to ChallengeList8
		static void BindChallengeList8(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList8);
		}

		/// \brief Binds a result's column to ChallengeList9
		static void BindChallengeList9(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList9);
		}

		/// \brief Binds a result's column to ChallengeList10
		static void BindChallengeList10(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ChallengeList10);
		}

		/// \brief Binds a result's column to WarRequestDay
		static void BindWarRequestDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarRequestDay = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarRequestTime
		static void BindWarRequestTime(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarRequestTime = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to WarRequestMinute
		static void BindWarRequestMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.WarRequestMinute = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to GuerrillaWarDay
		static void BindGuerrillaWarDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.GuerrillaWarDay = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to GuerrillaWarTime
		static void BindGuerrillaWarTime(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.GuerrillaWarTime = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to GuerrillaWarMinute
		static void BindGuerrillaWarMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			m.GuerrillaWarMinute = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ChallengeList
		static void BindChallengeList(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
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
		static void BindMoradonTariff(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MoradonTariff);
		}

		/// \brief Binds a result's column to DelosTariff
		static void BindDelosTariff(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DelosTariff);
		}

		/// \brief Binds a result's column to DungeonCharge
		static void BindDungeonCharge(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DungeonCharge);
		}

		/// \brief Binds a result's column to MoradonTax
		static void BindMoradonTax(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MoradonTax);
		}

		/// \brief Binds a result's column to DelosTax
		static void BindDelosTax(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DelosTax);
		}

		/// \brief Binds a result's column to RequestList1
		static void BindRequestList1(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList1);
		}

		/// \brief Binds a result's column to RequestList2
		static void BindRequestList2(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList2);
		}

		/// \brief Binds a result's column to RequestList3
		static void BindRequestList3(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList3);
		}

		/// \brief Binds a result's column to RequestList4
		static void BindRequestList4(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList4);
		}

		/// \brief Binds a result's column to RequestList5
		static void BindRequestList5(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList5);
		}

		/// \brief Binds a result's column to RequestList6
		static void BindRequestList6(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList6);
		}

		/// \brief Binds a result's column to RequestList7
		static void BindRequestList7(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList7);
		}

		/// \brief Binds a result's column to RequestList8
		static void BindRequestList8(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList8);
		}

		/// \brief Binds a result's column to RequestList9
		static void BindRequestList9(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList9);
		}

		/// \brief Binds a result's column to RequestList10
		static void BindRequestList10(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequestList10);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::KnightsUser
	export class KnightsUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex);

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
		static void BindKnightsId(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KnightsId);
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::LevelUp
	export class LevelUp
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::LevelUp& m, const nanodbc::result& result, short colIndex);

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
		static void BindLevel(ebenezer_model::LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			m.Level = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RequiredExp
		static void BindRequiredExp(ebenezer_model::LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredExp);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Magic
	export class Magic
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"MagicNum", &Magic::BindID},
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
		static void BindID(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to BeforeAction
		static void BindBeforeAction(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.BeforeAction = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to TargetAction
		static void BindTargetAction(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.TargetAction = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SelfEffect
		static void BindSelfEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.SelfEffect = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to FlyingEffect
		static void BindFlyingEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.FlyingEffect = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to TargetEffect
		static void BindTargetEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TargetEffect);
		}

		/// \brief Binds a result's column to Moral
		static void BindMoral(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.Moral = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SkillLevel
		static void BindSkillLevel(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SkillLevel);
		}

		/// \brief Binds a result's column to Skill
		static void BindSkill(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Skill);
		}

		/// \brief Binds a result's column to ManaCost
		static void BindManaCost(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaCost);
		}

		/// \brief Binds a result's column to HpCost
		static void BindHpCost(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HpCost);
		}

		/// \brief Binds a result's column to ItemGroup
		static void BindItemGroup(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemGroup = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to UseItem
		static void BindUseItem(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.UseItem);
		}

		/// \brief Binds a result's column to CastTime
		static void BindCastTime(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.CastTime = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RecastTime
		static void BindRecastTime(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.RecastTime = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SuccessRate
		static void BindSuccessRate(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.SuccessRate = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Type1
		static void BindType1(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.Type1 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Type2
		static void BindType2(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.Type2 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Range
		static void BindRange(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Etc
		static void BindEtc(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			m.Etc = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Event
		static void BindEvent(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Event);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType1
	export class MagicType1
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType1::BindID},
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
		static void BindID(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			m.Delay = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ComboType
		static void BindComboType(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			m.ComboType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ComboCount
		static void BindComboCount(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			m.ComboCount = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ComboDamage
		static void BindComboDamage(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ComboDamage);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType2
	export class MagicType2
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType2::BindID},
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
		static void BindID(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to HitType
		static void BindHitType(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.HitType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to RangeMod
		static void BindRangeMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RangeMod);
		}

		/// \brief Binds a result's column to NeedArrow
		static void BindNeedArrow(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			m.NeedArrow = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to AddDamagePlus
		static void BindAddDamagePlus(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamagePlus);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType3
	export class MagicType3
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType3::BindID},
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
		static void BindID(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			m.Radius = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Angle
		static void BindAngle(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Angle);
		}

		/// \brief Binds a result's column to DirectType
		static void BindDirectType(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			m.DirectType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to FirstDamage
		static void BindFirstDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FirstDamage);
		}

		/// \brief Binds a result's column to EndDamage
		static void BindEndDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EndDamage);
		}

		/// \brief Binds a result's column to TimeDamage
		static void BindTimeDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TimeDamage);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			m.Duration = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Attribute
		static void BindAttribute(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			m.Attribute = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType4
	export class MagicType4
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType4::BindID},
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
		static void BindID(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to BuffType
		static void BindBuffType(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.BuffType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.Radius = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.AttackSpeed = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Speed
		static void BindSpeed(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.Speed = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to ArmorPercent
		static void BindArmorPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ArmorPercent);
		}

		/// \brief Binds a result's column to AttackPower
		static void BindAttackPower(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.AttackPower = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MagicPower
		static void BindMagicPower(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.MagicPower = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHp);
		}

		/// \brief Binds a result's column to MaxHpPercent
		static void BindMaxHpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpPercent);
		}

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMp);
		}

		/// \brief Binds a result's column to MaxMpPercent
		static void BindMaxMpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpPercent);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.HitRate = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to AvoidRate
		static void BindAvoidRate(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AvoidRate);
		}

		/// \brief Binds a result's column to Strength
		static void BindStrength(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Strength);
		}

		/// \brief Binds a result's column to Stamina
		static void BindStamina(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Stamina);
		}

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Dexterity);
		}

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Intelligence);
		}

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Charisma);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.FireResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.ColdResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.LightningResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.MagicResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.DiseaseResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.PoisonResist = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ExpPercent
		static void BindExpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			m.ExpPercent = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType5
	export class MagicType5
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType5::BindID},
				{"Type", &MagicType5::BindType},
				{"ExpRecover", &MagicType5::BindExpRecover},
				{"NeedStone", &MagicType5::BindNeedStone}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			m.ExpRecover = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NeedStone
		static void BindNeedStone(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NeedStone);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType6
	export class MagicType6
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType6::BindID},
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
		static void BindID(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Size
		static void BindSize(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to TransformId
		static void BindTransformId(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TransformId);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHp);
		}

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMp);
		}

		/// \brief Binds a result's column to Speed
		static void BindSpeed(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			m.Speed = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackSpeed);
		}

		/// \brief Binds a result's column to TotalHit
		static void BindTotalHit(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalHit);
		}

		/// \brief Binds a result's column to TotalArmor
		static void BindTotalArmor(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalArmor);
		}

		/// \brief Binds a result's column to TotalHitRate
		static void BindTotalHitRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalHitRate);
		}

		/// \brief Binds a result's column to TotalEvasionRate
		static void BindTotalEvasionRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalEvasionRate);
		}

		/// \brief Binds a result's column to TotalFireResist
		static void BindTotalFireResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalFireResist);
		}

		/// \brief Binds a result's column to TotalColdResist
		static void BindTotalColdResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalColdResist);
		}

		/// \brief Binds a result's column to TotalLightningResist
		static void BindTotalLightningResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalLightningResist);
		}

		/// \brief Binds a result's column to TotalMagicResist
		static void BindTotalMagicResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalMagicResist);
		}

		/// \brief Binds a result's column to TotalDiseaseResist
		static void BindTotalDiseaseResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalDiseaseResist);
		}

		/// \brief Binds a result's column to TotalPoisonResist
		static void BindTotalPoisonResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TotalPoisonResist);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to UserSkillUse
		static void BindUserSkillUse(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			m.UserSkillUse = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			m.NeedItem = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SkillSuccessRate
		static void BindSkillSuccessRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			m.SkillSuccessRate = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MonsterFriendly
		static void BindMonsterFriendly(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
		{
			m.MonsterFriendly = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType7
	export class MagicType7
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nIndex", &MagicType7::BindID},
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
		static void BindID(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.ValidGroup = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.NationChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterNumber);
		}

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.TargetChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.StateChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.Radius = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Vision
		static void BindVision(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			m.Vision = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NeedItem);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType8
	export class MagicType8
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType8::BindID},
				{"Target", &MagicType8::BindTarget},
				{"Radius", &MagicType8::BindRadius},
				{"WarpType", &MagicType8::BindWarpType},
				{"ExpRecover", &MagicType8::BindExpRecover}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Target
		static void BindTarget(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			m.Target = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to WarpType
		static void BindWarpType(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			m.WarpType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ExpRecover);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType9
	export class MagicType9
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"iNum", &MagicType9::BindID},
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
		static void BindID(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			m.ValidGroup = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			m.NationChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterNumber);
		}

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			m.TargetChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			m.StateChange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamage);
		}

		/// \brief Binds a result's column to Vision
		static void BindVision(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Vision);
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NeedItem);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MonsterChallenge
	export class MonsterChallenge
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

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
		static void BindIndex(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to StartTime1
		static void BindStartTime1(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			m.StartTime1 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StartTime2
		static void BindStartTime2(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			m.StartTime2 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StartTime3
		static void BindStartTime3(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			m.StartTime3 = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to LevelMin
		static void BindLevelMin(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			m.LevelMin = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to LevelMax
		static void BindLevelMax(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
		{
			m.LevelMax = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MonsterChallengeSummonList
	export class MonsterChallengeSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

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
		static void BindIndex(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			m.Level = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Stage
		static void BindStage(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			m.Stage = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StageLevel
		static void BindStageLevel(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			m.StageLevel = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Time
		static void BindTime(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Time);
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Count
		static void BindCount(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Count);
		}

		/// \brief Binds a result's column to PosX
		static void BindPosX(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PosX);
		}

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PosZ);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
		{
			m.Range = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};

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

	/// \brief generated nanodbc column binder for ebenezer_model::ServerResource
	export class ServerResource
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nResourceID", &ServerResource::BindResourceId},
				{"strResource", &ServerResource::BindResource}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ResourceId
		static void BindResourceId(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ResourceId);
		}

		/// \brief Binds a result's column to Resource
		static void BindResource(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Resource);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::StartPosition
	export class StartPosition
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

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
		static void BindZoneId(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to KarusX
		static void BindKarusX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusX);
		}

		/// \brief Binds a result's column to KarusZ
		static void BindKarusZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusZ);
		}

		/// \brief Binds a result's column to ElmoX
		static void BindElmoX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoX);
		}

		/// \brief Binds a result's column to ElmoZ
		static void BindElmoZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoZ);
		}

		/// \brief Binds a result's column to RangeX
		static void BindRangeX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			m.RangeX = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RangeZ
		static void BindRangeZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			m.RangeZ = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to KarusGateX
		static void BindKarusGateX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusGateX);
		}

		/// \brief Binds a result's column to KarusGateZ
		static void BindKarusGateZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KarusGateZ);
		}

		/// \brief Binds a result's column to ElmoGateX
		static void BindElmoGateX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoGateX);
		}

		/// \brief Binds a result's column to ElmoGateZ
		static void BindElmoGateZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ElmoGateZ);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::UserKnightsRank
	export class UserKnightsRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"shIndex", &UserKnightsRank::BindIndex},
				{"strElmoUserID", &UserKnightsRank::BindElmoUserId},
				{"strKarusUserID", &UserKnightsRank::BindKarusUserId},
				{"nMoney", &UserKnightsRank::BindMoney}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Money
		static void BindMoney(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::UserPersonalRank
	export class UserPersonalRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"nRank", &UserPersonalRank::BindRank},
				{"strElmoUserID", &UserPersonalRank::BindElmoUserId},
				{"strKarusUserID", &UserPersonalRank::BindKarusUserId},
				{"nSalary", &UserPersonalRank::BindSalary}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
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

		/// \brief Binds a result's column to Salary
		static void BindSalary(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Salary);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::WebpageAddress
	export class WebpageAddress
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::WebpageAddress& m, const nanodbc::result& result, short colIndex);

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
		static void BindIndex(ebenezer_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to WebPageAddress
		static void BindWebPageAddress(ebenezer_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.WebPageAddress);
		}

	};

	/// \brief generated nanodbc column binder for ebenezer_model::ZoneInfo
	export class ZoneInfo
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

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
				{"RoomEvent", &ZoneInfo::BindRoomEvent}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to ServerId
		static void BindServerId(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			m.ServerId = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to InitX
		static void BindInitX(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitX);
		}

		/// \brief Binds a result's column to InitZ
		static void BindInitZ(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitZ);
		}

		/// \brief Binds a result's column to InitY
		static void BindInitY(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitY);
		}

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RoomEvent
		static void BindRoomEvent(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			m.RoomEvent = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}