#ifndef __LIBM2_GAME_SMAPREGION_HPP
#define __LIBM2_GAME_SMAPREGION_HPP
#include "PIXEL_POSITION.hpp"
namespace libm2{
struct SMapRegion {
    int index;
    int sx;
    int sy;
    int ex;
    int ey;
    PIXEL_POSITION posSpawn;
    bool bEmpireSpawnDifferent;
    PIXEL_POSITION posEmpire[3];
    std::string strMapName;
} typedef TMapRegion;
}
#endif // __LIBM2_GAME_SMAPREGION_HPP
