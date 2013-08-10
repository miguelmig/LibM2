#include "CInputDead.hpp"
#include "../addr.hpp"
namespace libm2{
BYTE CInputDead::GetType() {
	return ((BYTE(*)(CInputDead *))Addr::CInputDead::GetType)(this);
}

int CInputDead::Analyze(LPDESC a0, BYTE a1, const char * a2) {
	return ((int(*)(CInputDead *, LPDESC, BYTE, const char *))Addr::CInputDead::Analyze)(this, a0, a1, a2);
}
}
