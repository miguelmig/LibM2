/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CQuestManager.hpp"
namespace libm2{
namespace quest{
void CQuestManager::AddLuaFunctionTable(const char*name, luaL_reg*table){
    ((void(*)(CQuestManager*,const char*, luaL_reg*))Addr::quest::CQuestManager::AddLuaFunctionTable)(this,name,table);
};
LPCHARACTER CQuestManager::GetCurrentNPCCharacterPtr(void){
    return ((LPCHARACTER(*)(CQuestManager*))Addr::quest::CQuestManager::GetCurrentNPCCharacterPtr)(this);
};
LPCHARACTER CQuestManager::GetCurrentCharacterPtr(void){
    return m_pCurrentCharacter;
};
}
void quest::CQuestManager::AttrOut(unsigned int a0, LPCHARACTER a1, int a2) {
	((void(*)(quest::CQuestManager *, unsigned int, LPCHARACTER, int))Addr::quest::CQuestManager::AttrOut)(this, a0, a1, a2);
}

void quest::CQuestManager::Reload() {
	((void(*)(quest::CQuestManager *))Addr::quest::CQuestManager::Reload)(this);
}

bool quest::CQuestManager::ServerTimer(unsigned int a0, unsigned int a1) {
	return ((bool(*)(quest::CQuestManager *, unsigned int, unsigned int))Addr::quest::CQuestManager::ServerTimer)(this, a0, a1);
}

int quest::CQuestManager::GetEventFlag(const std::string & a0) {
	return ((int(*)(quest::CQuestManager *, const std::string &))Addr::quest::CQuestManager::GetEventFlag)(this, a0);
}

unsigned int quest::CQuestManager::GetQuestIndexByName(const std::string & a0) {
	return ((unsigned int(*)(quest::CQuestManager *, const std::string &))Addr::quest::CQuestManager::GetQuestIndexByName)(this, a0);
}

unsigned int quest::CQuestManager::LoadTimerScript(const std::string & a0) {
	return ((unsigned int(*)(quest::CQuestManager *, const std::string &))Addr::quest::CQuestManager::LoadTimerScript)(this, a0);
}

void quest::CQuestManager::CancelServerTimers(DWORD a0) {
	((void(*)(quest::CQuestManager *, DWORD))Addr::quest::CQuestManager::CancelServerTimers)(this, a0);
}

void quest::CQuestManager::Confirm(unsigned int a0, quest::EQuestConfirmType a1, unsigned int a2) {
	((void(*)(quest::CQuestManager *, unsigned int, quest::EQuestConfirmType, unsigned int))Addr::quest::CQuestManager::Confirm)(this, a0, a1, a2);
}

void quest::CQuestManager::Input(unsigned int a0, const char * a1) {
	((void(*)(quest::CQuestManager *, unsigned int, const char *))Addr::quest::CQuestManager::Input)(this, a0, a1);
}

void quest::CQuestManager::RequestSetEventFlag(const std::string & a0, int a1) {
	((void(*)(quest::CQuestManager *, const std::string &, int))Addr::quest::CQuestManager::RequestSetEventFlag)(this, a0, a1);
}

void quest::CQuestManager::SendScript() {
	((void(*)(quest::CQuestManager *))Addr::quest::CQuestManager::SendScript)(this);
}

void quest::CQuestManager::BroadcastEventFlagOnLogin(LPCHARACTER a0) {
	((void(*)(quest::CQuestManager *, LPCHARACTER))Addr::quest::CQuestManager::BroadcastEventFlagOnLogin)(this, a0);
}

void quest::CQuestManager::Login(unsigned int a0, const char * a1) {
	((void(*)(quest::CQuestManager *, unsigned int, const char *))Addr::quest::CQuestManager::Login)(this, a0, a1);
}

void quest::CQuestManager::EnterState(DWORD a0, DWORD a1, int a2) {
	((void(*)(quest::CQuestManager *, DWORD, DWORD, int))Addr::quest::CQuestManager::EnterState)(this, a0, a1, a2);
}

void quest::CQuestManager::QuestButton(unsigned int a0, unsigned int a1) {
	((void(*)(quest::CQuestManager *, unsigned int, unsigned int))Addr::quest::CQuestManager::QuestButton)(this, a0, a1);
}

quest::QuestState quest::CQuestManager::OpenState(const std::string & a0, int a1) {
	return ((quest::QuestState(*)(quest::CQuestManager *, const std::string &, int))Addr::quest::CQuestManager::OpenState)(this, a0, a1);
}

void quest::CQuestManager::CloseState(quest::QuestState & a0) {
	((void(*)(quest::CQuestManager *, quest::QuestState &))Addr::quest::CQuestManager::CloseState)(this, a0);
}

void quest::CQuestManager::LoadStartQuest(const std::string & a0, unsigned int a1) {
	((void(*)(quest::CQuestManager *, const std::string &, unsigned int))Addr::quest::CQuestManager::LoadStartQuest)(this, a0, a1);
}

void quest::CQuestManager::Destroy() {
	((void(*)(quest::CQuestManager *))Addr::quest::CQuestManager::Destroy)(this);
}

void quest::CQuestManager::LeaveState(DWORD a0, DWORD a1, int a2) {
	((void(*)(quest::CQuestManager *, DWORD, DWORD, int))Addr::quest::CQuestManager::LeaveState)(this, a0, a1, a2);
}

bool quest::CQuestManager::GiveItemToPC(unsigned int a0, LPCHARACTER a1) {
	return ((bool(*)(quest::CQuestManager *, unsigned int, LPCHARACTER))Addr::quest::CQuestManager::GiveItemToPC)(this, a0, a1);
}

bool quest::CQuestManager::Target(unsigned int a0, DWORD a1, const char * a2, const char * a3) {
	return ((bool(*)(quest::CQuestManager *, unsigned int, DWORD, const char *, const char *))Addr::quest::CQuestManager::Target)(this, a0, a1, a2, a3);
}

void quest::CQuestManager::DisconnectPC(LPCHARACTER a0) {
	((void(*)(quest::CQuestManager *, LPCHARACTER))Addr::quest::CQuestManager::DisconnectPC)(this, a0);
}

void quest::CQuestManager::GotoConfirmState(quest::QuestState & a0) {
	((void(*)(quest::CQuestManager *, quest::QuestState &))Addr::quest::CQuestManager::GotoConfirmState)(this, a0);
}

void quest::CQuestManager::GotoSelectState(quest::QuestState & a0) {
	((void(*)(quest::CQuestManager *, quest::QuestState &))Addr::quest::CQuestManager::GotoSelectState)(this, a0);
}

void quest::CQuestManager::LogoutPC(LPCHARACTER a0) {
	((void(*)(quest::CQuestManager *, LPCHARACTER))Addr::quest::CQuestManager::LogoutPC)(this, a0);
}

void quest::CQuestManager::Resume(unsigned int a0) {
	((void(*)(quest::CQuestManager *, unsigned int))Addr::quest::CQuestManager::Resume)(this, a0);
}

void quest::CQuestManager::GotoInputState(quest::QuestState & a0) {
	((void(*)(quest::CQuestManager *, quest::QuestState &))Addr::quest::CQuestManager::GotoInputState)(this, a0);
}

void quest::CQuestManager::ClearServerTimer(const std::string & a0, DWORD a1) {
	((void(*)(quest::CQuestManager *, const std::string &, DWORD))Addr::quest::CQuestManager::ClearServerTimer)(this, a0, a1);
}

bool quest::CQuestManager::RunState(quest::QuestState & a0) {
	return ((bool(*)(quest::CQuestManager *, quest::QuestState &))Addr::quest::CQuestManager::RunState)(this, a0);
}

const std::string & quest::CQuestManager::GetQuestNameByIndex(unsigned int a0) {
	return ((const std::string &(*)(quest::CQuestManager *, unsigned int))Addr::quest::CQuestManager::GetQuestNameByIndex)(this, a0);
}

void quest::CQuestManager::ClearScript() {
	((void(*)(quest::CQuestManager *))Addr::quest::CQuestManager::ClearScript)(this);
}

void quest::CQuestManager::GotoSelectItemState(quest::QuestState & a0) {
	((void(*)(quest::CQuestManager *, quest::QuestState &))Addr::quest::CQuestManager::GotoSelectItemState)(this, a0);
}

void quest::CQuestManager::SetEventFlag(const std::string & a0, int a1) {
	((void(*)(quest::CQuestManager *, const std::string &, int))Addr::quest::CQuestManager::SetEventFlag)(this, a0, a1);
}

void quest::CQuestManager::WriteRunningStateToSyserr() {
	((void(*)(quest::CQuestManager *))Addr::quest::CQuestManager::WriteRunningStateToSyserr)(this);
}

void quest::CQuestManager::AttrIn(unsigned int a0, LPCHARACTER a1, int a2) {
	((void(*)(quest::CQuestManager *, unsigned int, LPCHARACTER, int))Addr::quest::CQuestManager::AttrIn)(this, a0, a1, a2);
}

bool quest::CQuestManager::Initialize() {
	return ((bool(*)(quest::CQuestManager *))Addr::quest::CQuestManager::Initialize)(this);
}

void quest::CQuestManager::Logout(unsigned int a0) {
	((void(*)(quest::CQuestManager *, unsigned int))Addr::quest::CQuestManager::Logout)(this, a0);
}

void quest::CQuestManager::LevelUp(unsigned int a0) {
	((void(*)(quest::CQuestManager *, unsigned int))Addr::quest::CQuestManager::LevelUp)(this, a0);
}

bool quest::CQuestManager::UseItem(unsigned int a0, LPITEM a1, bool a2) {
	return ((bool(*)(quest::CQuestManager *, unsigned int, LPITEM, bool))Addr::quest::CQuestManager::UseItem)(this, a0, a1, a2);
}

void quest::CQuestManager::SetCurrentItem(LPITEM a0) {
	((void(*)(quest::CQuestManager *, LPITEM))Addr::quest::CQuestManager::SetCurrentItem)(this, a0);
}

const std::string & quest::CQuestManager::GetCurrentQuestName() {
	return ((const std::string &(*)(quest::CQuestManager *))Addr::quest::CQuestManager::GetCurrentQuestName)(this);
}

LPITEM quest::CQuestManager::GetCurrentItem() {
	return ((LPITEM(*)(quest::CQuestManager *))Addr::quest::CQuestManager::GetCurrentItem)(this);
}

int quest::CQuestManager::GetQuestStateIndex(const std::string & a0, const std::string & a1) {
	return ((int(*)(quest::CQuestManager *, const std::string &, const std::string &))Addr::quest::CQuestManager::GetQuestStateIndex)(this, a0, a1);
}

void quest::CQuestManager::BuildStateIndexToName(const char * a0) {
	((void(*)(quest::CQuestManager *, const char *))Addr::quest::CQuestManager::BuildStateIndexToName)(this, a0);
}

void quest::CQuestManager::ClearCurrentItem() {
	((void(*)(quest::CQuestManager *))Addr::quest::CQuestManager::ClearCurrentItem)(this);
}

void quest::CQuestManager::AddServerTimer(const std::string & a0, DWORD a1, LPEVENT a2) {
	((void(*)(quest::CQuestManager *, const std::string &, DWORD, LPEVENT))Addr::quest::CQuestManager::AddServerTimer)(this, a0, a1, a2);
}

bool quest::CQuestManager::SIGUse(unsigned int a0, DWORD a1, LPITEM a2, bool a3) {
	return ((bool(*)(quest::CQuestManager *, unsigned int, DWORD, LPITEM, bool))Addr::quest::CQuestManager::SIGUse)(this, a0, a1, a2, a3);
}

bool quest::CQuestManager::Click(unsigned int a0, LPCHARACTER a1) {
	return ((bool(*)(quest::CQuestManager *, unsigned int, LPCHARACTER))Addr::quest::CQuestManager::Click)(this, a0, a1);
}

const char * quest::CQuestManager::GetQuestStateName(const std::string & a0, const int a1) {
	return ((const char *(*)(quest::CQuestManager *, const std::string &, const int))Addr::quest::CQuestManager::GetQuestStateName)(this, a0, a1);
}

void quest::CQuestManager::GotoEndState(quest::QuestState & a0) {
	((void(*)(quest::CQuestManager *, quest::QuestState &))Addr::quest::CQuestManager::GotoEndState)(this, a0);
}

void quest::CQuestManager::RegisterQuest(const std::string & a0, unsigned int a1) {
	((void(*)(quest::CQuestManager *, const std::string &, unsigned int))Addr::quest::CQuestManager::RegisterQuest)(this, a0, a1);
}

bool quest::CQuestManager::Timer(unsigned int a0, unsigned int a1) {
	return ((bool(*)(quest::CQuestManager *, unsigned int, unsigned int))Addr::quest::CQuestManager::Timer)(this, a0, a1);
}

DWORD quest::CQuestManager::GetServerTimerArg() {
	return ((DWORD(*)(quest::CQuestManager *))Addr::quest::CQuestManager::GetServerTimerArg)(this);
}

void quest::CQuestManager::SelectDungeon(LPDUNGEON a0) {
	((void(*)(quest::CQuestManager *, LPDUNGEON))Addr::quest::CQuestManager::SelectDungeon)(this, a0);
}

void quest::CQuestManager::AddScript(const std::string & a0) {
	((void(*)(quest::CQuestManager *, const std::string &))Addr::quest::CQuestManager::AddScript)(this, a0);
}

LPDUNGEON quest::CQuestManager::GetCurrentDungeon() {
	return ((LPDUNGEON(*)(quest::CQuestManager *))Addr::quest::CQuestManager::GetCurrentDungeon)(this);
}

void quest::CQuestManager::Letter(DWORD a0, DWORD a1, int a2) {
	((void(*)(quest::CQuestManager *, DWORD, DWORD, int))Addr::quest::CQuestManager::Letter)(this, a0, a1, a2);
}

bool quest::CQuestManager::InitializeLua() {
	return ((bool(*)(quest::CQuestManager *))Addr::quest::CQuestManager::InitializeLua)(this);
}

void quest::CQuestManager::SendEventFlagList(LPCHARACTER a0) {
	((void(*)(quest::CQuestManager *, LPCHARACTER))Addr::quest::CQuestManager::SendEventFlagList)(this, a0);
}

void quest::CQuestManager::SelectItem(unsigned int a0, unsigned int a1) {
	((void(*)(quest::CQuestManager *, unsigned int, unsigned int))Addr::quest::CQuestManager::SelectItem)(this, a0, a1);
}

void quest::CQuestManager::SetSkinStyle(int a0) {
	((void(*)(quest::CQuestManager *, int))Addr::quest::CQuestManager::SetSkinStyle)(this, a0);
}

bool quest::CQuestManager::CanStartQuest(unsigned int a0, const quest::PC & a1) {
	return ((bool(*)(quest::CQuestManager *, unsigned int, const quest::PC &))Addr::quest::CQuestManager::CanStartQuest__8287)(this, a0, a1);
}

bool quest::CQuestManager::TakeItem(unsigned int a0, unsigned int a1, LPITEM a2) {
	return ((bool(*)(quest::CQuestManager *, unsigned int, unsigned int, LPITEM))Addr::quest::CQuestManager::TakeItem)(this, a0, a1, a2);
}

void quest::CQuestManager::SetServerTimerArg(DWORD a0) {
	((void(*)(quest::CQuestManager *, DWORD))Addr::quest::CQuestManager::SetServerTimerArg)(this, a0);
}

quest::PC * quest::CQuestManager::GetPCForce(unsigned int a0) {
	return ((quest::PC *(*)(quest::CQuestManager *, unsigned int))Addr::quest::CQuestManager::GetPCForce)(this, a0);
}

bool quest::CQuestManager::CanEndQuestAtState(const std::string & a0, const std::string & a1) {
	return ((bool(*)(quest::CQuestManager *, const std::string &, const std::string &))Addr::quest::CQuestManager::CanEndQuestAtState)(this, a0, a1);
}

unsigned int quest::CQuestManager::FindNPCIDByName(const std::string & a0) {
	return ((unsigned int(*)(quest::CQuestManager *, const std::string &))Addr::quest::CQuestManager::FindNPCIDByName)(this, a0);
}

unsigned int quest::CQuestManager::GetCurrentNPCRace() {
	return ((unsigned int(*)(quest::CQuestManager *))Addr::quest::CQuestManager::GetCurrentNPCRace)(this);
}

void quest::CQuestManager::QuestInfo(unsigned int a0, unsigned int a1) {
	((void(*)(quest::CQuestManager *, unsigned int, unsigned int))Addr::quest::CQuestManager::QuestInfo)(this, a0, a1);
}

quest::CQuestManager::CQuestManager() {
	((void(*)(quest::CQuestManager *))Addr::quest::CQuestManager::CQuestManager)(this);
}

bool quest::CQuestManager::CanStartQuest(unsigned int a0) {
	return ((bool(*)(quest::CQuestManager *, unsigned int))Addr::quest::CQuestManager::CanStartQuest)(this, a0);
}

quest::PC * quest::CQuestManager::GetPC(unsigned int a0) {
	return ((quest::PC *(*)(quest::CQuestManager *, unsigned int))Addr::quest::CQuestManager::GetPC)(this, a0);
}

void quest::CQuestManager::ClearServerTimerNotCancel(const std::string & a0, DWORD a1) {
	((void(*)(quest::CQuestManager *, const std::string &, DWORD))Addr::quest::CQuestManager::ClearServerTimerNotCancel)(this, a0, a1);
}

void quest::CQuestManager::Kill(unsigned int a0, unsigned int a1) {
	((void(*)(quest::CQuestManager *, unsigned int, unsigned int))Addr::quest::CQuestManager::Kill)(this, a0, a1);
}

void quest::CQuestManager::RegisterNPCVnum(DWORD a0) {
	((void(*)(quest::CQuestManager *, DWORD))Addr::quest::CQuestManager::RegisterNPCVnum)(this, a0);
}

void quest::CQuestManager::QuestError(const char * a0, int a1, const char * a2, ...) {
	((void(*)(quest::CQuestManager *, const char *, int, const char *, ...))Addr::quest::CQuestManager::QuestError)(this, a0, a1, a2);
}

void quest::CQuestManager::GotoPauseState(quest::QuestState & a0) {
	((void(*)(quest::CQuestManager *, quest::QuestState &))Addr::quest::CQuestManager::GotoPauseState)(this, a0);
}

void quest::CQuestManager::Unmount(unsigned int a0) {
	((void(*)(quest::CQuestManager *, unsigned int))Addr::quest::CQuestManager::Unmount)(this, a0);
}

bool quest::CQuestManager::ExecuteQuestScript(quest::PC & a0, DWORD a1, const int a2, const char * a3, const int a4, std::vector<quest::AArgScript*> * a5, bool a6) {
	return ((bool(*)(quest::PC &, DWORD, const int, const char *, const int, std::vector<quest::AArgScript*> *, bool))Addr::quest::CQuestManager::ExecuteQuestScript)(a0, a1, a2, a3, a4, a5, a6);
}

void quest::CQuestManager::Select(unsigned int a0, unsigned int a1) {
	((void(*)(quest::CQuestManager *, unsigned int, unsigned int))Addr::quest::CQuestManager::Select)(this, a0, a1);
}

bool quest::CQuestManager::PickupItem(unsigned int a0, LPITEM a1) {
	return ((bool(*)(quest::CQuestManager *, unsigned int, LPITEM))Addr::quest::CQuestManager::PickupItem)(this, a0, a1);
}
}
