module;

#include <cstdint>
#include <string>

export module ModelUtil;

/// \brief Collection of hand-written utilities and types
export namespace modelUtil
{
    const std::string DbAccountString = "ACCOUNT";
    const std::string DbGameString = "GAME";
    const std::string DbLogString = "LOG";
    const std::string DbInvalidString = "INVALID";

    /// \brief Database type identifier
    enum class DbType : int8_t
    {
        INVALID = -1,
        ACCOUNT = 0,
        GAME = 1,
        LOG = 2
    };

    /// \brief Returns the string equivalent of a DbType
    const std::string& DbTypeString(DbType db)
    {
        switch (db)
        {
            case DbType::ACCOUNT: return DbAccountString;
            case DbType::GAME: return DbGameString;
            case DbType::LOG: return DbLogString;
            default: return DbInvalidString;
        }
    }
}
