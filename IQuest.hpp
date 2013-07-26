#ifndef __LIBM2_IQUEST_HPP
#define __LIBM2_IQUEST_HPP
#include "utils/lua.hpp"
#include <map>
#include <string>
typedef std::map<std::string,lua_CFunction> tQuestTable;
class IQuest{
protected:
    tQuestTable qTable;
public:
    virtual std::string getName(){return "misc";}
    tQuestTable getTable();
protected:
    void add(std::string,lua_CFunction);
};
#endif // __LIBM2_IQUEST_HPP
