#include "CThreeWayWar.hpp"
namespace libm2{
CThreeWayWar::CThreeWayWar() {
	((void(*)(CThreeWayWar *))Addr::CThreeWayWar::CThreeWayWar)(this);
}

CThreeWayWar::~CThreeWayWar() {
	((void(*)(CThreeWayWar *))Addr::CThreeWayWar::__CThreeWayWar)(this);
}

bool CThreeWayWar::LoadSetting(const char * a0) {
	return ((bool(*)(CThreeWayWar *, const char *))Addr::CThreeWayWar::LoadSetting)(this, a0);
}

void CThreeWayWar::DecreaseReviveTokenForPlayer(DWORD a0) {
	((void(*)(CThreeWayWar *, DWORD))Addr::CThreeWayWar::DecreaseReviveTokenForPlayer)(this, a0);
}

void CThreeWayWar::RandomEventMapSet() {
	((void(*)(CThreeWayWar *))Addr::CThreeWayWar::RandomEventMapSet)(this);
}

void CThreeWayWar::SetKillScore(BYTE a0, int a1) {
	((void(*)(CThreeWayWar *, BYTE, int))Addr::CThreeWayWar::SetKillScore)(this, a0, a1);
}

const ForkedSungziMapInfo & CThreeWayWar::GetEventSungZiMapInfo() const {
	return ((const ForkedSungziMapInfo &(*)(const CThreeWayWar *))Addr::CThreeWayWar::GetEventSungZiMapInfo)(this);
}

int CThreeWayWar::GetKillScore(BYTE a0) const {
	return ((int(*)(const CThreeWayWar *, BYTE))Addr::CThreeWayWar::GetKillScore)(this, a0);
}

void CThreeWayWar::RemoveAllMonstersInThreeWay() const {
	((void(*)(const CThreeWayWar *))Addr::CThreeWayWar::RemoveAllMonstersInThreeWay)(this);
}

const ForkedPassMapInfo & CThreeWayWar::GetEventPassMapInfo() const {
	return ((const ForkedPassMapInfo &(*)(const CThreeWayWar *))Addr::CThreeWayWar::GetEventPassMapInfo)(this);
}
bool CThreeWayWar::IsSungZiMapIndex(int a0) const {
	return ((bool(*)(const CThreeWayWar *, int))Addr::CThreeWayWar::IsSungZiMapIndex)(this, a0);
}

void CThreeWayWar::RegisterUser(DWORD a0) {
	((void(*)(CThreeWayWar *, DWORD))Addr::CThreeWayWar::RegisterUser)(this, a0);
}

void CThreeWayWar::onDead(LPCHARACTER a0, LPCHARACTER a1) {
	((void(*)(CThreeWayWar *, LPCHARACTER, LPCHARACTER))Addr::CThreeWayWar::onDead)(this, a0, a1);
}

void CThreeWayWar::Initialize() {
	((void(*)(CThreeWayWar *))Addr::CThreeWayWar::Initialize)(this);
}

bool CThreeWayWar::IsRegisteredUser(DWORD a0) const {
	return ((bool(*)(const CThreeWayWar *, DWORD))Addr::CThreeWayWar::IsRegisteredUser)(this, a0);
}

int CThreeWayWar::GetReviveTokenForPlayer(DWORD a0) {
	return ((int(*)(CThreeWayWar *, DWORD))Addr::CThreeWayWar::GetReviveTokenForPlayer)(this, a0);
}

bool CThreeWayWar::IsThreeWayWarMapIndex(int a0) const {
	return ((bool(*)(const CThreeWayWar *, int))Addr::CThreeWayWar::IsThreeWayWarMapIndex)(this, a0);
}

void CThreeWayWar::SetReviveTokenForPlayer(DWORD a0, int a1) {
	((void(*)(CThreeWayWar *, DWORD, int))Addr::CThreeWayWar::SetReviveTokenForPlayer)(this, a0, a1);
}   
}
