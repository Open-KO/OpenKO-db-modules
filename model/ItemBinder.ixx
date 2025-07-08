module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:ItemBinder;

import FullModel:Item;

namespace model
{
	/// \brief generated column binder for the Item model, using nanodbc
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
		static void BindNumber(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Number);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Kind
		static void BindKind(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Kind);
		}

		/// \brief Binds a result's column to Slot
		static void BindSlot(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Slot);
		}

		/// \brief Binds a result's column to Race
		static void BindRace(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Race);
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ClassId);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Delay);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Weight
		static void BindWeight(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Weight);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BuyPrice);
		}

		/// \brief Binds a result's column to SellPrice
		static void BindSellPrice(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellPrice);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to Countable
		static void BindCountable(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Countable);
		}

		/// \brief Binds a result's column to MagicEffect
		static void BindMagicEffect(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicEffect);
		}

		/// \brief Binds a result's column to SpecialEffect
		static void BindSpecialEffect(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SpecialEffect);
		}

		/// \brief Binds a result's column to RequireLevel
		static void BindRequireLevel(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireLevel);
		}

		/// \brief Binds a result's column to MaxLevel
		static void BindMaxLevel(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MaxLevel);
		}

		/// \brief Binds a result's column to RequireRank
		static void BindRequireRank(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireRank);
		}

		/// \brief Binds a result's column to RequireTitle
		static void BindRequireTitle(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireTitle);
		}

		/// \brief Binds a result's column to RequireStrength
		static void BindRequireStrength(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireStrength);
		}

		/// \brief Binds a result's column to RequireStamina
		static void BindRequireStamina(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireStamina);
		}

		/// \brief Binds a result's column to RequireDexterity
		static void BindRequireDexterity(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireDexterity);
		}

		/// \brief Binds a result's column to RequireIntelligence
		static void BindRequireIntelligence(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireIntelligence);
		}

		/// \brief Binds a result's column to RequireCharisma
		static void BindRequireCharisma(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireCharisma);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Type
		static void BindType(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvasionRate
		static void BindEvasionRate(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvasionRate);
		}

		/// \brief Binds a result's column to DaggerArmor
		static void BindDaggerArmor(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DaggerArmor);
		}

		/// \brief Binds a result's column to SwordArmor
		static void BindSwordArmor(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SwordArmor);
		}

		/// \brief Binds a result's column to MaceArmor
		static void BindMaceArmor(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaceArmor);
		}

		/// \brief Binds a result's column to AxeArmor
		static void BindAxeArmor(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AxeArmor);
		}

		/// \brief Binds a result's column to SpearArmor
		static void BindSpearArmor(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SpearArmor);
		}

		/// \brief Binds a result's column to BowArmor
		static void BindBowArmor(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BowArmor);
		}

		/// \brief Binds a result's column to FireDamage
		static void BindFireDamage(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.FireDamage);
		}

		/// \brief Binds a result's column to IceDamage
		static void BindIceDamage(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.IceDamage);
		}

		/// \brief Binds a result's column to LightningDamage
		static void BindLightningDamage(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LightningDamage);
		}

		/// \brief Binds a result's column to PoisonDamage
		static void BindPoisonDamage(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.PoisonDamage);
		}

		/// \brief Binds a result's column to HpDrain
		static void BindHpDrain(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.HpDrain);
		}

		/// \brief Binds a result's column to MpDamage
		static void BindMpDamage(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MpDamage);
		}

		/// \brief Binds a result's column to MpDrain
		static void BindMpDrain(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MpDrain);
		}

		/// \brief Binds a result's column to MirrorDamage
		static void BindMirrorDamage(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MirrorDamage);
		}

		/// \brief Binds a result's column to DropRate
		static void BindDropRate(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DropRate);
		}

		/// \brief Binds a result's column to StrengthBonus
		static void BindStrengthBonus(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StrengthBonus);
		}

		/// \brief Binds a result's column to StaminaBonus
		static void BindStaminaBonus(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StaminaBonus);
		}

		/// \brief Binds a result's column to DexterityBonus
		static void BindDexterityBonus(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DexterityBonus);
		}

		/// \brief Binds a result's column to IntelligenceBonus
		static void BindIntelligenceBonus(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IntelligenceBonus);
		}

		/// \brief Binds a result's column to CharismaBonus
		static void BindCharismaBonus(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CharismaBonus);
		}

		/// \brief Binds a result's column to MaxHpBonus
		static void BindMaxHpBonus(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpBonus);
		}

		/// \brief Binds a result's column to MaxMpBonus
		static void BindMaxMpBonus(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpBonus);
		}

		/// \brief Binds a result's column to FireResistance
		static void BindFireResistance(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResistance);
		}

		/// \brief Binds a result's column to ColdResistance
		static void BindColdResistance(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResistance);
		}

		/// \brief Binds a result's column to LightningResistance
		static void BindLightningResistance(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResistance);
		}

		/// \brief Binds a result's column to MagicResistance
		static void BindMagicResistance(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResistance);
		}

		/// \brief Binds a result's column to PoisonResistance
		static void BindPoisonResistance(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResistance);
		}

		/// \brief Binds a result's column to CurseResistance
		static void BindCurseResistance(model::Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurseResistance);
		}

	};
}
