#include "CPrivManager.hpp"
namespace libm2{
int CPrivManager::GetPriv(LPCHARACTER a0, BYTE a1) {
	return ((int(*)(CPrivManager *, LPCHARACTER, BYTE))Addr::CPrivManager::GetPriv)(this, a0, a1);
}

void CPrivManager::RemoveCharacterPriv(DWORD a0, BYTE a1) {
	((void(*)(CPrivManager *, DWORD, BYTE))Addr::CPrivManager::RemoveCharacterPriv)(this, a0, a1);
}

int CPrivManager::GetPrivByGuild(DWORD a0, BYTE a1) {
	return ((int(*)(CPrivManager *, DWORD, BYTE))Addr::CPrivManager::GetPrivByGuild)(this, a0, a1);
}

void CPrivManager::GiveEmpirePriv(BYTE a0, BYTE a1, int a2, BYTE a3, time_t a4) {
	((void(*)(CPrivManager *, BYTE, BYTE, int, BYTE, time_t))Addr::CPrivManager::GiveEmpirePriv)(this, a0, a1, a2, a3, a4);
}

CPrivManager::SPrivEmpireData * CPrivManager::GetPrivByEmpireEx(BYTE a0, BYTE a1) {
	return ((CPrivManager::SPrivEmpireData *(*)(CPrivManager *, BYTE, BYTE))Addr::CPrivManager::GetPrivByEmpireEx)(this, a0, a1);
}
CPrivManager::CPrivManager() {
	((void(*)(CPrivManager *))Addr::CPrivManager::CPrivManager)(this);
}

void CPrivManager::RequestGiveEmpirePriv(BYTE a0, BYTE a1, int a2, time_t a3) {
	((void(*)(CPrivManager *, BYTE, BYTE, int, time_t))Addr::CPrivManager::RequestGiveEmpirePriv)(this, a0, a1, a2, a3);
}

int CPrivManager::GetPrivByCharacter(DWORD a0, BYTE a1) {
	return ((int(*)(CPrivManager *, DWORD, BYTE))Addr::CPrivManager::GetPrivByCharacter)(this, a0, a1);
}

void CPrivManager::GiveCharacterPriv(DWORD a0, BYTE a1, int a2, BYTE a3) {
	((void(*)(CPrivManager *, DWORD, BYTE, int, BYTE))Addr::CPrivManager::GiveCharacterPriv)(this, a0, a1, a2, a3);
}

int CPrivManager::GetPrivByEmpire(BYTE a0, BYTE a1) {
	return ((int(*)(CPrivManager *, BYTE, BYTE))Addr::CPrivManager::GetPrivByEmpire)(this, a0, a1);
}

void CPrivManager::RequestGiveCharacterPriv(DWORD a0, BYTE a1, int a2) {
	((void(*)(CPrivManager *, DWORD, BYTE, int))Addr::CPrivManager::RequestGiveCharacterPriv)(this, a0, a1, a2);
}

const CPrivManager::SPrivGuildData * CPrivManager::GetPrivByGuildEx(DWORD a0, BYTE a1) const {
	return ((const CPrivManager::SPrivGuildData *(*)(const CPrivManager *, DWORD, BYTE))Addr::CPrivManager::GetPrivByGuildEx)(this, a0, a1);
}

void CPrivManager::RemoveEmpirePriv(BYTE a0, BYTE a1) {
	((void(*)(CPrivManager *, BYTE, BYTE))Addr::CPrivManager::RemoveEmpirePriv)(this, a0, a1);
}

void CPrivManager::RemoveGuildPriv(DWORD a0, BYTE a1) {
	((void(*)(CPrivManager *, DWORD, BYTE))Addr::CPrivManager::RemoveGuildPriv)(this, a0, a1);
}

void CPrivManager::GiveGuildPriv(DWORD a0, BYTE a1, int a2, BYTE a3, time_t a4) {
	((void(*)(CPrivManager *, DWORD, BYTE, int, BYTE, time_t))Addr::CPrivManager::GiveGuildPriv)(this, a0, a1, a2, a3, a4);
}

void CPrivManager::RequestGiveGuildPriv(DWORD a0, BYTE a1, int a2, time_t a3) {
	((void(*)(CPrivManager *, DWORD, BYTE, int, time_t))Addr::CPrivManager::RequestGiveGuildPriv)(this, a0, a1, a2, a3);
}
}
