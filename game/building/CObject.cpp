#include "CObject.hpp"
#include "../../addr.hpp"
namespace libm2{
void building::CObject::SetVID(DWORD a0) {
	((void(*)(building::CObject *, DWORD))Addr::building::CObject::SetVID)(this, a0);
}

void building::CObject::ApplySpecialEffect() {
	((void(*)(building::CObject *))Addr::building::CObject::ApplySpecialEffect)(this);
}

bool building::CObject::Show(long a0, long a1, long a2) {
	return ((bool(*)(building::CObject *, long, long, long))Addr::building::CObject::Show)(this, a0, a1, a2);
}

void building::CObject::RemoveSpecialEffect() {
	((void(*)(building::CObject *))Addr::building::CObject::RemoveSpecialEffect)(this);
}

void building::CObject::RegenNPC() {
	((void(*)(building::CObject *))Addr::building::CObject::RegenNPC)(this);
}

building::CObject::CObject(building::TObject * a0, building::TObjectProto * a1) {
	((void(*)(building::CObject *, building::TObject *, building::TObjectProto *))Addr::building::CObject::CObject)(this, a0, a1);
}

void building::CObject::EncodeInsertPacket(LPENTITY a0) {
	((void(*)(building::CObject *, LPENTITY))Addr::building::CObject::EncodeInsertPacket)(this, a0);
}

void building::CObject::Destroy() {
	((void(*)(building::CObject *))Addr::building::CObject::Destroy)(this);
}

void building::CObject::Save() {
	((void(*)(building::CObject *))Addr::building::CObject::Save)(this);
}

void building::CObject::Reconstruct(DWORD a0) {
	((void(*)(building::CObject *, DWORD))Addr::building::CObject::Reconstruct)(this, a0);
}
}
