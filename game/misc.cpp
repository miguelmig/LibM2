#include "misc.hpp"
#include "../addr.hpp"
namespace libm2{
int get_global_time(){
    return ((int(*)(void))Addr::misc::get_global_time)();
}
const char* locale_find(const char* data){
    return ((const char* (*)(const char*))Addr::misc::locale_find)(data);
}
}
