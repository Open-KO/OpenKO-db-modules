module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:Npc;

namespace model
{
	class Npc;

	/// \brief generated column binder for the Npc model, using nanodbc
	export class NpcBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(Npc& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sSid", &NpcBinder::BindNpcId},
				{"strName", &NpcBinder::BindName},
				{"sPid", &NpcBinder::BindPictureId},
				{"sSize", &NpcBinder::BindSize},
				{"iWeapon1", &NpcBinder::BindWeapon1},
				{"iWeapon2", &NpcBinder::BindWeapon2},
				{"byGroup", &NpcBinder::BindGroup},
				{"byActType", &NpcBinder::BindActType},
				{"byType", &NpcBinder::BindType},
				{"byFamily", &NpcBinder::BindFamily},
				{"byRank", &NpcBinder::BindRank},
				{"byTitle", &NpcBinder::BindTitle},
				{"iSellingGroup", &NpcBinder::BindSellingGroup},
				{"sLevel", &NpcBinder::BindLevel},
				{"iExp", &NpcBinder::BindExp},
				{"iLoyalty", &NpcBinder::BindLoyalty},
				{"iHpPoint", &NpcBinder::BindHitPoints},
				{"sMpPoint", &NpcBinder::BindManaPoints},
				{"sAtk", &NpcBinder::BindAttack},
				{"sAc", &NpcBinder::BindArmor},
				{"sHitRate", &NpcBinder::BindHitRate},
				{"sEvadeRate", &NpcBinder::BindEvadeRate},
				{"sDamage", &NpcBinder::BindDamage},
				{"sAttackDelay", &NpcBinder::BindAttackDelay},
				{"bySpeed1", &NpcBinder::BindWalkSpeed},
				{"bySpeed2", &NpcBinder::BindRunSpeed},
				{"sStandtime", &NpcBinder::BindStandTime},
				{"iMagic1", &NpcBinder::BindMagic1},
				{"iMagic2", &NpcBinder::BindMagic2},
				{"iMagic3", &NpcBinder::BindMagic3},
				{"sFireR", &NpcBinder::BindFireResistance},
				{"sColdR", &NpcBinder::BindColdResistance},
				{"sLightningR", &NpcBinder::BindLightningResistance},
				{"sMagicR", &NpcBinder::BindMagicResistance},
				{"sDiseaseR", &NpcBinder::BindDiseaseResistance},
				{"sPoisonR", &NpcBinder::BindPoisonResistance},
				{"sLightR", &NpcBinder::BindLightResistance},
				{"sBulk", &NpcBinder::BindBulk},
				{"byAttackRange", &NpcBinder::BindAttackRange},
				{"bySearchRange", &NpcBinder::BindSearchRange},
				{"byTracingRange", &NpcBinder::BindTracingRange},
				{"iMoney", &NpcBinder::BindMoney},
				{"sItem", &NpcBinder::BindItem},
				{"byDirectAttack", &NpcBinder::BindDirectAttack},
				{"byMagicAttack", &NpcBinder::BindMagicAttack},
				{"byMoneyType", &NpcBinder::BindMoneyType}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::optional<std::string>>(colIndex, m.Name);
		}

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PictureId);
		}

		/// \brief Binds a result's column to Size
		static void BindSize(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon1);
		}

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon2);
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Group);
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.ActType);
		}

		/// \brief Binds a result's column to Type
		static void BindType(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Type);
		}

		/// \brief Binds a result's column to Family
		static void BindFamily(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Family);
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.Title);
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.HitPoints);
		}

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaPoints);
		}

		/// \brief Binds a result's column to Attack
		static void BindAttack(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Attack);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvadeRate);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackDelay);
		}

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
		}

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.RunSpeed);
		}

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StandTime);
		}

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic1);
		}

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic2);
		}

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic3);
		}

		/// \brief Binds a result's column to FireResistance
		static void BindFireResistance(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResistance);
		}

		/// \brief Binds a result's column to ColdResistance
		static void BindColdResistance(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResistance);
		}

		/// \brief Binds a result's column to LightningResistance
		static void BindLightningResistance(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResistance);
		}

		/// \brief Binds a result's column to MagicResistance
		static void BindMagicResistance(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResistance);
		}

		/// \brief Binds a result's column to DiseaseResistance
		static void BindDiseaseResistance(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DiseaseResistance);
		}

		/// \brief Binds a result's column to PoisonResistance
		static void BindPoisonResistance(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResistance);
		}

		/// \brief Binds a result's column to LightResistance
		static void BindLightResistance(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightResistance);
		}

		/// \brief Binds a result's column to Bulk
		static void BindBulk(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Bulk);
		}

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.AttackRange);
		}

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.SearchRange);
		}

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.TracingRange);
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to Item
		static void BindItem(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Item);
		}

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.DirectAttack);
		}

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MagicAttack);
		}

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(Npc& m, nanodbc::result& result, short colIndex)
		{
			result.get_ref<uint8_t>(colIndex, m.MoneyType);
		}

	};
}
