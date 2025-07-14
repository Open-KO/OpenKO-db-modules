module;

#include <cstdint>
#include <memory>
#include <nanodbc/nanodbc.h>

export module Procedures;


namespace procedures
{
	export class StoredProcedure
	{
	protected:
		StoredProcedure(nanodbc::connection& conn)
			: _conn(conn), _stmt(conn)
		{
			_flushed = false;
		}

		~StoredProcedure()
		{
			try
			{
				// Flush to ensure all output and return variables are always written.
				flush();
			}
			catch (const nanodbc::database_error&)
			{
				// We should not throw exceptions from within a destructor.
				// We no longer care about the state of this statement anyway.
			}
		}

		std::weak_ptr<nanodbc::result> execute()
		{
			_flushed = false;
			_result = std::make_shared<nanodbc::result>(_stmt.execute());
			return _result;
		}

	public:
		void flush()
		{
			if (_flushed
				|| _result == nullptr)
				return;

			try
			{
				while (_result->next()
					|| _result->next_result())
				{
				}
			}
			catch (const nanodbc::database_error& ex)
			{
				// This will trigger normally if no result sets are available,
				// which is typical behaviour for most stored procedures.
				if (ex.state() != SqlState_InvalidCursorState)
					throw;
			}

			_flushed = true;
		}

	protected:
		nanodbc::connection& _conn;
		nanodbc::statement _stmt;
		std::shared_ptr<nanodbc::result> _result;
		bool _flushed;

		static const nanodbc::string SqlState_InvalidCursorState;
	};

	const nanodbc::string StoredProcedure::SqlState_InvalidCursorState = NANODBC_TEXT("24000");
	
	/// \brief MANUAL_TODO
	/// \class AccountLogin
	export class AccountLogin : public StoredProcedure
	{
	public:
		AccountLogin(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL ACCOUNT_LOGIN(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const char* Password, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, Password);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class AccountLogout
	export class AccountLogout : public StoredProcedure
	{
	public:
		AccountLogout(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL ACCOUNT_LOGOUT(?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const int32_t* LogoutCode, int16_t* nRet, int16_t* nRet2)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, LogoutCode);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(3, nRet2, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ChangeCastleCommerce
	export class ChangeCastleCommerce : public StoredProcedure
	{
	public:
		ChangeCastleCommerce(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL CHANGE_CASTLE_COMMERCE(?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* sCastleIndex, const int16_t* byType, const int32_t* nMoradonTariff, const int32_t* nDellosTariff, const int32_t* nMoney, const char* strACID, const char* strCharID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, sCastleIndex);
			_stmt.bind(1, byType);
			_stmt.bind(2, nMoradonTariff);
			_stmt.bind(3, nDellosTariff);
			_stmt.bind(4, nMoney);
			_stmt.bind(5, strACID);
			_stmt.bind(6, strCharID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ChangeCopySerialItem
	export class ChangeCopySerialItem : public StoredProcedure
	{
	public:
		ChangeCopySerialItem(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL CHANGE_COPY_SERIAL_ITEM()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ChangeCopySerialItemTable
	export class ChangeCopySerialItemTable : public StoredProcedure
	{
	public:
		ChangeCopySerialItemTable(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL CHANGE_COPY_SERIAL_ITEM_TABLE()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ChangeKnightsCape
	export class ChangeKnightsCape : public StoredProcedure
	{
	public:
		ChangeKnightsCape(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL CHANGE_KNIGHTS_CAPE(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* KnightsIndex, const int16_t* CapeIndex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, KnightsIndex);
			_stmt.bind(1, CapeIndex);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class CheckKnights
	export class CheckKnights : public StoredProcedure
	{
	public:
		CheckKnights(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL CHECK_KNIGHTS()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ClearRemainUsers
	export class ClearRemainUsers : public StoredProcedure
	{
	public:
		ClearRemainUsers(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL CLEAR_REMAIN_USERS(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strServerIP)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strServerIP);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class CreateKnights
	export class CreateKnights : public StoredProcedure
	{
	public:
		CreateKnights(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL CREATE_KNIGHTS(?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, const int16_t* index, const int16_t* nation, const int16_t* community, const char* strName, const char* strChief)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, index);
			_stmt.bind(2, nation);
			_stmt.bind(3, community);
			_stmt.bind(4, strName);
			_stmt.bind(5, strChief);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class CreateKnights2
	export class CreateKnights2 : public StoredProcedure
	{
	public:
		CreateKnights2(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL CREATE_KNIGHTS2(?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, int16_t* index, const int16_t* nation, const int16_t* community, const char* strName, const char* strChief)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, index, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(2, nation);
			_stmt.bind(3, community);
			_stmt.bind(4, strName);
			_stmt.bind(5, strChief);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class CreateNewChar
	export class CreateNewChar : public StoredProcedure
	{
	public:
		CreateNewChar(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL CREATE_NEW_CHAR(?,?,?,?,?,?,?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, const char* AccountID, const int16_t* index, const char* CharID, const int16_t* Race, const int16_t* Class, const int16_t* Hair, const int16_t* Face, const int16_t* Str, const int16_t* Sta, const int16_t* Dex, const int16_t* Intel, const int16_t* Cha)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, index);
			_stmt.bind(3, CharID);
			_stmt.bind(4, Race);
			_stmt.bind(5, Class);
			_stmt.bind(6, Hair);
			_stmt.bind(7, Face);
			_stmt.bind(8, Str);
			_stmt.bind(9, Sta);
			_stmt.bind(10, Dex);
			_stmt.bind(11, Intel);
			_stmt.bind(12, Cha);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class DeleteFriendList
	export class DeleteFriendList : public StoredProcedure
	{
	public:
		DeleteFriendList(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL DELETE_FRIEND_LIST(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strUserID, const char* strFriend, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strUserID);
			_stmt.bind(1, strFriend);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class DeleteKnights
	export class DeleteKnights : public StoredProcedure
	{
	public:
		DeleteKnights(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL DELETE_KNIGHTS(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, const int16_t* knightsindex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, knightsindex);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class EditerKnights
	export class EditerKnights : public StoredProcedure
	{
	public:
		EditerKnights(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL EDITER_KNIGHTS()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ExecKnightsUser
	export class ExecKnightsUser : public StoredProcedure
	{
	public:
		ExecKnightsUser(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL EXEC_KNIGHTS_USER()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class GivePremium
	export class GivePremium : public StoredProcedure
	{
	public:
		GivePremium(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL GIVE_PREMIUM(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strAccountID, const char* strUserID, const int32_t* days)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
			_stmt.bind(1, strUserID);
			_stmt.bind(2, days);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class InsertFriendList
	export class InsertFriendList : public StoredProcedure
	{
	public:
		InsertFriendList(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL INSERT_FRIEND_LIST(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strUserID, const char* strFriend, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strUserID);
			_stmt.bind(1, strFriend);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class InsertHacktoolUser
	export class InsertHacktoolUser : public StoredProcedure
	{
	public:
		InsertHacktoolUser(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL INSERT_HACKTOOL_USER(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const char* CharID, const char* HackToolName)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, HackToolName);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class InsertProgramCheckUser
	export class InsertProgramCheckUser : public StoredProcedure
	{
	public:
		InsertProgramCheckUser(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL INSERT_PROGRAM_CHECK_USER(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strAccountID, const char* strCharID, const char* HackToolName)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
			_stmt.bind(1, strCharID);
			_stmt.bind(2, HackToolName);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingCandidacyNoticeBoardProc
	export class KingCandidacyNoticeBoardProc : public StoredProcedure
	{
	public:
		KingCandidacyNoticeBoardProc(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_CANDIDACY_NOTICE_BOARD_PROC(?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strUserID, const int16_t* sNoticeLen, const int16_t* byNation, const char* strNotice)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strUserID);
			_stmt.bind(1, sNoticeLen);
			_stmt.bind(2, byNation);
			_stmt.bind(3, strNotice);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingCandidacyRecommend
	export class KingCandidacyRecommend : public StoredProcedure
	{
	public:
		KingCandidacyRecommend(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_CANDIDACY_RECOMMEND(?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* CharID_1, const char* CharID_2, const int16_t* nNation, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, CharID_1);
			_stmt.bind(1, CharID_2);
			_stmt.bind(2, nNation);
			_stmt.bind(3, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingChangeTax
	export class KingChangeTax : public StoredProcedure
	{
	public:
		KingChangeTax(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_CHANGE_TAX(?,?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byType, const int16_t* byNation, const int32_t* nKarusTax1, const int32_t* nKarusTax2, const int32_t* nKarusTax3, const int32_t* nElmoTax1, const int32_t* nElmoTax2, const int32_t* nElmoTax3)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, nKarusTax1);
			_stmt.bind(3, nKarusTax2);
			_stmt.bind(4, nKarusTax3);
			_stmt.bind(5, nElmoTax1);
			_stmt.bind(6, nElmoTax2);
			_stmt.bind(7, nElmoTax3);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingElectionProc
	export class KingElectionProc : public StoredProcedure
	{
	public:
		KingElectionProc(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_ELECTION_PROC(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strAccountID, const char* strCharID, const int16_t* byNation, const char* strCandidacyID, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
			_stmt.bind(1, strCharID);
			_stmt.bind(2, byNation);
			_stmt.bind(3, strCandidacyID);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentElection
	export class KingImpeachmentElection : public StoredProcedure
	{
	public:
		KingImpeachmentElection(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_IMPEACHMENT_ELECTION(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byResult, const int16_t* byNation, const char* strAccountID, const char* strCharID, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byResult);
			_stmt.bind(1, byNation);
			_stmt.bind(2, strAccountID);
			_stmt.bind(3, strCharID);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentRequestElection
	export class KingImpeachmentRequestElection : public StoredProcedure
	{
	public:
		KingImpeachmentRequestElection(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_IMPEACHMENT_REQUEST_ELECTION(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byType, const int16_t* byNation, const char* strUserID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, strUserID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentResult
	export class KingImpeachmentResult : public StoredProcedure
	{
	public:
		KingImpeachmentResult(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_IMPEACHMENT_RESULT(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byNation, int16_t* nTotalMan, int16_t* nAgreeMan)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byNation);
			_stmt.bind(1, nTotalMan, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(2, nAgreeMan, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingInsertPrizeEvent
	export class KingInsertPrizeEvent : public StoredProcedure
	{
	public:
		KingInsertPrizeEvent(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_INSERT_PRIZE_EVENT(?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byType, const int16_t* byNation, const int32_t* nAmount, const char* strUserID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, nAmount);
			_stmt.bind(3, strUserID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionList
	export class KingUpdateElectionList : public StoredProcedure
	{
	public:
		KingUpdateElectionList(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_UPDATE_ELECTION_LIST(?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byDBType, const int16_t* byType, const int16_t* byNation, const int16_t* nKnights, const int32_t* nAmount, const char* strUserID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byDBType);
			_stmt.bind(1, byType);
			_stmt.bind(2, byNation);
			_stmt.bind(3, nKnights);
			_stmt.bind(4, nAmount);
			_stmt.bind(5, strUserID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionSchdule
	export class KingUpdateElectionSchdule : public StoredProcedure
	{
	public:
		KingUpdateElectionSchdule(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_UPDATE_ELECTION_SCHDULE(?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byType, const int16_t* byNation, const int16_t* sYear, const int16_t* byMonth, const int16_t* byDay, const int16_t* byHour, const int16_t* byMinute)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, sYear);
			_stmt.bind(3, byMonth);
			_stmt.bind(4, byDay);
			_stmt.bind(5, byHour);
			_stmt.bind(6, byMinute);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionStatus
	export class KingUpdateElectionStatus : public StoredProcedure
	{
	public:
		KingUpdateElectionStatus(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_UPDATE_ELECTION_STATUS(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byType, const int16_t* byNation)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateImpeachmentStatus
	export class KingUpdateImpeachmentStatus : public StoredProcedure
	{
	public:
		KingUpdateImpeachmentStatus(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_UPDATE_IMPEACHMENT_STATUS(?,?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byType, const int16_t* byNation, const int16_t* sYear, const int16_t* byMonth, const int16_t* byDay, const int16_t* byHour, const int16_t* byMinute, const char* strUserID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, sYear);
			_stmt.bind(3, byMonth);
			_stmt.bind(4, byDay);
			_stmt.bind(5, byHour);
			_stmt.bind(6, byMinute);
			_stmt.bind(7, strUserID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateNoahOrExpEvent
	export class KingUpdateNoahOrExpEvent : public StoredProcedure
	{
	public:
		KingUpdateNoahOrExpEvent(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KING_UPDATE_NOAH_OR_EXP_EVENT(?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byType, const int16_t* byNation, const int16_t* byAmount, const int16_t* byDay, const int16_t* byHout, const int16_t* byMinute, const int16_t* sDurationTime)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, byNation);
			_stmt.bind(2, byAmount);
			_stmt.bind(3, byDay);
			_stmt.bind(4, byHout);
			_stmt.bind(5, byMinute);
			_stmt.bind(6, sDurationTime);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KnightsRatingUpdate
	export class KnightsRatingUpdate : public StoredProcedure
	{
	public:
		KnightsRatingUpdate(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL KNIGHTS_RATING_UPDATE()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadAccountCharid
	export class LoadAccountCharid : public StoredProcedure
	{
	public:
		LoadAccountCharid(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{? = CALL LOAD_ACCOUNT_CHARID(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int* returnValue, const char* Accountid)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, returnValue, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, Accountid);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadCharInfo
	export class LoadCharInfo : public StoredProcedure
	{
	public:
		LoadCharInfo(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL LOAD_CHAR_INFO(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* CharId, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, CharId);
			_stmt.bind(1, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadKnightsMembers
	export class LoadKnightsMembers : public StoredProcedure
	{
	public:
		LoadKnightsMembers(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL LOAD_KNIGHTS_MEMBERS(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* knightsindex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, knightsindex);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadPremiumServiceUser
	export class LoadPremiumServiceUser : public StoredProcedure
	{
	public:
		LoadPremiumServiceUser(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL LOAD_PREMIUM_SERVICE_USER(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, int32_t* type, int32_t* days)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, type, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(2, days, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadRentalData
	export class LoadRentalData : public StoredProcedure
	{
	public:
		LoadRentalData(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL LOAD_RENTAL_DATA(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strAccountID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadSavedMagic
	export class LoadSavedMagic : public StoredProcedure
	{
	public:
		LoadSavedMagic(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL LOAD_SAVED_MAGIC(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* CharId, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, CharId);
			_stmt.bind(1, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadUserData
	export class LoadUserData : public StoredProcedure
	{
	public:
		LoadUserData(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL LOAD_USER_DATA(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const char* id, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, id);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadWebItemmall
	export class LoadWebItemmall : public StoredProcedure
	{
	public:
		LoadWebItemmall(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL LOAD_WEB_ITEMMALL(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strCharID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class NationSelect
	export class NationSelect : public StoredProcedure
	{
	public:
		NationSelect(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL NATION_SELECT(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, const char* AccountID, const int16_t* Nation)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, Nation);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ProcInsertCurrentuser
	export class ProcInsertCurrentuser : public StoredProcedure
	{
	public:
		ProcInsertCurrentuser(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL PROC_INSERT_CURRENTUSER(?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const char* CharID, const int16_t* nServerNo, const char* strServerIP, const char* ClientIP, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, nServerNo);
			_stmt.bind(3, strServerIP);
			_stmt.bind(4, ClientIP);
			_stmt.bind(5, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RankKnights
	export class RankKnights : public StoredProcedure
	{
	public:
		RankKnights(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL RANK_KNIGHTS()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemCancel
	export class RentalItemCancel : public StoredProcedure
	{
	public:
		RentalItemCancel(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL RENTAL_ITEM_CANCEL(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const char* CharID, const int32_t* nRentalIndex, const int32_t* nItemNumber, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, nRentalIndex);
			_stmt.bind(3, nItemNumber);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemDestory
	export class RentalItemDestory : public StoredProcedure
	{
	public:
		RentalItemDestory(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL RENTAL_ITEM_DESTORY(?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const char* CharID, const int32_t* nItemNumber, const int32_t* nRentalIndex, const int16_t* nDurability, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, nItemNumber);
			_stmt.bind(3, nRentalIndex);
			_stmt.bind(4, nDurability);
			_stmt.bind(5, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemDurabilityUpdate
	export class RentalItemDurabilityUpdate : public StoredProcedure
	{
	public:
		RentalItemDurabilityUpdate(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL RENTAL_ITEM_DURABILITY_UPDATE(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int32_t* nRentalIndex, const int32_t* nDurability)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRentalIndex);
			_stmt.bind(1, nDurability);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemLend
	export class RentalItemLend : public StoredProcedure
	{
	public:
		RentalItemLend(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL RENTAL_ITEM_LEND(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* AccountID, const char* CharID, const int32_t* nRentalIndex, const int32_t* nItemNumber, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, nRentalIndex);
			_stmt.bind(3, nItemNumber);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemRegister
	export class RentalItemRegister : public StoredProcedure
	{
	public:
		RentalItemRegister(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL RENTAL_ITEM_REGISTER(?,?,?,?,?,?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* charID, const char* AccountID, const int16_t* sRentalTime, const int32_t* nItemID, const int16_t* sDurability, const int32_t* nMoney, const int16_t* bGameBangType, const int16_t* bItemType, const int16_t* bItemClass, const int64_t* nSerialNumber, int32_t* nRet_Index, int16_t* nRet)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, charID);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, sRentalTime);
			_stmt.bind(3, nItemID);
			_stmt.bind(4, sDurability);
			_stmt.bind(5, nMoney);
			_stmt.bind(6, bGameBangType);
			_stmt.bind(7, bItemType);
			_stmt.bind(8, bItemClass);
			_stmt.bind(9, nSerialNumber);
			_stmt.bind(10, nRet_Index, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(11, nRet, nanodbc::statement::PARAM_RETURN);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ResetLoyaltyMonthly
	export class ResetLoyaltyMonthly : public StoredProcedure
	{
	public:
		ResetLoyaltyMonthly(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL RESET_LOYALTY_MONTHLY()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class SkillshortcutLoad
	export class SkillshortcutLoad : public StoredProcedure
	{
	public:
		SkillshortcutLoad(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL SKILLSHORTCUT_LOAD(?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strCharID)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class SkillshortcutSave
	export class SkillshortcutSave : public StoredProcedure
	{
	public:
		SkillshortcutSave(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL SKILLSHORTCUT_SAVE(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strCharID, const int16_t* nCount, const char* strSkillData)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
			_stmt.bind(1, nCount);
			_stmt.bind(2, strSkillData);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateBattleHero
	export class UpdateBattleHero : public StoredProcedure
	{
	public:
		UpdateBattleHero(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_BATTLE_HERO(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strCharID, const char* strNation, const char* strClass, const char* strAchievement, const int16_t* nIndex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
			_stmt.bind(1, strNation);
			_stmt.bind(2, strClass);
			_stmt.bind(3, strAchievement);
			_stmt.bind(4, nIndex);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateBattleResult
	export class UpdateBattleResult : public StoredProcedure
	{
	public:
		UpdateBattleResult(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_BATTLE_RESULT(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* UserId, const int16_t* byNation, const int16_t* index)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, UserId);
			_stmt.bind(1, byNation);
			_stmt.bind(2, index);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateEditorItemData
	export class UpdateEditorItemData : public StoredProcedure
	{
	public:
		UpdateEditorItemData(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_EDITOR_ITEM_DATA(?,?,?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* charid, const char* accountid, const char* opid, const char* opip, const int16_t* sPos, const int32_t* nItemID1, const int32_t* nItemID2, const int16_t* byType, const int16_t* sDBIndex)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, charid);
			_stmt.bind(1, accountid);
			_stmt.bind(2, opid);
			_stmt.bind(3, opip);
			_stmt.bind(4, sPos);
			_stmt.bind(5, nItemID1);
			_stmt.bind(6, nItemID2);
			_stmt.bind(7, byType);
			_stmt.bind(8, sDBIndex);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnights
	export class UpdateKnights : public StoredProcedure
	{
	public:
		UpdateKnights(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_KNIGHTS(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, const int16_t* Type, const char* UserId, const int16_t* KnightsIndex, const int16_t* Domanation)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, Type);
			_stmt.bind(2, UserId);
			_stmt.bind(3, KnightsIndex);
			_stmt.bind(4, Domanation);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsAlliance
	export class UpdateKnightsAlliance : public StoredProcedure
	{
	public:
		UpdateKnightsAlliance(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_KNIGHTS_ALLIANCE(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byType, const int16_t* shAlliancIndex, const int16_t* shKnightsIndex, const int16_t* byEmptyIndex, const int16_t* bySiegeFlag)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, shAlliancIndex);
			_stmt.bind(2, shKnightsIndex);
			_stmt.bind(3, byEmptyIndex);
			_stmt.bind(4, bySiegeFlag);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsMark
	export class UpdateKnightsMark : public StoredProcedure
	{
	public:
		UpdateKnightsMark(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_KNIGHTS_MARK(?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int16_t* nRet, const int16_t* IDNum, const int16_t* MarkLen, const char* KnightMark)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, IDNum);
			_stmt.bind(2, MarkLen);
			_stmt.bind(3, KnightMark);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsWar
	export class UpdateKnightsWar : public StoredProcedure
	{
	public:
		UpdateKnightsWar(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_KNIGHTS_WAR(?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* byType, const int16_t* shWhite, const int16_t* shBlue)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, byType);
			_stmt.bind(1, shWhite);
			_stmt.bind(2, shBlue);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdatePersonalRank
	export class UpdatePersonalRank : public StoredProcedure
	{
	public:
		UpdatePersonalRank(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_PERSONAL_RANK()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdatePremiumServiceUser
	export class UpdatePremiumServiceUser : public StoredProcedure
	{
	public:
		UpdatePremiumServiceUser(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{? = CALL UPDATE_PREMIUM_SERVICE_USER(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(int* returnValue, const char* AccountID, const int16_t* Days)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, returnValue, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, Days);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSavedMagic
	export class UpdateSavedMagic : public StoredProcedure
	{
	public:
		UpdateSavedMagic(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_SAVED_MAGIC(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* strCharID, const int32_t* Skill1, const int16_t* During1, const int32_t* Skill2, const int16_t* During2, const int32_t* Skill3, const int16_t* During3, const int32_t* Skill4, const int16_t* During4, const int32_t* Skill5, const int16_t* During5, const int32_t* Skill6, const int16_t* During6, const int32_t* Skill7, const int16_t* During7, const int32_t* Skill8, const int16_t* During8, const int32_t* Skill9, const int16_t* During9, const int32_t* Skill10, const int16_t* During10)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
			_stmt.bind(1, Skill1);
			_stmt.bind(2, During1);
			_stmt.bind(3, Skill2);
			_stmt.bind(4, During2);
			_stmt.bind(5, Skill3);
			_stmt.bind(6, During3);
			_stmt.bind(7, Skill4);
			_stmt.bind(8, During4);
			_stmt.bind(9, Skill5);
			_stmt.bind(10, During5);
			_stmt.bind(11, Skill6);
			_stmt.bind(12, During6);
			_stmt.bind(13, Skill7);
			_stmt.bind(14, During7);
			_stmt.bind(15, Skill8);
			_stmt.bind(16, During8);
			_stmt.bind(17, Skill9);
			_stmt.bind(18, During9);
			_stmt.bind(19, Skill10);
			_stmt.bind(20, During10);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiege
	export class UpdateSiege : public StoredProcedure
	{
	public:
		UpdateSiege(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_SIEGE(?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* sCastleIndex, const int16_t* sKnightsIndex, const int16_t* byWarType, const int16_t* byUpdateType, const int16_t* byWarDay, const int16_t* byWarTime, const int16_t* byWarMinute)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, sCastleIndex);
			_stmt.bind(1, sKnightsIndex);
			_stmt.bind(2, byWarType);
			_stmt.bind(3, byUpdateType);
			_stmt.bind(4, byWarDay);
			_stmt.bind(5, byWarTime);
			_stmt.bind(6, byWarMinute);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeChallenger
	export class UpdateSiegeChallenger : public StoredProcedure
	{
	public:
		UpdateSiegeChallenger(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_SIEGE_CHALLENGER(?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* sCastleIndex, const char* strChallengerList)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, sCastleIndex);
			_stmt.bind(1, strChallengerList);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeChallenger2
	export class UpdateSiegeChallenger2 : public StoredProcedure
	{
	public:
		UpdateSiegeChallenger2(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_SIEGE_CHALLENGER2(?,?,?,?,?,?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* sCastleIndex, const int16_t* sKnights_1, const int16_t* sKnights_2, const int16_t* sKnights_3, const int16_t* sKnights_4, const int16_t* sKnights_5, const int16_t* sKnights_6, const int16_t* sKnights_7, const int16_t* sKnights_8, const int16_t* sKnights_9, const int16_t* sKnights_10, const char* strChallengerList)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, sCastleIndex);
			_stmt.bind(1, sKnights_1);
			_stmt.bind(2, sKnights_2);
			_stmt.bind(3, sKnights_3);
			_stmt.bind(4, sKnights_4);
			_stmt.bind(5, sKnights_5);
			_stmt.bind(6, sKnights_6);
			_stmt.bind(7, sKnights_7);
			_stmt.bind(8, sKnights_8);
			_stmt.bind(9, sKnights_9);
			_stmt.bind(10, sKnights_10);
			_stmt.bind(11, strChallengerList);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeDecideChallenger
	export class UpdateSiegeDecideChallenger : public StoredProcedure
	{
	public:
		UpdateSiegeDecideChallenger(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_SIEGE_DECIDE_CHALLENGER(?,?,?,?,?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const int16_t* sCastleIndex, const int16_t* sKnights_1, const int16_t* sKnights_2, const int16_t* sKnights_3, const int16_t* sKnights_4, const int16_t* sKnights_5, const int16_t* sKnights_6, const int16_t* sKnights_7, const int16_t* sKnights_8, const int16_t* sKnights_9, const int16_t* sKnights_10)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, sCastleIndex);
			_stmt.bind(1, sKnights_1);
			_stmt.bind(2, sKnights_2);
			_stmt.bind(3, sKnights_3);
			_stmt.bind(4, sKnights_4);
			_stmt.bind(5, sKnights_5);
			_stmt.bind(6, sKnights_6);
			_stmt.bind(7, sKnights_7);
			_stmt.bind(8, sKnights_8);
			_stmt.bind(9, sKnights_9);
			_stmt.bind(10, sKnights_10);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateUserData
	export class UpdateUserData : public StoredProcedure
	{
	public:
		UpdateUserData(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_USER_DATA(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* id, const int16_t* Nation, const int16_t* Race, const int16_t* Class, const int16_t* HairColor, const int16_t* Rank, const int16_t* Title, const int16_t* Level, const int32_t* Exp, const int32_t* Loyalty, const int16_t* Face, const int16_t* City, const int16_t* Knights, const int16_t* Fame, const int16_t* Hp, const int16_t* Mp, const int16_t* Sp, const int16_t* Str, const int16_t* Sta, const int16_t* Dex, const int16_t* Intel, const int16_t* Cha, const int16_t* Authority, const int16_t* Points, const int32_t* Gold, const int16_t* Zone, const int16_t* Bind, const int32_t* PX, const int32_t* PZ, const int32_t* PY, const int32_t* dwTime, const int16_t* QuestTotal, const char* strSkill, const char* strItem, const char* strSerial, const char* strQuest, const int32_t* MannerPoint, const int32_t* LoyaltyMonthly)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, id);
			_stmt.bind(1, Nation);
			_stmt.bind(2, Race);
			_stmt.bind(3, Class);
			_stmt.bind(4, HairColor);
			_stmt.bind(5, Rank);
			_stmt.bind(6, Title);
			_stmt.bind(7, Level);
			_stmt.bind(8, Exp);
			_stmt.bind(9, Loyalty);
			_stmt.bind(10, Face);
			_stmt.bind(11, City);
			_stmt.bind(12, Knights);
			_stmt.bind(13, Fame);
			_stmt.bind(14, Hp);
			_stmt.bind(15, Mp);
			_stmt.bind(16, Sp);
			_stmt.bind(17, Str);
			_stmt.bind(18, Sta);
			_stmt.bind(19, Dex);
			_stmt.bind(20, Intel);
			_stmt.bind(21, Cha);
			_stmt.bind(22, Authority);
			_stmt.bind(23, Points);
			_stmt.bind(24, Gold);
			_stmt.bind(25, Zone);
			_stmt.bind(26, Bind);
			_stmt.bind(27, PX);
			_stmt.bind(28, PZ);
			_stmt.bind(29, PY);
			_stmt.bind(30, dwTime);
			_stmt.bind(31, QuestTotal);
			_stmt.bind(32, strSkill);
			_stmt.bind(33, strItem);
			_stmt.bind(34, strSerial);
			_stmt.bind(35, strQuest);
			_stmt.bind(36, MannerPoint);
			_stmt.bind(37, LoyaltyMonthly);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateWarehouse
	export class UpdateWarehouse : public StoredProcedure
	{
	public:
		UpdateWarehouse(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL UPDATE_WAREHOUSE(?,?,?,?,?)}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute(const char* accountid, const int32_t* Money, const int32_t* dwTime, const char* strItem, const char* strSerial)
		{
			_stmt.reset_parameters();

			_stmt.bind(0, accountid);
			_stmt.bind(1, Money);
			_stmt.bind(2, dwTime);
			_stmt.bind(3, strItem);
			_stmt.bind(4, strSerial);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UserKnightsRatingUpdate
	export class UserKnightsRatingUpdate : public StoredProcedure
	{
	public:
		UserKnightsRatingUpdate(nanodbc::connection& conn) 
			: StoredProcedure(conn)
		{
			_stmt.prepare("{CALL USER_KNIGHTS_RATING_UPDATE()}");
		}

		/// \brief Executes the stored procedure
		std::weak_ptr<nanodbc::result> execute()
		{
			return StoredProcedure::execute();
		}
	};
}