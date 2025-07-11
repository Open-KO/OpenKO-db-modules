module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:UserData;

import FullModel;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::UserData
	export class UserData
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserData& m, const nanodbc::result& result, short colIndex);

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
		static void BindUserId(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::string>(colIndex, m.UserId);
		}

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Nation = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Race
		static void BindRace(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Race = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Class
		static void BindClass(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Class);
		}

		/// \brief Binds a result's column to HairColor
		static void BindHairColor(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.HairColor = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Rank = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Title
		static void BindTitle(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Title = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Level = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Exp
		static void BindExp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Exp);
		}

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Loyalty);
		}

		/// \brief Binds a result's column to Face
		static void BindFace(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Face = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to City
		static void BindCity(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.City = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to KnightsId
		static void BindKnightsId(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.KnightsId);
		}

		/// \brief Binds a result's column to Fame
		static void BindFame(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Fame = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Hp
		static void BindHp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Hp);
		}

		/// \brief Binds a result's column to Mp
		static void BindMp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Mp);
		}

		/// \brief Binds a result's column to Sp
		static void BindSp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Sp);
		}

		/// \brief Binds a result's column to Strength
		static void BindStrength(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Strength = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Stamina
		static void BindStamina(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Stamina = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Dexterity = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Intelligence = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Charisma = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Authority
		static void BindAuthority(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Authority = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to StatPoints
		static void BindStatPoints(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.StatPoints = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Gold
		static void BindGold(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.Gold);
		}

		/// \brief Binds a result's column to Zone
		static void BindZone(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			m.Zone = static_cast<uint8_t>(result.get<int16_t>(colIndex));
		}

		/// \brief Binds a result's column to Bind
		static void BindBind(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Bind.reset();
			}
			else
			{
				m.Bind = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to PosX
		static void BindPosX(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosX);
		}

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosZ);
		}

		/// \brief Binds a result's column to PosY
		static void BindPosY(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.PosY);
		}

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.DwTime);
		}

		/// \brief Binds a result's column to SkillData
		static void BindSkillData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.SkillData.reset();
			}
			else
			{
				m.SkillData = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to ItemData
		static void BindItemData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.ItemData.reset();
			}
			else
			{
				m.ItemData = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to Serial
		static void BindSerial(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Serial.reset();
			}
			else
			{
				m.Serial = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to QuestCount
		static void BindQuestCount(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.QuestCount);
		}

		/// \brief Binds a result's column to QuestData
		static void BindQuestData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.QuestData.reset();
			}
			else
			{
				m.QuestData = result.get<std::string>(colIndex);
			}
		}

		/// \brief Binds a result's column to MannerPoint
		static void BindMannerPoint(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.MannerPoint);
		}

		/// \brief Binds a result's column to LoyaltyMonthly
		static void BindLoyaltyMonthly(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int32_t>(colIndex, m.LoyaltyMonthly);
		}

		/// \brief Binds a result's column to CreateTime
		static void BindCreateTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<std::time_t>(colIndex, m.CreateTime);
		}

		/// \brief Binds a result's column to UpdateTime
		static void BindUpdateTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.UpdateTime.reset();
			}
			else
			{
				m.UpdateTime = result.get<std::time_t>(colIndex);
			}
		}

	};
}
