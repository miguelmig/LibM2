#include "TMarriage.hpp"
#include "../../addr.hpp"
namespace libm2{
void marriage::TMarriage::Save() {
	((void(*)(marriage::TMarriage *))Addr::marriage::TMarriage::Save)(this);
}

int marriage::TMarriage::GetMarriageGrade() {
	return ((int(*)(marriage::TMarriage *))Addr::marriage::TMarriage::GetMarriageGrade)(this);
}

void marriage::TMarriage::SetMarried() {
	((void(*)(marriage::TMarriage *))Addr::marriage::TMarriage::SetMarried)(this);
}

bool marriage::TMarriage::IsNear() {
	return ((bool(*)(marriage::TMarriage *))Addr::marriage::TMarriage::IsNear)(this);
}

int marriage::TMarriage::GetMarriagePoint() {
	return ((int(*)(marriage::TMarriage *))Addr::marriage::TMarriage::GetMarriagePoint)(this);
}

void marriage::TMarriage::StartNearCheckEvent() {
	((void(*)(marriage::TMarriage *))Addr::marriage::TMarriage::StartNearCheckEvent)(this);
}

void marriage::TMarriage::Update(DWORD a0) {
	((void(*)(marriage::TMarriage *, DWORD))Addr::marriage::TMarriage::Update)(this, a0);
}

void marriage::TMarriage::StopNearCheckEvent() {
	((void(*)(marriage::TMarriage *))Addr::marriage::TMarriage::StopNearCheckEvent)(this);
}

void marriage::TMarriage::WarpToWeddingMap(DWORD a0) {
	((void(*)(marriage::TMarriage *, DWORD))Addr::marriage::TMarriage::WarpToWeddingMap)(this, a0);
}

void marriage::TMarriage::Logout(DWORD a0) {
	((void(*)(marriage::TMarriage *, DWORD))Addr::marriage::TMarriage::Logout)(this, a0);
}

void marriage::TMarriage::NearCheck() {
	((void(*)(marriage::TMarriage *))Addr::marriage::TMarriage::NearCheck)(this);
}

int marriage::TMarriage::GetBonus(DWORD a0, bool a1, LPCHARACTER a2) {
	return ((int(*)(marriage::TMarriage *, DWORD, bool, LPCHARACTER))Addr::marriage::TMarriage::GetBonus)(this, a0, a1, a2);
}

void marriage::TMarriage::Login(LPCHARACTER a0) {
	((void(*)(marriage::TMarriage *, LPCHARACTER))Addr::marriage::TMarriage::Login)(this, a0);
}

void marriage::TMarriage::RequestEndWedding() {
	((void(*)(marriage::TMarriage *))Addr::marriage::TMarriage::RequestEndWedding)(this);
}
}
