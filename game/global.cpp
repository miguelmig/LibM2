#include "global.hpp"
#include "../addr.hpp"
namespace libm2{
const long* g_start_map=(long*)Addr::global::g_start_map;
const int* g_start_position=(int*)Addr::global::g_start_position;
}