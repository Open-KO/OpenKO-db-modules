module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module AIServerBinder;

import AIServerModel;
import BinderUtil;

namespace aiserver_binder
{
	/// \brief generated nanodbc column binder for aiserver_model::Monster
	export class Monster
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

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
		static void BindMonsterId(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PictureId);
		}

		/// \brief Binds a result's column to Size
		static void BindSize(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon1);
		}

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon2);
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Group);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ActType);
		}

		/// \brief Binds a result's column to Type
		static void BindType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Family
		static void BindFamily(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Family);
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Title);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.HitPoints);
		}

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaPoints);
		}

		/// \brief Binds a result's column to Attack
		static void BindAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Attack);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvadeRate);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackDelay);
		}

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
		}

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RunSpeed);
		}

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StandTime);
		}

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic1);
		}

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic2);
		}

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic3);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResist);
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResist);
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResist);
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResist);
		}

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DiseaseResist);
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResist);
		}

		/// \brief Binds a result's column to LightResist
		static void BindLightResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightResist);
		}

		/// \brief Binds a result's column to Bulk
		static void BindBulk(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Bulk);
		}

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.AttackRange);
		}

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SearchRange);
		}

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TracingRange);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to Item
		static void BindItem(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Item);
		}

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DirectAttack);
		}

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MagicAttack);
		}

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MoneyType);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MonsterItem
	export class MonsterItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

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
		static void BindMonsterId(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId1);
		}

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance1);
		}

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId2);
		}

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance2);
		}

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId3);
		}

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance3);
		}

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId4);
		}

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance4);
		}

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemId5);
		}

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DropChance5);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::Npc
	export class Npc
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

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
		static void BindNpcId(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PictureId);
		}

		/// \brief Binds a result's column to Size
		static void BindSize(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon1);
		}

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon2);
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Group);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ActType);
		}

		/// \brief Binds a result's column to Type
		static void BindType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Family
		static void BindFamily(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Family);
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Title);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.HitPoints);
		}

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaPoints);
		}

		/// \brief Binds a result's column to Attack
		static void BindAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Attack);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvadeRate);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackDelay);
		}

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
		}

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RunSpeed);
		}

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StandTime);
		}

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic1);
		}

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic2);
		}

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic3);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResist);
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResist);
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResist);
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResist);
		}

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DiseaseResist);
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResist);
		}

		/// \brief Binds a result's column to LightResist
		static void BindLightResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightResist);
		}

		/// \brief Binds a result's column to Bulk
		static void BindBulk(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Bulk);
		}

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.AttackRange);
		}

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SearchRange);
		}

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TracingRange);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to Item
		static void BindItem(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Item);
		}

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DirectAttack);
		}

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MagicAttack);
		}

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MoneyType);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::NpcMoveItem
	export class NpcMoveItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

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
		static void BindCastleIndex(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.CastleIndex);
		}

		/// \brief Binds a result's column to ChangeItem
		static void BindChangeItem(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeItem);
		}

		/// \brief Binds a result's column to ChangeId
		static void BindChangeId(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeId);
		}

		/// \brief Binds a result's column to MoveItem
		static void BindMoveItem(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int32_t>>(colIndex, m.MoveItem);
		}

		/// \brief Binds a result's column to MoveMinX
		static void BindMoveMinX(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinX);
		}

		/// \brief Binds a result's column to MoveMinY
		static void BindMoveMinY(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinY);
		}

		/// \brief Binds a result's column to MoveMaxX
		static void BindMoveMaxX(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMaxX);
		}

		/// \brief Binds a result's column to MoveMaxY
		static void BindMoveMaxY(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMaxY);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::NpcPos
	export class NpcPos
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

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
		static void BindZoneId(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ActType);
		}

		/// \brief Binds a result's column to RegenType
		static void BindRegenType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RegenType);
		}

		/// \brief Binds a result's column to DungeonFamily
		static void BindDungeonFamily(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DungeonFamily);
		}

		/// \brief Binds a result's column to SpecialType
		static void BindSpecialType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SpecialType);
		}

		/// \brief Binds a result's column to TrapNumber
		static void BindTrapNumber(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TrapNumber);
		}

		/// \brief Binds a result's column to LeftX
		static void BindLeftX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LeftX);
		}

		/// \brief Binds a result's column to TopZ
		static void BindTopZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.TopZ);
		}

		/// \brief Binds a result's column to RightX
		static void BindRightX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RightX);
		}

		/// \brief Binds a result's column to BottomZ
		static void BindBottomZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.BottomZ);
		}

		/// \brief Binds a result's column to LimitMinZ
		static void BindLimitMinZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMinZ);
		}

		/// \brief Binds a result's column to LimitMinX
		static void BindLimitMinX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMinX);
		}

		/// \brief Binds a result's column to LimitMaxX
		static void BindLimitMaxX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMaxX);
		}

		/// \brief Binds a result's column to LimitMaxZ
		static void BindLimitMaxZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LimitMaxZ);
		}

		/// \brief Binds a result's column to NumNpc
		static void BindNumNpc(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NumNpc);
		}

		/// \brief Binds a result's column to RespawnTime
		static void BindRespawnTime(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RespawnTime);
		}

		/// \brief Binds a result's column to Direction
		static void BindDirection(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Direction);
		}

		/// \brief Binds a result's column to PathPointCount
		static void BindPathPointCount(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.PathPointCount);
		}

		/// \brief Binds a result's column to Path
		static void BindPath(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Path);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::LevelUp
	export class LevelUp
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex);

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
		static void BindLevel(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to RequiredExp
		static void BindRequiredExp(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.RequiredExp);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::Magic
	export class Magic
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

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
		static void BindID(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to BeforeAction
		static void BindBeforeAction(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.BeforeAction);
		}

		/// \brief Binds a result's column to TargetAction
		static void BindTargetAction(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TargetAction);
		}

		/// \brief Binds a result's column to SelfEffect
		static void BindSelfEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SelfEffect);
		}

		/// \brief Binds a result's column to FlyingEffect
		static void BindFlyingEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.FlyingEffect);
		}

		/// \brief Binds a result's column to TargetEffect
		static void BindTargetEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TargetEffect);
		}

		/// \brief Binds a result's column to Moral
		static void BindMoral(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Moral);
		}

		/// \brief Binds a result's column to SkillLevel
		static void BindSkillLevel(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SkillLevel);
		}

		/// \brief Binds a result's column to Skill
		static void BindSkill(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Skill);
		}

		/// \brief Binds a result's column to ManaCost
		static void BindManaCost(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaCost);
		}

		/// \brief Binds a result's column to HpCost
		static void BindHpCost(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HpCost);
		}

		/// \brief Binds a result's column to ItemGroup
		static void BindItemGroup(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemGroup);
		}

		/// \brief Binds a result's column to UseItem
		static void BindUseItem(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.UseItem);
		}

		/// \brief Binds a result's column to CastTime
		static void BindCastTime(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.CastTime);
		}

		/// \brief Binds a result's column to RecastTime
		static void BindRecastTime(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RecastTime);
		}

		/// \brief Binds a result's column to SuccessRate
		static void BindSuccessRate(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SuccessRate);
		}

		/// \brief Binds a result's column to Type1
		static void BindType1(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type1);
		}

		/// \brief Binds a result's column to Type2
		static void BindType2(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type2);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

		/// \brief Binds a result's column to Etc
		static void BindEtc(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Etc);
		}

		/// \brief Binds a result's column to Event
		static void BindEvent(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Event);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MagicType1
	export class MagicType1
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

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
		static void BindID(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Type
		static void BindType(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamage);
		}

		/// \brief Binds a result's column to Delay
		static void BindDelay(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Delay);
		}

		/// \brief Binds a result's column to ComboType
		static void BindComboType(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ComboType);
		}

		/// \brief Binds a result's column to ComboCount
		static void BindComboCount(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ComboCount);
		}

		/// \brief Binds a result's column to ComboDamage
		static void BindComboDamage(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ComboDamage);
		}

		/// \brief Binds a result's column to Range
		static void BindRange(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Range);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MagicType2
	export class MagicType2
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex);

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
		static void BindID(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to HitType
		static void BindHitType(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.HitType);
		}

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRateMod);
		}

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DamageMod);
		}

		/// \brief Binds a result's column to RangeMod
		static void BindRangeMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RangeMod);
		}

		/// \brief Binds a result's column to NeedArrow
		static void BindNeedArrow(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NeedArrow);
		}

		/// \brief Binds a result's column to AddDamagePlus
		static void BindAddDamagePlus(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AddDamagePlus);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MagicType3
	export class MagicType3
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex);

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
		static void BindID(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to Angle
		static void BindAngle(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Angle);
		}

		/// \brief Binds a result's column to DirectType
		static void BindDirectType(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DirectType);
		}

		/// \brief Binds a result's column to FirstDamage
		static void BindFirstDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FirstDamage);
		}

		/// \brief Binds a result's column to EndDamage
		static void BindEndDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EndDamage);
		}

		/// \brief Binds a result's column to TimeDamage
		static void BindTimeDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TimeDamage);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Attribute
		static void BindAttribute(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Attribute);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MagicType4
	export class MagicType4
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

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
		static void BindID(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to BuffType
		static void BindBuffType(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.BuffType);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.AttackSpeed);
		}

		/// \brief Binds a result's column to Speed
		static void BindSpeed(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Speed);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to ArmorPercent
		static void BindArmorPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ArmorPercent);
		}

		/// \brief Binds a result's column to AttackPower
		static void BindAttackPower(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.AttackPower);
		}

		/// \brief Binds a result's column to MagicPower
		static void BindMagicPower(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MagicPower);
		}

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHp);
		}

		/// \brief Binds a result's column to MaxHpPercent
		static void BindMaxHpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxHpPercent);
		}

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMp);
		}

		/// \brief Binds a result's column to MaxMpPercent
		static void BindMaxMpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MaxMpPercent);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to AvoidRate
		static void BindAvoidRate(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AvoidRate);
		}

		/// \brief Binds a result's column to Strength
		static void BindStrength(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Strength);
		}

		/// \brief Binds a result's column to Stamina
		static void BindStamina(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Stamina);
		}

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Dexterity);
		}

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Intelligence);
		}

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Charisma);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.FireResist);
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ColdResist);
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LightningResist);
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MagicResist);
		}

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DiseaseResist);
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.PoisonResist);
		}

		/// \brief Binds a result's column to ExpPercent
		static void BindExpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ExpPercent);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MagicType7
	export class MagicType7
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

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
		static void BindID(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ID);
		}

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ValidGroup);
		}

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.NationChange);
		}

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterNumber);
		}

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TargetChange);
		}

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.StateChange);
		}

		/// \brief Binds a result's column to Radius
		static void BindRadius(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Radius);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to Duration
		static void BindDuration(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Duration);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to Vision
		static void BindVision(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Vision);
		}

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.NeedItem);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeDefensive
	export class MakeDefensive
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

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
		static void BindLevel(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Class1
		static void BindClass1(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class1);
		}

		/// \brief Binds a result's column to Class2
		static void BindClass2(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class2);
		}

		/// \brief Binds a result's column to Class3
		static void BindClass3(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class3);
		}

		/// \brief Binds a result's column to Class4
		static void BindClass4(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class4);
		}

		/// \brief Binds a result's column to Class5
		static void BindClass5(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class5);
		}

		/// \brief Binds a result's column to Class6
		static void BindClass6(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class6);
		}

		/// \brief Binds a result's column to Class7
		static void BindClass7(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class7);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeItem
	export class MakeItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MakeItem::BindIndex},
				{"iItemCode", &MakeItem::BindItemCode},
				{"byItemLevel", &MakeItem::BindItemLevel}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to ItemCode
		static void BindItemCode(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemCode);
		}

		/// \brief Binds a result's column to ItemLevel
		static void BindItemLevel(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemLevel);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeItemGradeCode
	export class MakeItemGradeCode
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

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
		static void BindItemIndex(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ItemIndex);
		}

		/// \brief Binds a result's column to Grade1
		static void BindGrade1(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade1);
		}

		/// \brief Binds a result's column to Grade2
		static void BindGrade2(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade2);
		}

		/// \brief Binds a result's column to Grade3
		static void BindGrade3(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade3);
		}

		/// \brief Binds a result's column to Grade4
		static void BindGrade4(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade4);
		}

		/// \brief Binds a result's column to Grade5
		static void BindGrade5(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade5);
		}

		/// \brief Binds a result's column to Grade6
		static void BindGrade6(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade6);
		}

		/// \brief Binds a result's column to Grade7
		static void BindGrade7(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade7);
		}

		/// \brief Binds a result's column to Grade8
		static void BindGrade8(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade8);
		}

		/// \brief Binds a result's column to Grade9
		static void BindGrade9(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Grade9);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeItemGroup
	export class MakeItemGroup
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

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
		static void BindItemGroupNumber(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.ItemGroupNumber);
		}

		/// \brief Binds a result's column to Item1
		static void BindItem1(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item1);
		}

		/// \brief Binds a result's column to Item2
		static void BindItem2(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item2);
		}

		/// \brief Binds a result's column to Item3
		static void BindItem3(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item3);
		}

		/// \brief Binds a result's column to Item4
		static void BindItem4(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item4);
		}

		/// \brief Binds a result's column to Item5
		static void BindItem5(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item5);
		}

		/// \brief Binds a result's column to Item6
		static void BindItem6(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item6);
		}

		/// \brief Binds a result's column to Item7
		static void BindItem7(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item7);
		}

		/// \brief Binds a result's column to Item8
		static void BindItem8(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item8);
		}

		/// \brief Binds a result's column to Item9
		static void BindItem9(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item9);
		}

		/// \brief Binds a result's column to Item10
		static void BindItem10(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item10);
		}

		/// \brief Binds a result's column to Item11
		static void BindItem11(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item11);
		}

		/// \brief Binds a result's column to Item12
		static void BindItem12(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item12);
		}

		/// \brief Binds a result's column to Item13
		static void BindItem13(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item13);
		}

		/// \brief Binds a result's column to Item14
		static void BindItem14(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item14);
		}

		/// \brief Binds a result's column to Item15
		static void BindItem15(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item15);
		}

		/// \brief Binds a result's column to Item16
		static void BindItem16(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item16);
		}

		/// \brief Binds a result's column to Item17
		static void BindItem17(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item17);
		}

		/// \brief Binds a result's column to Item18
		static void BindItem18(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item18);
		}

		/// \brief Binds a result's column to Item19
		static void BindItem19(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item19);
		}

		/// \brief Binds a result's column to Item20
		static void BindItem20(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item20);
		}

		/// \brief Binds a result's column to Item21
		static void BindItem21(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item21);
		}

		/// \brief Binds a result's column to Item22
		static void BindItem22(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item22);
		}

		/// \brief Binds a result's column to Item23
		static void BindItem23(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item23);
		}

		/// \brief Binds a result's column to Item24
		static void BindItem24(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item24);
		}

		/// \brief Binds a result's column to Item25
		static void BindItem25(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item25);
		}

		/// \brief Binds a result's column to Item26
		static void BindItem26(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item26);
		}

		/// \brief Binds a result's column to Item27
		static void BindItem27(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item27);
		}

		/// \brief Binds a result's column to Item28
		static void BindItem28(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item28);
		}

		/// \brief Binds a result's column to Item29
		static void BindItem29(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item29);
		}

		/// \brief Binds a result's column to Item30
		static void BindItem30(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Item30);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeItemRareCode
	export class MakeItemRareCode
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

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
		static void BindLevelGrade(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.LevelGrade);
		}

		/// \brief Binds a result's column to UpgradeItem
		static void BindUpgradeItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.UpgradeItem);
		}

		/// \brief Binds a result's column to RareItem
		static void BindRareItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RareItem);
		}

		/// \brief Binds a result's column to MagicItem
		static void BindMagicItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicItem);
		}

		/// \brief Binds a result's column to GeneralItem
		static void BindGeneralItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.GeneralItem);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeWeapon
	export class MakeWeapon
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

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
		static void BindLevel(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Class1
		static void BindClass1(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class1);
		}

		/// \brief Binds a result's column to Class2
		static void BindClass2(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class2);
		}

		/// \brief Binds a result's column to Class3
		static void BindClass3(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class3);
		}

		/// \brief Binds a result's column to Class4
		static void BindClass4(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class4);
		}

		/// \brief Binds a result's column to Class5
		static void BindClass5(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class5);
		}

		/// \brief Binds a result's column to Class6
		static void BindClass6(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class6);
		}

		/// \brief Binds a result's column to Class7
		static void BindClass7(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class7);
		}

		/// \brief Binds a result's column to Class8
		static void BindClass8(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class8);
		}

		/// \brief Binds a result's column to Class9
		static void BindClass9(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class9);
		}

		/// \brief Binds a result's column to Class10
		static void BindClass10(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class10);
		}

		/// \brief Binds a result's column to Class11
		static void BindClass11(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class11);
		}

		/// \brief Binds a result's column to Class12
		static void BindClass12(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class12);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::MonsterSummonList
	export class MonsterSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

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
		static void BindMonsterId(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Probability
		static void BindProbability(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Probability);
		}

		/// \brief Binds a result's column to Type
		static void BindType(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

	};

	/// \brief generated nanodbc column binder for aiserver_model::ZoneInfo
	export class ZoneInfo
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

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
		static void BindServerId(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ServerId);
		}

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ZoneId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to InitX
		static void BindInitX(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitX);
		}

		/// \brief Binds a result's column to InitZ
		static void BindInitZ(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitZ);
		}

		/// \brief Binds a result's column to InitY
		static void BindInitY(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.InitY);
		}

		/// \brief Binds a result's column to Type
		static void BindType(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to RoomEvent
		static void BindRoomEvent(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RoomEvent);
		}

	};
}