#ifndef __LIBM2_COMMAND_HPP
#define __LIBM2_COMMAND_HPP
#include "game/CHARACTER.hpp"
#include <vector>

namespace libm2{
class ICommand{
public:
    virtual bool isReplaced();
    virtual bool usableFor(LPCHARACTER)=0;
    virtual void use(LPCHARACTER,std::vector<std::string> args)=0;
};
class GMCommand: public ICommand{
  protected:
    BYTE minLevel;
  public:
    virtual bool usableFor(LPCHARACTER);
};
}
#endif // __LIBM2_COMMAND_HPP
