module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:Monster;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::Monster
	export class Monster
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::Monster& m, const nanodbc::result& result, short colIndex);

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
				{"sFireR", &Monster::BindFireResistance},
				{"sColdR", &Monster::BindColdResistance},
				{"sLightningR", &Monster::BindLightningResistance},
				{"sMagicR", &Monster::BindMagicResistance},
				{"sDiseaseR", &Monster::BindDiseaseResistance},
				{"sPoisonR", &Monster::BindPoisonResistance},
				{"sLightR", &Monster::BindLightResistance},
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
		static void BindMonsterId(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			m.Name = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PictureId);
		}

		/// \brief Binds a result's column to Size
		static void BindSize(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon1);
		}

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon2);
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Group);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ActType);
		}

		/// \brief Binds a result's column to Type
		static void BindType(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Family
		static void BindFamily(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Family);
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Title);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.HitPoints);
		}

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaPoints);
		}

		/// \brief Binds a result's column to Attack
		static void BindAttack(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Attack);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvadeRate);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackDelay);
		}

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.WalkSpeed);
		}

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.RunSpeed);
		}

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StandTime);
		}

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic1);
		}

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic2);
		}

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic3);
		}

		/// \brief Binds a result's column to FireResistance
		static void BindFireResistance(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResistance);
		}

		/// \brief Binds a result's column to ColdResistance
		static void BindColdResistance(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResistance);
		}

		/// \brief Binds a result's column to LightningResistance
		static void BindLightningResistance(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResistance);
		}

		/// \brief Binds a result's column to MagicResistance
		static void BindMagicResistance(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResistance);
		}

		/// \brief Binds a result's column to DiseaseResistance
		static void BindDiseaseResistance(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DiseaseResistance);
		}

		/// \brief Binds a result's column to PoisonResistance
		static void BindPoisonResistance(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResistance);
		}

		/// \brief Binds a result's column to LightResistance
		static void BindLightResistance(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightResistance);
		}

		/// \brief Binds a result's column to Bulk
		static void BindBulk(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Bulk);
		}

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackRange);
		}

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.SearchRange);
		}

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.TracingRange);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to Item
		static void BindItem(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Item);
		}

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DirectAttack);
		}

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicAttack);
		}

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(model::Monster& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MoneyType);
		}

	};
}
