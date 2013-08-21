#ifndef __LIBM2_GAME_CGUILDWARRESERVEFORGAME_HPP
#define __LIBM2_GAME_CGUILDWARRESERVEFORGAME_HPP
#include "stdInclude.hpp"
#include "CGuild.hpp"
namespace libm2{
class CGuildWarReserveForGame{
    TGuildWarReserve data;
    std::map<std::string, std::pair<unsigned int, unsigned int>> mapBet;
};
}

#endif // __LIBM2_GAME_CGUILDWARRESERVEFORGAME_HPP
