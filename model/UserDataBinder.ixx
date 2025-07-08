module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:UserDataBinder;

import :UserData;

namespace model
{
	/// \brief generated column binder for the UserData model, using nanodbc
	export class UserDataBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(UserData& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"strUserId", &UserDataBinder::BindUserId},
				{"Nation", &UserDataBinder::BindNation},
				{"Race", &UserDataBinder::BindRace},
				{"Class", &UserDataBinder::BindClass},
				{"HairColor", &UserDataBinder::BindHairColor},
				{"Rank", &UserDataBinder::BindRank},
				{"Title", &UserDataBinder::BindTitle},
				{"Level", &UserDataBinder::BindLevel},
				{"Exp", &UserDataBinder::BindExp},
				{"Loyalty", &UserDataBinder::BindLoyalty},
				{"Face", &UserDataBinder::BindFace},
				{"City", &UserDataBinder::BindCity},
				{"Knights", &UserDataBinder::BindKnightsId},
				{"Fame", &UserDataBinder::BindFame},
				{"Hp", &UserDataBinder::BindHp},
				{"Mp", &UserDataBinder::BindMp},
				{"Sp", &UserDataBinder::BindSp},
				{"Strong", &UserDataBinder::BindStrength},
				{"Sta", &UserDataBinder::BindStamina},
				{"Dex", &UserDataBinder::BindDexterity},
				{"Intel", &UserDataBinder::BindIntelligence},
				{"Cha", &UserDataBinder::BindCharisma},
				{"Authority", &UserDataBinder::BindAuthority},
				{"Points", &UserDataBinder::BindStatPoints},
				{"Gold", &UserDataBinder::BindGold},
				{"Zone", &UserDataBinder::BindZone},
				{"Bind", &UserDataBinder::BindBind},
				{"PX", &UserDataBinder::BindPosX},
				{"PZ", &UserDataBinder::BindPosZ},
				{"PY", &UserDataBinder::BindPosY},
				{"dwTime", &UserDataBinder::BindDwTime},
				{"strSkill", &UserDataBinder::BindSkillData},
				{"strItem", &UserDataBinder::BindItemData},
				{"strSerial", &UserDataBinder::BindSerial},
				{"sQuestCount", &UserDataBinder::BindQuestCount},
				{"strQuest", &UserDataBinder::BindQuestData},
				{"MannerPoint", &UserDataBinder::BindMannerPoint},
				{"LoyaltyMonthly", &UserDataBinder::BindLoyaltyMonthly},
				{"CreateTime", &UserDataBinder::BindCreateTime},
				{"UpdateTime", &UserDataBinder::BindUpdateTime}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to UserId
		static void BindUserId(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Nation);
		}

		/// \brief Binds a result's column to Race
		static void BindRace(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Race);
		}

		/// \brief Binds a result's column to Class
		static void BindClass(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to HairColor
		static void BindHairColor(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.HairColor);
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Rank);
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Title);
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Level);
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to Face
		static void BindFace(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Face);
		}

		/// \brief Binds a result's column to City
		static void BindCity(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.City);
		}

		/// \brief Binds a result's column to KnightsId
		static void BindKnightsId(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KnightsId);
		}

		/// \brief Binds a result's column to Fame
		static void BindFame(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Fame);
		}

		/// \brief Binds a result's column to Hp
		static void BindHp(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Hp);
		}

		/// \brief Binds a result's column to Mp
		static void BindMp(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Mp);
		}

		/// \brief Binds a result's column to Sp
		static void BindSp(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Sp);
		}

		/// \brief Binds a result's column to Strength
		static void BindStrength(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Strength);
		}

		/// \brief Binds a result's column to Stamina
		static void BindStamina(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Stamina);
		}

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Dexterity);
		}

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Intelligence);
		}

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Charisma);
		}

		/// \brief Binds a result's column to Authority
		static void BindAuthority(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Authority);
		}

		/// \brief Binds a result's column to StatPoints
		static void BindStatPoints(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.StatPoints);
		}

		/// \brief Binds a result's column to Gold
		static void BindGold(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Gold);
		}

		/// \brief Binds a result's column to Zone
		static void BindZone(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Zone);
		}

		/// \brief Binds a result's column to Bind
		static void BindBind(UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Bind = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to PosX
		static void BindPosX(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosX);
		}

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosZ);
		}

		/// \brief Binds a result's column to PosY
		static void BindPosY(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosY);
		}

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DwTime);
		}

		/// \brief Binds a result's column to SkillData
		static void BindSkillData(UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.SkillData = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to ItemData
		static void BindItemData(UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.ItemData = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to Serial
		static void BindSerial(UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Serial = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to QuestCount
		static void BindQuestCount(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.QuestCount);
		}

		/// \brief Binds a result's column to QuestData
		static void BindQuestData(UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.QuestData = result.get<std::string>(colIndex);
		}

		/// \brief Binds a result's column to MannerPoint
		static void BindMannerPoint(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MannerPoint);
		}

		/// \brief Binds a result's column to LoyaltyMonthly
		static void BindLoyaltyMonthly(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LoyaltyMonthly);
		}

		/// \brief Binds a result's column to CreateTime
		static void BindCreateTime(UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.CreateTime);
		}

		/// \brief Binds a result's column to UpdateTime
		static void BindUpdateTime(UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.UpdateTime = result.get<std::time_t>(colIndex);
		}

	};
}
