#include "CInputProcessor.hpp"
#include "../addr.hpp"
#include "DESC.hpp"
namespace libm2{
void CInputProcessor::Handshake(LPDESC a0, const char * a1) {
	((void(*)(CInputProcessor *, LPDESC, const char *))Addr::CInputProcessor::Handshake)(this, a0, a1);
}

CInputProcessor::CInputProcessor() {
	((void(*)(CInputProcessor *))Addr::CInputProcessor::CInputProcessor)(this);
}

void CInputProcessor::Version(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputProcessor *, LPCHARACTER, const char *))Addr::CInputProcessor::Version)(this, a0, a1);
}

bool CInputProcessor::Process(LPDESC a0, const void * a1, int a2, int & a3) {
	return ((bool(*)(CInputProcessor *, LPDESC, const void *, int, int &))Addr::CInputProcessor::Process)(this, a0, a1, a2, a3);
}

void CInputProcessor::BindPacketInfo(CPacketInfo * a0) {
	((void(*)(CInputProcessor *, CPacketInfo *))Addr::CInputProcessor::BindPacketInfo)(this, a0);
}

CInputProcessor::~CInputProcessor() {
	((void(*)(CInputProcessor *))Addr::CInputProcessor::__CInputProcessor)(this);
}

void CInputProcessor::Pong(LPDESC a0) {
	((void(*)(CInputProcessor *, LPDESC))Addr::CInputProcessor::Pong)(this, a0);
}
}
