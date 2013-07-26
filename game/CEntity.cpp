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
void CEntity::PacketAround(const void * data, int size, LPENTITY exclude){
    ((void(*)(LPENTITY,const void*,int,LPENTITY))Addr::CEntity::PacketAround)(this,data,size,exclude);
};
}
