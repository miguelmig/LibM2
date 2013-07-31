#include "DESC_MANAGER.hpp"
#include "../addr.hpp"
namespace libm2{
void DESC_MANAGER::SendClientPackageCryptKey(LPDESC a0) {
	((void(*)(DESC_MANAGER *, LPDESC))Addr::DESC_MANAGER::SendClientPackageCryptKey)(this, a0);
}

LPDESC DESC_MANAGER::FindByHandle(DWORD a0) {
	return ((LPDESC(*)(DESC_MANAGER *, DWORD))Addr::DESC_MANAGER::FindByHandle)(this, a0);
}

void DESC_MANAGER::UpdateLocalUserCount() {
	((void(*)(DESC_MANAGER *))Addr::DESC_MANAGER::UpdateLocalUserCount)(this);
}

LPDESC DESC_MANAGER::AcceptP2PDesc(LPFDWATCH a0, socket_t a1) {
	return ((LPDESC(*)(DESC_MANAGER *, LPFDWATCH, socket_t))Addr::DESC_MANAGER::AcceptP2PDesc)(this, a0, a1);
}

void DESC_MANAGER::Destroy() {
	((void(*)(DESC_MANAGER *))Addr::DESC_MANAGER::Destroy)(this);
}


void DESC_MANAGER::ConnectAccount(const std::string & a0, LPDESC a1) {
	((void(*)(DESC_MANAGER *, const std::string &, LPDESC))Addr::DESC_MANAGER::ConnectAccount)(this, a0, a1);
}

DWORD DESC_MANAGER::CreateLoginKey(LPDESC a0) {
	return ((DWORD(*)(DESC_MANAGER *, LPDESC))Addr::DESC_MANAGER::CreateLoginKey)(this, a0);
}

void DESC_MANAGER::SendClientPackageSDBToLoadMap(LPDESC a0, const char * a1) {
	((void(*)(DESC_MANAGER *, LPDESC, const char *))Addr::DESC_MANAGER::SendClientPackageSDBToLoadMap)(this, a0, a1);
}

LPDESC DESC_MANAGER::FindByLoginKey(DWORD a0) {
	return ((LPDESC(*)(DESC_MANAGER *, DWORD))Addr::DESC_MANAGER::FindByLoginKey)(this, a0);
}

void DESC_MANAGER::Initialize() {
	((void(*)(DESC_MANAGER *))Addr::DESC_MANAGER::Initialize)(this);
}

DESC_MANAGER::~DESC_MANAGER() {
	((void(*)(DESC_MANAGER *))Addr::DESC_MANAGER::__DESC_MANAGER)(this);
}

void DESC_MANAGER::DestroyDesc(LPDESC a0, bool a1) {
	((void(*)(DESC_MANAGER *, LPDESC, bool))Addr::DESC_MANAGER::DestroyDesc)(this, a0, a1);
}

LPCLIENT_DESC DESC_MANAGER::CreateConnectionDesc(LPFDWATCH a0, const char * a1, WORD a2, int a3, bool a4) {
	return ((LPCLIENT_DESC(*)(DESC_MANAGER *, LPFDWATCH, const char *, WORD, int, bool))Addr::DESC_MANAGER::CreateConnectionDesc)(this, a0, a1, a2, a3, a4);
}

LPDESC DESC_MANAGER::FindByLoginName(const std::string & a0) {
	return ((LPDESC(*)(DESC_MANAGER *, const std::string &))Addr::DESC_MANAGER::FindByLoginName)(this, a0);
}

void DESC_MANAGER::TryConnect() {
	((void(*)(DESC_MANAGER *))Addr::DESC_MANAGER::TryConnect)(this);
}

void DESC_MANAGER::DisconnectAccount(const std::string & a0) {
	((void(*)(DESC_MANAGER *, const std::string &))Addr::DESC_MANAGER::DisconnectAccount)(this, a0);
}

DWORD DESC_MANAGER::MakeRandomKey(DWORD a0) {
	return ((DWORD(*)(DESC_MANAGER *, DWORD))Addr::DESC_MANAGER::MakeRandomKey)(this, a0);
}

void DESC_MANAGER::GetUserCount(int & a0, int ** a1, int & a2) {
	((void(*)(DESC_MANAGER *, int &, int **, int &))Addr::DESC_MANAGER::GetUserCount)(this, a0, a1, a2);
}

void DESC_MANAGER::DestroyClosed() {
	((void(*)(DESC_MANAGER *))Addr::DESC_MANAGER::DestroyClosed)(this);
}

LPDESC DESC_MANAGER::FindByHandshake(DWORD a0) {
	return ((LPDESC(*)(DESC_MANAGER *, DWORD))Addr::DESC_MANAGER::FindByHandshake)(this, a0);
}

bool DESC_MANAGER::LoadClientPackageCryptInfo(const char * a0) {
	return ((bool(*)(DESC_MANAGER *, const char *))Addr::DESC_MANAGER::LoadClientPackageCryptInfo)(this, a0);
}

LPDESC DESC_MANAGER::AcceptDesc(LPFDWATCH a0, socket_t a1) {
	return ((LPDESC(*)(DESC_MANAGER *, LPFDWATCH, socket_t))Addr::DESC_MANAGER::AcceptDesc)(this, a0, a1);
}

LPDESC DESC_MANAGER::FindByCharacterName(const char * a0) {
	return ((LPDESC(*)(DESC_MANAGER *, const char *))Addr::DESC_MANAGER::FindByCharacterName)(this, a0);
}

const std::tr1::unordered_set<DESC*> & DESC_MANAGER::GetClientSet() {
	return ((const std::tr1::unordered_set<DESC*> &(*)(DESC_MANAGER *))Addr::DESC_MANAGER::GetClientSet)(this);
}

bool DESC_MANAGER::IsP2PDescExist(const char * a0, WORD a1) {
	return ((bool(*)(DESC_MANAGER *, const char *, WORD))Addr::DESC_MANAGER::IsP2PDescExist)(this, a0, a1);
}

DESC_MANAGER::DESC_MANAGER() {
	((void(*)(DESC_MANAGER *))Addr::DESC_MANAGER::DESC_MANAGER)(this);
}

DWORD DESC_MANAGER::CreateHandshake() {
	return ((DWORD(*)(DESC_MANAGER *))Addr::DESC_MANAGER::CreateHandshake)(this);
}

void DESC_MANAGER::ProcessExpiredLoginKey() {
	((void(*)(DESC_MANAGER *))Addr::DESC_MANAGER::ProcessExpiredLoginKey)(this);
}
}


