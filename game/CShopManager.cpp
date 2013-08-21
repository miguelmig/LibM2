#include "CShopManager.hpp"
namespace libm2{
void CShopManager::Sell(LPCHARACTER a0, BYTE a1, BYTE a2) {
	((void(*)(CShopManager *, LPCHARACTER, BYTE, BYTE))Addr::CShopManager::Sell)(this, a0, a1, a2);
}

void CShopManager::Buy(LPCHARACTER a0, BYTE a1) {
	((void(*)(CShopManager *, LPCHARACTER, BYTE))Addr::CShopManager::Buy)(this, a0, a1);
}

LPSHOP CShopManager::GetByNPCVnum(DWORD a0) {
	return ((LPSHOP(*)(CShopManager *, DWORD))Addr::CShopManager::GetByNPCVnum)(this, a0);
}

LPSHOP CShopManager::Get(DWORD a0) {
	return ((LPSHOP(*)(CShopManager *, DWORD))Addr::CShopManager::Get)(this, a0);
}

CShopManager::CShopManager() {
	((void(*)(CShopManager *))Addr::CShopManager::CShopManager)(this);
}

CShopManager::~CShopManager() {
	((void(*)(CShopManager *))Addr::CShopManager::__CShopManager)(this);
}

LPSHOP CShopManager::CreatePCShop(LPCHARACTER a0, TShopItemTable * a1, BYTE a2) {
	return ((LPSHOP(*)(CShopManager *, LPCHARACTER, TShopItemTable *, BYTE))Addr::CShopManager::CreatePCShop)(this, a0, a1, a2);
}

bool CShopManager::Initialize(TShopTable * a0, int a1) {
	return ((bool(*)(CShopManager *, TShopTable *, int))Addr::CShopManager::Initialize)(this, a0, a1);
}

LPSHOP CShopManager::FindPCShop(DWORD a0) {
	return ((LPSHOP(*)(CShopManager *, DWORD))Addr::CShopManager::FindPCShop)(this, a0);
}

bool CShopManager::StartShopping(LPCHARACTER a0, LPCHARACTER a1, int a2) {
	return ((bool(*)(CShopManager *, LPCHARACTER, LPCHARACTER, int))Addr::CShopManager::StartShopping)(this, a0, a1, a2);
}

void CShopManager::Destroy() {
	((void(*)(CShopManager *))Addr::CShopManager::Destroy)(this);
}

void CShopManager::StopShopping(LPCHARACTER a0) {
	((void(*)(CShopManager *, LPCHARACTER))Addr::CShopManager::StopShopping)(this, a0);
}

void CShopManager::DestroyPCShop(LPCHARACTER a0) {
	((void(*)(CShopManager *, LPCHARACTER))Addr::CShopManager::DestroyPCShop)(this, a0);
}

}
