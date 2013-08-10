#include "CInputMain.hpp"
#include "../addr.hpp"
namespace libm2{
BYTE CInputMain::GetType() {
	return ((BYTE(*)(CInputMain *))Addr::CInputMain::GetType)(this);
}

void CInputMain::PartyInvite(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::PartyInvite)(this, a0, a1);
}

void CInputMain::ScriptButton(LPCHARACTER a0, const void * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const void *))Addr::CInputMain::ScriptButton)(this, a0, a1);
}

void CInputMain::QuickslotSwap(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::QuickslotSwap)(this, a0, a1);
}

void CInputMain::ScriptAnswer(LPCHARACTER a0, const void * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const void *))Addr::CInputMain::ScriptAnswer)(this, a0, a1);
}

void CInputMain::Attack(LPCHARACTER a0, const BYTE a1, const char * a2) {
	((void(*)(CInputMain *, LPCHARACTER, const BYTE, const char *))Addr::CInputMain::Attack)(this, a0, a1, a2);
}

int CInputMain::MyShop(LPCHARACTER a0, const char * a1, size_t a2) {
	return ((int(*)(CInputMain *, LPCHARACTER, const char *, size_t))Addr::CInputMain::MyShop)(this, a0, a1, a2);
}

void CInputMain::PartyRemove(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::PartyRemove)(this, a0, a1);
}

void CInputMain::SafeboxCheckin(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::SafeboxCheckin)(this, a0, a1);
}

int CInputMain::Analyze(LPDESC a0, BYTE a1, const char * a2) {
	return ((int(*)(CInputMain *, LPDESC, BYTE, const char *))Addr::CInputMain::Analyze)(this, a0, a1, a2);
}

void CInputMain::PartyInviteAnswer(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::PartyInviteAnswer)(this, a0, a1);
}

void CInputMain::QuestInputString(LPCHARACTER a0, const void * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const void *))Addr::CInputMain::QuestInputString)(this, a0, a1);
}

void CInputMain::ItemUse(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::ItemUse)(this, a0, a1);
}

void CInputMain::PartySetState(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::PartySetState)(this, a0, a1);
}

void CInputMain::Exchange(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::Exchange)(this, a0, a1);
}

void CInputMain::UseSkill(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::UseSkill)(this, a0, a1);
}

void CInputMain::Warp(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::Warp)(this, a0, a1);
}

int CInputMain::Messenger(LPCHARACTER a0, const char * a1, size_t a2) {
	return ((int(*)(CInputMain *, LPCHARACTER, const char *, size_t))Addr::CInputMain::Messenger)(this, a0, a1, a2);
}

void CInputMain::ItemGive(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::ItemGive)(this, a0, a1);
}

void CInputMain::ScriptSelectItem(LPCHARACTER a0, const void * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const void *))Addr::CInputMain::ScriptSelectItem)(this, a0, a1);
}

void CInputMain::AnswerMakeGuild(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::AnswerMakeGuild)(this, a0, a1);
}

void CInputMain::Refine(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::Refine)(this, a0, a1);
}

void CInputMain::PartyUseSkill(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::PartyUseSkill)(this, a0, a1);
}

int CInputMain::Guild(LPCHARACTER a0, const char * a1, size_t a2) {
	return ((int(*)(CInputMain *, LPCHARACTER, const char *, size_t))Addr::CInputMain::Guild)(this, a0, a1, a2);
}

void CInputMain::Target(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::Target)(this, a0, a1);
}

void CInputMain::ItemDrop(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::ItemDrop)(this, a0, a1);
}

void CInputMain::PartyParameter(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::PartyParameter)(this, a0, a1);
}

void CInputMain::ItemPickup(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::ItemPickup)(this, a0, a1);
}

void CInputMain::ItemToItem(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::ItemToItem)(this, a0, a1);
}

void CInputMain::QuickslotDelete(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::QuickslotDelete)(this, a0, a1);
}

void CInputMain::Position(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::Position)(this, a0, a1);
}

void CInputMain::FlyTarget(LPCHARACTER a0, const char * a1, BYTE a2) {
	((void(*)(CInputMain *, LPCHARACTER, const char *, BYTE))Addr::CInputMain::FlyTarget)(this, a0, a1, a2);
}

int CInputMain::Shop(LPCHARACTER a0, const char * a1, size_t a2) {
	return ((int(*)(CInputMain *, LPCHARACTER, const char *, size_t))Addr::CInputMain::Shop)(this, a0, a1, a2);
}

void CInputMain::SafeboxCheckout(LPCHARACTER a0, const char * a1, bool a2) {
	((void(*)(CInputMain *, LPCHARACTER, const char *, bool))Addr::CInputMain::SafeboxCheckout)(this, a0, a1, a2);
}

void CInputMain::QuickslotAdd(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::QuickslotAdd)(this, a0, a1);
}

int CInputMain::Whisper(LPCHARACTER a0, const char * a1, size_t a2) {
	return ((int(*)(CInputMain *, LPCHARACTER, const char *, size_t))Addr::CInputMain::Whisper)(this, a0, a1, a2);
}

void CInputMain::Move(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::Move)(this, a0, a1);
}

void CInputMain::SafeboxItemMove(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::SafeboxItemMove)(this, a0, a1);
}

int CInputMain::Chat(LPCHARACTER a0, const char * a1, size_t a2) {
	return ((int(*)(CInputMain *, LPCHARACTER, const char *, size_t))Addr::CInputMain::Chat)(this, a0, a1, a2);
}

void CInputMain::QuestConfirm(LPCHARACTER a0, const void * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const void *))Addr::CInputMain::QuestConfirm)(this, a0, a1);
}

void CInputMain::Fishing(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::Fishing)(this, a0, a1);
}

void CInputMain::OnClick(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::OnClick)(this, a0, a1);
}

void CInputMain::Hack(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::Hack)(this, a0, a1);
}

int CInputMain::SyncPosition(LPCHARACTER a0, const char * a1, size_t a2) {
	return ((int(*)(CInputMain *, LPCHARACTER, const char *, size_t))Addr::CInputMain::SyncPosition)(this, a0, a1, a2);
}

void CInputMain::ItemMove(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::ItemMove)(this, a0, a1);
}

void CInputMain::ItemDrop2(LPCHARACTER a0, const char * a1) {
	((void(*)(CInputMain *, LPCHARACTER, const char *))Addr::CInputMain::ItemDrop2)(this, a0, a1);
}
}
