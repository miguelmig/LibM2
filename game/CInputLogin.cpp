#include "CInputLogin.hpp"
#include "../addr.hpp"
namespace libm2{
void CInputLogin::ChangeName(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::ChangeName)(this, a0, a1);
}

void CInputLogin::CharacterDelete(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::CharacterDelete)(this, a0, a1);
}

void CInputLogin::GuildMarkUpload(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::GuildMarkUpload)(this, a0, a1);
}

void CInputLogin::Entergame(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::Entergame)(this, a0, a1);
}

void CInputLogin::Login(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::Login)(this, a0, a1);
}

void CInputLogin::CharacterCreate(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::CharacterCreate)(this, a0, a1);
}

int CInputLogin::GuildSymbolUpload(LPDESC a0, const char * a1, size_t a2) {
	return ((int(*)(CInputLogin *, LPDESC, const char *, size_t))Addr::CInputLogin::GuildSymbolUpload)(this, a0, a1, a2);
}

void CInputLogin::LoginByKey(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::LoginByKey)(this, a0, a1);
}

void CInputLogin::GuildMarkIDXList(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::GuildMarkIDXList)(this, a0, a1);
}

int CInputLogin::Analyze(LPDESC a0, BYTE a1, const char * a2) {
	return ((int(*)(CInputLogin *, LPDESC, BYTE, const char *))Addr::CInputLogin::Analyze)(this, a0, a1, a2);
}

void CInputLogin::Empire(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::Empire)(this, a0, a1);
}

void CInputLogin::GuildSymbolCRC(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::GuildSymbolCRC)(this, a0, a1);
}

void CInputLogin::GuildMarkCRCList(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::GuildMarkCRCList)(this, a0, a1);
}

void CInputLogin::CharacterSelect(LPDESC a0, const char * a1) {
	((void(*)(CInputLogin *, LPDESC, const char *))Addr::CInputLogin::CharacterSelect)(this, a0, a1);
}
BYTE CInputLogin::GetType(){
    return ((BYTE(*)(const CInputLogin*))Addr::CInputLogin::GetType)(this);
}
}
