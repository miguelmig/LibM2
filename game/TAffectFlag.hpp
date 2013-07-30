#ifndef __LIBM2_GAME_TAFFECTFLAG_HPP
#define __LIBM2_GAME_TAFFECTFLAG_HPP
#include "stdInclude.hpp"
namespace libm2{
class TAffectFlag {
    DWORD bits[2];
  public:
    TAffectFlag();
    TAffectFlag(DWORD, DWORD);
    bool IsSet(int) const;
    void Set(int);
    void Reset(int);
    //TAffectFlag & operator=(const TAffectFlag &);
};
}
#endif // __LIBM2_GAME_TAFFECTFLAG_HPP
