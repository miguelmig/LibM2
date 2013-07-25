#ifndef __LIBM2_GAME_CLOGINKEY_HPP
#define __LIBM2_GAME_CLOGINKEY_HPP
#include "stdInclude.hpp"
namespace libm2{
class CLoginKey {
    DWORD m_dwKey;
    DWORD m_dwExpireTime;
    LPDESC m_pkDesc;
  public:
    CLoginKey(DWORD, LPDESC);
    void Expire(void);
    operator DWORD(void) const;
};
}
#endif // __LIBM2_GAME_CLOGINKEY_HPP
