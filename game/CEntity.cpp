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
