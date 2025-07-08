module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:ItemBinder;

import :Item;

namespace model
{
	/// \brief generated column binder for the Item model, using nanodbc
	export class ItemBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(Item& m, const nanodbc::result& result, short colIndex);

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
		static void BindNumber(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Number);
		}

		/// \brief Binds a result's column to Name
		static void BindName(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Kind
		static void BindKind(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Kind);
		}

		/// \brief Binds a result's column to Slot
		static void BindSlot(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Slot);
		}

		/// \brief Binds a result's column to Race
		static void BindRace(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Race);
		}

		/// \brief Binds a result's column to ClassId
		static void BindClassId(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ClassId);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Delay);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Weight
		static void BindWeight(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Weight);
		}

		/// \brief Binds a result's column to Durability
		static void BindDurability(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Durability);
		}

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BuyPrice);
		}

		/// \brief Binds a result's column to SellPrice
		static void BindSellPrice(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellPrice);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to Countable
		static void BindCountable(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Countable);
		}

		/// \brief Binds a result's column to MagicEffect
		static void BindMagicEffect(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MagicEffect);
		}

		/// \brief Binds a result's column to SpecialEffect
		static void BindSpecialEffect(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SpecialEffect);
		}

		/// \brief Binds a result's column to RequireLevel
		static void BindRequireLevel(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireLevel);
		}

		/// \brief Binds a result's column to MaxLevel
		static void BindMaxLevel(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MaxLevel);
		}

		/// \brief Binds a result's column to RequireRank
		static void BindRequireRank(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireRank);
		}

		/// \brief Binds a result's column to RequireTitle
		static void BindRequireTitle(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireTitle);
		}

		/// \brief Binds a result's column to RequireStrength
		static void BindRequireStrength(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireStrength);
		}

		/// \brief Binds a result's column to RequireStamina
		static void BindRequireStamina(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireStamina);
		}

		/// \brief Binds a result's column to RequireDexterity
		static void BindRequireDexterity(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireDexterity);
		}

		/// \brief Binds a result's column to RequireIntelligence
		static void BindRequireIntelligence(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireIntelligence);
		}

		/// \brief Binds a result's column to RequireCharisma
		static void BindRequireCharisma(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RequireCharisma);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Type
		static void BindType(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvasionRate
		static void BindEvasionRate(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvasionRate);
		}

		/// \brief Binds a result's column to DaggerArmor
		static void BindDaggerArmor(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DaggerArmor);
		}

		/// \brief Binds a result's column to SwordArmor
		static void BindSwordArmor(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SwordArmor);
		}

		/// \brief Binds a result's column to MaceArmor
		static void BindMaceArmor(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaceArmor);
		}

		/// \brief Binds a result's column to AxeArmor
		static void BindAxeArmor(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AxeArmor);
		}

		/// \brief Binds a result's column to SpearArmor
		static void BindSpearArmor(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SpearArmor);
		}

		/// \brief Binds a result's column to BowArmor
		static void BindBowArmor(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.BowArmor);
		}

		/// \brief Binds a result's column to FireDamage
		static void BindFireDamage(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.FireDamage);
		}

		/// \brief Binds a result's column to IceDamage
		static void BindIceDamage(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.IceDamage);
		}

		/// \brief Binds a result's column to LightningDamage
		static void BindLightningDamage(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LightningDamage);
		}

		/// \brief Binds a result's column to PoisonDamage
		static void BindPoisonDamage(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.PoisonDamage);
		}

		/// \brief Binds a result's column to HpDrain
		static void BindHpDrain(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.HpDrain);
		}

		/// \brief Binds a result's column to MpDamage
		static void BindMpDamage(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MpDamage);
		}

		/// \brief Binds a result's column to MpDrain
		static void BindMpDrain(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MpDrain);
		}

		/// \brief Binds a result's column to MirrorDamage
		static void BindMirrorDamage(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MirrorDamage);
		}

		/// \brief Binds a result's column to DropRate
		static void BindDropRate(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DropRate);
		}

		/// \brief Binds a result's column to StrengthBonus
		static void BindStrengthBonus(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StrengthBonus);
		}

		/// \brief Binds a result's column to StaminaBonus
		static void BindStaminaBonus(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StaminaBonus);
		}

		/// \brief Binds a result's column to DexterityBonus
		static void BindDexterityBonus(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DexterityBonus);
		}

		/// \brief Binds a result's column to IntelligenceBonus
		static void BindIntelligenceBonus(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.IntelligenceBonus);
		}

		/// \brief Binds a result's column to CharismaBonus
		static void BindCharismaBonus(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CharismaBonus);
		}

		/// \brief Binds a result's column to MaxHpBonus
		static void BindMaxHpBonus(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpBonus);
		}

		/// \brief Binds a result's column to MaxMpBonus
		static void BindMaxMpBonus(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpBonus);
		}

		/// \brief Binds a result's column to FireResistance
		static void BindFireResistance(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResistance);
		}

		/// \brief Binds a result's column to ColdResistance
		static void BindColdResistance(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResistance);
		}

		/// \brief Binds a result's column to LightningResistance
		static void BindLightningResistance(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResistance);
		}

		/// \brief Binds a result's column to MagicResistance
		static void BindMagicResistance(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResistance);
		}

		/// \brief Binds a result's column to PoisonResistance
		static void BindPoisonResistance(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResistance);
		}

		/// \brief Binds a result's column to CurseResistance
		static void BindCurseResistance(Item& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CurseResistance);
		}

	};
}
