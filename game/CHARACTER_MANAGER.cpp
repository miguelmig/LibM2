/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CHARACTER_MANAGER.hpp"
namespace libm2{
LPCHARACTER CHARACTER_MANAGER::Find(DWORD vid){
    return ((LPCHARACTER(*)(CHARACTER_MANAGER*,DWORD))Addr::CHARACTER_MANAGER::Find__DWORD)(this, vid);
}
}
