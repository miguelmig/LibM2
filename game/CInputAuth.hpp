#ifndef __LIBM2_GAME_CINPUTAUTH_HPP
#define __LIBM2_GAME_CINPUTAUTH_HPP
#include "CInputProcessor.hpp"
namespace libm2{
class CInputAuth : public CInputProcessor {
  public:
    CInputAuth();
    virtual BYTE GetType(void);
  protected:
    virtual int Analyze(LPDESC, BYTE, const char *);
    int auth_OpenID(const char *, const char *, char *);
  public:
    void Login(LPDESC, const char *);
    void LoginOpenID(LPDESC, const char *);
    void PasspodAnswer(LPDESC, const char *);
};
}
#endif // __LIBM2_GAME_CINPUTAUTH_HPP
