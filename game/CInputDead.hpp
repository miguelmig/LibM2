#ifndef __LIBM2_GAME_CINPUTDEAD_HPP
#define __LIBM2_GAME_CINPUTDEAD_HPP
#include "CInputMain.hpp"
namespace libm2{
class CInputDead : public CInputMain {
  public:
    virtual BYTE GetType(void);
  protected:
    virtual int Analyze(LPDESC, BYTE, const char *);
};
}
#endif // __LIBM2_GAME_CINPUTDEAD_HPP
