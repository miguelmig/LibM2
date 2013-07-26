/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_LIB_CLASSSIZE_HPP
#define __LIBM2_LIB_CLASSSIZE_HPP
#include "dif.hpp"
#include <iostream>
#include <type_traits>
namespace libm2{
template <class T>
void increaseSize(unsigned int*addr){
    unsigned int* s=new unsigned int(sizeof(T));
    if (addr>=s){
        std::cout << "libm2::increaseSize size is already big enough (orig: " << *addr << " new: " << *s << ") - skipping "<< std::endl;
        return;
    }
    std::cout << "libm2::increaseSize increasing size (orig: " << *addr << " new: " << *s << ")"<< std::endl;
    dif(addr,s,4);
}
}
#endif // __LIBM2_LIB_CLASSSIZE_HPP
