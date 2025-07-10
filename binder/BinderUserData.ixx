module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:UserData;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderUserData
	export class UserDataBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::UserData& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserId", &UserData::BindUserId},
				{"Nation", &UserData::BindNation},
				{"Race", &UserData::BindRace},
				{"Class", &UserData::BindClass},
				{"HairColor", &UserData::BindHairColor},
				{"Rank", &UserData::BindRank},
				{"Title", &UserData::BindTitle},
				{"Level", &UserData::BindLevel},
				{"Exp", &UserData::BindExp},
				{"Loyalty", &UserData::BindLoyalty},
				{"Face", &UserData::BindFace},
				{"City", &UserData::BindCity},
				{"Knights", &UserData::BindKnightsId},
				{"Fame", &UserData::BindFame},
				{"Hp", &UserData::BindHp},
				{"Mp", &UserData::BindMp},
				{"Sp", &UserData::BindSp},
				{"Strong", &UserData::BindStrength},
				{"Sta", &UserData::BindStamina},
				{"Dex", &UserData::BindDexterity},
				{"Intel", &UserData::BindIntelligence},
				{"Cha", &UserData::BindCharisma},
				{"Authority", &UserData::BindAuthority},
				{"Points", &UserData::BindStatPoints},
				{"Gold", &UserData::BindGold},
				{"Zone", &UserData::BindZone},
				{"Bind", &UserData::BindBind},
				{"PX", &UserData::BindPosX},
				{"PZ", &UserData::BindPosZ},
				{"PY", &UserData::BindPosY},
				{"dwTime", &UserData::BindDwTime},
				{"strSkill", &UserData::BindSkillData},
				{"strItem", &UserData::BindItemData},
				{"strSerial", &UserData::BindSerial},
				{"sQuestCount", &UserData::BindQuestCount},
				{"strQuest", &UserData::BindQuestData},
				{"MannerPoint", &UserData::BindMannerPoint},
				{"LoyaltyMonthly", &UserData::BindLoyaltyMonthly},
				{"CreateTime", &UserData::BindCreateTime},
				{"UpdateTime", &UserData::BindUpdateTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Race
		static void BindRace(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Race);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to HairColor
		static void BindHairColor(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HairColor);
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Title);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to Face
		static void BindFace(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Face);
		}

		/// \brief Binds a result's column to City
		static void BindCity(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.City);
		}

		/// \brief Binds a result's column to KnightsId
		static void BindKnightsId(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KnightsId);
		}

		/// \brief Binds a result's column to Fame
		static void BindFame(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Fame);
		}

		/// \brief Binds a result's column to Hp
		static void BindHp(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Hp);
		}

		/// \brief Binds a result's column to Mp
		static void BindMp(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Mp);
		}

		/// \brief Binds a result's column to Sp
		static void BindSp(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Sp);
		}

		/// \brief Binds a result's column to Strength
		static void BindStrength(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Strength);
		}

		/// \brief Binds a result's column to Stamina
		static void BindStamina(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Stamina);
		}

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Dexterity);
		}

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Intelligence);
		}

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Charisma);
		}

		/// \brief Binds a result's column to Authority
		static void BindAuthority(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Authority);
		}

		/// \brief Binds a result's column to StatPoints
		static void BindStatPoints(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StatPoints);
		}

		/// \brief Binds a result's column to Gold
		static void BindGold(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Gold);
		}

		/// \brief Binds a result's column to Zone
		static void BindZone(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Zone);
		}

		/// \brief Binds a result's column to Bind
		static void BindBind(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Bind = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to PosX
		static void BindPosX(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosX);
		}

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosZ);
		}

		/// \brief Binds a result's column to PosY
		static void BindPosY(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosY);
		}

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DwTime);
		}

		/// \brief Binds a result's column to SkillData
		static void BindSkillData(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.SkillData = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ItemData
		static void BindItemData(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemData = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Serial
		static void BindSerial(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Serial = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to QuestCount
		static void BindQuestCount(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.QuestCount);
		}

		/// \brief Binds a result's column to QuestData
		static void BindQuestData(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.QuestData = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to MannerPoint
		static void BindMannerPoint(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MannerPoint);
		}

		/// \brief Binds a result's column to LoyaltyMonthly
		static void BindLoyaltyMonthly(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LoyaltyMonthly);
		}

		/// \brief Binds a result's column to CreateTime
		static void BindCreateTime(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.CreateTime);
		}

		/// \brief Binds a result's column to UpdateTime
		static void BindUpdateTime(model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.UpdateTime = result.get<std::time_t>(colIndex);
		}

	};
}
