#ifndef __LIBM2_GAME_CINPUTHANDSHAKE_HPP
#define __LIBM2_GAME_CINPUTHANDSHAKE_HPP
#include "CInputProcessor.hpp"
namespace libm2{
class CInputHandshake : public CInputProcessor {
  protected:
    CPacketInfo *m_pMainPacketInfo;
  public:
    CInputHandshake();
    ~CInputHandshake();
    virtual BYTE GetType(void);
  protected:
    virtual int Analyze(LPDESC, BYTE, const char *);
    void GuildMarkLogin(LPDESC, const char *);
};
}
#endif // __LIBM2_GAME_CINPUTHANDSHAKE_HPP
