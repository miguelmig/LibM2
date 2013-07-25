#ifndef __LIBM2_GAME_SACCOUNTTABLE_HPP
#define __LIBM2_GAME_SACCOUNTTABLE_HPP
#include "stdInclude.hpp"
#include "SSimplePlayer.hpp"
namespace libm2{
typedef struct SAccountTable {
    DWORD id;
    char login[31];
    char passwd[17];
    char social_id[19];
    char status[9];
    BYTE bEmpire;
    TSimplePlayer players[4];
} TAccountTable, * PAccountTable;
}
#endif // __LIBM2_GAME_SACCOUNTTYPE_HPP
