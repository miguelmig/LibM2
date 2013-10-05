#include "CInputP2P.hpp"
#include "../addr.hpp"
namespace libm2{
void CInputP2P::FindPosition(LPDESC a0, const char * a1) {
	((void(*)(CInputP2P *, LPDESC, const char *))Addr::CInputP2P::FindPosition)(this, a0, a1);
}

void CInputP2P::Transfer(const char * a0) {
	((void(*)(CInputP2P *, const char *))Addr::CInputP2P::Transfer)(this, a0);
}

void CInputP2P::Shout(const char * a0) {
	((void(*)(CInputP2P *, const char *))Addr::CInputP2P::Shout)(this, a0);
}

void CInputP2P::Disconnect(const char * a0) {
	((void(*)(CInputP2P *, const char *))Addr::CInputP2P::Disconnect)(this, a0);
}

int CInputP2P::Analyze(LPDESC a0, BYTE a1, const char * a2) {
	return ((int(*)(CInputP2P *, LPDESC, BYTE, const char *))Addr::CInputP2P::Analyze)(this, a0, a1, a2);
}

void CInputP2P::XmasWarpSantaReply(const char * a0) {
	((void(*)(CInputP2P *, const char *))Addr::CInputP2P::XmasWarpSantaReply)(this, a0);
}

void CInputP2P::MessengerAdd(const char * a0) {
	((void(*)(CInputP2P *, const char *))Addr::CInputP2P::MessengerAdd)(this, a0);
}

void CInputP2P::LoginPing(LPDESC a0, const char * a1) {
	((void(*)(CInputP2P *, LPDESC, const char *))Addr::CInputP2P::LoginPing)(this, a0, a1);
}

int CInputP2P::Relay(LPDESC a0, const char * a1, size_t a2) {
	return ((int(*)(CInputP2P *, LPDESC, const char *, size_t))Addr::CInputP2P::Relay)(this, a0, a1, a2);
}

void CInputP2P::XmasWarpSanta(const char * a0) {
	((void(*)(CInputP2P *, const char *))Addr::CInputP2P::XmasWarpSanta)(this, a0);
}

int CInputP2P::MonarchNotice(LPDESC a0, const char * a1, size_t a2) {
	return ((int(*)(CInputP2P *, LPDESC, const char *, size_t))Addr::CInputP2P::MonarchNotice)(this, a0, a1, a2);
}

void CInputP2P::Logout(LPDESC a0, const char * a1) {
	((void(*)(CInputP2P *, LPDESC, const char *))Addr::CInputP2P::Logout)(this, a0, a1);
}

void CInputP2P::MessengerRemove(const char * a0) {
	((void(*)(CInputP2P *, const char *))Addr::CInputP2P::MessengerRemove)(this, a0);
}

void CInputP2P::WarpCharacter(const char * a0) {
	((void(*)(CInputP2P *, const char *))Addr::CInputP2P::WarpCharacter)(this, a0);
}

int CInputP2P::Guild(LPDESC a0, const char * a1, size_t a2) {
	return ((int(*)(CInputP2P *, LPDESC, const char *, size_t))Addr::CInputP2P::Guild)(this, a0, a1, a2);
}

void CInputP2P::Setup(LPDESC a0, const char * a1) {
	((void(*)(CInputP2P *, LPDESC, const char *))Addr::CInputP2P::Setup)(this, a0, a1);
}

void CInputP2P::BlockChat(const char * a0) {
	((void(*)(CInputP2P *, const char *))Addr::CInputP2P::BlockChat)(this, a0);
}

int CInputP2P::Notice(LPDESC a0, const char * a1, size_t a2) {
	return ((int(*)(CInputP2P *, LPDESC, const char *, size_t))Addr::CInputP2P::Notice)(this, a0, a1, a2);
}

int CInputP2P::MonarchTransfer(LPDESC a0, const char * a1) {
	return ((int(*)(CInputP2P *, LPDESC, const char *))Addr::CInputP2P::MonarchTransfer)(this, a0, a1);
}

void CInputP2P::Login(LPDESC a0, const char * a1) {
	((void(*)(CInputP2P *, LPDESC, const char *))Addr::CInputP2P::Login)(this, a0, a1);
}

void CInputP2P::GuildWarZoneMapIndex(const char * a0) {
	((void(*)(CInputP2P *, const char *))Addr::CInputP2P::GuildWarZoneMapIndex)(this, a0);
}

BYTE CInputP2P::GetType() {
	return ((BYTE(*)(CInputP2P *))Addr::CInputP2P::GetType)(this);
}

void CInputP2P::PCBangUpdate(const char * a0) {
	((void(*)(CInputP2P *, const char *))Addr::CInputP2P::PCBangUpdate)(this, a0);
}

CInputP2P::CInputP2P() {
	((void(*)(CInputP2P *))Addr::CInputP2P::CInputP2P)(this);
}


}
