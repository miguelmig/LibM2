#ifndef __LIBM2_GAME_CTRIGGER_HPP
#define __LIBM2_GAME_CTRIGGER_HPP
#include "stdInclude.hpp"
namespace libm2{
class CTrigger {
    BYTE bType;
    int (*pFunc)(LPCHARACTER, LPCHARACTER);
  public:
    CTrigger(void);
};
}

#endif // __LIBM2_GAME_CTRIGGER_HPP

