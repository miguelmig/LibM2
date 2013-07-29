/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CEntity.hpp"
#include "../addr.hpp"
namespace libm2{
long CEntity::GetX() const{
    return this->m_pos.x;
};
long CEntity::GetY() const{
    return this->m_pos.y;
};
long CEntity::GetZ() const{
    return this->m_pos.z;
};
const PIXEL_POSITION& CEntity::GetXYZ() const{
    return this->m_pos;
};
void CEntity::PacketAround(const void * data, int len, LPENTITY exclude){
    ((void(*)(LPENTITY,const void*,int,LPENTITY))Addr::CEntity::PacketAround)(this,data,len,exclude);
};
void CEntity::UpdateSectree() {
	((void(*)(CEntity *))Addr::CEntity::UpdateSectree)(this);
}

void CEntity::ViewCleanup() {
	((void(*)(CEntity *))Addr::CEntity::ViewCleanup)(this);
}

CEntity::~CEntity() {
	((void(*)(CEntity *))Addr::CEntity::__CEntity)(this);
}

void CEntity::PacketView(const void * a0, int a1, LPENTITY a2) {
	((void(*)(CEntity *, const void *, int, LPENTITY))Addr::CEntity::PacketView)(this, a0, a1, a2);
}

int CEntity::GetType() const {
	return ((int(*)(const CEntity *))Addr::CEntity::GetType)(this);
}

CEntity::CEntity() {
	((void(*)(CEntity *))Addr::CEntity::CEntity)(this);
}

void CEntity::ViewReencode() {
	((void(*)(CEntity *))Addr::CEntity::ViewReencode)(this);
}

void CEntity::ViewRemove(LPENTITY a0, bool a1) {
	((void(*)(CEntity *, LPENTITY, bool))Addr::CEntity::ViewRemove)(this, a0, a1);
}

void CEntity::SetObserverMode(bool a0) {
	((void(*)(CEntity *, bool))Addr::CEntity::SetObserverMode)(this, a0);
}

bool CEntity::IsType(int a0) const {
	return ((bool(*)(const CEntity *, int))Addr::CEntity::IsType)(this, a0);
}

void CEntity::Initialize(int a0) {
	((void(*)(CEntity *, int))Addr::CEntity::Initialize)(this, a0);
}

void CEntity::Destroy() {
	((void(*)(CEntity *))Addr::CEntity::Destroy)(this);
}

void CEntity::ViewInsert(LPENTITY a0, bool a1) {
	((void(*)(CEntity *, LPENTITY, bool))Addr::CEntity::ViewInsert)(this, a0, a1);
}

void CEntity::SetType(int a0) {
	((void(*)(CEntity *, int))Addr::CEntity::SetType)(this, a0);
}
}
