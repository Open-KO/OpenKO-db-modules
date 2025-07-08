module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MonsterBinder;

import FullModel:Monster;

namespace model
{
	/// \brief generated column binder for the Monster model, using nanodbc
	export class MonsterBinder
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
				{"sSid", &MonsterBinder::BindMonsterId},
				{"strName", &MonsterBinder::BindName},
				{"sPid", &MonsterBinder::BindPictureId},
				{"sSize", &MonsterBinder::BindSize},
				{"iWeapon1", &MonsterBinder::BindWeapon1},
				{"iWeapon2", &MonsterBinder::BindWeapon2},
				{"byGroup", &MonsterBinder::BindGroup},
				{"byActType", &MonsterBinder::BindActType},
				{"byType", &MonsterBinder::BindType},
				{"byFamily", &MonsterBinder::BindFamily},
				{"byRank", &MonsterBinder::BindRank},
				{"byTitle", &MonsterBinder::BindTitle},
				{"iSellingGroup", &MonsterBinder::BindSellingGroup},
				{"sLevel", &MonsterBinder::BindLevel},
				{"iExp", &MonsterBinder::BindExp},
				{"iLoyalty", &MonsterBinder::BindLoyalty},
				{"iHpPoint", &MonsterBinder::BindHitPoints},
				{"sMpPoint", &MonsterBinder::BindManaPoints},
				{"sAtk", &MonsterBinder::BindAttack},
				{"sAc", &MonsterBinder::BindArmor},
				{"sHitRate", &MonsterBinder::BindHitRate},
				{"sEvadeRate", &MonsterBinder::BindEvadeRate},
				{"sDamage", &MonsterBinder::BindDamage},
				{"sAttackDelay", &MonsterBinder::BindAttackDelay},
				{"bySpeed1", &MonsterBinder::BindWalkSpeed},
				{"bySpeed2", &MonsterBinder::BindRunSpeed},
				{"sStandtime", &MonsterBinder::BindStandTime},
				{"iMagic1", &MonsterBinder::BindMagic1},
				{"iMagic2", &MonsterBinder::BindMagic2},
				{"iMagic3", &MonsterBinder::BindMagic3},
				{"sFireR", &MonsterBinder::BindFireResistance},
				{"sColdR", &MonsterBinder::BindColdResistance},
				{"sLightningR", &MonsterBinder::BindLightningResistance},
				{"sMagicR", &MonsterBinder::BindMagicResistance},
				{"sDiseaseR", &MonsterBinder::BindDiseaseResistance},
				{"sPoisonR", &MonsterBinder::BindPoisonResistance},
				{"sLightR", &MonsterBinder::BindLightResistance},
				{"sBulk", &MonsterBinder::BindBulk},
				{"byAttackRange", &MonsterBinder::BindAttackRange},
				{"bySearchRange", &MonsterBinder::BindSearchRange},
				{"byTracingRange", &MonsterBinder::BindTracingRange},
				{"iMoney", &MonsterBinder::BindMoney},
				{"sItem", &MonsterBinder::BindItem},
				{"byDirectAttack", &MonsterBinder::BindDirectAttack},
				{"byMagicAttack", &MonsterBinder::BindMagicAttack},
				{"byMoneyType", &MonsterBinder::BindMoneyType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MonsterId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PictureId);
		}

		/// \brief Binds a result's column to Size
		static void BindSize(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon1);
		}

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon2);
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Group);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ActType);
		}

		/// \brief Binds a result's column to Type
		static void BindType(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Family
		static void BindFamily(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Family);
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Title);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.HitPoints);
		}

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaPoints);
		}

		/// \brief Binds a result's column to Attack
		static void BindAttack(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Attack);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvadeRate);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackDelay);
		}

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
		}

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RunSpeed);
		}

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StandTime);
		}

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic1);
		}

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic2);
		}

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic3);
		}

		/// \brief Binds a result's column to FireResistance
		static void BindFireResistance(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResistance);
		}

		/// \brief Binds a result's column to ColdResistance
		static void BindColdResistance(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResistance);
		}

		/// \brief Binds a result's column to LightningResistance
		static void BindLightningResistance(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResistance);
		}

		/// \brief Binds a result's column to MagicResistance
		static void BindMagicResistance(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResistance);
		}

		/// \brief Binds a result's column to DiseaseResistance
		static void BindDiseaseResistance(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DiseaseResistance);
		}

		/// \brief Binds a result's column to PoisonResistance
		static void BindPoisonResistance(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResistance);
		}

		/// \brief Binds a result's column to LightResistance
		static void BindLightResistance(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightResistance);
		}

		/// \brief Binds a result's column to Bulk
		static void BindBulk(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Bulk);
		}

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.AttackRange);
		}

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SearchRange);
		}

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TracingRange);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to Item
		static void BindItem(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Item);
		}

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DirectAttack);
		}

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MagicAttack);
		}

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(model::Monster& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MoneyType);
		}

	};
}
