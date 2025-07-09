module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:Npc;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::Npc
	export class Npc
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::Npc& m, const nanodbc::result& result, short colIndex);

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
				{"sFireR", &Npc::BindFireResistance},
				{"sColdR", &Npc::BindColdResistance},
				{"sLightningR", &Npc::BindLightningResistance},
				{"sMagicR", &Npc::BindMagicResistance},
				{"sDiseaseR", &Npc::BindDiseaseResistance},
				{"sPoisonR", &Npc::BindPoisonResistance},
				{"sLightR", &Npc::BindLightResistance},
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
		static void BindNpcId(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PictureId);
		}

		/// \brief Binds a result's column to Size
		static void BindSize(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon1);
		}

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon2);
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Group);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ActType);
		}

		/// \brief Binds a result's column to Type
		static void BindType(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Family
		static void BindFamily(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Family);
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Title);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.HitPoints);
		}

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaPoints);
		}

		/// \brief Binds a result's column to Attack
		static void BindAttack(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Attack);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvadeRate);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackDelay);
		}

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.WalkSpeed);
		}

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RunSpeed);
		}

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StandTime);
		}

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic1);
		}

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic2);
		}

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic3);
		}

		/// \brief Binds a result's column to FireResistance
		static void BindFireResistance(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResistance);
		}

		/// \brief Binds a result's column to ColdResistance
		static void BindColdResistance(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResistance);
		}

		/// \brief Binds a result's column to LightningResistance
		static void BindLightningResistance(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResistance);
		}

		/// \brief Binds a result's column to MagicResistance
		static void BindMagicResistance(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResistance);
		}

		/// \brief Binds a result's column to DiseaseResistance
		static void BindDiseaseResistance(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DiseaseResistance);
		}

		/// \brief Binds a result's column to PoisonResistance
		static void BindPoisonResistance(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResistance);
		}

		/// \brief Binds a result's column to LightResistance
		static void BindLightResistance(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightResistance);
		}

		/// \brief Binds a result's column to Bulk
		static void BindBulk(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Bulk);
		}

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackRange);
		}

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SearchRange);
		}

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TracingRange);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to Item
		static void BindItem(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Item);
		}

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DirectAttack);
		}

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicAttack);
		}

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MoneyType);
		}

	};
}
