#ifndef __LIBM2_GAME_CSTATE_HPP
#define __LIBM2_GAME_CSTATE_HPP
namespace libm2{
class CState {
  public:
    ~CState();
    virtual void ExecuteBeginState(void);
    virtual void ExecuteState(void);
    virtual void ExecuteEndState(void);
};
}
#endif // __LIBM2_GAME_CSTATE_HPP
