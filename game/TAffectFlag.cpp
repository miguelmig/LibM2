#include "TAffectFlag.hpp"
namespace libm2{
TAffectFlag::TAffectFlag(){
    bits[0]=0;
    bits[1]=0;
}
TAffectFlag::TAffectFlag(DWORD bit1, DWORD bit2){
    bits[0]=bit1;
    bits[1]=bit2;
}
}
