#ifndef __LIBM2_GAME_CHARACTERVECTORINTERACTOR_HPP
#define __LIBM2_GAME_CHARACTERVECTORINTERACTOR_HPP
#include "CHARACTER.hpp"
namespace libm2{
struct CharacterVectorInteractor: public std::vector<CHARACTER*> {
  private:
    bool m_bMyBegin;

  public:
    CharacterVectorInteractor(void);
    CharacterVectorInteractor(const CHARACTER_SET &);
    ~CharacterVectorInteractor();
};
}
#endif // __LIBM2_GAME_CHARACTERVECTORINTERACTOR_HPP
