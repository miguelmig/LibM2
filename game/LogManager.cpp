#include "LogManager.hpp"
namespace libm2{
void LogManager::ItemLog(DWORD a0, DWORD a1, DWORD a2, DWORD a3, const char * a4, const char * a5, const char * a6, DWORD a7) {
	((void(*)(LogManager *, DWORD, DWORD, DWORD, DWORD, const char *, const char *, const char *, DWORD))Addr::LogManager::ItemLog)(this, a0, a1, a2, a3, a4, a5, a6, a7);
}

void LogManager::ChangeNameLog(DWORD a0, const char * a1, const char * a2, const char * a3) {
	((void(*)(LogManager *, DWORD, const char *, const char *, const char *))Addr::LogManager::ChangeNameLog)(this, a0, a1, a2, a3);
}

void LogManager::VCardLog(DWORD a0, DWORD a1, DWORD a2, const char * a3, const char * a4, const char * a5, const char * a6, const char * a7) {
	((void(*)(LogManager *, DWORD, DWORD, DWORD, const char *, const char *, const char *, const char *, const char *))Addr::LogManager::VCardLog)(this, a0, a1, a2, a3, a4, a5, a6, a7);
}

void LogManager::CharLog(LPCHARACTER a0, DWORD a1, const char * a2, const char * a3) {
	((void(*)(LogManager *, LPCHARACTER, DWORD, const char *, const char *))Addr::LogManager::CharLog__5025)(this, a0, a1, a2, a3);
}

void LogManager::DetailLoginLog(bool a0, LPCHARACTER a1) {
	((void(*)(LogManager *, bool, LPCHARACTER))Addr::LogManager::DetailLoginLog)(this, a0, a1);
}

void LogManager::GoldBarLog(DWORD a0, DWORD a1, GOLDBAR_HOW a2, const char * a3) {
	((void(*)(LogManager *, DWORD, DWORD, GOLDBAR_HOW, const char *))Addr::LogManager::GoldBarLog)(this, a0, a1, a2, a3);
}

void LogManager::HackLog(const char * a0, const char * a1, const char * a2, const char * a3) {
	((void(*)(LogManager *, const char *, const char *, const char *, const char *))Addr::LogManager::HackLog)(this, a0, a1, a2, a3);
}

void LogManager::PCBangLoginLog(DWORD a0, const char * a1, DWORD a2, DWORD a3) {
	((void(*)(LogManager *, DWORD, const char *, DWORD, DWORD))Addr::LogManager::PCBangLoginLog)(this, a0, a1, a2, a3);
}

void LogManager::BootLog(const char * a0, BYTE a1) {
	((void(*)(LogManager *, const char *, BYTE))Addr::LogManager::BootLog)(this, a0, a1);
}

void LogManager::RefineLog(DWORD a0, const char * a1, DWORD a2, int a3, int a4, const char * a5) {
	((void(*)(LogManager *, DWORD, const char *, DWORD, int, int, const char *))Addr::LogManager::RefineLog)(this, a0, a1, a2, a3, a4, a5);
}

void LogManager::HackShieldLog(unsigned long a0, LPCHARACTER a1) {
	((void(*)(LogManager *, unsigned long, LPCHARACTER))Addr::LogManager::HackShieldLog)(this, a0, a1);
}

LogManager::LogManager() {
	((void(*)(LogManager *))Addr::LogManager::LogManager)(this);
}

void LogManager::CubeLog(DWORD a0, DWORD a1, DWORD a2, DWORD a3, DWORD a4, int a5, bool a6) {
	((void(*)(LogManager *, DWORD, DWORD, DWORD, DWORD, DWORD, int, bool))Addr::LogManager::CubeLog)(this, a0, a1, a2, a3, a4, a5, a6);
}

bool LogManager::IsConnected() {
	return ((bool(*)(LogManager *))Addr::LogManager::IsConnected)(this);
}

void LogManager::ShoutLog(BYTE a0, BYTE a1, const char * a2) {
	((void(*)(LogManager *, BYTE, BYTE, const char *))Addr::LogManager::ShoutLog)(this, a0, a1, a2);
}

void LogManager::LoginLog(bool a0, DWORD a1, DWORD a2, BYTE a3, BYTE a4, DWORD a5) {
	((void(*)(LogManager *, bool, DWORD, DWORD, BYTE, BYTE, DWORD))Addr::LogManager::LoginLog)(this, a0, a1, a2, a3, a4, a5);
}

void LogManager::HackLog(const char * a0, LPCHARACTER a1) {
	((void(*)(LogManager *, const char *, LPCHARACTER))Addr::LogManager::HackLog__18303)(this, a0, a1);
}

void LogManager::CharLog(DWORD a0, DWORD a1, DWORD a2, DWORD a3, const char * a4, const char * a5, const char * a6) {
	((void(*)(LogManager *, DWORD, DWORD, DWORD, DWORD, const char *, const char *, const char *))Addr::LogManager::CharLog)(this, a0, a1, a2, a3, a4, a5, a6);
}

LogManager::~LogManager() {
	((void(*)(LogManager *))Addr::LogManager::__LogManager)(this);
}

void LogManager::MoneyLog(BYTE a0, DWORD a1, int a2) {
	((void(*)(LogManager *, BYTE, DWORD, int))Addr::LogManager::MoneyLog)(this, a0, a1, a2);
}

void LogManager::QuestRewardLog(const char * a0, DWORD a1, DWORD a2, int a3, int a4) {
	((void(*)(LogManager *, const char *, DWORD, DWORD, int, int))Addr::LogManager::QuestRewardLog)(this, a0, a1, a2, a3, a4);
}

void LogManager::SpeedHackLog(DWORD a0, DWORD a1, DWORD a2, int a3) {
	((void(*)(LogManager *, DWORD, DWORD, DWORD, int))Addr::LogManager::SpeedHackLog)(this, a0, a1, a2, a3);
}

void LogManager::ItemLog(LPCHARACTER a0, LPITEM a1, const char * a2, const char * a3) {
	((void(*)(LogManager *, LPCHARACTER, LPITEM, const char *, const char *))Addr::LogManager::ItemLog__23099)(this, a0, a1, a2, a3);
}

void LogManager::FishLog(DWORD a0, int a1, int a2, int a3, DWORD a4, DWORD a5, DWORD a6) {
	((void(*)(LogManager *, DWORD, int, int, int, DWORD, DWORD, DWORD))Addr::LogManager::FishLog)(this, a0, a1, a2, a3, a4, a5, a6);
}

void LogManager::GMCommandLog(DWORD a0, const char * a1, const char * a2, BYTE a3, const char * a4) {
	((void(*)(LogManager *, DWORD, const char *, const char *, BYTE, const char *))Addr::LogManager::GMCommandLog)(this, a0, a1, a2, a3, a4);
}

void LogManager::HackCRCLog(const char * a0, const char * a1, const char * a2, const char * a3, DWORD a4) {
	((void(*)(LogManager *, const char *, const char *, const char *, const char *, DWORD))Addr::LogManager::HackCRCLog)(this, a0, a1, a2, a3, a4);
}

bool LogManager::Connect(const char * a0, const int a1, const char * a2, const char * a3, const char * a4) {
	return ((bool(*)(LogManager *, const char *, const int, const char *, const char *, const char *))Addr::LogManager::Connect)(this, a0, a1, a2, a3, a4);
}

void LogManager::Query(const char * a0, ...) {
	((void(*)(LogManager *, const char *, ...))Addr::LogManager::Query)(this, a0);
}

void LogManager::LevelLog(LPCHARACTER a0, unsigned int a1, unsigned int a2) {
	((void(*)(LogManager *, LPCHARACTER, unsigned int, unsigned int))Addr::LogManager::LevelLog)(this, a0, a1, a2);
}

void LogManager::DragonSlayLog(DWORD a0, DWORD a1, DWORD a2, DWORD a3) {
	((void(*)(LogManager *, DWORD, DWORD, DWORD, DWORD))Addr::LogManager::DragonSlayLog)(this, a0, a1, a2, a3);
}

void LogManager::ItemLog(LPCHARACTER a0, int a1, int a2, const char * a3, const char * a4) {
	((void(*)(LogManager *, LPCHARACTER, int, int, const char *, const char *))Addr::LogManager::ItemLog__11367)(this, a0, a1, a2, a3, a4);
}

}
