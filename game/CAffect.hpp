#ifndef __LIBM2_GAME_CAFFECT_HPP
#define __LIBM2_GAME_CAFFECT_HPP
#include "stdInclude.hpp"
namespace libm2{
class CAffect {
    DWORD dwType;
    BYTE bApplyOn;
    long lApplyValue;
    DWORD dwFlag;
    long lDuration;
    long lSPCost;
  public:
    static CAffect * Acquire(void);
    static void Release(CAffect *);
};
}

#endif // __LIBM2_GAME_CAFFECT_HPP
