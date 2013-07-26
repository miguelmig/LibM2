/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
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
