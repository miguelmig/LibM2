#include "VID.hpp"
namespace libm2{
VID::VID(){}
VID::VID(DWORD id, DWORD crc){
    m_id=id;
    m_crc=crc;
}
VID::operator DWORD(){
    return m_id;
};
 //   const VID & operator=(const VID &);
bool VID::operator==(const VID &v) const{
    DWORD dvid=v;
    return this->m_id==dvid;
};
bool VID::operator!=(const VID &v) const{
    DWORD dvid=v;
    return m_id!=dvid;
};
}
