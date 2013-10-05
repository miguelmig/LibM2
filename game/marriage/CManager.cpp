#include "CManager.hpp"

namespace libm2{
bool marriage::CManager::IsMarried(DWORD a0) {
	return ((bool(*)(marriage::CManager *, DWORD))Addr::marriage::CManager::IsMarried)(this, a0);
}

void marriage::CManager::Add(DWORD a0, DWORD a1, time_t a2, const char * a3, const char * a4) {
	((void(*)(marriage::CManager *, DWORD, DWORD, time_t, const char *, const char *))Addr::marriage::CManager::Add)(this, a0, a1, a2, a3, a4);
}

bool marriage::CManager::IsMarriageUniqueItem(DWORD a0) {
	return ((bool(*)(marriage::CManager *, DWORD))Addr::marriage::CManager::IsMarriageUniqueItem)(this, a0);
}

void marriage::CManager::Destroy() {
	((void(*)(marriage::CManager *))Addr::marriage::CManager::Destroy)(this);
}

bool marriage::CManager::IsEngaged(DWORD a0) {
	return ((bool(*)(marriage::CManager *, DWORD))Addr::marriage::CManager::IsEngaged)(this, a0);
}

marriage::CManager::CManager() {
	((void(*)(marriage::CManager *))Addr::marriage::CManager::CManager)(this);
}

void marriage::CManager::RequestAdd(DWORD a0, DWORD a1, const char * a2, const char * a3) {
	((void(*)(marriage::CManager *, DWORD, DWORD, const char *, const char *))Addr::marriage::CManager::RequestAdd)(this, a0, a1, a2, a3);
}

marriage::TMarriage * marriage::CManager::Get(DWORD a0) {
	return ((marriage::TMarriage *(*)(marriage::CManager *, DWORD))Addr::marriage::CManager::Get)(this, a0);
}

void marriage::CManager::WeddingStart(DWORD a0, DWORD a1) {
	((void(*)(marriage::CManager *, DWORD, DWORD))Addr::marriage::CManager::WeddingStart)(this, a0, a1);
}

void marriage::CManager::Update(DWORD a0, DWORD a1, long a2, BYTE a3) {
	((void(*)(marriage::CManager *, DWORD, DWORD, long, BYTE))Addr::marriage::CManager::Update)(this, a0, a1, a2, a3);
}

void marriage::CManager::Logout(DWORD a0) {
	((void(*)(marriage::CManager *, DWORD))Addr::marriage::CManager::Logout)(this, a0);
}

bool marriage::CManager::Initialize() {
	return ((bool(*)(marriage::CManager *))Addr::marriage::CManager::Initialize)(this);
}

void marriage::CManager::WeddingReady(DWORD a0, DWORD a1, DWORD a2) {
	((void(*)(marriage::CManager *, DWORD, DWORD, DWORD))Addr::marriage::CManager::WeddingReady)(this, a0, a1, a2);
}

void marriage::CManager::RequestUpdate(DWORD a0, DWORD a1, int a2, BYTE a3) {
	((void(*)(marriage::CManager *, DWORD, DWORD, int, BYTE))Addr::marriage::CManager::RequestUpdate)(this, a0, a1, a2, a3);
}

void marriage::CManager::Remove(DWORD a0, DWORD a1) {
	((void(*)(marriage::CManager *, DWORD, DWORD))Addr::marriage::CManager::Remove)(this, a0, a1);
}

void marriage::CManager::Logout(LPCHARACTER a0) {
	((void(*)(marriage::CManager *, LPCHARACTER))Addr::marriage::CManager::Logout__19223)(this, a0);
}

void marriage::CManager::Login(LPCHARACTER a0) {
	((void(*)(marriage::CManager *, LPCHARACTER))Addr::marriage::CManager::Login)(this, a0);
}

void marriage::CManager::RequestEndWedding(DWORD a0, DWORD a1) {
	((void(*)(marriage::CManager *, DWORD, DWORD))Addr::marriage::CManager::RequestEndWedding)(this, a0, a1);
}

void marriage::CManager::WeddingEnd(DWORD a0, DWORD a1) {
	((void(*)(marriage::CManager *, DWORD, DWORD))Addr::marriage::CManager::WeddingEnd)(this, a0, a1);
}

void marriage::CManager::RequestRemove(DWORD a0, DWORD a1) {
	((void(*)(marriage::CManager *, DWORD, DWORD))Addr::marriage::CManager::RequestRemove)(this, a0, a1);
}

bool marriage::CManager::IsEngagedOrMarried(DWORD a0) {
	return ((bool(*)(marriage::CManager *, DWORD))Addr::marriage::CManager::IsEngagedOrMarried)(this, a0);
}
}
