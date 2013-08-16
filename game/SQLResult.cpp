#include "SQLResult.hpp"
namespace libm2{
_SQLResult::~_SQLResult(){
    delete pSQLResult;
}
}
