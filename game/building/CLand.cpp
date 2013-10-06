#include "CLand.hpp"
#include "../../addr.hpp"
namespace libm2{
bool building::CLand::RequestCreateWall(long a0, float a1) {
	return ((bool(*)(building::CLand *, long, float))Addr::building::CLand::RequestCreateWall)(this, a0, a1);
}

building::LPOBJECT building::CLand::FindObjectByVID(DWORD a0) {
	return ((building::LPOBJECT(*)(building::CLand *, DWORD))Addr::building::CLand::FindObjectByVID)(this, a0);
}

building::LPOBJECT building::CLand::FindObjectByNPC(LPCHARACTER a0) {
	return ((building::LPOBJECT(*)(building::CLand *, LPCHARACTER))Addr::building::CLand::FindObjectByNPC)(this, a0);
}

void building::CLand::PutData(const building::TLand * a0) {
	((void(*)(building::CLand *, const building::TLand *))Addr::building::CLand::PutData)(this, a0);
}

building::CLand::CLand(building::TLand * a0) {
	((void(*)(building::CLand *, building::TLand *))Addr::building::CLand::CLand)(this, a0);
}

void building::CLand::RequestDeleteWall() {
	((void(*)(building::CLand *))Addr::building::CLand::RequestDeleteWall)(this);
}

void building::CLand::SetOwner(DWORD a0) {
	((void(*)(building::CLand *, DWORD))Addr::building::CLand::SetOwner)(this, a0);
}

void building::CLand::Destroy() {
	((void(*)(building::CLand *))Addr::building::CLand::Destroy)(this);
}

void building::CLand::RequestDeleteObjectByVID(DWORD a0) {
	((void(*)(building::CLand *, DWORD))Addr::building::CLand::RequestDeleteObjectByVID)(this, a0);
}

void building::CLand::InsertObject(building::LPOBJECT a0) {
	((void(*)(building::CLand *, building::LPOBJECT))Addr::building::CLand::InsertObject)(this, a0);
}

void building::CLand::RequestDeleteObject(DWORD a0) {
	((void(*)(building::CLand *, DWORD))Addr::building::CLand::RequestDeleteObject)(this, a0);
}

building::LPOBJECT building::CLand::FindObjectByGroup(DWORD a0) {
	return ((building::LPOBJECT(*)(building::CLand *, DWORD))Addr::building::CLand::FindObjectByGroup)(this, a0);
}

void building::CLand::RequestUpdate(DWORD a0) {
	((void(*)(building::CLand *, DWORD))Addr::building::CLand::RequestUpdate)(this, a0);
}

void building::CLand::ClearLand() {
	((void(*)(building::CLand *))Addr::building::CLand::ClearLand)(this);
}

bool building::CLand::RequestCreateObject(DWORD a0, long a1, long a2, long a3, float a4, float a5, float a6, bool a7) {
	return ((bool(*)(building::CLand *, DWORD, long, long, long, float, float, float, bool))Addr::building::CLand::RequestCreateObject)(this, a0, a1, a2, a3, a4, a5, a6, a7);
}

building::LPOBJECT building::CLand::FindObject(DWORD a0) {
	return ((building::LPOBJECT(*)(building::CLand *, DWORD))Addr::building::CLand::FindObject)(this, a0);
}

const building::TLand & building::CLand::GetData() {
	return ((const building::TLand &(*)(building::CLand *))Addr::building::CLand::GetData)(this);
}

building::LPOBJECT building::CLand::FindObjectByVnum(DWORD a0) {
	return ((building::LPOBJECT(*)(building::CLand *, DWORD))Addr::building::CLand::FindObjectByVnum)(this, a0);
}

void building::CLand::RequestDeleteWallBlocks(DWORD a0) {
	((void(*)(building::CLand *, DWORD))Addr::building::CLand::RequestDeleteWallBlocks)(this, a0);
}

void building::CLand::DrawWall(DWORD a0, long a1, long & a2, long & a3, char a4, float a5) {
	((void(*)(building::CLand *, DWORD, long, long &, long &, char, float))Addr::building::CLand::DrawWall)(this, a0, a1, a2, a3, a4, a5);
}

bool building::CLand::RequestCreateWallBlocks(DWORD a0, long a1, char a2, bool a3, bool a4, bool a5, bool a6) {
	return ((bool(*)(building::CLand *, DWORD, long, char, bool, bool, bool, bool))Addr::building::CLand::RequestCreateWallBlocks)(this, a0, a1, a2, a3, a4, a5, a6);
}

void building::CLand::DeleteObject(DWORD a0) {
	((void(*)(building::CLand *, DWORD))Addr::building::CLand::DeleteObject)(this, a0);
}
}
