#include "CFSM.hpp"
#include "../addr.hpp"
#include "CState.hpp"
namespace libm2{
void CFSM::BeginStateInitial() {
	((void(*)(CFSM *))Addr::CFSM::BeginStateInitial)(this);
}

bool CFSM::IsState(CState & a0) const {
	return ((bool(*)(const CFSM *, CState &))Addr::CFSM::IsState)(this, a0);
}

void CFSM::Update() {
	((void(*)(CFSM *))Addr::CFSM::Update)(this);
}

void CFSM::StateInitial() {
	((void(*)(CFSM *))Addr::CFSM::StateInitial)(this);
}

CFSM::CFSM() {
	((void(*)(CFSM *))Addr::CFSM::CFSM)(this);
}

CFSM::~CFSM() {
	((void(*)(CFSM *))Addr::CFSM::__CFSM)(this);
}

bool CFSM::GotoState(CState & a0) {
	return ((bool(*)(CFSM *, CState &))Addr::CFSM::GotoState)(this, a0);
}

void CFSM::EndStateInitial() {
	((void(*)(CFSM *))Addr::CFSM::EndStateInitial)(this);
}
}
