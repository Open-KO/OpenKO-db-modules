module;

#include <cstdint>
#include <memory>
#include <nanodbc/nanodbc.h>
#include <string>
#include <vector>

export module StoredProc;

import ModelUtil;

namespace storedProc
{
	export class StoredProcedure
	{
	protected:
		StoredProcedure()
		{
			_flushed = false;
		}

		StoredProcedure(std::shared_ptr<nanodbc::connection> conn)
			: StoredProcedure()
		{
			_conn = conn;
		}

		/// \brief Opens and prepares the statement with the associated query
		/// \throws nanodbc::database_error
		void prepare(const std::string& query) noexcept(false)
		{
			if (_stmt.open())
				return;

			if (_conn == nullptr)
				throw std::logic_error("prepare() unexpectedly called before a connection has been assigned");

			_stmt = nanodbc::statement(*_conn.get(), query);
		}

		/// \brief Flushes any output variables or return values on destruction
		// This must be called in the destructor of a stored procedure with any output & return values.
		void flush_on_destruct()
		{
			try
			{
				flush();
			}
			// We should not throw exceptions from within a destructor.
			// We no longer care about the state of this statement anyway.
			catch (const nanodbc::database_error&)
			{
			}
		}

		/// \brief Executes the currently prepared statement
		/// \throws nanodbc::database_error
		/// \returns a result set, if applicable
		std::weak_ptr<nanodbc::result> execute() noexcept(false)
		{
			_flushed = false;
			_result = std::make_shared<nanodbc::result>(_stmt.execute());
			return _result;
		}

	public:
		/// \brief Sets the associated database connection.
		void set_connection(const std::shared_ptr<nanodbc::connection>& conn)
		{
			_result.reset();

			if (_stmt.open())
				_stmt.close();

			_conn = conn;
			_flushed = false;
		}

		/// \brief Flushes any output variables or return values by reading any and all result sets
		void flush()
		{
			if (_flushed
				|| _result == nullptr)
				return;

			try
			{
				do
				{
					skip_rows_in_result_set();
				}
				while (_result->next_result());
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
		void skip_rows_in_result_set()
		{
			try
			{
				while (_result->next())
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
		}

		std::shared_ptr<nanodbc::connection> _conn;
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
		AccountLogin() 
			: StoredProcedure()
		{
		}

		AccountLogin(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL ACCOUNT_LOGIN(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* accountID, const char* password, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, accountID);
			_stmt.bind(1, password);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~AccountLogin()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class AccountLogout
	export class AccountLogout : public StoredProcedure
	{
	public:
		AccountLogout() 
			: StoredProcedure()
		{
		}

		AccountLogout(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL ACCOUNT_LOGOUT(?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* accountID, const int32_t logoutCode, int16_t* nRet, 
			int16_t* nRet2) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, accountID);
			_stmt.bind(1, &logoutCode);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_OUT);
			_stmt.bind(3, nRet2, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~AccountLogout()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ChangeCastleCommerce
	export class ChangeCastleCommerce : public StoredProcedure
	{
	public:
		ChangeCastleCommerce() 
			: StoredProcedure()
		{
		}

		ChangeCastleCommerce(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL CHANGE_CASTLE_COMMERCE(?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t sCastleIndex, const uint8_t byType, const int32_t nMoradonTariff, 
			const int32_t nDelosTariff, const int32_t nMoney, const char* accountId, 
			const char* charId) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &sCastleIndex);
			_stmt.bind(1, &byType);
			_stmt.bind(2, &nMoradonTariff);
			_stmt.bind(3, &nDelosTariff);
			_stmt.bind(4, &nMoney);
			_stmt.bind(5, accountId);
			_stmt.bind(6, charId);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ChangeCopySerialItem
	export class ChangeCopySerialItem : public StoredProcedure
	{
	public:
		ChangeCopySerialItem() 
			: StoredProcedure()
		{
		}

		ChangeCopySerialItem(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL CHANGE_COPY_SERIAL_ITEM()}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false)
		{
			prepare(Query());
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ChangeCopySerialItemTable
	export class ChangeCopySerialItemTable : public StoredProcedure
	{
	public:
		ChangeCopySerialItemTable() 
			: StoredProcedure()
		{
		}

		ChangeCopySerialItemTable(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL CHANGE_COPY_SERIAL_ITEM_TABLE()}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false)
		{
			prepare(Query());
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ChangeKnightsCape
	export class ChangeKnightsCape : public StoredProcedure
	{
	public:
		ChangeKnightsCape() 
			: StoredProcedure()
		{
		}

		ChangeKnightsCape(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL CHANGE_KNIGHTS_CAPE(?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t KnightsIndex, const int16_t CapeIndex) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &KnightsIndex);
			_stmt.bind(1, &CapeIndex);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class CheckKnights
	export class CheckKnights : public StoredProcedure
	{
	public:
		CheckKnights() 
			: StoredProcedure()
		{
		}

		CheckKnights(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL CHECK_KNIGHTS()}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false)
		{
			prepare(Query());
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ClearRemainUsers
	export class ClearRemainUsers : public StoredProcedure
	{
	public:
		ClearRemainUsers() 
			: StoredProcedure()
		{
		}

		ClearRemainUsers(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL CLEAR_REMAIN_USERS(?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strServerIP) noexcept(false)
		{
			prepare(Query());
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
		CreateKnights() 
			: StoredProcedure()
		{
		}

		CreateKnights(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL CREATE_KNIGHTS(?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const int16_t index, const uint8_t nation, 
			const uint8_t community, const char* strName, const char* strChief) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
			_stmt.bind(1, &index);
			_stmt.bind(2, &nation);
			_stmt.bind(3, &community);
			_stmt.bind(4, strName);
			_stmt.bind(5, strChief);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~CreateKnights()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class CreateKnights2
	export class CreateKnights2 : public StoredProcedure
	{
	public:
		CreateKnights2() 
			: StoredProcedure()
		{
		}

		CreateKnights2(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL CREATE_KNIGHTS2(?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, int16_t* index, const uint8_t nation, 
			const uint8_t community, const char* strName, const char* strChief) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
			_stmt.bind(1, index, nanodbc::statement::PARAM_OUT);
			_stmt.bind(2, &nation);
			_stmt.bind(3, &community);
			_stmt.bind(4, strName);
			_stmt.bind(5, strChief);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~CreateKnights2()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class CreateNewChar
	export class CreateNewChar : public StoredProcedure
	{
	public:
		CreateNewChar() 
			: StoredProcedure()
		{
		}

		CreateNewChar(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL CREATE_NEW_CHAR(?,?,?,?,?,?,?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const char* AccountID, const uint8_t index, 
			const char* CharID, const uint8_t Race, const int16_t Class, 
			const uint8_t Hair, const uint8_t Face, const uint8_t Str, 
			const uint8_t Sta, const uint8_t Dex, const uint8_t Intel, 
			const uint8_t Cha) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, &index);
			_stmt.bind(3, CharID);
			_stmt.bind(4, &Race);
			_stmt.bind(5, &Class);
			_stmt.bind(6, &Hair);
			_stmt.bind(7, &Face);
			_stmt.bind(8, &Str);
			_stmt.bind(9, &Sta);
			_stmt.bind(10, &Dex);
			_stmt.bind(11, &Intel);
			_stmt.bind(12, &Cha);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~CreateNewChar()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class DeleteFriendList
	export class DeleteFriendList : public StoredProcedure
	{
	public:
		DeleteFriendList() 
			: StoredProcedure()
		{
		}

		DeleteFriendList(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL DELETE_FRIEND_LIST(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strUserID, const char* strFriend, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, strUserID);
			_stmt.bind(1, strFriend);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~DeleteFriendList()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class DeleteKnights
	export class DeleteKnights : public StoredProcedure
	{
	public:
		DeleteKnights() 
			: StoredProcedure()
		{
		}

		DeleteKnights(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL DELETE_KNIGHTS(?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const int16_t knightsindex) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
			_stmt.bind(1, &knightsindex);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~DeleteKnights()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class EditerKnights
	export class EditerKnights : public StoredProcedure
	{
	public:
		EditerKnights() 
			: StoredProcedure()
		{
		}

		EditerKnights(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL EDITER_KNIGHTS()}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false)
		{
			prepare(Query());
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ExecKnightsUser
	export class ExecKnightsUser : public StoredProcedure
	{
	public:
		ExecKnightsUser() 
			: StoredProcedure()
		{
		}

		ExecKnightsUser(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL EXEC_KNIGHTS_USER()}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false)
		{
			prepare(Query());
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class GivePremium
	export class GivePremium : public StoredProcedure
	{
	public:
		GivePremium() 
			: StoredProcedure()
		{
		}

		GivePremium(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL GIVE_PREMIUM(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strAccountID, const char* strUserID, const int32_t days) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
			_stmt.bind(1, strUserID);
			_stmt.bind(2, &days);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class InsertFriendList
	export class InsertFriendList : public StoredProcedure
	{
	public:
		InsertFriendList() 
			: StoredProcedure()
		{
		}

		InsertFriendList(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL INSERT_FRIEND_LIST(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strUserID, const char* strFriend, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, strUserID);
			_stmt.bind(1, strFriend);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~InsertFriendList()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class InsertHacktoolUser
	export class InsertHacktoolUser : public StoredProcedure
	{
	public:
		InsertHacktoolUser() 
			: StoredProcedure()
		{
		}

		InsertHacktoolUser(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL INSERT_HACKTOOL_USER(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* CharID, const char* HackToolName) noexcept(false)
		{
			prepare(Query());
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
		InsertProgramCheckUser() 
			: StoredProcedure()
		{
		}

		InsertProgramCheckUser(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL INSERT_PROGRAM_CHECK_USER(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strAccountID, const char* strCharID, const char* HackToolName) noexcept(false)
		{
			prepare(Query());
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
		KingCandidacyNoticeBoardProc() 
			: StoredProcedure()
		{
		}

		KingCandidacyNoticeBoardProc(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_CANDIDACY_NOTICE_BOARD_PROC(?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strUserID, const int16_t sNoticeLen, const uint8_t byNation, 
			const std::vector<uint8_t>& strNotice) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, strUserID);
			_stmt.bind(1, &sNoticeLen);
			_stmt.bind(2, &byNation);
			_stmt.bind_binary(3, strNotice);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingCandidacyRecommend
	export class KingCandidacyRecommend : public StoredProcedure
	{
	public:
		KingCandidacyRecommend() 
			: StoredProcedure()
		{
		}

		KingCandidacyRecommend(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_CANDIDACY_RECOMMEND(?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* CharID_1, const char* CharID_2, const uint8_t nNation, 
			int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, CharID_1);
			_stmt.bind(1, CharID_2);
			_stmt.bind(2, &nNation);
			_stmt.bind(3, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~KingCandidacyRecommend()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingChangeTax
	export class KingChangeTax : public StoredProcedure
	{
	public:
		KingChangeTax() 
			: StoredProcedure()
		{
		}

		KingChangeTax(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_CHANGE_TAX(?,?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation, const int32_t nKarusTax1, 
			const int32_t nKarusTax2, const int32_t nKarusTax3, const int32_t nElmoTax1, 
			const int32_t nElmoTax2, const int32_t nElmoTax3) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byType);
			_stmt.bind(1, &byNation);
			_stmt.bind(2, &nKarusTax1);
			_stmt.bind(3, &nKarusTax2);
			_stmt.bind(4, &nKarusTax3);
			_stmt.bind(5, &nElmoTax1);
			_stmt.bind(6, &nElmoTax2);
			_stmt.bind(7, &nElmoTax3);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingElectionProc
	export class KingElectionProc : public StoredProcedure
	{
	public:
		KingElectionProc() 
			: StoredProcedure()
		{
		}

		KingElectionProc(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_ELECTION_PROC(?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strAccountID, const char* strCharID, const uint8_t byNation, 
			const char* strCandidacyID, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, strAccountID);
			_stmt.bind(1, strCharID);
			_stmt.bind(2, &byNation);
			_stmt.bind(3, strCandidacyID);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~KingElectionProc()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentElection
	export class KingImpeachmentElection : public StoredProcedure
	{
	public:
		KingImpeachmentElection() 
			: StoredProcedure()
		{
		}

		KingImpeachmentElection(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_IMPEACHMENT_ELECTION(?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byResult, const uint8_t byNation, const char* strAccountID, 
			const char* strCharID, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byResult);
			_stmt.bind(1, &byNation);
			_stmt.bind(2, strAccountID);
			_stmt.bind(3, strCharID);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~KingImpeachmentElection()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentRequestElection
	export class KingImpeachmentRequestElection : public StoredProcedure
	{
	public:
		KingImpeachmentRequestElection() 
			: StoredProcedure()
		{
		}

		KingImpeachmentRequestElection(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_IMPEACHMENT_REQUEST_ELECTION(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t byType, const uint8_t byNation, const char* strUserID) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byType);
			_stmt.bind(1, &byNation);
			_stmt.bind(2, strUserID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentResult
	export class KingImpeachmentResult : public StoredProcedure
	{
	public:
		KingImpeachmentResult() 
			: StoredProcedure()
		{
		}

		KingImpeachmentResult(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_IMPEACHMENT_RESULT(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byNation, int16_t* nTotalMan, int16_t* nAgreeMan) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byNation);
			_stmt.bind(1, nTotalMan, nanodbc::statement::PARAM_OUT);
			_stmt.bind(2, nAgreeMan, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~KingImpeachmentResult()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingInsertPrizeEvent
	export class KingInsertPrizeEvent : public StoredProcedure
	{
	public:
		KingInsertPrizeEvent() 
			: StoredProcedure()
		{
		}

		KingInsertPrizeEvent(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_INSERT_PRIZE_EVENT(?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation, const int32_t nAmount, 
			const char* strUserID) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byType);
			_stmt.bind(1, &byNation);
			_stmt.bind(2, &nAmount);
			_stmt.bind(3, strUserID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionList
	export class KingUpdateElectionList : public StoredProcedure
	{
	public:
		KingUpdateElectionList() 
			: StoredProcedure()
		{
		}

		KingUpdateElectionList(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_UPDATE_ELECTION_LIST(?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byDBType, const uint8_t byType, const uint8_t byNation, 
			const int16_t nKnights, const int32_t nAmount, const char* strUserID) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byDBType);
			_stmt.bind(1, &byType);
			_stmt.bind(2, &byNation);
			_stmt.bind(3, &nKnights);
			_stmt.bind(4, &nAmount);
			_stmt.bind(5, strUserID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionSchdule
	export class KingUpdateElectionSchdule : public StoredProcedure
	{
	public:
		KingUpdateElectionSchdule() 
			: StoredProcedure()
		{
		}

		KingUpdateElectionSchdule(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_UPDATE_ELECTION_SCHDULE(?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation, const int16_t sYear, 
			const uint8_t byMonth, const uint8_t byDay, const uint8_t byHour, 
			const uint8_t byMinute) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byType);
			_stmt.bind(1, &byNation);
			_stmt.bind(2, &sYear);
			_stmt.bind(3, &byMonth);
			_stmt.bind(4, &byDay);
			_stmt.bind(5, &byHour);
			_stmt.bind(6, &byMinute);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionStatus
	export class KingUpdateElectionStatus : public StoredProcedure
	{
	public:
		KingUpdateElectionStatus() 
			: StoredProcedure()
		{
		}

		KingUpdateElectionStatus(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_UPDATE_ELECTION_STATUS(?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byType);
			_stmt.bind(1, &byNation);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateImpeachmentStatus
	export class KingUpdateImpeachmentStatus : public StoredProcedure
	{
	public:
		KingUpdateImpeachmentStatus() 
			: StoredProcedure()
		{
		}

		KingUpdateImpeachmentStatus(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_UPDATE_IMPEACHMENT_STATUS(?,?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation, const int16_t sYear, 
			const uint8_t byMonth, const uint8_t byDay, const uint8_t byHour, 
			const uint8_t byMinute, const char* strUserID) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byType);
			_stmt.bind(1, &byNation);
			_stmt.bind(2, &sYear);
			_stmt.bind(3, &byMonth);
			_stmt.bind(4, &byDay);
			_stmt.bind(5, &byHour);
			_stmt.bind(6, &byMinute);
			_stmt.bind(7, strUserID);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateNoahOrExpEvent
	export class KingUpdateNoahOrExpEvent : public StoredProcedure
	{
	public:
		KingUpdateNoahOrExpEvent() 
			: StoredProcedure()
		{
		}

		KingUpdateNoahOrExpEvent(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KING_UPDATE_NOAH_OR_EXP_EVENT(?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation, const uint8_t byAmount, 
			const uint8_t byDay, const uint8_t byHout, const uint8_t byMinute, 
			const int16_t sDurationTime) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byType);
			_stmt.bind(1, &byNation);
			_stmt.bind(2, &byAmount);
			_stmt.bind(3, &byDay);
			_stmt.bind(4, &byHout);
			_stmt.bind(5, &byMinute);
			_stmt.bind(6, &sDurationTime);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class KnightsRatingUpdate
	export class KnightsRatingUpdate : public StoredProcedure
	{
	public:
		KnightsRatingUpdate() 
			: StoredProcedure()
		{
		}

		KnightsRatingUpdate(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL KNIGHTS_RATING_UPDATE()}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false)
		{
			prepare(Query());
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadAccountCharid
	export class LoadAccountCharid : public StoredProcedure
	{
	public:
		LoadAccountCharid() 
			: StoredProcedure()
		{
		}

		LoadAccountCharid(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{? = CALL LOAD_ACCOUNT_CHARID(?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(int* returnValue, 
			const char* Accountid) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, returnValue, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, Accountid);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~LoadAccountCharid()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadCharInfo
	export class LoadCharInfo : public StoredProcedure
	{
	public:
		LoadCharInfo() 
			: StoredProcedure()
		{
		}

		LoadCharInfo(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL LOAD_CHAR_INFO(?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* CharId, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, CharId);
			_stmt.bind(1, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~LoadCharInfo()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadKnightsMembers
	export class LoadKnightsMembers : public StoredProcedure
	{
	public:
		LoadKnightsMembers() 
			: StoredProcedure()
		{
		}

		LoadKnightsMembers(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL LOAD_KNIGHTS_MEMBERS(?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t knightsindex) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &knightsindex);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadPremiumServiceUser
	export class LoadPremiumServiceUser : public StoredProcedure
	{
	public:
		LoadPremiumServiceUser() 
			: StoredProcedure()
		{
		}

		LoadPremiumServiceUser(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL LOAD_PREMIUM_SERVICE_USER(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, int32_t* type, int32_t* days) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, type, nanodbc::statement::PARAM_OUT);
			_stmt.bind(2, days, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~LoadPremiumServiceUser()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadRentalData
	export class LoadRentalData : public StoredProcedure
	{
	public:
		LoadRentalData() 
			: StoredProcedure()
		{
		}

		LoadRentalData(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL LOAD_RENTAL_DATA(?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strAccountID) noexcept(false)
		{
			prepare(Query());
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
		LoadSavedMagic() 
			: StoredProcedure()
		{
		}

		LoadSavedMagic(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL LOAD_SAVED_MAGIC(?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* CharId, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, CharId);
			_stmt.bind(1, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~LoadSavedMagic()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadUserData
	export class LoadUserData : public StoredProcedure
	{
	public:
		LoadUserData() 
			: StoredProcedure()
		{
		}

		LoadUserData(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL LOAD_USER_DATA(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* id, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, id);
			_stmt.bind(2, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~LoadUserData()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class LoadWebItemmall
	export class LoadWebItemmall : public StoredProcedure
	{
	public:
		LoadWebItemmall() 
			: StoredProcedure()
		{
		}

		LoadWebItemmall(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL LOAD_WEB_ITEMMALL(?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strCharID) noexcept(false)
		{
			prepare(Query());
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
		NationSelect() 
			: StoredProcedure()
		{
		}

		NationSelect(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL NATION_SELECT(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const char* AccountID, const uint8_t Nation) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, &Nation);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~NationSelect()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ProcInsertCurrentuser
	export class ProcInsertCurrentuser : public StoredProcedure
	{
	public:
		ProcInsertCurrentuser() 
			: StoredProcedure()
		{
		}

		ProcInsertCurrentuser(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL PROC_INSERT_CURRENTUSER(?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* CharID, const int16_t nServerNo, 
			const char* strServerIP, const char* ClientIP, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, &nServerNo);
			_stmt.bind(3, strServerIP);
			_stmt.bind(4, ClientIP);
			_stmt.bind(5, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~ProcInsertCurrentuser()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RankKnights
	export class RankKnights : public StoredProcedure
	{
	public:
		RankKnights() 
			: StoredProcedure()
		{
		}

		RankKnights(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL RANK_KNIGHTS()}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false)
		{
			prepare(Query());
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemCancel
	export class RentalItemCancel : public StoredProcedure
	{
	public:
		RentalItemCancel() 
			: StoredProcedure()
		{
		}

		RentalItemCancel(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL RENTAL_ITEM_CANCEL(?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* CharID, const int32_t nRentalIndex, 
			const int32_t nItemNumber, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, &nRentalIndex);
			_stmt.bind(3, &nItemNumber);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~RentalItemCancel()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemDestory
	export class RentalItemDestory : public StoredProcedure
	{
	public:
		RentalItemDestory() 
			: StoredProcedure()
		{
		}

		RentalItemDestory(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL RENTAL_ITEM_DESTORY(?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* CharID, const int32_t nItemNumber, 
			const int32_t nRentalIndex, const int16_t nDurability, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, &nItemNumber);
			_stmt.bind(3, &nRentalIndex);
			_stmt.bind(4, &nDurability);
			_stmt.bind(5, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~RentalItemDestory()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemDurabilityUpdate
	export class RentalItemDurabilityUpdate : public StoredProcedure
	{
	public:
		RentalItemDurabilityUpdate() 
			: StoredProcedure()
		{
		}

		RentalItemDurabilityUpdate(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL RENTAL_ITEM_DURABILITY_UPDATE(?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int32_t nRentalIndex, const int32_t nDurability) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &nRentalIndex);
			_stmt.bind(1, &nDurability);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemLend
	export class RentalItemLend : public StoredProcedure
	{
	public:
		RentalItemLend() 
			: StoredProcedure()
		{
		}

		RentalItemLend(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL RENTAL_ITEM_LEND(?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* CharID, const int32_t nRentalIndex, 
			const int32_t nItemNumber, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, AccountID);
			_stmt.bind(1, CharID);
			_stmt.bind(2, &nRentalIndex);
			_stmt.bind(3, &nItemNumber);
			_stmt.bind(4, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~RentalItemLend()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemRegister
	export class RentalItemRegister : public StoredProcedure
	{
	public:
		RentalItemRegister() 
			: StoredProcedure()
		{
		}

		RentalItemRegister(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL RENTAL_ITEM_REGISTER(?,?,?,?,?,?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* charID, const char* AccountID, const int16_t sRentalTime, 
			const int32_t nItemID, const int16_t sDurability, const int32_t nMoney, 
			const uint8_t bGameBangType, const uint8_t bItemType, const uint8_t bItemClass, 
			const int64_t nSerialNumber, int32_t* nRet_Index, int16_t* nRet) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, charID);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, &sRentalTime);
			_stmt.bind(3, &nItemID);
			_stmt.bind(4, &sDurability);
			_stmt.bind(5, &nMoney);
			_stmt.bind(6, &bGameBangType);
			_stmt.bind(7, &bItemType);
			_stmt.bind(8, &bItemClass);
			_stmt.bind(9, &nSerialNumber);
			_stmt.bind(10, nRet_Index, nanodbc::statement::PARAM_OUT);
			_stmt.bind(11, nRet, nanodbc::statement::PARAM_OUT);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~RentalItemRegister()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class ResetLoyaltyMonthly
	export class ResetLoyaltyMonthly : public StoredProcedure
	{
	public:
		ResetLoyaltyMonthly() 
			: StoredProcedure()
		{
		}

		ResetLoyaltyMonthly(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL RESET_LOYALTY_MONTHLY()}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false)
		{
			prepare(Query());
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class SkillshortcutLoad
	export class SkillshortcutLoad : public StoredProcedure
	{
	public:
		SkillshortcutLoad() 
			: StoredProcedure()
		{
		}

		SkillshortcutLoad(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL SKILLSHORTCUT_LOAD(?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strCharID) noexcept(false)
		{
			prepare(Query());
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
		SkillshortcutSave() 
			: StoredProcedure()
		{
		}

		SkillshortcutSave(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL SKILLSHORTCUT_SAVE(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strCharID, const int16_t nCount, const char* strSkillData) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
			_stmt.bind(1, &nCount);
			_stmt.bind(2, strSkillData);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateBattleHero
	export class UpdateBattleHero : public StoredProcedure
	{
	public:
		UpdateBattleHero() 
			: StoredProcedure()
		{
		}

		UpdateBattleHero(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_BATTLE_HERO(?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strCharID, const char* strNation, const char* strClass, 
			const char* strAchievement, const int16_t nIndex) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
			_stmt.bind(1, strNation);
			_stmt.bind(2, strClass);
			_stmt.bind(3, strAchievement);
			_stmt.bind(4, &nIndex);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateBattleResult
	export class UpdateBattleResult : public StoredProcedure
	{
	public:
		UpdateBattleResult() 
			: StoredProcedure()
		{
		}

		UpdateBattleResult(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_BATTLE_RESULT(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* UserId, const uint8_t byNation, const int16_t index) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, UserId);
			_stmt.bind(1, &byNation);
			_stmt.bind(2, &index);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateEditorItemData
	export class UpdateEditorItemData : public StoredProcedure
	{
	public:
		UpdateEditorItemData() 
			: StoredProcedure()
		{
		}

		UpdateEditorItemData(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_EDITOR_ITEM_DATA(?,?,?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* charid, const char* accountid, const char* opid, 
			const char* opip, const int16_t sPos, const int32_t nItemID1, 
			const int32_t nItemID2, const uint8_t byType, const int16_t sDBIndex) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, charid);
			_stmt.bind(1, accountid);
			_stmt.bind(2, opid);
			_stmt.bind(3, opip);
			_stmt.bind(4, &sPos);
			_stmt.bind(5, &nItemID1);
			_stmt.bind(6, &nItemID2);
			_stmt.bind(7, &byType);
			_stmt.bind(8, &sDBIndex);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnights
	export class UpdateKnights : public StoredProcedure
	{
	public:
		UpdateKnights() 
			: StoredProcedure()
		{
		}

		UpdateKnights(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_KNIGHTS(?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const uint8_t Type, const char* UserId, 
			const int16_t KnightsIndex, const uint8_t Domination) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
			_stmt.bind(1, &Type);
			_stmt.bind(2, UserId);
			_stmt.bind(3, &KnightsIndex);
			_stmt.bind(4, &Domination);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~UpdateKnights()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsAlliance
	export class UpdateKnightsAlliance : public StoredProcedure
	{
	public:
		UpdateKnightsAlliance() 
			: StoredProcedure()
		{
		}

		UpdateKnightsAlliance(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_KNIGHTS_ALLIANCE(?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const int16_t shAlliancIndex, const int16_t shKnightsIndex, 
			const uint8_t byEmptyIndex, const uint8_t bySiegeFlag) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byType);
			_stmt.bind(1, &shAlliancIndex);
			_stmt.bind(2, &shKnightsIndex);
			_stmt.bind(3, &byEmptyIndex);
			_stmt.bind(4, &bySiegeFlag);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsMark
	export class UpdateKnightsMark : public StoredProcedure
	{
	public:
		UpdateKnightsMark() 
			: StoredProcedure()
		{
		}

		UpdateKnightsMark(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_KNIGHTS_MARK(?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const int16_t IDNum, const int16_t MarkLen, 
			const std::vector<uint8_t>& KnightMark) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
			_stmt.bind(1, &IDNum);
			_stmt.bind(2, &MarkLen);
			_stmt.bind_binary(3, KnightMark);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~UpdateKnightsMark()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsWar
	export class UpdateKnightsWar : public StoredProcedure
	{
	public:
		UpdateKnightsWar() 
			: StoredProcedure()
		{
		}

		UpdateKnightsWar(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_KNIGHTS_WAR(?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const int16_t shWhite, const int16_t shBlue) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &byType);
			_stmt.bind(1, &shWhite);
			_stmt.bind(2, &shBlue);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdatePersonalRank
	export class UpdatePersonalRank : public StoredProcedure
	{
	public:
		UpdatePersonalRank() 
			: StoredProcedure()
		{
		}

		UpdatePersonalRank(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_PERSONAL_RANK()}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false)
		{
			prepare(Query());
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdatePremiumServiceUser
	export class UpdatePremiumServiceUser : public StoredProcedure
	{
	public:
		UpdatePremiumServiceUser() 
			: StoredProcedure()
		{
		}

		UpdatePremiumServiceUser(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{? = CALL UPDATE_PREMIUM_SERVICE_USER(?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(int* returnValue, 
			const char* AccountID, const int16_t Days) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, returnValue, nanodbc::statement::PARAM_RETURN);
			_stmt.bind(1, AccountID);
			_stmt.bind(2, &Days);
	
			return StoredProcedure::execute();
		}

		/// \brief Flushes any output variables or return values on destruction
		~UpdatePremiumServiceUser()
		{
			flush_on_destruct();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSavedMagic
	export class UpdateSavedMagic : public StoredProcedure
	{
	public:
		UpdateSavedMagic() 
			: StoredProcedure()
		{
		}

		UpdateSavedMagic(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_SAVED_MAGIC(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strCharID, const int32_t Skill1, const int16_t During1, 
			const int32_t Skill2, const int16_t During2, const int32_t Skill3, 
			const int16_t During3, const int32_t Skill4, const int16_t During4, 
			const int32_t Skill5, const int16_t During5, const int32_t Skill6, 
			const int16_t During6, const int32_t Skill7, const int16_t During7, 
			const int32_t Skill8, const int16_t During8, const int32_t Skill9, 
			const int16_t During9, const int32_t Skill10, const int16_t During10) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, strCharID);
			_stmt.bind(1, &Skill1);
			_stmt.bind(2, &During1);
			_stmt.bind(3, &Skill2);
			_stmt.bind(4, &During2);
			_stmt.bind(5, &Skill3);
			_stmt.bind(6, &During3);
			_stmt.bind(7, &Skill4);
			_stmt.bind(8, &During4);
			_stmt.bind(9, &Skill5);
			_stmt.bind(10, &During5);
			_stmt.bind(11, &Skill6);
			_stmt.bind(12, &During6);
			_stmt.bind(13, &Skill7);
			_stmt.bind(14, &During7);
			_stmt.bind(15, &Skill8);
			_stmt.bind(16, &During8);
			_stmt.bind(17, &Skill9);
			_stmt.bind(18, &During9);
			_stmt.bind(19, &Skill10);
			_stmt.bind(20, &During10);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiege
	export class UpdateSiege : public StoredProcedure
	{
	public:
		UpdateSiege() 
			: StoredProcedure()
		{
		}

		UpdateSiege(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_SIEGE(?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t sCastleIndex, const int16_t sKnightsIndex, const uint8_t byWarType, 
			const uint8_t byUpdateType, const uint8_t byWarDay, const uint8_t byWarTime, 
			const uint8_t byWarMinute) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &sCastleIndex);
			_stmt.bind(1, &sKnightsIndex);
			_stmt.bind(2, &byWarType);
			_stmt.bind(3, &byUpdateType);
			_stmt.bind(4, &byWarDay);
			_stmt.bind(5, &byWarTime);
			_stmt.bind(6, &byWarMinute);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeChallenger
	export class UpdateSiegeChallenger : public StoredProcedure
	{
	public:
		UpdateSiegeChallenger() 
			: StoredProcedure()
		{
		}

		UpdateSiegeChallenger(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_SIEGE_CHALLENGER(?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t sCastleIndex, const char* strChallengerList) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &sCastleIndex);
			_stmt.bind(1, strChallengerList);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeChallenger2
	export class UpdateSiegeChallenger2 : public StoredProcedure
	{
	public:
		UpdateSiegeChallenger2() 
			: StoredProcedure()
		{
		}

		UpdateSiegeChallenger2(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_SIEGE_CHALLENGER2(?,?,?,?,?,?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t sCastleIndex, const int16_t sKnights_1, const int16_t sKnights_2, 
			const int16_t sKnights_3, const int16_t sKnights_4, const int16_t sKnights_5, 
			const int16_t sKnights_6, const int16_t sKnights_7, const int16_t sKnights_8, 
			const int16_t sKnights_9, const int16_t sKnights_10, const char* strChallengerList) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &sCastleIndex);
			_stmt.bind(1, &sKnights_1);
			_stmt.bind(2, &sKnights_2);
			_stmt.bind(3, &sKnights_3);
			_stmt.bind(4, &sKnights_4);
			_stmt.bind(5, &sKnights_5);
			_stmt.bind(6, &sKnights_6);
			_stmt.bind(7, &sKnights_7);
			_stmt.bind(8, &sKnights_8);
			_stmt.bind(9, &sKnights_9);
			_stmt.bind(10, &sKnights_10);
			_stmt.bind(11, strChallengerList);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeDecideChallenger
	export class UpdateSiegeDecideChallenger : public StoredProcedure
	{
	public:
		UpdateSiegeDecideChallenger() 
			: StoredProcedure()
		{
		}

		UpdateSiegeDecideChallenger(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_SIEGE_DECIDE_CHALLENGER(?,?,?,?,?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t sCastleIndex, const int16_t sKnights_1, const int16_t sKnights_2, 
			const int16_t sKnights_3, const int16_t sKnights_4, const int16_t sKnights_5, 
			const int16_t sKnights_6, const int16_t sKnights_7, const int16_t sKnights_8, 
			const int16_t sKnights_9, const int16_t sKnights_10) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, &sCastleIndex);
			_stmt.bind(1, &sKnights_1);
			_stmt.bind(2, &sKnights_2);
			_stmt.bind(3, &sKnights_3);
			_stmt.bind(4, &sKnights_4);
			_stmt.bind(5, &sKnights_5);
			_stmt.bind(6, &sKnights_6);
			_stmt.bind(7, &sKnights_7);
			_stmt.bind(8, &sKnights_8);
			_stmt.bind(9, &sKnights_9);
			_stmt.bind(10, &sKnights_10);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateUserData
	export class UpdateUserData : public StoredProcedure
	{
	public:
		UpdateUserData() 
			: StoredProcedure()
		{
		}

		UpdateUserData(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_USER_DATA(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* id, const uint8_t Nation, const uint8_t Race, 
			const int16_t Class, const uint8_t HairColor, const uint8_t Rank, 
			const uint8_t Title, const uint8_t Level, const int32_t Exp, 
			const int32_t Loyalty, const uint8_t Face, const uint8_t City, 
			const int16_t Knights, const uint8_t Fame, const int16_t Hp, 
			const int16_t Mp, const int16_t Sp, const uint8_t Str, 
			const uint8_t Sta, const uint8_t Dex, const uint8_t Intel, 
			const uint8_t Cha, const uint8_t Authority, const uint8_t Points, 
			const int32_t Gold, const uint8_t Zone, const int16_t Bind, 
			const int32_t PX, const int32_t PZ, const int32_t PY, 
			const int32_t dwTime, const int16_t QuestTotal, const std::vector<uint8_t>& strSkill, 
			const std::vector<uint8_t>& strItem, const std::vector<uint8_t>& strSerial, const std::vector<uint8_t>& strQuest, 
			const int32_t MannerPoint, const int32_t LoyaltyMonthly) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, id);
			_stmt.bind(1, &Nation);
			_stmt.bind(2, &Race);
			_stmt.bind(3, &Class);
			_stmt.bind(4, &HairColor);
			_stmt.bind(5, &Rank);
			_stmt.bind(6, &Title);
			_stmt.bind(7, &Level);
			_stmt.bind(8, &Exp);
			_stmt.bind(9, &Loyalty);
			_stmt.bind(10, &Face);
			_stmt.bind(11, &City);
			_stmt.bind(12, &Knights);
			_stmt.bind(13, &Fame);
			_stmt.bind(14, &Hp);
			_stmt.bind(15, &Mp);
			_stmt.bind(16, &Sp);
			_stmt.bind(17, &Str);
			_stmt.bind(18, &Sta);
			_stmt.bind(19, &Dex);
			_stmt.bind(20, &Intel);
			_stmt.bind(21, &Cha);
			_stmt.bind(22, &Authority);
			_stmt.bind(23, &Points);
			_stmt.bind(24, &Gold);
			_stmt.bind(25, &Zone);
			_stmt.bind(26, &Bind);
			_stmt.bind(27, &PX);
			_stmt.bind(28, &PZ);
			_stmt.bind(29, &PY);
			_stmt.bind(30, &dwTime);
			_stmt.bind(31, &QuestTotal);
			_stmt.bind_binary(32, strSkill);
			_stmt.bind_binary(33, strItem);
			_stmt.bind_binary(34, strSerial);
			_stmt.bind_binary(35, strQuest);
			_stmt.bind(36, &MannerPoint);
			_stmt.bind(37, &LoyaltyMonthly);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UpdateWarehouse
	export class UpdateWarehouse : public StoredProcedure
	{
	public:
		UpdateWarehouse() 
			: StoredProcedure()
		{
		}

		UpdateWarehouse(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL UPDATE_WAREHOUSE(?,?,?,?,?)}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* accountid, const int32_t Money, const int32_t dwTime, 
			const std::vector<uint8_t>& strItem, const std::vector<uint8_t>& strSerial) noexcept(false)
		{
			prepare(Query());
			_stmt.reset_parameters();

			_stmt.bind(0, accountid);
			_stmt.bind(1, &Money);
			_stmt.bind(2, &dwTime);
			_stmt.bind_binary(3, strItem);
			_stmt.bind_binary(4, strSerial);
	
			return StoredProcedure::execute();
		}
	};

	/// \brief MANUAL_TODO
	/// \class UserKnightsRatingUpdate
	export class UserKnightsRatingUpdate : public StoredProcedure
	{
	public:
		UserKnightsRatingUpdate() 
			: StoredProcedure()
		{
		}

		UserKnightsRatingUpdate(std::shared_ptr<nanodbc::connection> conn) 
			: StoredProcedure(conn)
		{
		}

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query()
		{
			static const std::string query = "{CALL USER_KNIGHTS_RATING_UPDATE()}";
			return query;
		}

		/// \brief Returns the associated database type for the table
		static const modelUtil::DbType DbType()
		{
			return modelUtil::DbType::GAME;
		}

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false)
		{
			prepare(Query());
			return StoredProcedure::execute();
		}
	};
}