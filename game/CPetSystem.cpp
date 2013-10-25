#include "CPetSystem.hpp"
#include "../addr.hpp"
namespace libm2{
CPetActor * CPetSystem::GetByVID(DWORD a0) const {
	return ((CPetActor *(*)(const CPetSystem *, DWORD))Addr::CPetSystem::GetByVID)(this, a0);
}

void CPetSystem::DeletePet(DWORD a0) {
	((void(*)(CPetSystem *, DWORD))Addr::CPetSystem::DeletePet)(this, a0);
}

size_t CPetSystem::CountSummoned() const {
	return ((size_t(*)(const CPetSystem *))Addr::CPetSystem::CountSummoned)(this);
}
CPetSystem::CPetSystem(LPCHARACTER a0) {
	((void(*)(CPetSystem *, LPCHARACTER))Addr::CPetSystem::CPetSystem)(this, a0);
}

bool CPetSystem::Update(DWORD a0) {
	return ((bool(*)(CPetSystem *, DWORD))Addr::CPetSystem::Update)(this, a0);
}
CPetActor * CPetSystem::GetByVnum(DWORD a0) const {
	return ((CPetActor *(*)(const CPetSystem *, DWORD))Addr::CPetSystem::GetByVnum)(this, a0);
}

void CPetSystem::RefreshBuff() {
	((void(*)(CPetSystem *))Addr::CPetSystem::RefreshBuff)(this);
}

CPetSystem::~CPetSystem() {
	((void(*)(CPetSystem *))Addr::CPetSystem::__CPetSystem)(this);
}

void CPetSystem::Destroy() {
	((void(*)(CPetSystem *))Addr::CPetSystem::Destroy)(this);
}

CPetActor * CPetSystem::Summon(DWORD a0, LPITEM a1, const char * a2, bool a3, DWORD a4) {
	return ((CPetActor *(*)(CPetSystem *, DWORD, LPITEM, const char *, bool, DWORD))Addr::CPetSystem::Summon)(this, a0, a1, a2, a3, a4);
}

void CPetSystem::Unsummon(DWORD a0, bool a1) {
	((void(*)(CPetSystem *, DWORD, bool))Addr::CPetSystem::Unsummon)(this, a0, a1);
}

void CPetSystem::DeletePet(CPetActor * a0) {
	((void(*)(CPetSystem *, CPetActor *))Addr::CPetSystem::DeletePet__7723)(this, a0);
}
}