#include "CState.hpp"
#include "../addr.hpp"
namespace libm2{
CState::~CState() {
	((void(*)(CState *))Addr::CState::__CState)(this);
}
}
