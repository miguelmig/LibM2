#ifndef __LIBM2_GAME_VID_HPP
#define __LIBM2_GAME_VID_HPP
#include "stdInclude.hpp"
namespace libm2{
class VID {
  private:
    DWORD m_id;
    DWORD m_crc;

  public:
    VID(void);
    VID(DWORD, DWORD);
    VID(const VID &);
    const VID & operator=(const VID &);
    bool operator==(const VID &) const;
    bool operator!=(const VID &) const;
    operator DWORD(void) const;
    void Reset(void);
};
}
#endif // __LIBM2_GAME_VID_HPP
