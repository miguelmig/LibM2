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
