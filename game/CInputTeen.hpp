#ifndef __LIBM2_GAME_CINPUTTEEN_HPP
#define __LIBM2_GAME_CINPUTTEEN_HPP
#include "CInputProcessor.hpp"
namespace libm2{
class CInputTeen : public CInputProcessor {
  private:
    int m_step;
  public:
    virtual BYTE GetType(void);
    void SetStep(int);
  protected:
    virtual bool Process(LPDESC, const void *, int, int &);
    virtual int Analyze(LPDESC, BYTE, const char *);
  private:
    bool ProcessHandshake(LPDESC, const void *, size_t, int &);
    bool ProcessMain(LPDESC, const void *, size_t, int &);
};
}

#endif // __LIBM2_GAME_CINPUTTEEN_HPP
