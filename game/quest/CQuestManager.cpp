/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CQuestManager.hpp"
namespace libm2{
namespace quest{
void CQuestManager::AddLuaFunctionTable(const char*name, luaL_reg*table){
    ((void(*)(CQuestManager*,const char*, luaL_reg*))Addr::quest::CQuestManager::AddLuaFunctionTable)(this,name,table);
};
LPCHARACTER CQuestManager::GetCurrentNPCCharacterPtr(void){
    return ((LPCHARACTER(*)(CQuestManager*))Addr::quest::CQuestManager::GetCurrentNPCCharacterPtr)(this);
};
LPCHARACTER CQuestManager::GetCurrentCharacterPtr(void){
    return m_pCurrentCharacter;
};
}
}
