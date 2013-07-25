#ifndef __LIBM2_GAME_SSIMPLEPLAYER_HPP
#define __LIBM2_GAME_SSIMPLEPLAYER_HPP
#include "stdInclude.hpp"
namespace libm2{
struct SSimplePlayer {
    DWORD dwID;
    char szName[25];
    BYTE byJob;
    BYTE byLevel;
    DWORD dwPlayMinutes;
    BYTE byST;
    BYTE byHT;
    BYTE byDX;
    BYTE byIQ;
    WORD wMainPart;
    BYTE bChangeName;
    WORD wHairPart;
    BYTE bDummy[4];
    long x;
    long y;
    long lAddr;
    WORD wPort;
    BYTE skill_group;
} typedef TSimplePlayer;
}
#endif // __LIBM2_GAME_SSIMPLEPLAYER_HPP
