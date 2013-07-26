/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CHARACTER.hpp"
#include "../addr.hpp"
namespace libm2{
void CHARACTER::ChatPacket(BYTE type, const char * msg){
    ((void(*)(CHARACTER* pkCh,BYTE,const char*))(Addr::CHARACTER::ChatPacket))(this,type,msg);
}
void CHARACTER::ChatPacket(BYTE type, std::string msg){
    this->ChatPacket(type, msg.c_str());
};
const char * CHARACTER::GetName(void) const{
    return this->m_stName.c_str();
}
bool CHARACTER::SetSyncOwner(LPCHARACTER ch, bool b){
    return ((bool(*)(LPCHARACTER,LPCHARACTER,bool))Addr::CHARACTER::SetSyncOwner)(this,ch,b);
}
BYTE CHARACTER::GetCharType(void){
    return ((BYTE(*)(LPCHARACTER))Addr::CHARACTER::GetCharType)(this);
}
bool CHARACTER::Sync(long x, long y){
    return ((bool(*)(LPCHARACTER,long,long))Addr::CHARACTER::Sync)(this,x,y);
};
BYTE CHARACTER::GetGMLevel(){
    return ((BYTE(*)(LPCHARACTER))Addr::CHARACTER::GetGMLevel)(this);
}
const VID& CHARACTER::GetVID(){
    return this->m_vid;
}
int CHARACTER::GetLevel() const{
    return m_points.level;
}
DWORD CHARACTER::GetPlayerID() const{
    return m_dwPlayerID;
}
void CHARACTER::SpecificEffectPacket(const char* path){
    ((void(*)(CHARACTER*,const char*))Addr::CHARACTER::SpecificEffectPacket)(this,path);
};
}
