module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module EbenezerBinder:Item;

import EbenezerModel;

namespace ebenezer_binder
{
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
}
