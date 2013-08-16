#ifndef __LIBM2_GAME_SSETTINGS_HPP
#define __LIBM2_GAME_SSETTINGS_HPP
#include "PIXEL_POSITION.hpp"
namespace libm2{
struct SSetting {
    int iIndex;
    int iCellScale;
    int iBaseX;
    int iBaseY;
    int iWidth;
    int iHeight;
    PIXEL_POSITION posSpawn;
} typedef TMapSetting;
}
#endif // __LIBM2_GAME_SSETTINGS_HPP
