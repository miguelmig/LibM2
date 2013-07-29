#include "CHorseRider.hpp"
#include "../addr.hpp"

namespace libm2{
DWORD CHorseRider::GetMyHorseVnum() const {
	return ((DWORD(*)(const CHorseRider *))Addr::CHorseRider::GetMyHorseVnum)(this);
}

void CHorseRider::SetHorseData(const THorseInfo & a0) {
	((void(*)(CHorseRider *, const THorseInfo &))Addr::CHorseRider::SetHorseData)(this, a0);
}

void CHorseRider::EnterHorse() {
	((void(*)(CHorseRider *))Addr::CHorseRider::EnterHorse)(this);
}

void CHorseRider::ClearHorseInfo() {
	((void(*)(CHorseRider *))Addr::CHorseRider::ClearHorseInfo)(this);
}

BYTE CHorseRider::GetHorseGrade() {
	return ((BYTE(*)(CHorseRider *))Addr::CHorseRider::GetHorseGrade)(this);
}

void CHorseRider::Destroy() {
	((void(*)(CHorseRider *))Addr::CHorseRider::Destroy)(this);
}

void CHorseRider::SendHorseInfo() {
	((void(*)(CHorseRider *))Addr::CHorseRider::SendHorseInfo)(this);
}

void CHorseRider::HorseDie() {
	((void(*)(CHorseRider *))Addr::CHorseRider::HorseDie)(this);
}

bool CHorseRider::ReviveHorse() {
	return ((bool(*)(CHorseRider *))Addr::CHorseRider::ReviveHorse)(this);
}

void CHorseRider::UpdateHorseDataByLogoff(DWORD a0) {
	((void(*)(CHorseRider *, DWORD))Addr::CHorseRider::UpdateHorseDataByLogoff)(this, a0);
}

void CHorseRider::FeedHorse() {
	((void(*)(CHorseRider *))Addr::CHorseRider::FeedHorse)(this);
}

void CHorseRider::SetHorseLevel(int a0) {
	((void(*)(CHorseRider *, int))Addr::CHorseRider::SetHorseLevel)(this, a0);
}

void CHorseRider::StartStaminaRegenEvent() {
	((void(*)(CHorseRider *))Addr::CHorseRider::StartStaminaRegenEvent)(this);
}

bool CHorseRider::StopRiding() {
	return ((bool(*)(CHorseRider *))Addr::CHorseRider::StopRiding)(this);
}

void CHorseRider::ResetHorseHealthDropTime() {
	((void(*)(CHorseRider *))Addr::CHorseRider::ResetHorseHealthDropTime)(this);
}

CHorseRider::CHorseRider() {
	((void(*)(CHorseRider *))Addr::CHorseRider::CHorseRider)(this);
}

void CHorseRider::Initialize() {
	((void(*)(CHorseRider *))Addr::CHorseRider::Initialize)(this);
}

void CHorseRider::UpdateRideTime(int a0) {
	((void(*)(CHorseRider *, int))Addr::CHorseRider::UpdateRideTime)(this, a0);
}

bool CHorseRider::StartRiding() {
	return ((bool(*)(CHorseRider *))Addr::CHorseRider::StartRiding)(this);
}

void CHorseRider::UpdateHorseHealth(int a0, bool a1) {
	((void(*)(CHorseRider *, int, bool))Addr::CHorseRider::UpdateHorseHealth)(this, a0, a1);
}

void CHorseRider::StartStaminaConsumeEvent() {
	((void(*)(CHorseRider *))Addr::CHorseRider::StartStaminaConsumeEvent)(this);
}

void CHorseRider::UpdateHorseStamina(int a0, bool a1) {
	((void(*)(CHorseRider *, int, bool))Addr::CHorseRider::UpdateHorseStamina)(this, a0, a1);
}

CHorseRider::~CHorseRider() {
	((void(*)(CHorseRider *))Addr::CHorseRider::__CHorseRider)(this);
}

void CHorseRider::CheckHorseHealthDropTime(bool a0) {
	((void(*)(CHorseRider *, bool))Addr::CHorseRider::CheckHorseHealthDropTime)(this, a0);
}

short CHorseRider::GetHorseMaxStamina() {
	return ((short(*)(CHorseRider *))Addr::CHorseRider::GetHorseMaxStamina)(this);
}

short CHorseRider::GetHorseMaxHealth() {
	return ((short(*)(CHorseRider *))Addr::CHorseRider::GetHorseMaxHealth)(this);
}
}
