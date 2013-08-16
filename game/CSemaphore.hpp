#ifndef __LIBM2_GAME_CSEMAPHORE_HPP
#define __LIBM2_GAME_CSEMAPHORE_HPP
#include "stdInclude.hpp"
namespace libm2{
typedef void* sem_t;
class CSemaphore {
  private:
    sem_t *m_hSem;

  public:
    CSemaphore(void);
    ~CSemaphore();
    int Initialize(void);
    void Clear(void);
    void Destroy(void);
    int Wait(void);
    int Release(int);
};
}

#endif // __LIBM2_GAME_CSEMAPHORE_HPP
