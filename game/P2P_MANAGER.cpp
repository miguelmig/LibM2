#include "P2P_MANAGER.hpp"
namespace libm2{
void P2P_MANAGER::UnregisterConnector(LPDESC a0) {
	((void(*)(P2P_MANAGER *, LPDESC))Addr::P2P_MANAGER::UnregisterConnector)(this, a0);
}

void P2P_MANAGER::RegisterAcceptor(LPDESC a0) {
	((void(*)(P2P_MANAGER *, LPDESC))Addr::P2P_MANAGER::RegisterAcceptor)(this, a0);
}

void P2P_MANAGER::RegisterConnector(LPDESC a0) {
	((void(*)(P2P_MANAGER *, LPDESC))Addr::P2P_MANAGER::RegisterConnector)(this, a0);
}

void P2P_MANAGER::EraseUserByDesc(LPDESC a0) {
	((void(*)(P2P_MANAGER *, LPDESC))Addr::P2P_MANAGER::EraseUserByDesc)(this, a0);
}

CCI * P2P_MANAGER::FindByPID(DWORD a0) {
	return ((CCI *(*)(P2P_MANAGER *, DWORD))Addr::P2P_MANAGER::FindByPID)(this, a0);
}
void P2P_MANAGER::UnregisterAcceptor(LPDESC a0) {
	((void(*)(P2P_MANAGER *, LPDESC))Addr::P2P_MANAGER::UnregisterAcceptor)(this, a0);
}

void P2P_MANAGER::Boot(LPDESC a0) {
	((void(*)(P2P_MANAGER *, LPDESC))Addr::P2P_MANAGER::Boot)(this, a0);
}

void P2P_MANAGER::FlushOutput() {
	((void(*)(P2P_MANAGER *))Addr::P2P_MANAGER::FlushOutput)(this);
}

void P2P_MANAGER::Logout(const char * a0) {
	((void(*)(P2P_MANAGER *, const char *))Addr::P2P_MANAGER::Logout__19821)(this, a0);
}

P2P_MANAGER::P2P_MANAGER() {
	((void(*)(P2P_MANAGER *))Addr::P2P_MANAGER::P2P_MANAGER)(this);
}

void P2P_MANAGER::Logout(CCI * a0) {
	((void(*)(P2P_MANAGER *, CCI *))Addr::P2P_MANAGER::Logout)(this, a0);
}

void P2P_MANAGER::Send(const void * a0, int a1, LPDESC a2) {
	((void(*)(P2P_MANAGER *, const void *, int, LPDESC))Addr::P2P_MANAGER::Send)(this, a0, a1, a2);
}

P2P_MANAGER::~P2P_MANAGER() {
	((void(*)(P2P_MANAGER *))Addr::P2P_MANAGER::__P2P_MANAGER)(this);
}

int P2P_MANAGER::GetCount() {
	return ((int(*)(P2P_MANAGER *))Addr::P2P_MANAGER::GetCount)(this);
}

void P2P_MANAGER::Login(LPDESC a0, const TPacketGGLogin * a1) {
	((void(*)(P2P_MANAGER *, LPDESC, const TPacketGGLogin *))Addr::P2P_MANAGER::Login)(this, a0, a1);
}

int P2P_MANAGER::GetEmpireUserCount(int a0) {
	return ((int(*)(P2P_MANAGER *, int))Addr::P2P_MANAGER::GetEmpireUserCount)(this, a0);
}

CCI * P2P_MANAGER::Find(const char * a0) {
	return ((CCI *(*)(P2P_MANAGER *, const char *))Addr::P2P_MANAGER::Find)(this, a0);
}

}
