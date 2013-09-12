/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "DESC.hpp"
#include "../addr.hpp"
#include "CInputLogin.hpp"
namespace libm2{
void DESC::ChatPacket(BYTE a0, const char * format, ...) {
    va_list va;
    va_start(va, format);
    char buffer[513];
    vsnprintf(buffer, 513, format, va);
    va_end(va);
	((void(*)(DESC *, BYTE, const char *, ...))Addr::DESC::ChatPacket)(this, a0, buffer);
}

BYTE DESC::GetEmpire() {
	return ((BYTE(*)(DESC *))Addr::DESC::GetEmpire)(this);
}

DWORD DESC::GetBillingExpireSecond() {
	return ((DWORD(*)(DESC *))Addr::DESC::GetBillingExpireSecond)(this);
}

bool DESC::IsAdminMode() {
	return ((bool(*)(DESC *))Addr::DESC::IsAdminMode)(this);
}

void DESC::SetLoginKey(CLoginKey * a0) {
	((void(*)(DESC *, CLoginKey *))Addr::DESC::SetLoginKey__19998)(this, a0);
}

void DESC::Log(const char * a0, ...) {
	((void(*)(DESC *, const char *, ...))Addr::DESC::Log)(this, a0);
}

bool DESC::DelayedDisconnect(int a0) {
	return ((bool(*)(DESC *, int))Addr::DESC::DelayedDisconnect)(this, a0);
}

void DESC::SendKeyAgreementCompleted() {
	((void(*)(DESC *))Addr::DESC::SendKeyAgreementCompleted)(this);
}

bool DESC::HandshakeProcess(DWORD a0, long a1, bool a2) {
	return ((bool(*)(DESC *, DWORD, long, bool))Addr::DESC::HandshakeProcess)(this, a0, a1, a2);
}

void DESC::SetAdminMode() {
	((void(*)(DESC *))Addr::DESC::SetAdminMode)(this);
}

unsigned long DESC::GetMatrixCols() {
	return ((unsigned long(*)(DESC *))Addr::DESC::GetMatrixCols)(this);
}

void DESC::DisconnectOfSameLogin() {
	((void(*)(DESC *))Addr::DESC::DisconnectOfSameLogin)(this);
}

void DESC::AssembleCRCMagicCube(BYTE a0, BYTE a1) {
	((void(*)(DESC *, BYTE, BYTE))Addr::DESC::AssembleCRCMagicCube)(this, a0, a1);
}

void DESC::Destroy() {
	((void(*)(DESC *))Addr::DESC::Destroy)(this);
}

void DESC::SetPong(bool a0) {
	((void(*)(DESC *, bool))Addr::DESC::SetPong)(this, a0);
}

int DESC::ProcessInput() {
	return ((int(*)(DESC *))Addr::DESC::ProcessInput)(this);
}

bool DESC::IsPong() {
	return ((bool(*)(DESC *))Addr::DESC::IsPong)(this);
}

bool DESC::IsHandshaking() {
	return ((bool(*)(DESC *))Addr::DESC::IsHandshaking)(this);
}

void DESC::SetLoginKey(DWORD a0) {
	((void(*)(DESC *, DWORD))Addr::DESC::SetLoginKey)(this, a0);
}

bool DESC::CheckMatrixTryCount() {
	return ((bool(*)(DESC *))Addr::DESC::CheckMatrixTryCount)(this);
}

DWORD DESC::GetClientTime() {
	return ((DWORD(*)(DESC *))Addr::DESC::GetClientTime)(this);
}

void DESC::SetBillingExpireSecond(DWORD a0) {
	((void(*)(DESC *, DWORD))Addr::DESC::SetBillingExpireSecond)(this, a0);
}

bool DESC::FinishHandshake(size_t a0, const void * a1, size_t a2) {
	return ((bool(*)(DESC *, size_t, const void *, size_t))Addr::DESC::FinishHandshake)(this, a0, a1, a2);
}

void DESC::BufferedPacket(const void * a0, int a1) {
	((void(*)(DESC *, const void *, int))Addr::DESC::BufferedPacket)(this, a0, a1);
}

void DESC::BindCharacter(LPCHARACTER a0) {
	((void(*)(DESC *, LPCHARACTER))Addr::DESC::BindCharacter)(this, a0);
}

void DESC::Initialize() {
	((void(*)(DESC *))Addr::DESC::Initialize)(this);
}

DESC::~DESC() {
	((void(*)(DESC *))Addr::DESC::__DESC)(this);
}

BYTE DESC::GetSequence() {
	return ((BYTE(*)(DESC *))Addr::DESC::GetSequence)(this);
}

void DESC::LargePacket(const void * a0, int a1) {
	((void(*)(DESC *, const void *, int))Addr::DESC::LargePacket)(this, a0, a1);
}

unsigned long DESC::GetMatrixRows() {
	return ((unsigned long(*)(DESC *))Addr::DESC::GetMatrixRows)(this);
}

void DESC::UDPGrant(const sockaddr_in & a0) {
	((void(*)(DESC *, const sockaddr_in &))Addr::DESC::UDPGrant)(this, a0);
}

int DESC::ProcessOutput() {
	return ((int(*)(DESC *))Addr::DESC::ProcessOutput)(this);
}

bool DESC::Setup(LPFDWATCH a0, socket_t a1, const sockaddr_in & a2, DWORD a3, DWORD a4) {
	return ((bool(*)(DESC *, LPFDWATCH, socket_t, const sockaddr_in &, DWORD, DWORD))Addr::DESC::Setup)(this, a0, a1, a2, a3, a4);
}

void DESC::SetRelay(const char * a0) {
	((void(*)(DESC *, const char *))Addr::DESC::SetRelay)(this, a0);
}

void DESC::FlushOutput() {
	((void(*)(DESC *))Addr::DESC::FlushOutput)(this);
}

DWORD DESC::GetLoginKey() {
	return ((DWORD(*)(DESC *))Addr::DESC::GetLoginKey)(this);
}

void DESC::SetMatrixCardRowsAndColumns(unsigned long a0, unsigned long a1) {
	((void(*)(DESC *, unsigned long, unsigned long))Addr::DESC::SetMatrixCardRowsAndColumns)(this, a0, a1);
}

void DESC::SetNextSequence() {
	((void(*)(DESC *))Addr::DESC::SetNextSequence)(this);
}

DESC::DESC() {
	((void(*)(DESC *))Addr::DESC::DESC)(this);
}

void DESC::push_seq(BYTE a0, BYTE a1) {
	((void(*)(DESC *, BYTE, BYTE))Addr::DESC::push_seq)(this, a0, a1);
}

void DESC::StartHandshake(DWORD a0) {
	((void(*)(DESC *, DWORD))Addr::DESC::StartHandshake)(this, a0);
}

BYTE DESC::GetType() {
	return ((BYTE(*)(DESC *))Addr::DESC::GetType)(this);
}

void DESC::Packet(const void * a0, int a1) {
	((void(*)(DESC *, const void *, int))Addr::DESC::Packet)(this, a0, a1);
}

void DESC::SendHandshake(DWORD a0, long a1) {
	((void(*)(DESC *, DWORD, long))Addr::DESC::SendHandshake)(this, a0, a1);
}

void DESC::BindAccountTable(TAccountTable * a0) {
	((void(*)(DESC *, TAccountTable *))Addr::DESC::BindAccountTable)(this, a0);
}

bool DESC::IsCipherPrepared() {
	return ((bool(*)(DESC *))Addr::DESC::IsCipherPrepared)(this);
}

void DESC::SendLoginSuccessPacket() {
	((void(*)(DESC *))Addr::DESC::SendLoginSuccessPacket)(this);
}

void DESC::SendKeyAgreement() {
	((void(*)(DESC *))Addr::DESC::SendKeyAgreement)(this);
}

void DESC::SetPhase(int a0) {
	((void(*)(DESC *, int))Addr::DESC::SetPhase)(this, a0);
}
TAccountTable& DESC::GetAccountTable(){
    return m_accountTable;
}
LPCHARACTER DESC::GetCharacter(){
    return m_lpCharacter;
}
bool DESC::IsPhase(int phase) const{
    return this->m_iPhase==phase;
}
}
