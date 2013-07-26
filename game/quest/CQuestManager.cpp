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
