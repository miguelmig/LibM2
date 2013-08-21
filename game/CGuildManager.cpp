#include "CGuildManager.hpp"
namespace libm2{
bool CGuildManager::EndWar(DWORD a0, DWORD a1) {
	return ((bool(*)(CGuildManager *, DWORD, DWORD))Addr::CGuildManager::EndWar)(this, a0, a1);
}

void CGuildManager::RefuseWar(DWORD a0, DWORD a1) {
	((void(*)(CGuildManager *, DWORD, DWORD))Addr::CGuildManager::RefuseWar)(this, a0, a1);
}

void CGuildManager::DeclareWar(DWORD a0, DWORD a1, BYTE a2) {
	((void(*)(CGuildManager *, DWORD, DWORD, BYTE))Addr::CGuildManager::DeclareWar)(this, a0, a1, a2);
}

void CGuildManager::CancelWar(DWORD a0, DWORD a1) {
	((void(*)(CGuildManager *, DWORD, DWORD))Addr::CGuildManager::CancelWar)(this, a0, a1);
}

void CGuildManager::ReserveWarDelete(DWORD a0) {
	((void(*)(CGuildManager *, DWORD))Addr::CGuildManager::ReserveWarDelete)(this, a0);
}

bool CGuildManager::IsBet(DWORD a0, const char * a1) {
	return ((bool(*)(CGuildManager *, DWORD, const char *))Addr::CGuildManager::IsBet)(this, a0, a1);
}

int CGuildManager::GetRank(CGuild * a0) {
	return ((int(*)(CGuildManager *, CGuild *))Addr::CGuildManager::GetRank)(this, a0);
}

int CGuildManager::GetWithdrawDelay() {
	return ((int(*)(CGuildManager *))Addr::CGuildManager::GetWithdrawDelay)(this);
}

void CGuildManager::ShowGuildWarList(LPCHARACTER a0) {
	((void(*)(CGuildManager *, LPCHARACTER))Addr::CGuildManager::ShowGuildWarList)(this, a0);
}

void CGuildManager::WaitStartWar(DWORD a0, DWORD a1) {
	((void(*)(CGuildManager *, DWORD, DWORD))Addr::CGuildManager::WaitStartWar)(this, a0, a1);
}

void CGuildManager::StopAllGuildWar() {
	((void(*)(CGuildManager *))Addr::CGuildManager::StopAllGuildWar)(this);
}

void CGuildManager::GetHighRankString(DWORD a0, char * a1, size_t a2) {
	((void(*)(CGuildManager *, DWORD, char *, size_t))Addr::CGuildManager::GetHighRankString)(this, a0, a1, a2);
}

void CGuildManager::DisbandGuild(DWORD a0) {
	((void(*)(CGuildManager *, DWORD))Addr::CGuildManager::DisbandGuild)(this, a0);
}

CGuild * CGuildManager::FindGuild(DWORD a0) {
	return ((CGuild *(*)(CGuildManager *, DWORD))Addr::CGuildManager::FindGuild)(this, a0);
}

CGuildManager::CGuildManager() {
	((void(*)(CGuildManager *))Addr::CGuildManager::CGuildManager)(this);
}

void CGuildManager::LoginMember(LPCHARACTER a0) {
	((void(*)(CGuildManager *, LPCHARACTER))Addr::CGuildManager::LoginMember)(this, a0);
}

void CGuildManager::Link(DWORD a0, CGuild * a1) {
	((void(*)(CGuildManager *, DWORD, CGuild *))Addr::CGuildManager::Link)(this, a0, a1);
}

void CGuildManager::ChangeMaster(DWORD a0) {
	((void(*)(CGuildManager *, DWORD))Addr::CGuildManager::ChangeMaster)(this, a0);
}

void CGuildManager::Initialize() {
	((void(*)(CGuildManager *))Addr::CGuildManager::Initialize)(this);
}

void CGuildManager::P2PLoginMember(DWORD a0) {
	((void(*)(CGuildManager *, DWORD))Addr::CGuildManager::P2PLoginMember)(this, a0);
}

void CGuildManager::Unlink(DWORD a0) {
	((void(*)(CGuildManager *, DWORD))Addr::CGuildManager::Unlink)(this, a0);
}

void CGuildManager::RequestWarOver(DWORD a0, DWORD a1, DWORD a2, long a3) {
	((void(*)(CGuildManager *, DWORD, DWORD, DWORD, long))Addr::CGuildManager::RequestWarOver)(this, a0, a1, a2, a3);
}

void CGuildManager::SkillRecharge() {
	((void(*)(CGuildManager *))Addr::CGuildManager::SkillRecharge)(this);
}

int CGuildManager::GetDisbandDelay() {
	return ((int(*)(CGuildManager *))Addr::CGuildManager::GetDisbandDelay)(this);
}

void CGuildManager::ReserveWarBet($_63 * a0) {
	((void(*)(CGuildManager *, $_63 *))Addr::CGuildManager::ReserveWarBet)(this, a0);
}

void CGuildManager::ReserveWar(DWORD a0, DWORD a1, BYTE a2) {
	((void(*)(CGuildManager *, DWORD, DWORD, BYTE))Addr::CGuildManager::ReserveWar)(this, a0, a1, a2);
}

void CGuildManager::WarOver(DWORD a0, DWORD a1, bool a2) {
	((void(*)(CGuildManager *, DWORD, DWORD, bool))Addr::CGuildManager::WarOver)(this, a0, a1, a2);
}

CGuild * CGuildManager::TouchGuild(DWORD a0) {
	return ((CGuild *(*)(CGuildManager *, DWORD))Addr::CGuildManager::TouchGuild)(this, a0);
}

void CGuildManager::P2PLogoutMember(DWORD a0) {
	((void(*)(CGuildManager *, DWORD))Addr::CGuildManager::P2PLogoutMember)(this, a0);
}

void CGuildManager::LoadGuild(DWORD a0) {
	((void(*)(CGuildManager *, DWORD))Addr::CGuildManager::LoadGuild)(this, a0);
}

CGuildManager::~CGuildManager() {
	((void(*)(CGuildManager *))Addr::CGuildManager::__CGuildManager)(this);
}

void CGuildManager::StartWar(DWORD a0, DWORD a1) {
	((void(*)(CGuildManager *, DWORD, DWORD))Addr::CGuildManager::StartWar)(this, a0, a1);
}

CGuild * CGuildManager::FindGuildByName(std::string a0) {
	return ((CGuild *(*)(CGuildManager *, std::string))Addr::CGuildManager::FindGuildByName)(this, a0);
}

std::vector<CGuildWarReserveForGame*, std::allocator<CGuildWarReserveForGame*> > & CGuildManager::GetReserveWarRef() {
	return ((std::vector<CGuildWarReserveForGame*, std::allocator<CGuildWarReserveForGame*> > &(*)(CGuildManager *))Addr::CGuildManager::GetReserveWarRef)(this);
}

void CGuildManager::GetAroundRankString(DWORD a0, char * a1, size_t a2) {
	((void(*)(CGuildManager *, DWORD, char *, size_t))Addr::CGuildManager::GetAroundRankString)(this, a0, a1, a2);
}

void CGuildManager::SendGuildWar(LPCHARACTER a0) {
	((void(*)(CGuildManager *, LPCHARACTER))Addr::CGuildManager::SendGuildWar)(this, a0);
}

void CGuildManager::RequestEndWar(DWORD a0, DWORD a1) {
	((void(*)(CGuildManager *, DWORD, DWORD))Addr::CGuildManager::RequestEndWar)(this, a0, a1);
}

void CGuildManager::Kill(LPCHARACTER a0, LPCHARACTER a1) {
	((void(*)(CGuildManager *, LPCHARACTER, LPCHARACTER))Addr::CGuildManager::Kill)(this, a0, a1);
}

DWORD CGuildManager::CreateGuild(TGuildCreateParameter & a0) {
	return ((DWORD(*)(CGuildManager *, TGuildCreateParameter &))Addr::CGuildManager::CreateGuild)(this, a0);
}

CGuild * CGuildManager::GetLinkedGuild(DWORD a0) {
	return ((CGuild *(*)(CGuildManager *, DWORD))Addr::CGuildManager::GetLinkedGuild)(this, a0);
}

void CGuildManager::RequestCancelWar(DWORD a0, DWORD a1) {
	((void(*)(CGuildManager *, DWORD, DWORD))Addr::CGuildManager::RequestCancelWar)(this, a0, a1);
}

void CGuildManager::ReserveWarAdd(TGuildWarReserve * a0) {
	((void(*)(CGuildManager *, TGuildWarReserve *))Addr::CGuildManager::ReserveWarAdd)(this, a0);
}

}
