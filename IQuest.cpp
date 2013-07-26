/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "IQuest.hpp"
tQuestTable IQuest::getTable(){return qTable;}
void IQuest::add(std::string name,lua_CFunction func){
    qTable.insert(std::pair<std::string,lua_CFunction>(name,func));
}
