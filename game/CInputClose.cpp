#include "CInputClose.hpp"
#include "../addr.hpp"
namespace libm2{
int CInputClose::Analyze(LPDESC a0, BYTE a1, const char * a2) {
	return ((int(*)(CInputClose *, LPDESC, BYTE, const char *))Addr::CInputClose::Analyze)(this, a0, a1, a2);
}

BYTE CInputClose::GetType() {
	return ((BYTE(*)(CInputClose *))Addr::CInputClose::GetType)(this);
}
}
