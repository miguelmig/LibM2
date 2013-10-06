#include "CManager.hpp"
namespace libm2{
building::CManager::CManager() {
	((void(*)(building::CManager *))Addr::building::CManager::CManager)(this);
}

void building::CManager::SendLandList(LPDESC a0, long a1) {
	((void(*)(building::CManager *, LPDESC, long))Addr::building::CManager::SendLandList)(this, a0, a1);
}

building::LPOBJECT building::CManager::FindObjectByVID(DWORD a0) {
	return ((building::LPOBJECT(*)(building::CManager *, DWORD))Addr::building::CManager::FindObjectByVID)(this, a0);
}

bool building::CManager::LoadObject(building::TObject * a0, bool a1) {
	return ((bool(*)(building::CManager *, building::TObject *, bool))Addr::building::CManager::LoadObject)(this, a0, a1);
}

void building::CManager::FinalizeBoot() {
	((void(*)(building::CManager *))Addr::building::CManager::FinalizeBoot)(this);
}

building::CLand * building::CManager::FindLand(long a0, long a1, long a2) {
	return ((building::CLand *(*)(building::CManager *, long, long, long))Addr::building::CManager::FindLand__4462)(this, a0, a1, a2);
}

void building::CManager::Destroy() {
	((void(*)(building::CManager *))Addr::building::CManager::Destroy)(this);
}

bool building::CManager::LoadLand(building::TLand * a0) {
	return ((bool(*)(building::CManager *, building::TLand *))Addr::building::CManager::LoadLand)(this, a0);
}

bool building::CManager::LoadObjectProto(const building::TObjectProto * a0, int a1) {
	return ((bool(*)(building::CManager *, const building::TObjectProto *, int))Addr::building::CManager::LoadObjectProto)(this, a0, a1);
}

building::TObjectProto * building::CManager::GetObjectProto(DWORD a0) {
	return ((building::TObjectProto *(*)(building::CManager *, DWORD))Addr::building::CManager::GetObjectProto)(this, a0);
}

void building::CManager::ClearLand(DWORD a0) {
	((void(*)(building::CManager *, DWORD))Addr::building::CManager::ClearLand)(this, a0);
}

void building::CManager::UnregisterObject(building::LPOBJECT a0) {
	((void(*)(building::CManager *, building::LPOBJECT))Addr::building::CManager::UnregisterObject)(this, a0);
}

building::CLand * building::CManager::FindLandByGuild(DWORD a0) {
	return ((building::CLand *(*)(building::CManager *, DWORD))Addr::building::CManager::FindLandByGuild)(this, a0);
}

building::CLand * building::CManager::FindLand(DWORD a0) {
	return ((building::CLand *(*)(building::CManager *, DWORD))Addr::building::CManager::FindLand)(this, a0);
}

void building::CManager::DeleteObject(DWORD a0) {
	((void(*)(building::CManager *, DWORD))Addr::building::CManager::DeleteObject)(this, a0);
}

void building::CManager::UpdateLand(building::TLand * a0) {
	((void(*)(building::CManager *, building::TLand *))Addr::building::CManager::UpdateLand)(this, a0);
}

void building::CManager::ClearLandByGuildID(DWORD a0) {
	((void(*)(building::CManager *, DWORD))Addr::building::CManager::ClearLandByGuildID)(this, a0);
}
}
