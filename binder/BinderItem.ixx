module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:Item;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderItem
	export class ItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::Item& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"Num", &ItemBinder::BindNumber},
				{"strName", &ItemBinder::BindName},
				{"Kind", &ItemBinder::BindKind},
				{"Slot", &ItemBinder::BindSlot},
				{"Race", &ItemBinder::BindRace},
				{"Class", &ItemBinder::BindClassId},
				{"Damage", &ItemBinder::BindDamage},
				{"Delay", &ItemBinder::BindDelay},
				{"Range", &ItemBinder::BindRange},
				{"Weight", &ItemBinder::BindWeight},
				{"Duration", &ItemBinder::BindDurability},
				{"BuyPrice", &ItemBinder::BindBuyPrice},
				{"SellPrice", &ItemBinder::BindSellPrice},
				{"Ac", &ItemBinder::BindArmor},
				{"Countable", &ItemBinder::BindCountable},
				{"Effect1", &ItemBinder::BindMagicEffect},
				{"Effect2", &ItemBinder::BindSpecialEffect},
				{"ReqLevel", &ItemBinder::BindRequireLevel},
				{"ReqLevelMax", &ItemBinder::BindMaxLevel},
				{"ReqRank", &ItemBinder::BindRequireRank},
				{"ReqTitle", &ItemBinder::BindRequireTitle},
				{"ReqStr", &ItemBinder::BindRequireStrength},
				{"ReqSta", &ItemBinder::BindRequireStamina},
				{"ReqDex", &ItemBinder::BindRequireDexterity},
				{"ReqIntel", &ItemBinder::BindRequireIntelligence},
				{"ReqCha", &ItemBinder::BindRequireCharisma},
				{"SellingGroup", &ItemBinder::BindSellingGroup},
				{"ItemType", &ItemBinder::BindType},
				{"Hitrate", &ItemBinder::BindHitRate},
				{"Evasionrate", &ItemBinder::BindEvasionRate},
				{"DaggerAc", &ItemBinder::BindDaggerArmor},
				{"SwordAc", &ItemBinder::BindSwordArmor},
				{"MaceAc", &ItemBinder::BindMaceArmor},
				{"AxeAc", &ItemBinder::BindAxeArmor},
				{"SpearAc", &ItemBinder::BindSpearArmor},
				{"BowAc", &ItemBinder::BindBowArmor},
				{"FireDamage", &ItemBinder::BindFireDamage},
				{"IceDamage", &ItemBinder::BindIceDamage},
				{"LightningDamage", &ItemBinder::BindLightningDamage},
				{"PoisonDamage", &ItemBinder::BindPoisonDamage},
				{"HPDrain", &ItemBinder::BindHpDrain},
				{"MPDamage", &ItemBinder::BindMpDamage},
				{"MPDrain", &ItemBinder::BindMpDrain},
				{"MirrorDamage", &ItemBinder::BindMirrorDamage},
				{"Droprate", &ItemBinder::BindDropRate},
				{"StrB", &ItemBinder::BindStrengthBonus},
				{"StaB", &ItemBinder::BindStaminaBonus},
				{"DexB", &ItemBinder::BindDexterityBonus},
				{"IntelB", &ItemBinder::BindIntelligenceBonus},
				{"ChaB", &ItemBinder::BindCharismaBonus},
				{"MaxHpB", &ItemBinder::BindMaxHpBonus},
				{"MaxMpB", &ItemBinder::BindMaxMpBonus},
				{"FireR", &ItemBinder::BindFireResistance},
				{"ColdR", &ItemBinder::BindColdResistance},
				{"LightningR", &ItemBinder::BindLightningResistance},
				{"MagicR", &ItemBinder::BindMagicResistance},
				{"PoisonR", &ItemBinder::BindPoisonResistance},
				{"CurseR", &ItemBinder::BindCurseResistance}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Number
		static void BindNumber(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Number);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Kind
		static void BindKind(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Kind);
		}

		/// \brief Binds a result's column to Slot
		static void BindSlot(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Slot);
		}

		/// \brief Binds a result's column to Race
		static void BindRace(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Race);
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ClassId);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Delay);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Weight
		static void BindWeight(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Weight);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BuyPrice);
		}

		/// \brief Binds a result's column to SellPrice
		static void BindSellPrice(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellPrice);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to Countable
		static void BindCountable(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Countable);
		}

		/// \brief Binds a result's column to MagicEffect
		static void BindMagicEffect(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicEffect);
		}

		/// \brief Binds a result's column to SpecialEffect
		static void BindSpecialEffect(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SpecialEffect);
		}

		/// \brief Binds a result's column to RequireLevel
		static void BindRequireLevel(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireLevel);
		}

		/// \brief Binds a result's column to MaxLevel
		static void BindMaxLevel(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxLevel);
		}

		/// \brief Binds a result's column to RequireRank
		static void BindRequireRank(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireRank);
		}

		/// \brief Binds a result's column to RequireTitle
		static void BindRequireTitle(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireTitle);
		}

		/// \brief Binds a result's column to RequireStrength
		static void BindRequireStrength(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireStrength);
		}

		/// \brief Binds a result's column to RequireStamina
		static void BindRequireStamina(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireStamina);
		}

		/// \brief Binds a result's column to RequireDexterity
		static void BindRequireDexterity(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireDexterity);
		}

		/// \brief Binds a result's column to RequireIntelligence
		static void BindRequireIntelligence(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireIntelligence);
		}

		/// \brief Binds a result's column to RequireCharisma
		static void BindRequireCharisma(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireCharisma);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Type
		static void BindType(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvasionRate
		static void BindEvasionRate(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvasionRate);
		}

		/// \brief Binds a result's column to DaggerArmor
		static void BindDaggerArmor(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DaggerArmor);
		}

		/// \brief Binds a result's column to SwordArmor
		static void BindSwordArmor(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SwordArmor);
		}

		/// \brief Binds a result's column to MaceArmor
		static void BindMaceArmor(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaceArmor);
		}

		/// \brief Binds a result's column to AxeArmor
		static void BindAxeArmor(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AxeArmor);
		}

		/// \brief Binds a result's column to SpearArmor
		static void BindSpearArmor(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SpearArmor);
		}

		/// \brief Binds a result's column to BowArmor
		static void BindBowArmor(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BowArmor);
		}

		/// \brief Binds a result's column to FireDamage
		static void BindFireDamage(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireDamage);
		}

		/// \brief Binds a result's column to IceDamage
		static void BindIceDamage(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IceDamage);
		}

		/// \brief Binds a result's column to LightningDamage
		static void BindLightningDamage(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningDamage);
		}

		/// \brief Binds a result's column to PoisonDamage
		static void BindPoisonDamage(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonDamage);
		}

		/// \brief Binds a result's column to HpDrain
		static void BindHpDrain(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HpDrain);
		}

		/// \brief Binds a result's column to MpDamage
		static void BindMpDamage(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MpDamage);
		}

		/// \brief Binds a result's column to MpDrain
		static void BindMpDrain(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MpDrain);
		}

		/// \brief Binds a result's column to MirrorDamage
		static void BindMirrorDamage(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MirrorDamage);
		}

		/// \brief Binds a result's column to DropRate
		static void BindDropRate(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropRate);
		}

		/// \brief Binds a result's column to StrengthBonus
		static void BindStrengthBonus(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StrengthBonus);
		}

		/// \brief Binds a result's column to StaminaBonus
		static void BindStaminaBonus(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StaminaBonus);
		}

		/// \brief Binds a result's column to DexterityBonus
		static void BindDexterityBonus(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DexterityBonus);
		}

		/// \brief Binds a result's column to IntelligenceBonus
		static void BindIntelligenceBonus(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IntelligenceBonus);
		}

		/// \brief Binds a result's column to CharismaBonus
		static void BindCharismaBonus(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CharismaBonus);
		}

		/// \brief Binds a result's column to MaxHpBonus
		static void BindMaxHpBonus(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpBonus);
		}

		/// \brief Binds a result's column to MaxMpBonus
		static void BindMaxMpBonus(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpBonus);
		}

		/// \brief Binds a result's column to FireResistance
		static void BindFireResistance(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResistance);
		}

		/// \brief Binds a result's column to ColdResistance
		static void BindColdResistance(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResistance);
		}

		/// \brief Binds a result's column to LightningResistance
		static void BindLightningResistance(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResistance);
		}

		/// \brief Binds a result's column to MagicResistance
		static void BindMagicResistance(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResistance);
		}

		/// \brief Binds a result's column to PoisonResistance
		static void BindPoisonResistance(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResistance);
		}

		/// \brief Binds a result's column to CurseResistance
		static void BindCurseResistance(model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurseResistance);
		}

	};
}
namespace ebenezer
{

	/// \brief generated nanodbc column binder for ebenezer::BinderItem
	export class ItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer::Item& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"Num", &ItemBinder::BindNumber},
				{"strName", &ItemBinder::BindName},
				{"Kind", &ItemBinder::BindKind},
				{"Slot", &ItemBinder::BindSlot},
				{"Race", &ItemBinder::BindRace},
				{"Class", &ItemBinder::BindClassId},
				{"Damage", &ItemBinder::BindDamage},
				{"Delay", &ItemBinder::BindDelay},
				{"Range", &ItemBinder::BindRange},
				{"Weight", &ItemBinder::BindWeight},
				{"Duration", &ItemBinder::BindDurability},
				{"BuyPrice", &ItemBinder::BindBuyPrice},
				{"SellPrice", &ItemBinder::BindSellPrice},
				{"Ac", &ItemBinder::BindArmor},
				{"Countable", &ItemBinder::BindCountable},
				{"Effect1", &ItemBinder::BindMagicEffect},
				{"Effect2", &ItemBinder::BindSpecialEffect},
				{"ReqLevel", &ItemBinder::BindRequireLevel},
				{"ReqRank", &ItemBinder::BindRequireRank},
				{"ReqTitle", &ItemBinder::BindRequireTitle},
				{"ReqStr", &ItemBinder::BindRequireStrength},
				{"ReqSta", &ItemBinder::BindRequireStamina},
				{"ReqDex", &ItemBinder::BindRequireDexterity},
				{"ReqIntel", &ItemBinder::BindRequireIntelligence},
				{"ReqCha", &ItemBinder::BindRequireCharisma},
				{"SellingGroup", &ItemBinder::BindSellingGroup},
				{"ItemType", &ItemBinder::BindType},
				{"Hitrate", &ItemBinder::BindHitRate},
				{"Evasionrate", &ItemBinder::BindEvasionRate},
				{"DaggerAc", &ItemBinder::BindDaggerArmor},
				{"SwordAc", &ItemBinder::BindSwordArmor},
				{"MaceAc", &ItemBinder::BindMaceArmor},
				{"AxeAc", &ItemBinder::BindAxeArmor},
				{"SpearAc", &ItemBinder::BindSpearArmor},
				{"BowAc", &ItemBinder::BindBowArmor},
				{"FireDamage", &ItemBinder::BindFireDamage},
				{"IceDamage", &ItemBinder::BindIceDamage},
				{"LightningDamage", &ItemBinder::BindLightningDamage},
				{"PoisonDamage", &ItemBinder::BindPoisonDamage},
				{"HPDrain", &ItemBinder::BindHpDrain},
				{"MPDamage", &ItemBinder::BindMpDamage},
				{"MPDrain", &ItemBinder::BindMpDrain},
				{"MirrorDamage", &ItemBinder::BindMirrorDamage},
				{"Droprate", &ItemBinder::BindDropRate},
				{"StrB", &ItemBinder::BindStrengthBonus},
				{"StaB", &ItemBinder::BindStaminaBonus},
				{"DexB", &ItemBinder::BindDexterityBonus},
				{"IntelB", &ItemBinder::BindIntelligenceBonus},
				{"ChaB", &ItemBinder::BindCharismaBonus},
				{"MaxHpB", &ItemBinder::BindMaxHpBonus},
				{"MaxMpB", &ItemBinder::BindMaxMpBonus},
				{"FireR", &ItemBinder::BindFireResistance},
				{"ColdR", &ItemBinder::BindColdResistance},
				{"LightningR", &ItemBinder::BindLightningResistance},
				{"MagicR", &ItemBinder::BindMagicResistance},
				{"PoisonR", &ItemBinder::BindPoisonResistance},
				{"CurseR", &ItemBinder::BindCurseResistance}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Number
		static void BindNumber(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Number);
		}

		/// \brief Binds a result's column to Name
		static void BindName(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Kind
		static void BindKind(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Kind);
		}

		/// \brief Binds a result's column to Slot
		static void BindSlot(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Slot);
		}

		/// \brief Binds a result's column to Race
		static void BindRace(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Race);
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ClassId);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Delay);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Weight
		static void BindWeight(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Weight);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BuyPrice);
		}

		/// \brief Binds a result's column to SellPrice
		static void BindSellPrice(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellPrice);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to Countable
		static void BindCountable(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Countable);
		}

		/// \brief Binds a result's column to MagicEffect
		static void BindMagicEffect(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicEffect);
		}

		/// \brief Binds a result's column to SpecialEffect
		static void BindSpecialEffect(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SpecialEffect);
		}

		/// \brief Binds a result's column to RequireLevel
		static void BindRequireLevel(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireLevel);
		}

		/// \brief Binds a result's column to RequireRank
		static void BindRequireRank(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireRank);
		}

		/// \brief Binds a result's column to RequireTitle
		static void BindRequireTitle(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireTitle);
		}

		/// \brief Binds a result's column to RequireStrength
		static void BindRequireStrength(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireStrength);
		}

		/// \brief Binds a result's column to RequireStamina
		static void BindRequireStamina(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireStamina);
		}

		/// \brief Binds a result's column to RequireDexterity
		static void BindRequireDexterity(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireDexterity);
		}

		/// \brief Binds a result's column to RequireIntelligence
		static void BindRequireIntelligence(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireIntelligence);
		}

		/// \brief Binds a result's column to RequireCharisma
		static void BindRequireCharisma(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireCharisma);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvasionRate
		static void BindEvasionRate(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvasionRate);
		}

		/// \brief Binds a result's column to DaggerArmor
		static void BindDaggerArmor(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DaggerArmor);
		}

		/// \brief Binds a result's column to SwordArmor
		static void BindSwordArmor(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SwordArmor);
		}

		/// \brief Binds a result's column to MaceArmor
		static void BindMaceArmor(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaceArmor);
		}

		/// \brief Binds a result's column to AxeArmor
		static void BindAxeArmor(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AxeArmor);
		}

		/// \brief Binds a result's column to SpearArmor
		static void BindSpearArmor(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SpearArmor);
		}

		/// \brief Binds a result's column to BowArmor
		static void BindBowArmor(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BowArmor);
		}

		/// \brief Binds a result's column to FireDamage
		static void BindFireDamage(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireDamage);
		}

		/// \brief Binds a result's column to IceDamage
		static void BindIceDamage(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IceDamage);
		}

		/// \brief Binds a result's column to LightningDamage
		static void BindLightningDamage(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningDamage);
		}

		/// \brief Binds a result's column to PoisonDamage
		static void BindPoisonDamage(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonDamage);
		}

		/// \brief Binds a result's column to HpDrain
		static void BindHpDrain(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HpDrain);
		}

		/// \brief Binds a result's column to MpDamage
		static void BindMpDamage(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MpDamage);
		}

		/// \brief Binds a result's column to MpDrain
		static void BindMpDrain(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MpDrain);
		}

		/// \brief Binds a result's column to MirrorDamage
		static void BindMirrorDamage(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MirrorDamage);
		}

		/// \brief Binds a result's column to DropRate
		static void BindDropRate(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropRate);
		}

		/// \brief Binds a result's column to StrengthBonus
		static void BindStrengthBonus(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StrengthBonus);
		}

		/// \brief Binds a result's column to StaminaBonus
		static void BindStaminaBonus(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StaminaBonus);
		}

		/// \brief Binds a result's column to DexterityBonus
		static void BindDexterityBonus(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DexterityBonus);
		}

		/// \brief Binds a result's column to IntelligenceBonus
		static void BindIntelligenceBonus(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IntelligenceBonus);
		}

		/// \brief Binds a result's column to CharismaBonus
		static void BindCharismaBonus(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CharismaBonus);
		}

		/// \brief Binds a result's column to MaxHpBonus
		static void BindMaxHpBonus(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpBonus);
		}

		/// \brief Binds a result's column to MaxMpBonus
		static void BindMaxMpBonus(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpBonus);
		}

		/// \brief Binds a result's column to FireResistance
		static void BindFireResistance(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResistance);
		}

		/// \brief Binds a result's column to ColdResistance
		static void BindColdResistance(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResistance);
		}

		/// \brief Binds a result's column to LightningResistance
		static void BindLightningResistance(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResistance);
		}

		/// \brief Binds a result's column to MagicResistance
		static void BindMagicResistance(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResistance);
		}

		/// \brief Binds a result's column to PoisonResistance
		static void BindPoisonResistance(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResistance);
		}

		/// \brief Binds a result's column to CurseResistance
		static void BindCurseResistance(ebenezer::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurseResistance);
		}

	};
}

namespace aujard
{

	/// \brief generated nanodbc column binder for aujard::BinderItem
	export class ItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard::Item& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"Num", &ItemBinder::BindNumber},
				{"strName", &ItemBinder::BindName},
				{"Kind", &ItemBinder::BindKind},
				{"Slot", &ItemBinder::BindSlot},
				{"Race", &ItemBinder::BindRace},
				{"Class", &ItemBinder::BindClassId},
				{"Damage", &ItemBinder::BindDamage},
				{"Delay", &ItemBinder::BindDelay},
				{"Range", &ItemBinder::BindRange},
				{"Weight", &ItemBinder::BindWeight},
				{"Duration", &ItemBinder::BindDurability},
				{"BuyPrice", &ItemBinder::BindBuyPrice},
				{"SellPrice", &ItemBinder::BindSellPrice},
				{"Ac", &ItemBinder::BindArmor},
				{"Countable", &ItemBinder::BindCountable},
				{"Effect1", &ItemBinder::BindMagicEffect},
				{"Effect2", &ItemBinder::BindSpecialEffect},
				{"ReqLevel", &ItemBinder::BindRequireLevel},
				{"ReqRank", &ItemBinder::BindRequireRank},
				{"ReqTitle", &ItemBinder::BindRequireTitle},
				{"ReqStr", &ItemBinder::BindRequireStrength},
				{"ReqSta", &ItemBinder::BindRequireStamina},
				{"ReqDex", &ItemBinder::BindRequireDexterity},
				{"ReqIntel", &ItemBinder::BindRequireIntelligence},
				{"ReqCha", &ItemBinder::BindRequireCharisma},
				{"SellingGroup", &ItemBinder::BindSellingGroup},
				{"ItemType", &ItemBinder::BindType},
				{"Hitrate", &ItemBinder::BindHitRate},
				{"Evasionrate", &ItemBinder::BindEvasionRate},
				{"DaggerAc", &ItemBinder::BindDaggerArmor},
				{"SwordAc", &ItemBinder::BindSwordArmor},
				{"MaceAc", &ItemBinder::BindMaceArmor},
				{"AxeAc", &ItemBinder::BindAxeArmor},
				{"SpearAc", &ItemBinder::BindSpearArmor},
				{"BowAc", &ItemBinder::BindBowArmor},
				{"FireDamage", &ItemBinder::BindFireDamage},
				{"IceDamage", &ItemBinder::BindIceDamage},
				{"LightningDamage", &ItemBinder::BindLightningDamage},
				{"PoisonDamage", &ItemBinder::BindPoisonDamage},
				{"HPDrain", &ItemBinder::BindHpDrain},
				{"MPDamage", &ItemBinder::BindMpDamage},
				{"MPDrain", &ItemBinder::BindMpDrain},
				{"MirrorDamage", &ItemBinder::BindMirrorDamage},
				{"Droprate", &ItemBinder::BindDropRate},
				{"StrB", &ItemBinder::BindStrengthBonus},
				{"StaB", &ItemBinder::BindStaminaBonus},
				{"DexB", &ItemBinder::BindDexterityBonus},
				{"IntelB", &ItemBinder::BindIntelligenceBonus},
				{"ChaB", &ItemBinder::BindCharismaBonus},
				{"MaxHpB", &ItemBinder::BindMaxHpBonus},
				{"MaxMpB", &ItemBinder::BindMaxMpBonus},
				{"FireR", &ItemBinder::BindFireResistance},
				{"ColdR", &ItemBinder::BindColdResistance},
				{"LightningR", &ItemBinder::BindLightningResistance},
				{"MagicR", &ItemBinder::BindMagicResistance},
				{"PoisonR", &ItemBinder::BindPoisonResistance},
				{"CurseR", &ItemBinder::BindCurseResistance}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Number
		static void BindNumber(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Number);
		}

		/// \brief Binds a result's column to Name
		static void BindName(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Kind
		static void BindKind(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Kind);
		}

		/// \brief Binds a result's column to Slot
		static void BindSlot(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Slot);
		}

		/// \brief Binds a result's column to Race
		static void BindRace(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Race);
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ClassId);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Delay);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Weight
		static void BindWeight(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Weight);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BuyPrice);
		}

		/// \brief Binds a result's column to SellPrice
		static void BindSellPrice(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellPrice);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to Countable
		static void BindCountable(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Countable);
		}

		/// \brief Binds a result's column to MagicEffect
		static void BindMagicEffect(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicEffect);
		}

		/// \brief Binds a result's column to SpecialEffect
		static void BindSpecialEffect(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SpecialEffect);
		}

		/// \brief Binds a result's column to RequireLevel
		static void BindRequireLevel(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireLevel);
		}

		/// \brief Binds a result's column to RequireRank
		static void BindRequireRank(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireRank);
		}

		/// \brief Binds a result's column to RequireTitle
		static void BindRequireTitle(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireTitle);
		}

		/// \brief Binds a result's column to RequireStrength
		static void BindRequireStrength(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireStrength);
		}

		/// \brief Binds a result's column to RequireStamina
		static void BindRequireStamina(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireStamina);
		}

		/// \brief Binds a result's column to RequireDexterity
		static void BindRequireDexterity(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireDexterity);
		}

		/// \brief Binds a result's column to RequireIntelligence
		static void BindRequireIntelligence(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireIntelligence);
		}

		/// \brief Binds a result's column to RequireCharisma
		static void BindRequireCharisma(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireCharisma);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Type
		static void BindType(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvasionRate
		static void BindEvasionRate(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvasionRate);
		}

		/// \brief Binds a result's column to DaggerArmor
		static void BindDaggerArmor(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DaggerArmor);
		}

		/// \brief Binds a result's column to SwordArmor
		static void BindSwordArmor(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SwordArmor);
		}

		/// \brief Binds a result's column to MaceArmor
		static void BindMaceArmor(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaceArmor);
		}

		/// \brief Binds a result's column to AxeArmor
		static void BindAxeArmor(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AxeArmor);
		}

		/// \brief Binds a result's column to SpearArmor
		static void BindSpearArmor(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SpearArmor);
		}

		/// \brief Binds a result's column to BowArmor
		static void BindBowArmor(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BowArmor);
		}

		/// \brief Binds a result's column to FireDamage
		static void BindFireDamage(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireDamage);
		}

		/// \brief Binds a result's column to IceDamage
		static void BindIceDamage(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IceDamage);
		}

		/// \brief Binds a result's column to LightningDamage
		static void BindLightningDamage(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningDamage);
		}

		/// \brief Binds a result's column to PoisonDamage
		static void BindPoisonDamage(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonDamage);
		}

		/// \brief Binds a result's column to HpDrain
		static void BindHpDrain(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HpDrain);
		}

		/// \brief Binds a result's column to MpDamage
		static void BindMpDamage(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MpDamage);
		}

		/// \brief Binds a result's column to MpDrain
		static void BindMpDrain(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MpDrain);
		}

		/// \brief Binds a result's column to MirrorDamage
		static void BindMirrorDamage(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MirrorDamage);
		}

		/// \brief Binds a result's column to DropRate
		static void BindDropRate(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropRate);
		}

		/// \brief Binds a result's column to StrengthBonus
		static void BindStrengthBonus(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StrengthBonus);
		}

		/// \brief Binds a result's column to StaminaBonus
		static void BindStaminaBonus(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StaminaBonus);
		}

		/// \brief Binds a result's column to DexterityBonus
		static void BindDexterityBonus(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DexterityBonus);
		}

		/// \brief Binds a result's column to IntelligenceBonus
		static void BindIntelligenceBonus(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IntelligenceBonus);
		}

		/// \brief Binds a result's column to CharismaBonus
		static void BindCharismaBonus(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CharismaBonus);
		}

		/// \brief Binds a result's column to MaxHpBonus
		static void BindMaxHpBonus(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpBonus);
		}

		/// \brief Binds a result's column to MaxMpBonus
		static void BindMaxMpBonus(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpBonus);
		}

		/// \brief Binds a result's column to FireResistance
		static void BindFireResistance(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResistance);
		}

		/// \brief Binds a result's column to ColdResistance
		static void BindColdResistance(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResistance);
		}

		/// \brief Binds a result's column to LightningResistance
		static void BindLightningResistance(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResistance);
		}

		/// \brief Binds a result's column to MagicResistance
		static void BindMagicResistance(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResistance);
		}

		/// \brief Binds a result's column to PoisonResistance
		static void BindPoisonResistance(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResistance);
		}

		/// \brief Binds a result's column to CurseResistance
		static void BindCurseResistance(aujard::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurseResistance);
		}

	};
}

