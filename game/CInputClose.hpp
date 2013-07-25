#ifndef __LIBM2_GAME_CINPUTCLOSE_HPP
#define __LIBM2_GAME_CINPUTCLOSE_HPP
#include "CInputProcessor.hpp"
namespace libm2{
class CInputClose : public CInputProcessor {
  public:
    virtual BYTE GetType(void);
  protected:
    virtual int Analyze(LPDESC, BYTE, const char *);
};
}
#endif // __LIBM2_GAME_CINPUTCLOSE_HPP
