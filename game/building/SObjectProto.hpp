#ifndef __LIBM2_GAME_BUILDING_SOBJECTPROTO_HPP
#define __LIBM2_GAME_BUILDING_SOBJECTPROTO_HPP
#include "../stdInclude.hpp"
namespace libm2{
namespace building{
struct SObjectMaterial {
    DWORD dwItemVnum;
    DWORD dwCount;
} typedef TObjectMaterial;

struct SObjectProto {
    DWORD dwVnum;
    DWORD dwPrice;
    TObjectMaterial kMaterials[5];
    DWORD dwUpgradeVnum;
    DWORD dwUpgradeLimitTime;
    long lLife;
    long lRegion[4];
    DWORD dwNPCVnum;
    long lNPCX;
    long lNPCY;
    DWORD dwGroupVnum;
    DWORD dwDependOnGroupVnum;
} typedef TObjectProto;
}
}

#endif // __LIBM2_GAME_BUILDING_SOBJECTPROTO_HPP
