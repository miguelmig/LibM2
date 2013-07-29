/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CHARACTER_MANAGER.hpp"
namespace libm2{
LPCHARACTER CHARACTER_MANAGER::Find(DWORD vid){
    return ((LPCHARACTER(*)(CHARACTER_MANAGER*,DWORD))Addr::CHARACTER_MANAGER::Find__DWORD)(this, vid);
}
LPCHARACTER CHARACTER_MANAGER::CreateCharacter(const char * a0, DWORD a1) {
	return ((LPCHARACTER(*)(CHARACTER_MANAGER *, const char *, DWORD))Addr::CHARACTER_MANAGER::CreateCharacter)(this, a0, a1);
}

DWORD CHARACTER_MANAGER::AllocVID() {
	return ((DWORD(*)(CHARACTER_MANAGER *))Addr::CHARACTER_MANAGER::AllocVID)(this);
}

LPCHARACTER CHARACTER_MANAGER::SpawnMobRange(DWORD a0, long a1, int a2, int a3, int a4, int a5, bool a6, bool a7, bool a8) {
	return ((LPCHARACTER(*)(CHARACTER_MANAGER *, DWORD, long, int, int, int, int, bool, bool, bool))Addr::CHARACTER_MANAGER::SpawnMobRange)(this, a0, a1, a2, a3, a4, a5, a6, a7, a8);
}

void CHARACTER_MANAGER::DestroyCharacter(LPCHARACTER a0) {
	((void(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::DestroyCharacter)(this, a0);
}

void CHARACTER_MANAGER::KillLog(DWORD a0) {
	((void(*)(CHARACTER_MANAGER *, DWORD))Addr::CHARACTER_MANAGER::KillLog)(this, a0);
}
void CHARACTER_MANAGER::Destroy() {
	((void(*)(CHARACTER_MANAGER *))Addr::CHARACTER_MANAGER::Destroy)(this);
}

LPCHARACTER CHARACTER_MANAGER::Find(const VID & a0) {
	return ((LPCHARACTER(*)(CHARACTER_MANAGER *, const VID &))Addr::CHARACTER_MANAGER::Find__1268)(this, a0);
}

bool CHARACTER_MANAGER::SpawnMoveGroup(DWORD a0, long a1, int a2, int a3, int a4, int a5, int a6, int a7, LPREGEN a8, bool a9) {
	return ((bool(*)(CHARACTER_MANAGER *, DWORD, long, int, int, int, int, int, int, LPREGEN, bool))Addr::CHARACTER_MANAGER::SpawnMoveGroup)(this, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

CHARACTER_MANAGER::~CHARACTER_MANAGER() {
	((void(*)(CHARACTER_MANAGER *))Addr::CHARACTER_MANAGER::__CHARACTER_MANAGER)(this);
}

void CHARACTER_MANAGER::Update(int a0) {
	((void(*)(CHARACTER_MANAGER *, int))Addr::CHARACTER_MANAGER::Update)(this, a0);
}

LPCHARACTER CHARACTER_MANAGER::SpawnMob(DWORD a0, long a1, long a2, long a3, long a4, bool a5, int a6, bool a7) {
	return ((LPCHARACTER(*)(CHARACTER_MANAGER *, DWORD, long, long, long, long, bool, int, bool))Addr::CHARACTER_MANAGER::SpawnMob)(this, a0, a1, a2, a3, a4, a5, a6, a7);
}

void CHARACTER_MANAGER::RegisterRaceNum(DWORD a0) {
	((void(*)(CHARACTER_MANAGER *, DWORD))Addr::CHARACTER_MANAGER::RegisterRaceNum)(this, a0);
}

int CHARACTER_MANAGER::GetMobItemRate(LPCHARACTER a0) {
	return ((int(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::GetMobItemRate)(this, a0);
}

bool CHARACTER_MANAGER::BeginPendingDestroy() {
	return ((bool(*)(CHARACTER_MANAGER *))Addr::CHARACTER_MANAGER::BeginPendingDestroy)(this);
}

void CHARACTER_MANAGER::PacketMonsterLog(LPCHARACTER a0, const void * a1, int a2) {
	((void(*)(CHARACTER_MANAGER *, LPCHARACTER, const void *, int))Addr::CHARACTER_MANAGER::PacketMonsterLog)(this, a0, a1, a2);
}

void CHARACTER_MANAGER::RegisterForMonsterLog(LPCHARACTER a0) {
	((void(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::RegisterForMonsterLog)(this, a0);
}

void CHARACTER_MANAGER::UnregisterRaceNumMap(LPCHARACTER a0) {
	((void(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::UnregisterRaceNumMap)(this, a0);
}

void CHARACTER_MANAGER::SelectStone(LPCHARACTER a0) {
	((void(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::SelectStone)(this, a0);
}

int CHARACTER_MANAGER::GetUserDamageRate(LPCHARACTER a0) {
	return ((int(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::GetUserDamageRate)(this, a0);
}

LPCHARACTER CHARACTER_MANAGER::SpawnGroup(DWORD a0, long a1, int a2, int a3, int a4, int a5, LPREGEN a6, bool a7, LPDUNGEON a8) {
	return ((LPCHARACTER(*)(CHARACTER_MANAGER *, DWORD, long, int, int, int, int, LPREGEN, bool, LPDUNGEON))Addr::CHARACTER_MANAGER::SpawnGroup)(this, a0, a1, a2, a3, a4, a5, a6, a7, a8);
}

LPCHARACTER CHARACTER_MANAGER::FindSpecifyPC(unsigned int a0, long a1, LPCHARACTER a2, int a3, int a4) {
	return ((LPCHARACTER(*)(CHARACTER_MANAGER *, unsigned int, long, LPCHARACTER, int, int))Addr::CHARACTER_MANAGER::FindSpecifyPC)(this, a0, a1, a2, a3, a4);
}

LPCHARACTER CHARACTER_MANAGER::SpawnMobRandomPosition(DWORD a0, long a1) {
	return ((LPCHARACTER(*)(CHARACTER_MANAGER *, DWORD, long))Addr::CHARACTER_MANAGER::SpawnMobRandomPosition)(this, a0, a1);
}

bool CHARACTER_MANAGER::FlushDelayedSave(LPCHARACTER a0) {
	return ((bool(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::FlushDelayedSave)(this, a0);
}

int CHARACTER_MANAGER::GetMobExpRate(LPCHARACTER a0) {
	return ((int(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::GetMobExpRate)(this, a0);
}

CHARACTER_MANAGER::CHARACTER_MANAGER() {
	((void(*)(CHARACTER_MANAGER *))Addr::CHARACTER_MANAGER::CHARACTER_MANAGER)(this);
}

void CHARACTER_MANAGER::SendScriptToMap(long a0, const std::string & a1) {
	((void(*)(CHARACTER_MANAGER *, long, const std::string &))Addr::CHARACTER_MANAGER::SendScriptToMap)(this, a0, a1);
}

void CHARACTER_MANAGER::RemoveFromStateList(LPCHARACTER a0) {
	((void(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::RemoveFromStateList)(this, a0);
}

void CHARACTER_MANAGER::DelayedSave(LPCHARACTER a0) {
	((void(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::DelayedSave)(this, a0);
}

void CHARACTER_MANAGER::GracefulShutdown() {
	((void(*)(CHARACTER_MANAGER *))Addr::CHARACTER_MANAGER::GracefulShutdown)(this);
}

bool CHARACTER_MANAGER::GetCharactersByRaceNum(DWORD a0, CharacterVectorInteractor & a1) {
	return ((bool(*)(CHARACTER_MANAGER *, DWORD, CharacterVectorInteractor &))Addr::CHARACTER_MANAGER::GetCharactersByRaceNum)(this, a0, a1);
}

int CHARACTER_MANAGER::GetMobGoldDropRate(LPCHARACTER a0) {
	return ((int(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::GetMobGoldDropRate)(this, a0);
}

void CHARACTER_MANAGER::RegisterRaceNumMap(LPCHARACTER a0) {
	((void(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::RegisterRaceNumMap)(this, a0);
}

bool CHARACTER_MANAGER::AddToStateList(LPCHARACTER a0) {
	return ((bool(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::AddToStateList)(this, a0);
}

LPCHARACTER CHARACTER_MANAGER::FindByPID(DWORD a0) {
	return ((LPCHARACTER(*)(CHARACTER_MANAGER *, DWORD))Addr::CHARACTER_MANAGER::FindByPID)(this, a0);
}

void CHARACTER_MANAGER::UnregisterForMonsterLog(LPCHARACTER a0) {
	((void(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::UnregisterForMonsterLog)(this, a0);
}

LPCHARACTER CHARACTER_MANAGER::FindPC(const char * a0) {
	return ((LPCHARACTER(*)(CHARACTER_MANAGER *, const char *))Addr::CHARACTER_MANAGER::FindPC)(this, a0);
}

int CHARACTER_MANAGER::GetMobGoldAmountRate(LPCHARACTER a0) {
	return ((int(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::GetMobGoldAmountRate)(this, a0);
}

int CHARACTER_MANAGER::GetMobDamageRate(LPCHARACTER a0) {
	return ((int(*)(CHARACTER_MANAGER *, LPCHARACTER))Addr::CHARACTER_MANAGER::GetMobDamageRate)(this, a0);
}

void CHARACTER_MANAGER::FlushPendingDestroy() {
	((void(*)(CHARACTER_MANAGER *))Addr::CHARACTER_MANAGER::FlushPendingDestroy)(this);
}

bool CHARACTER_MANAGER::SpawnGroupGroup(DWORD a0, long a1, int a2, int a3, int a4, int a5, LPREGEN a6, bool a7, LPDUNGEON a8) {
	return ((bool(*)(CHARACTER_MANAGER *, DWORD, long, int, int, int, int, LPREGEN, bool, LPDUNGEON))Addr::CHARACTER_MANAGER::SpawnGroupGroup)(this, a0, a1, a2, a3, a4, a5, a6, a7, a8);
}

void CHARACTER_MANAGER::ProcessDelayedSave() {
	((void(*)(CHARACTER_MANAGER *))Addr::CHARACTER_MANAGER::ProcessDelayedSave)(this);
}
}
