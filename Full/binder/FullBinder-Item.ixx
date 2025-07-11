module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:Item;

import FullModel;

namespace full_binder
{
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
				{"Num", &Item::BindNumber},
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
				{"ReqLevel", &Item::BindRequireLevel},
				{"ReqLevelMax", &Item::BindMaxLevel},
				{"ReqRank", &Item::BindRequireRank},
				{"ReqTitle", &Item::BindRequireTitle},
				{"ReqStr", &Item::BindRequireStrength},
				{"ReqSta", &Item::BindRequireStamina},
				{"ReqDex", &Item::BindRequireDexterity},
				{"ReqIntel", &Item::BindRequireIntelligence},
				{"ReqCha", &Item::BindRequireCharisma},
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
				{"FireR", &Item::BindFireResistance},
				{"ColdR", &Item::BindColdResistance},
				{"LightningR", &Item::BindLightningResistance},
				{"MagicR", &Item::BindMagicResistance},
				{"PoisonR", &Item::BindPoisonResistance},
				{"CurseR", &Item::BindCurseResistance}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Number
		static void BindNumber(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Number);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Kind
		static void BindKind(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Kind);
		}

		/// \brief Binds a result's column to Slot
		static void BindSlot(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Slot);
		}

		/// \brief Binds a result's column to Race
		static void BindRace(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Race);
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ClassId);
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
			result.get_ref<int16_t>(colIndex, m.Countable);
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

		/// \brief Binds a result's column to RequireLevel
		static void BindRequireLevel(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireLevel);
		}

		/// \brief Binds a result's column to MaxLevel
		static void BindMaxLevel(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxLevel);
		}

		/// \brief Binds a result's column to RequireRank
		static void BindRequireRank(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireRank);
		}

		/// \brief Binds a result's column to RequireTitle
		static void BindRequireTitle(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireTitle);
		}

		/// \brief Binds a result's column to RequireStrength
		static void BindRequireStrength(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireStrength);
		}

		/// \brief Binds a result's column to RequireStamina
		static void BindRequireStamina(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireStamina);
		}

		/// \brief Binds a result's column to RequireDexterity
		static void BindRequireDexterity(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireDexterity);
		}

		/// \brief Binds a result's column to RequireIntelligence
		static void BindRequireIntelligence(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireIntelligence);
		}

		/// \brief Binds a result's column to RequireCharisma
		static void BindRequireCharisma(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RequireCharisma);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
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
			result.get_ref<int16_t>(colIndex, m.FireDamage);
		}

		/// \brief Binds a result's column to IceDamage
		static void BindIceDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IceDamage);
		}

		/// \brief Binds a result's column to LightningDamage
		static void BindLightningDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningDamage);
		}

		/// \brief Binds a result's column to PoisonDamage
		static void BindPoisonDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonDamage);
		}

		/// \brief Binds a result's column to HpDrain
		static void BindHpDrain(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HpDrain);
		}

		/// \brief Binds a result's column to MpDamage
		static void BindMpDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MpDamage);
		}

		/// \brief Binds a result's column to MpDrain
		static void BindMpDrain(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MpDrain);
		}

		/// \brief Binds a result's column to MirrorDamage
		static void BindMirrorDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MirrorDamage);
		}

		/// \brief Binds a result's column to DropRate
		static void BindDropRate(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropRate);
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

		/// \brief Binds a result's column to FireResistance
		static void BindFireResistance(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResistance);
		}

		/// \brief Binds a result's column to ColdResistance
		static void BindColdResistance(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResistance);
		}

		/// \brief Binds a result's column to LightningResistance
		static void BindLightningResistance(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResistance);
		}

		/// \brief Binds a result's column to MagicResistance
		static void BindMagicResistance(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResistance);
		}

		/// \brief Binds a result's column to PoisonResistance
		static void BindPoisonResistance(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResistance);
		}

		/// \brief Binds a result's column to CurseResistance
		static void BindCurseResistance(full_model::Item& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurseResistance);
		}

	};
}
