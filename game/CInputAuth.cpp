#include "CInputAuth.hpp"
#include "../addr.hpp"
namespace libm2{
BYTE CInputAuth::GetType() {
	return ((BYTE(*)(CInputAuth *))Addr::CInputAuth::GetType)(this);
}
void CInputAuth::PasspodAnswer(LPDESC a0, const char * a1) {
	((void(*)(CInputAuth *, LPDESC, const char *))Addr::CInputAuth::PasspodAnswer)(this, a0, a1);
}

void CInputAuth::LoginOpenID(LPDESC a0, const char * a1) {
	((void(*)(CInputAuth *, LPDESC, const char *))Addr::CInputAuth::LoginOpenID)(this, a0, a1);
}

CInputAuth::CInputAuth() {
	((void(*)(CInputAuth *))Addr::CInputAuth::CInputAuth)(this);
}

void CInputAuth::Login(LPDESC a0, const char * a1) {
	((void(*)(CInputAuth *, LPDESC, const char *))Addr::CInputAuth::Login)(this, a0, a1);
}

int CInputAuth::Analyze(LPDESC a0, BYTE a1, const char * a2) {
	return ((int(*)(CInputAuth *, LPDESC, BYTE, const char *))Addr::CInputAuth::Analyze)(this, a0, a1, a2);
}

int CInputAuth::auth_OpenID(const char * a0, const char * a1, char * a2) {
	return ((int(*)(CInputAuth *, const char *, const char *, char *))Addr::CInputAuth::auth_OpenID)(this, a0, a1, a2);
}
}
