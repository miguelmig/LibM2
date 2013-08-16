#ifndef __LIBM2_GAME_SUSETIME_HPP
#define __LIBM2_GAME_SUSETIME_HPP
#include "stdInclude.hpp"
namespace libm2{
struct SUseTime {
    DWORD dwLoginKey;
    char szLogin[31];
    BYTE bBillType;
    DWORD dwUseSec;
    char szIP[16];
};
}
#endif // __LIBM2_GAME_SUSETIME_HPP
