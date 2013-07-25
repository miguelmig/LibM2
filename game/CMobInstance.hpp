#ifndef __LIBM2_GAME_CMOBINSTANCE_HPP
#define __LIBM2_GAME_CMOBINSTANCE_HPP
#include "stdInclude.hpp"
#include "PIXEL_POSITION.hpp"
namespace libm2{
class CMobInstance {
    PIXEL_POSITION m_posLastAttacked;
    DWORD m_dwLastAttackedTime;
    DWORD m_dwLastWarpTime;
    bool m_IsBerserk;
    bool m_IsGodSpeed;
    bool m_IsRevive;
  public:
    CMobInstance(void);
};
}
#endif // __LIBM2_GAME_CMOBINSTANCE_HPP
