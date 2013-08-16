#include "SQLMsg.hpp"
#include "../addr.hpp"
namespace libm2 {
/*  MYSQL *m_pkSQL;
    int iID;
    std::string stQuery;
    std::vector<_SQLResult*> vec_pkResult;
    unsigned int uiResultPos;
    void *pvUserData;
    bool bReturn;
    unsigned int uiSQLErrno;*/
_SQLMsg::~_SQLMsg() {
    ((void(*)(_SQLMsg *))Addr::_SQLMsg::___SQLMsg)(this);
}
// void _SQLMsg::Store(void); not sure what that does
SQLResult * _SQLMsg::Get(){
    return vec_pkResult[uiResultPos];
};
bool _SQLMsg::Next(){
    if (uiResultPos<vec_pkResult.size()){
        uiResultPos++;
        return true;
    }
    return false;
};
}
