/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
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
