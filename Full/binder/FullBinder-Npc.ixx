module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:Npc;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::Npc
	export class Npc
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Npc& m, const nanodbc::result& result, short colIndex);

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
		static void BindNpcId(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.NpcId);
		}

		/// \brief Binds a result's column to Name
		static void BindName(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Name.reset();
			}
			else
			{
				m.Name = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PictureId);
		}

		/// \brief Binds a result's column to Size
		static void BindSize(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Size);
		}

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon1);
		}

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Weapon2);
		}

		/// \brief Binds a result's column to Group
		static void BindGroup(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.Group = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to ActType
		static void BindActType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.ActType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Type
		static void BindType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.Type = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Family
		static void BindFamily(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.Family = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.Rank = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.Title = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.SellingGroup);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.HitPoints);
		}

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ManaPoints);
		}

		/// \brief Binds a result's column to Attack
		static void BindAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Attack);
		}

		/// \brief Binds a result's column to Armor
		static void BindArmor(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Armor);
		}

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HitRate);
		}

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.EvadeRate);
		}

		/// \brief Binds a result's column to Damage
		static void BindDamage(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Damage);
		}

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.AttackDelay);
		}

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.WalkSpeed = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.RunSpeed = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StandTime);
		}

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic1);
		}

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic2);
		}

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Magic3);
		}

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.FireResist);
		}

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.ColdResist);
		}

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightningResist);
		}

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.MagicResist);
		}

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.DiseaseResist);
		}

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.PoisonResist);
		}

		/// \brief Binds a result's column to LightResist
		static void BindLightResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.LightResist);
		}

		/// \brief Binds a result's column to Bulk
		static void BindBulk(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Bulk);
		}

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.AttackRange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.SearchRange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.TracingRange = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Money);
		}

		/// \brief Binds a result's column to Item
		static void BindItem(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Item);
		}

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.DirectAttack = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.MagicAttack = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
		{
			m.MoneyType = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

	};
}
