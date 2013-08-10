#include "ITEM_MANAGER.hpp"
#include "../addr.hpp"
namespace libm2{
ITEM_MANAGER::~ITEM_MANAGER() {
	((void(*)(ITEM_MANAGER *))Addr::ITEM_MANAGER::__ITEM_MANAGER)(this);
}

DWORD ITEM_MANAGER::GetMaskVnum(DWORD a0) {
	return ((DWORD(*)(ITEM_MANAGER *, DWORD))Addr::ITEM_MANAGER::GetMaskVnum)(this, a0);
}

DWORD ITEM_MANAGER::GetRefineFromVnum(DWORD a0) {
	return ((DWORD(*)(ITEM_MANAGER *, DWORD))Addr::ITEM_MANAGER::GetRefineFromVnum)(this, a0);
}

LPITEM ITEM_MANAGER::CreateItem(DWORD a0, DWORD a1, DWORD a2, bool a3, int a4, bool a5) {
	return ((LPITEM(*)(ITEM_MANAGER *, DWORD, DWORD, DWORD, bool, int, bool))Addr::ITEM_MANAGER::CreateItem)(this, a0, a1, a2, a3, a4, a5);
}

void ITEM_MANAGER::Destroy() {
	((void(*)(ITEM_MANAGER *))Addr::ITEM_MANAGER::Destroy)(this);
}

bool ITEM_MANAGER::CreateDropItem(LPCHARACTER a0, LPCHARACTER a1, std::vector<CItem*> & a2) {
	return ((bool(*)(ITEM_MANAGER *, LPCHARACTER, LPCHARACTER, std::vector<CItem*> &))Addr::ITEM_MANAGER::CreateDropItem)(this, a0, a1, a2);
}

bool ITEM_MANAGER::SetMaxItemID(TItemIDRangeTable a0) {
	return ((bool(*)(ITEM_MANAGER *, TItemIDRangeTable))Addr::ITEM_MANAGER::SetMaxItemID)(this, a0);
}

LPITEM ITEM_MANAGER::FindByVID(DWORD a0) {
	return ((LPITEM(*)(ITEM_MANAGER *, DWORD))Addr::ITEM_MANAGER::FindByVID)(this, a0);
}

bool ITEM_MANAGER::ReadCommonDropItemFile(const char * a0) {
	return ((bool(*)(ITEM_MANAGER *, const char *))Addr::ITEM_MANAGER::ReadCommonDropItemFile)(this, a0);
}

const CSpecialItemGroup * ITEM_MANAGER::GetSpecialItemGroup(DWORD a0) {
	return ((const CSpecialItemGroup *(*)(ITEM_MANAGER *, DWORD))Addr::ITEM_MANAGER::GetSpecialItemGroup)(this, a0);
}

void ITEM_MANAGER::Update() {
	((void(*)(ITEM_MANAGER *))Addr::ITEM_MANAGER::Update)(this);
}

bool ITEM_MANAGER::GetVnumByOriginalName(const char * a0, DWORD & a1) {
	return ((bool(*)(ITEM_MANAGER *, const char *, DWORD &))Addr::ITEM_MANAGER::GetVnumByOriginalName)(this, a0, a1);
}

bool ITEM_MANAGER::ReadMonsterDropItemGroup(const char * a0) {
	return ((bool(*)(ITEM_MANAGER *, const char *))Addr::ITEM_MANAGER::ReadMonsterDropItemGroup)(this, a0);
}

bool ITEM_MANAGER::GetVnum(const char * a0, DWORD & a1) {
	return ((bool(*)(ITEM_MANAGER *, const char *, DWORD &))Addr::ITEM_MANAGER::GetVnum)(this, a0, a1);
}

bool ITEM_MANAGER::Initialize(TItemTable * a0, int a1) {
	return ((bool(*)(ITEM_MANAGER *, TItemTable *, int))Addr::ITEM_MANAGER::Initialize)(this, a0, a1);
}

bool ITEM_MANAGER::ReadDropItemGroup(const char * a0) {
	return ((bool(*)(ITEM_MANAGER *, const char *))Addr::ITEM_MANAGER::ReadDropItemGroup)(this, a0);
}

void ITEM_MANAGER::SaveSingleItem(LPITEM a0) {
	((void(*)(ITEM_MANAGER *, LPITEM))Addr::ITEM_MANAGER::SaveSingleItem)(this, a0);
}

int ITEM_MANAGER::RealNumber(DWORD a0) {
	return ((int(*)(ITEM_MANAGER *, DWORD))Addr::ITEM_MANAGER::RealNumber)(this, a0);
}

void ITEM_MANAGER::CreateQuestDropItem(LPCHARACTER a0, LPCHARACTER a1, std::vector<CItem*> & a2, int a3, int a4) {
	((void(*)(ITEM_MANAGER *, LPCHARACTER, LPCHARACTER, std::vector<CItem*> &, int, int))Addr::ITEM_MANAGER::CreateQuestDropItem)(this, a0, a1, a2, a3, a4);
}

bool ITEM_MANAGER::ReadSpecialDropItemFile(const char * a0) {
	return ((bool(*)(ITEM_MANAGER *, const char *))Addr::ITEM_MANAGER::ReadSpecialDropItemFile)(this, a0);
}

void ITEM_MANAGER::FlushDelayedSave(LPITEM a0) {
	((void(*)(ITEM_MANAGER *, LPITEM))Addr::ITEM_MANAGER::FlushDelayedSave)(this, a0);
}

bool ITEM_MANAGER::ConvSpecialDropItemFile() {
	return ((bool(*)(ITEM_MANAGER *))Addr::ITEM_MANAGER::ConvSpecialDropItemFile)(this);
}

bool ITEM_MANAGER::ReadItemVnumMaskTable(const char * a0) {
	return ((bool(*)(ITEM_MANAGER *, const char *))Addr::ITEM_MANAGER::ReadItemVnumMaskTable)(this, a0);
}

DWORD ITEM_MANAGER::GetNewID() {
	return ((DWORD(*)(ITEM_MANAGER *))Addr::ITEM_MANAGER::GetNewID)(this);
}

const CSpecialAttrGroup * ITEM_MANAGER::GetSpecialAttrGroup(DWORD a0) {
	return ((const CSpecialAttrGroup *(*)(ITEM_MANAGER *, DWORD))Addr::ITEM_MANAGER::GetSpecialAttrGroup)(this, a0);
}

void ITEM_MANAGER::DestroyItem(LPITEM a0) {
	((void(*)(ITEM_MANAGER *, LPITEM))Addr::ITEM_MANAGER::DestroyItem)(this, a0);
}

void ITEM_MANAGER::DelayedSave(LPITEM a0) {
	((void(*)(ITEM_MANAGER *, LPITEM))Addr::ITEM_MANAGER::DelayedSave)(this, a0);
}

void ITEM_MANAGER::GracefulShutdown() {
	((void(*)(ITEM_MANAGER *))Addr::ITEM_MANAGER::GracefulShutdown)(this);
}

bool ITEM_MANAGER::ReadEtcDropItemFile(const char * a0) {
	return ((bool(*)(ITEM_MANAGER *, const char *))Addr::ITEM_MANAGER::ReadEtcDropItemFile)(this, a0);
}

bool ITEM_MANAGER::SetMaxSpareItemID(TItemIDRangeTable a0) {
	return ((bool(*)(ITEM_MANAGER *, TItemIDRangeTable))Addr::ITEM_MANAGER::SetMaxSpareItemID)(this, a0);
}

void ITEM_MANAGER::RemoveItem(LPITEM a0, const char * a1) {
	((void(*)(ITEM_MANAGER *, LPITEM, const char *))Addr::ITEM_MANAGER::RemoveItem)(this, a0, a1);
}

TItemTable * ITEM_MANAGER::GetTable(DWORD vnum) {
	return ((TItemTable *(*)(ITEM_MANAGER *, DWORD))Addr::ITEM_MANAGER::GetTable)(this, vnum);
}

ITEM_MANAGER::ITEM_MANAGER() {
	((void(*)(ITEM_MANAGER *))Addr::ITEM_MANAGER::ITEM_MANAGER)(this);
}

LPITEM ITEM_MANAGER::Find(DWORD a0) {
	return ((LPITEM(*)(ITEM_MANAGER *, DWORD))Addr::ITEM_MANAGER::Find)(this, a0);
}

}
