#ifndef __LIBM2_GAME_SQLRESULT_HPP
#define __LIBM2_GAME_SQLRESULT_HPP
#include <mysql/mysql.h>
namespace libm2{
class _SQLResult {
public:
    MYSQL_RES *pSQLResult;
    uint32_t uiNumRows;
    uint32_t uiAffectedRows;
    uint32_t uiInsertID;
  public:
    _SQLResult(void);
    ~_SQLResult();
} typedef SQLResult;
}
#endif // __LIBM2_GAME_SQLRESULT_HPP
