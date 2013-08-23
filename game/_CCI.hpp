#ifndef __LIBM2_GAME_CCI_HPP
#define __LIBM2_GAME_CCI_HPP
#include "DESC.hpp"
namespace libm2{
struct _CCI {
    char szName[25];
    DWORD dwPID;
    BYTE bEmpire;
    BYTE bMapIndex;
    BYTE bChannel;
    LPDESC pkDesc;
} typedef CCI;
}
#endif // __LIBM2_GAME_CCI_HPP
